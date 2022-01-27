/*
** Automatically generated from `prog_io_typeclass.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module parse_tree.prog_io_typeclass. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_typeclass__init
ENDINIT
*/

#include "parse_tree.prog_io_typeclass.mih"


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 532 "prog_io_typeclass.m"
struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s {
#line 535 "prog_io_typeclass.m"
  MR_bool parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded;
#line 638 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84;
#line 640 "prog_io_typeclass.m"
  jmp_buf parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0;
#line 640 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86;
#line 640 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86;
#line 532 "prog_io_typeclass.m"
};


#line 118 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 121 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 124 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 127 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

#line 130 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 133 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 136 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 139 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 142 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 145 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1];

#line 148 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0;

#line 151 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1];

#line 154 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1;

#line 157 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 160 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2];

#line 163 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2;

#line 166 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1];

#line 169 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3;

#line 172 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1];

#line 175 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1];

#line 178 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1];

#line 181 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1];

#line 184 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4];

#line 187 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4];

#line 190 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4];

#line 193 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;

#line 196 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 199 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 202 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 205 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 208 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 210 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 213 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 216 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 218 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 220 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 223 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 226 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 228 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 231 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 234 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 236 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 238 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 241 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 244 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 246 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 249 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 252 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 254 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 256 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 831 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 831 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 400 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5);

#line 252 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 252 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 252 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 252 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 437 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 437 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 795 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__795__1_2_f_0(
#line 795 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 795 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_61);

#line 792 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__792__1_2_p_0(
#line 792 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 792 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_56);

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 342 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18);

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__308__1_2_p_0(
#line 308 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_55,
#line 308 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_56);

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_2_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_160);

#line 195 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__195__1_2_f_0(
#line 195 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 195 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_157);

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152);

#line 154 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__154__1_2_p_0(
#line 154 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 154 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_150);

#line 521 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 521 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 521 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 504 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 504 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 504 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 954 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 954 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 954 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 954 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4);

#line 831 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 831 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 795 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 795 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 795 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 792 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 792 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 792 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 778 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 778 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 778 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 778 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 714 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 714 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 714 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 437 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0_1(
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 437 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 672 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Constraints_10,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 672 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 672 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_14);

#line 659 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 659 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 659 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 609 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 609 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 609 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4);

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 532 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 532 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 482 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 482 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 482 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 482 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 453 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 453 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 453 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3);

#line 357 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 357 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 308 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 297 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 297 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 297 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12);

#line 279 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 279 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 279 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 279 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 248 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 248 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1);

#line 246 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 246 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 246 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 244 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 244 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3);

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 195 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 195 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 195 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 154 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 154 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 154 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 127 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 127 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 127 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 308 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 113 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 113 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 113 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 342 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 87 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 87 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 87 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 819 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 819 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 819 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 819 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[98][2];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[11][1];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[4][5];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_6[1][6];




static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[98][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and ground types"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on class declarations"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected list of class methods."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are allowed in class interfaces."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only pred, func and mode declarations"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[22])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10])))
  },
  /* row 53 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[2])),
    ((MR_Box) (parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[11][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[50])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[30])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[28])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[34])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[38])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[44])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[46])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[16])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[20])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[24])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1437 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1445 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1453 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 1461 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 1469 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1477 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1485 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1493 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1501 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1509 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1514 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0 = {
  (MR_String) "simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0,
  NULL,
  NULL,
  NULL
};

#line 1529 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1534 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1 = {
  (MR_String) "non_simple",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1,
  NULL,
  NULL,
  NULL
};

#line 1549 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1557 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1563 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2 = {
  (MR_String) "inst_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2,
  NULL,
  NULL,
  NULL
};

#line 1578 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

#line 1583 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3 = {
  (MR_String) "fundep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3,
  NULL,
  NULL,
  NULL
};

#line 1598 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1603 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1
};

#line 1608 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3
};

#line 1613 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2
};

#line 1618 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3
  }
};

#line 1642 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1650 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1658 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "arbitrary_constraint",
  {     parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0 },
  {     parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0
};

#line 1675 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  }
};

#line 1683 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "arbitrary_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1700 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1708 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1717 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1726 "parse_tree.prog_io_typeclass.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_maybe_class_and_inst_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001)),
  (MR_String) "parse_tree.prog_io_typeclass",
  (MR_String) "maybe_class_and_inst_constraints",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1743 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 1746 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1748 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1750 "parse_tree.prog_io_typeclass.c"
{
#line 1752 "parse_tree.prog_io_typeclass.c"
  {
#line 1754 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1757 "parse_tree.prog_io_typeclass.c"
    {
#line 1759 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1762 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1764 "parse_tree.prog_io_typeclass.c"
  }
#line 1766 "parse_tree.prog_io_typeclass.c"
}

#line 1769 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 1772 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1774 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1776 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1778 "parse_tree.prog_io_typeclass.c"
{
#line 1780 "parse_tree.prog_io_typeclass.c"
  {
#line 1782 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1785 "parse_tree.prog_io_typeclass.c"
    {
#line 1787 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1790 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1792 "parse_tree.prog_io_typeclass.c"
  }
#line 1794 "parse_tree.prog_io_typeclass.c"
}

#line 1797 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 1800 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1802 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1804 "parse_tree.prog_io_typeclass.c"
{
#line 1806 "parse_tree.prog_io_typeclass.c"
  {
#line 1808 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1811 "parse_tree.prog_io_typeclass.c"
    {
#line 1813 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1816 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1818 "parse_tree.prog_io_typeclass.c"
  }
#line 1820 "parse_tree.prog_io_typeclass.c"
}

#line 1823 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 1826 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1828 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1830 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1832 "parse_tree.prog_io_typeclass.c"
{
#line 1834 "parse_tree.prog_io_typeclass.c"
  {
#line 1836 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1839 "parse_tree.prog_io_typeclass.c"
    {
#line 1841 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1844 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1846 "parse_tree.prog_io_typeclass.c"
  }
#line 1848 "parse_tree.prog_io_typeclass.c"
}

#line 1851 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 1854 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1856 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1858 "parse_tree.prog_io_typeclass.c"
{
#line 1860 "parse_tree.prog_io_typeclass.c"
  {
#line 1862 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1865 "parse_tree.prog_io_typeclass.c"
    {
#line 1867 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1870 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1872 "parse_tree.prog_io_typeclass.c"
  }
#line 1874 "parse_tree.prog_io_typeclass.c"
}

#line 1877 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 1880 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1882 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1884 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1886 "parse_tree.prog_io_typeclass.c"
{
#line 1888 "parse_tree.prog_io_typeclass.c"
  {
#line 1890 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1893 "parse_tree.prog_io_typeclass.c"
    {
#line 1895 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1898 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1900 "parse_tree.prog_io_typeclass.c"
  }
#line 1902 "parse_tree.prog_io_typeclass.c"
}

#line 831 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 831 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 831 "prog_io_typeclass.m"
{
#line 907 "prog_io_typeclass.m"
  {
#line 907 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 907 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethodTerm_9;
#line 907 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethodTerm_10;
#line 907 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TermContext_11;
#line 837 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 837 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_45_45;
#line 837 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 837 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 837 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_48_48;

#line 837 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 837 "prog_io_typeclass.m"
      {
#line 837 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 0)));
#line 837 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 1)));
#line 837 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 2)));
#line 837 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 837 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 837 "prog_io_typeclass.m"
          {
#line 837 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 837 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_45_45, (MR_String) "is") == 0);
#line 837 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 837 "prog_io_typeclass.m"
              {
#line 838 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 838 "prog_io_typeclass.m"
                  {
#line 838 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 0)));
#line 838 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 1)));
#line 838 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 838 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 838 "prog_io_typeclass.m"
                      {
#line 838 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 0)));
#line 838 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 1)));
#line 838 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "prog_io_typeclass.m"
                      }
#line 838 "prog_io_typeclass.m"
                  }
#line 837 "prog_io_typeclass.m"
              }
#line 837 "prog_io_typeclass.m"
          }
#line 837 "prog_io_typeclass.m"
      }
#line 907 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 869 "prog_io_typeclass.m"
      {
#line 869 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__PredNameTerm_14;
#line 869 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArityTerm_15;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SlashTerm_12;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 844 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_50_50;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_53_53;
#line 844 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_54_54;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 844 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 844 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 844 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
          {
#line 844 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 844 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 844 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 844 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 844 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
              {
#line 844 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, (MR_Integer) 0)));
#line 844 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_50_50, (MR_String) "pred") == 0);
#line 844 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
                  {
#line 844 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 844 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
                      {
#line 844 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 0)));
#line 844 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 1)));
#line 844 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 844 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
                          {
#line 845 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                              {
#line 845 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 1)));
#line 845 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 2)));
#line 845 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_53_53)) == (MR_mktag((MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                                  {
#line 845 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_53_53, (MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_54_54, (MR_String) "/") == 0);
#line 844 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 844 "prog_io_typeclass.m"
                                      {
#line 846 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 846 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 846 "prog_io_typeclass.m"
                                          {
#line 846 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 1)));
#line 846 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 846 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 846 "prog_io_typeclass.m"
                                              {
#line 846 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 1)));
#line 846 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "prog_io_typeclass.m"
                                              }
#line 846 "prog_io_typeclass.m"
                                          }
#line 844 "prog_io_typeclass.m"
                                      }
#line 845 "prog_io_typeclass.m"
                                  }
#line 845 "prog_io_typeclass.m"
                              }
#line 844 "prog_io_typeclass.m"
                          }
#line 844 "prog_io_typeclass.m"
                      }
#line 844 "prog_io_typeclass.m"
                  }
#line 844 "prog_io_typeclass.m"
              }
#line 844 "prog_io_typeclass.m"
          }
#line 869 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 858 "prog_io_typeclass.m"
          {
#line 858 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__PredName_17;
#line 858 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__ArityInt_18;
#line 858 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_20;
#line 849 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 849 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 849 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 850 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 849 "prog_io_typeclass.m"
            {
#line 849 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__PredNameTerm_14, &parse_tree__prog_io_typeclass__PredName_17);
            }
#line 849 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
              {
#line 850 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 850 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
                  {
#line 850 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 0)));
#line 850 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 1)));
#line 850 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 2)));
#line 850 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                      {
#line 850 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 850 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
                          {
#line 850 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__ArityInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, (MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                            {
#line 851 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_20);
                            }
#line 850 "prog_io_typeclass.m"
                          }
#line 849 "prog_io_typeclass.m"
                      }
#line 850 "prog_io_typeclass.m"
                  }
#line 849 "prog_io_typeclass.m"
              }
#line 858 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 856 "prog_io_typeclass.m"
              {
#line 856 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_21;
#line 856 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;

#line 855 "prog_io_typeclass.m"
                {
#line 855 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_20));
#line 855 "prog_io_typeclass.m"
                }
#line 854 "prog_io_typeclass.m"
                {
#line 854 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 854 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 854 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PredName_17));
#line 854 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 854 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_18));
#line 854 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 854 "prog_io_typeclass.m"
                }
#line 857 "prog_io_typeclass.m"
                {
#line 857 "prog_io_typeclass.m"
                  MR_Word base;
#line 857 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 857 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 857 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_21));
#line 857 "prog_io_typeclass.m"
                }
#line 856 "prog_io_typeclass.m"
              }
#line 858 "prog_io_typeclass.m"
            else
#line 859 "prog_io_typeclass.m"
              {
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_261_261 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 859 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_22;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_23;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_24;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_84_84;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_85_85;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_86_86;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_87_87;
#line 859 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_90_90;

#line 859 "prog_io_typeclass.m"
                {
#line 859 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 863 "prog_io_typeclass.m"
                {
#line 863 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_22));
#line 863 "prog_io_typeclass.m"
                }
#line 863 "prog_io_typeclass.m"
                {
#line 863 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 863 "prog_io_typeclass.m"
                }
#line 863 "prog_io_typeclass.m"
                {
#line 863 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 863 "prog_io_typeclass.m"
                }
#line 862 "prog_io_typeclass.m"
                {
#line 862 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 862 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 862 "prog_io_typeclass.m"
                }
#line 861 "prog_io_typeclass.m"
                {
#line 861 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 861 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 861 "prog_io_typeclass.m"
                }
#line 860 "prog_io_typeclass.m"
                {
#line 860 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 860 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 860 "prog_io_typeclass.m"
                }
#line 865 "prog_io_typeclass.m"
                {
#line 865 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_85_85 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_23));
#line 866 "prog_io_typeclass.m"
                }
#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_87_87));
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "prog_io_typeclass.m"
                }
#line 865 "prog_io_typeclass.m"
                {
#line 865 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_85_85));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_86_86));
#line 865 "prog_io_typeclass.m"
                }
#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "prog_io_typeclass.m"
                }
#line 864 "prog_io_typeclass.m"
                {
#line 864 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_83_83));
#line 864 "prog_io_typeclass.m"
                }
#line 867 "prog_io_typeclass.m"
                {
#line 867 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_24));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "prog_io_typeclass.m"
                }
#line 867 "prog_io_typeclass.m"
                {
#line 867 "prog_io_typeclass.m"
                  MR_Word base;
#line 867 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 867 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_90_90));
#line 867 "prog_io_typeclass.m"
                }
#line 859 "prog_io_typeclass.m"
              }
#line 858 "prog_io_typeclass.m"
          }
#line 869 "prog_io_typeclass.m"
        else
#line 895 "prog_io_typeclass.m"
          {
#line 895 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FuncNameTerm_26;
#line 895 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ArityTerm_228;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_92_92;
#line 870 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_93_93;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_95_95;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_96_96;
#line 870 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_97_97;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_98_98;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_99_99;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_100_100;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SlashTerm_213;
#line 870 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 870 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
              {
#line 870 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 870 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 870 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 870 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_92_92)) == (MR_mktag((MR_Integer) 0)));
#line 870 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
                  {
#line 870 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_92_92, (MR_Integer) 0)));
#line 870 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_93_93, (MR_String) "func") == 0);
#line 870 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
                      {
#line 870 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 870 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
                          {
#line 870 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__SlashTerm_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 0)));
#line 870 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 1)));
#line 870 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
                              {
#line 871 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_213)) == (MR_mktag((MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                                  {
#line 871 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 1)));
#line 871 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 2)));
#line 871 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                                      {
#line 871 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_96_96, (MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_97_97, (MR_String) "/") == 0);
#line 870 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
                                          {
#line 872 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 872 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 872 "prog_io_typeclass.m"
                                              {
#line 872 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__FuncNameTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 1)));
#line 872 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 872 "prog_io_typeclass.m"
                                                if (parse_tree__prog_io_typeclass__succeeded)
#line 872 "prog_io_typeclass.m"
                                                  {
#line 872 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__ArityTerm_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 1)));
#line 872 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "prog_io_typeclass.m"
                                                  }
#line 872 "prog_io_typeclass.m"
                                              }
#line 870 "prog_io_typeclass.m"
                                          }
#line 871 "prog_io_typeclass.m"
                                      }
#line 871 "prog_io_typeclass.m"
                                  }
#line 870 "prog_io_typeclass.m"
                              }
#line 870 "prog_io_typeclass.m"
                          }
#line 870 "prog_io_typeclass.m"
                      }
#line 870 "prog_io_typeclass.m"
                  }
#line 870 "prog_io_typeclass.m"
              }
#line 895 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 884 "prog_io_typeclass.m"
              {
#line 884 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FuncName_28;
#line 884 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_218;
#line 884 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_219;
#line 875 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 875 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 875 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_102_102;
#line 876 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 875 "prog_io_typeclass.m"
                {
#line 875 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__FuncNameTerm_26, &parse_tree__prog_io_typeclass__FuncName_28);
                }
#line 875 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 875 "prog_io_typeclass.m"
                  {
#line 876 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_228)) == (MR_mktag((MR_Integer) 0)));
#line 876 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 876 "prog_io_typeclass.m"
                      {
#line 876 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 0)));
#line 876 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 1)));
#line 876 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 2)));
#line 876 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 875 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 875 "prog_io_typeclass.m"
                          {
#line 876 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 876 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 876 "prog_io_typeclass.m"
                              {
#line 876 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ArityInt_218 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_101_101, (MR_Integer) 0)));
#line 877 "prog_io_typeclass.m"
                                {
#line 877 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_219);
                                }
#line 876 "prog_io_typeclass.m"
                              }
#line 875 "prog_io_typeclass.m"
                          }
#line 876 "prog_io_typeclass.m"
                      }
#line 875 "prog_io_typeclass.m"
                  }
#line 884 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 882 "prog_io_typeclass.m"
                  {
#line 882 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 882 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceMethod_214;

#line 881 "prog_io_typeclass.m"
                    {
#line 881 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_219));
#line 881 "prog_io_typeclass.m"
                    }
#line 880 "prog_io_typeclass.m"
                    {
#line 880 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__InstanceMethod_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 880 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 0) = ((MR_Box) ((MR_Integer) 1));
#line 880 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FuncName_28));
#line 880 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_104_104));
#line 880 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_218));
#line 880 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 880 "prog_io_typeclass.m"
                    }
#line 883 "prog_io_typeclass.m"
                    {
#line 883 "prog_io_typeclass.m"
                      MR_Word base;
#line 883 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 883 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 883 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_214));
#line 883 "prog_io_typeclass.m"
                    }
#line 882 "prog_io_typeclass.m"
                  }
#line 884 "prog_io_typeclass.m"
                else
#line 885 "prog_io_typeclass.m"
                  {
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_263_263 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_107_107;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_117_117;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_126_126;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_127_127;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_128_128;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_129_129;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_130_130;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_133_133;
#line 885 "prog_io_typeclass.m"
                    MR_String parse_tree__prog_io_typeclass__MethodTermStr_215;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Pieces_216;
#line 885 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_217;

#line 885 "prog_io_typeclass.m"
                    {
#line 885 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MethodTermStr_215 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 889 "prog_io_typeclass.m"
                    {
#line 889 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_215));
#line 889 "prog_io_typeclass.m"
                    }
#line 889 "prog_io_typeclass.m"
                    {
#line 889 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_117_117));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 889 "prog_io_typeclass.m"
                    }
#line 889 "prog_io_typeclass.m"
                    {
#line 889 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 889 "prog_io_typeclass.m"
                    }
#line 888 "prog_io_typeclass.m"
                    {
#line 888 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 888 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 888 "prog_io_typeclass.m"
                    }
#line 887 "prog_io_typeclass.m"
                    {
#line 887 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[93])));
#line 887 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 887 "prog_io_typeclass.m"
                    }
#line 886 "prog_io_typeclass.m"
                    {
#line 886 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 886 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_107_107));
#line 886 "prog_io_typeclass.m"
                    }
#line 891 "prog_io_typeclass.m"
                    {
#line 891 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_128_128 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_130_130, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_216));
#line 892 "prog_io_typeclass.m"
                    }
#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "prog_io_typeclass.m"
                    }
#line 891 "prog_io_typeclass.m"
                    {
#line 891 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 891 "prog_io_typeclass.m"
                    }
#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "prog_io_typeclass.m"
                    }
#line 890 "prog_io_typeclass.m"
                    {
#line 890 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 890 "prog_io_typeclass.m"
                    }
#line 893 "prog_io_typeclass.m"
                    {
#line 893 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_217));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_typeclass.m"
                    }
#line 893 "prog_io_typeclass.m"
                    {
#line 893 "prog_io_typeclass.m"
                      MR_Word base;
#line 893 "prog_io_typeclass.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 893 "prog_io_typeclass.m"
                    }
#line 885 "prog_io_typeclass.m"
                  }
#line 884 "prog_io_typeclass.m"
              }
#line 895 "prog_io_typeclass.m"
            else
#line 896 "prog_io_typeclass.m"
              {
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_264_264 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_137_137;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_140_140;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_143_143;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_146_146;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_149_149;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_152_152;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_153_153;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_162_162;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_163_163;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_164_164;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_165_165;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_166_166;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_169_169;
#line 896 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_224;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_225;
#line 896 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_226;

#line 896 "prog_io_typeclass.m"
                {
#line 896 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_224 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 902 "prog_io_typeclass.m"
                {
#line 902 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_224));
#line 902 "prog_io_typeclass.m"
                }
#line 902 "prog_io_typeclass.m"
                {
#line 902 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_153_153));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 902 "prog_io_typeclass.m"
                }
#line 902 "prog_io_typeclass.m"
                {
#line 902 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_152_152));
#line 902 "prog_io_typeclass.m"
                }
#line 901 "prog_io_typeclass.m"
                {
#line 901 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 901 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_149_149));
#line 901 "prog_io_typeclass.m"
                }
#line 900 "prog_io_typeclass.m"
                {
#line 900 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[96])));
#line 900 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_146_146));
#line 900 "prog_io_typeclass.m"
                }
#line 899 "prog_io_typeclass.m"
                {
#line 899 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[95])));
#line 899 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_143_143));
#line 899 "prog_io_typeclass.m"
                }
#line 898 "prog_io_typeclass.m"
                {
#line 898 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[94])));
#line 898 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_140_140));
#line 898 "prog_io_typeclass.m"
                }
#line 897 "prog_io_typeclass.m"
                {
#line 897 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 897 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_137_137));
#line 897 "prog_io_typeclass.m"
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_164_164 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_166_166, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_225));
#line 904 "prog_io_typeclass.m"
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_166_166));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_typeclass.m"
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_164_164));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_165_165));
#line 904 "prog_io_typeclass.m"
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_163_163));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_typeclass.m"
                }
#line 903 "prog_io_typeclass.m"
                {
#line 903 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_162_162));
#line 903 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_226));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  MR_Word base;
#line 905 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 905 "prog_io_typeclass.m"
                }
#line 896 "prog_io_typeclass.m"
              }
#line 895 "prog_io_typeclass.m"
          }
#line 869 "prog_io_typeclass.m"
      }
#line 907 "prog_io_typeclass.m"
    else
#line 917 "prog_io_typeclass.m"
      {
#line 917 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeIOM_31;

#line 918 "prog_io_typeclass.m"
        {
#line 918 "prog_io_typeclass.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_4[10], parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) -1, &parse_tree__prog_io_typeclass__MaybeIOM_31);
        }
#line 923 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31)) == (MR_mktag((MR_Integer) 0))))
#line 922 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = (MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31;
#line 923 "prog_io_typeclass.m"
        else
#line 924 "prog_io_typeclass.m"
          {
#line 924 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__IOM_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeIOM_31, (MR_Integer) 0)));
#line 936 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemClause_35;
#line 926 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Item_34;

#line 926 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__IOM_33)) == (MR_mktag((MR_Integer) 0)));
#line 926 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 926 "prog_io_typeclass.m"
              {
#line 926 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Item_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__IOM_33, (MR_Integer) 0)));
#line 927 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_34)) == (MR_mktag((MR_Integer) 0)));
#line 927 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 927 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemClause_35 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Item_34), (MR_Integer) 0);
#line 926 "prog_io_typeclass.m"
              }
#line 936 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 930 "prog_io_typeclass.m"
              {
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassMethodName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 0)));
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 1)));
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__HeadArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 2)));
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 6)));
#line 930 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_173_173;
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 930 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_235;
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_236;
#line 929 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___Origin_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 3)));
#line 929 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___VarSet_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 4)));
#line 929 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___ClauseBody_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 5)));
#line 929 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 7)));

#line 931 "prog_io_typeclass.m"
                {
#line 931 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_173_173 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], parse_tree__prog_io_typeclass__HeadArgs_38);
                }
#line 931 "prog_io_typeclass.m"
                {
#line 931 "prog_io_typeclass.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_io_typeclass__PredOrFunc_37, &parse_tree__prog_io_typeclass__ArityInt_235, parse_tree__prog_io_typeclass__V_173_173);
                }
#line 933 "prog_io_typeclass.m"
                {
#line 933 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemClause_35));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "prog_io_typeclass.m"
                }
#line 933 "prog_io_typeclass.m"
                {
#line 933 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_175_175));
#line 933 "prog_io_typeclass.m"
                }
#line 932 "prog_io_typeclass.m"
                {
#line 932 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 932 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__PredOrFunc_37));
#line 932 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethodName_36));
#line 932 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_174_174));
#line 932 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_235));
#line 932 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_42));
#line 932 "prog_io_typeclass.m"
                }
#line 935 "prog_io_typeclass.m"
                {
#line 935 "prog_io_typeclass.m"
                  MR_Word base;
#line 935 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 935 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_236));
#line 935 "prog_io_typeclass.m"
                }
#line 930 "prog_io_typeclass.m"
              }
#line 936 "prog_io_typeclass.m"
            else
#line 937 "prog_io_typeclass.m"
              {
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_266_266 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_179_179;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_182_182;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_185_185;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_188_188;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_191_191;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_194_194;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_195_195;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_204_204;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_205_205;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_206_206;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_207_207;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_208_208;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_211_211;
#line 937 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_237;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_238;
#line 937 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_239;

#line 937 "prog_io_typeclass.m"
                {
#line 937 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_237 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 943 "prog_io_typeclass.m"
                {
#line 943 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_237));
#line 943 "prog_io_typeclass.m"
                }
#line 943 "prog_io_typeclass.m"
                {
#line 943 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_195_195));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 943 "prog_io_typeclass.m"
                }
#line 943 "prog_io_typeclass.m"
                {
#line 943 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_194_194));
#line 943 "prog_io_typeclass.m"
                }
#line 942 "prog_io_typeclass.m"
                {
#line 942 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 942 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_191_191));
#line 942 "prog_io_typeclass.m"
                }
#line 941 "prog_io_typeclass.m"
                {
#line 941 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[96])));
#line 941 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_188_188));
#line 941 "prog_io_typeclass.m"
                }
#line 940 "prog_io_typeclass.m"
                {
#line 940 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[95])));
#line 940 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_185_185));
#line 940 "prog_io_typeclass.m"
                }
#line 939 "prog_io_typeclass.m"
                {
#line 939 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[94])));
#line 939 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_182_182));
#line 939 "prog_io_typeclass.m"
                }
#line 938 "prog_io_typeclass.m"
                {
#line 938 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[97])));
#line 938 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_179_179));
#line 938 "prog_io_typeclass.m"
                }
#line 945 "prog_io_typeclass.m"
                {
#line 945 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_206_206 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_208_208, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_238));
#line 946 "prog_io_typeclass.m"
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_208_208));
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "prog_io_typeclass.m"
                }
#line 945 "prog_io_typeclass.m"
                {
#line 945 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_206_206));
#line 945 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_207_207));
#line 945 "prog_io_typeclass.m"
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_205_205));
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 946 "prog_io_typeclass.m"
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_204_204));
#line 944 "prog_io_typeclass.m"
                }
#line 947 "prog_io_typeclass.m"
                {
#line 947 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_239));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "prog_io_typeclass.m"
                }
#line 947 "prog_io_typeclass.m"
                {
#line 947 "prog_io_typeclass.m"
                  MR_Word base;
#line 947 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 947 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_211_211));
#line 947 "prog_io_typeclass.m"
                }
#line 937 "prog_io_typeclass.m"
              }
#line 924 "prog_io_typeclass.m"
          }
#line 917 "prog_io_typeclass.m"
      }
#line 907 "prog_io_typeclass.m"
  }
#line 831 "prog_io_typeclass.m"
}

#line 400 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 400 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 400 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5)
#line 400 "prog_io_typeclass.m"
{
#line 403 "prog_io_typeclass.m"
  {
#line 403 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 403 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "prog_io_typeclass.m"
      {
#line 403 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4;
#line 403 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2;
#line 403 "prog_io_typeclass.m"
      }
#line 403 "prog_io_typeclass.m"
    else
#line 404 "prog_io_typeclass.m"
      {
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 404 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;

#line 405 "prog_io_typeclass.m"
        {
#line 405 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Xs_13, parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
        }
#line 409 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__X_12)) == (MR_mktag((MR_Integer) 0))))
#line 410 "prog_io_typeclass.m"
          {
#line 410 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__CurSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0)));

#line 411 "prog_io_typeclass.m"
            {
#line 411 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__CurSpecs_17, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
            }
#line 410 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 410 "prog_io_typeclass.m"
          }
#line 409 "prog_io_typeclass.m"
        else
#line 407 "prog_io_typeclass.m"
          {
#line 407 "prog_io_typeclass.m"
            MR_Box parse_tree__prog_io_typeclass__CurMethod_16 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0));

#line 408 "prog_io_typeclass.m"
            {
#line 408 "prog_io_typeclass.m"
              MR_Word base;
#line 408 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = base;
#line 408 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io_typeclass__CurMethod_16;
#line 408 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22));
#line 408 "prog_io_typeclass.m"
            }
#line 407 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;
#line 407 "prog_io_typeclass.m"
          }
#line 404 "prog_io_typeclass.m"
      }
#line 403 "prog_io_typeclass.m"
  }
#line 400 "prog_io_typeclass.m"
}

#line 252 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 252 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 252 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 252 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 252 "prog_io_typeclass.m"
{
#line 255 "prog_io_typeclass.m"
  {
#line 255 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 255 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 255 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 255 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 255 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 527 "prog_io_typeclass.m"
    {
#line 527 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 274 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 275 "prog_io_typeclass.m"
      {
#line 275 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 276 "prog_io_typeclass.m"
        {
#line 276 "prog_io_typeclass.m"
          MR_Word base;
#line 276 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 276 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 276 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 276 "prog_io_typeclass.m"
        }
#line 275 "prog_io_typeclass.m"
      }
#line 274 "prog_io_typeclass.m"
    else
#line 258 "prog_io_typeclass.m"
      {
#line 258 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 258 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 258 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 258 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 265 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_13;
#line 265 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_14;
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_46;
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_47;
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_51;

#line 258 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 258 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 259 "prog_io_typeclass.m"
        {
#line 259 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 259 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 259 "prog_io_typeclass.m"
        }
#line 283 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraint_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 0)));
#line 283 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraints_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 1)));
#line 285 "prog_io_typeclass.m"
        {
#line 285 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_47, &parse_tree__prog_io_typeclass__SimpleConstraints0_50, &parse_tree__prog_io_typeclass__FunDeps0_51);
        }
#line 284 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 291 "prog_io_typeclass.m"
          {
#line 291 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 2))))
#line 292 "prog_io_typeclass.m"
              {
#line 292 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_53 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 2);

#line 293 "prog_io_typeclass.m"
                {
#line 293 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDeps_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_53));
#line 293 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_51));
#line 293 "prog_io_typeclass.m"
                }
#line 294 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Constraints_13 = parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 292 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 292 "prog_io_typeclass.m"
              }
#line 291 "prog_io_typeclass.m"
            else
#line 291 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 0))))
#line 288 "prog_io_typeclass.m"
              {
#line 288 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 0);

#line 289 "prog_io_typeclass.m"
                {
#line 289 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Constraints_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_52));
#line 289 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_50));
#line 289 "prog_io_typeclass.m"
                }
#line 290 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__FunDeps_14 = parse_tree__prog_io_typeclass__FunDeps0_51;
#line 288 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 288 "prog_io_typeclass.m"
              }
#line 291 "prog_io_typeclass.m"
            else
#line 291 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 291 "prog_io_typeclass.m"
          }
#line 265 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 264 "prog_io_typeclass.m"
          {
#line 264 "prog_io_typeclass.m"
            MR_Word base;
#line 264 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 264 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_13));
#line 264 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_14));
#line 264 "prog_io_typeclass.m"
          }
#line 265 "prog_io_typeclass.m"
        else
#line 268 "prog_io_typeclass.m"
          {
#line 268 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 268 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 268 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 268 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 268 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 270 "prog_io_typeclass.m"
            {
#line 270 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 270 "prog_io_typeclass.m"
            {
#line 270 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 270 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[88])));
#line 270 "prog_io_typeclass.m"
            }
#line 271 "prog_io_typeclass.m"
            {
#line 271 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 271 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "prog_io_typeclass.m"
            }
#line 269 "prog_io_typeclass.m"
            {
#line 269 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 269 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 269 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 269 "prog_io_typeclass.m"
            }
#line 272 "prog_io_typeclass.m"
            {
#line 272 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io_typeclass.m"
            }
#line 272 "prog_io_typeclass.m"
            {
#line 272 "prog_io_typeclass.m"
              MR_Word base;
#line 272 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 272 "prog_io_typeclass.m"
            }
#line 268 "prog_io_typeclass.m"
          }
#line 258 "prog_io_typeclass.m"
      }
#line 255 "prog_io_typeclass.m"
  }
#line 252 "prog_io_typeclass.m"
}

#line 50 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 50 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 50 "prog_io_typeclass.m"
{
#line 459 "prog_io_typeclass.m"
  {
#line 459 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 459 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 459 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 459 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 459 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 527 "prog_io_typeclass.m"
    {
#line 527 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 477 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 478 "prog_io_typeclass.m"
      {
#line 478 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 479 "prog_io_typeclass.m"
        {
#line 479 "prog_io_typeclass.m"
          MR_Word base;
#line 479 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 479 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 479 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 479 "prog_io_typeclass.m"
        }
#line 478 "prog_io_typeclass.m"
      }
#line 477 "prog_io_typeclass.m"
    else
#line 462 "prog_io_typeclass.m"
      {
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 462 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 469 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints_13;
#line 469 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub_14;

#line 462 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 462 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 463 "prog_io_typeclass.m"
        {
#line 463 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 463 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 463 "prog_io_typeclass.m"
        }
#line 465 "prog_io_typeclass.m"
        {
#line 465 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_12, &parse_tree__prog_io_typeclass__ProgConstraints_13, &parse_tree__prog_io_typeclass__InstVarSub_14);
        }
#line 469 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 468 "prog_io_typeclass.m"
          {
#line 468 "prog_io_typeclass.m"
            MR_Word base;
#line 468 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 468 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints_13));
#line 468 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSub_14));
#line 468 "prog_io_typeclass.m"
          }
#line 469 "prog_io_typeclass.m"
        else
#line 471 "prog_io_typeclass.m"
          {
#line 471 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 471 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 471 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 471 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 471 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 473 "prog_io_typeclass.m"
            {
#line 473 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 473 "prog_io_typeclass.m"
            {
#line 473 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 473 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[87])));
#line 473 "prog_io_typeclass.m"
            }
#line 474 "prog_io_typeclass.m"
            {
#line 474 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "prog_io_typeclass.m"
            }
#line 472 "prog_io_typeclass.m"
            {
#line 472 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 472 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 472 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 472 "prog_io_typeclass.m"
            }
#line 475 "prog_io_typeclass.m"
            {
#line 475 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io_typeclass.m"
            }
#line 475 "prog_io_typeclass.m"
            {
#line 475 "prog_io_typeclass.m"
              MR_Word base;
#line 475 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 475 "prog_io_typeclass.m"
            }
#line 471 "prog_io_typeclass.m"
          }
#line 462 "prog_io_typeclass.m"
      }
#line 459 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 437 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 437 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 437 "prog_io_typeclass.m"
{
#line 437 "prog_io_typeclass.m"
  {
#line 437 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 437 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 437 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 437 "prog_io_typeclass.m"
    {
#line 437 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 437 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 437 "prog_io_typeclass.m"
      {
#line 437 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 437 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 437 "prog_io_typeclass.m"
      }
#line 437 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 437 "prog_io_typeclass.m"
  }
#line 437 "prog_io_typeclass.m"
}

#line 45 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 45 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 45 "prog_io_typeclass.m"
{
#line 419 "prog_io_typeclass.m"
  {
#line 419 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_26;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_55;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_56;
#line 419 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_57_57;

#line 527 "prog_io_typeclass.m"
    {
#line 527 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_57_57);
    }
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 1)));
#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_55, parse_tree__prog_io_typeclass__TailConstraintTerms_56, &parse_tree__prog_io_typeclass__Result0_26);
    }
#line 448 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_26)) == (MR_mktag((MR_Integer) 0))))
#line 450 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_26;
#line 448 "prog_io_typeclass.m"
    else
#line 433 "prog_io_typeclass.m"
      {
#line 433 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_27;
#line 433 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_28;
#line 433 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_26, (MR_Integer) 0)));
#line 442 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_29;
#line 442 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailConstraints_30;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_34_49;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_35_50;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_34_34;

#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, (MR_Integer) 0)));
#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, (MR_Integer) 1)));
#line 456 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27)) == (MR_mktag((MR_Integer) 0)));
#line 456 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 456 "prog_io_typeclass.m"
          {
#line 456 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_29 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27), (MR_Integer) 0);
#line 437 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_34_34 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[6];
#line 4093 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_49 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 4095 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 437 "prog_io_typeclass.m"
            {
#line 437 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_49, parse_tree__prog_io_typeclass__TypeCtorInfo_35_50, parse_tree__prog_io_typeclass__V_34_34, parse_tree__prog_io_typeclass__TailArbConstraints_28, &parse_tree__prog_io_typeclass__TailConstraints_30);
            }
#line 456 "prog_io_typeclass.m"
          }
#line 442 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 441 "prog_io_typeclass.m"
          {
#line 441 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;

#line 441 "prog_io_typeclass.m"
            {
#line 441 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_29));
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_30));
#line 441 "prog_io_typeclass.m"
            }
#line 441 "prog_io_typeclass.m"
            {
#line 441 "prog_io_typeclass.m"
              MR_Word base;
#line 441 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 441 "prog_io_typeclass.m"
            }
#line 441 "prog_io_typeclass.m"
          }
#line 442 "prog_io_typeclass.m"
        else
#line 445 "prog_io_typeclass.m"
          {
#line 445 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_31;
#line 445 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_38_38;
#line 445 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 445 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 445 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;

#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_40_40 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[86])));
#line 444 "prog_io_typeclass.m"
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_38_38));
#line 443 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_31));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              MR_Word base;
#line 446 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 446 "prog_io_typeclass.m"
            }
#line 445 "prog_io_typeclass.m"
          }
#line 433 "prog_io_typeclass.m"
      }
#line 419 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 795 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__795__1_2_f_0(
#line 795 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 795 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_61)
#line 795 "prog_io_typeclass.m"
{
#line 795 "prog_io_typeclass.m"
  {
#line 795 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 795 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_62;

#line 795 "prog_io_typeclass.m"
    {
#line 795 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__3_62 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__HeadVar__2_61);
    }
#line 795 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_62;
#line 795 "prog_io_typeclass.m"
  }
#line 795 "prog_io_typeclass.m"
}

#line 792 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__792__1_2_p_0(
#line 792 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 792 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_56)
#line 792 "prog_io_typeclass.m"
{
#line 792 "prog_io_typeclass.m"
  {
#line 792 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 957 "prog_io_typeclass.m"
    {
#line 957 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_56)), parse_tree__prog_io_typeclass__TypesVars_19);
    }
#line 792 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 792 "prog_io_typeclass.m"
  }
#line 792 "prog_io_typeclass.m"
}

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 342 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 342 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18)
#line 342 "prog_io_typeclass.m"
{
#line 342 "prog_io_typeclass.m"
  {
#line 342 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 342 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Item_12;

#line 345 "prog_io_typeclass.m"
    {
#line 345 "prog_io_typeclass.m"
      parse_tree__prog_io_item__parse_decl_5_p_0(parse_tree__prog_io_typeclass__ModuleName_5, parse_tree__prog_io_typeclass__VarSet_7, parse_tree__prog_io_typeclass__HeadVar__3_17, (MR_Integer) -1, &parse_tree__prog_io_typeclass__Item_12);
    }
#line 347 "prog_io_typeclass.m"
    {
#line 347 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(parse_tree__prog_io_typeclass__Item_12, parse_tree__prog_io_typeclass__HeadVar__3_17, parse_tree__prog_io_typeclass__HeadVar__4_18);
#line 347 "prog_io_typeclass.m"
      return;
    }
#line 342 "prog_io_typeclass.m"
  }
#line 342 "prog_io_typeclass.m"
}

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__308__1_2_p_0(
#line 308 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_55,
#line 308 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_56)
#line 308 "prog_io_typeclass.m"
{
#line 308 "prog_io_typeclass.m"
  {
#line 308 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 308 "prog_io_typeclass.m"
    {
#line 308 "prog_io_typeclass.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_55, parse_tree__prog_io_typeclass__HeadVar__2_56);
#line 308 "prog_io_typeclass.m"
      return;
    }
#line 308 "prog_io_typeclass.m"
  }
#line 308 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_2_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_160)
#line 198 "prog_io_typeclass.m"
{
#line 198 "prog_io_typeclass.m"
  {
#line 198 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 198 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_161;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__3_161 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_169, parse_tree__prog_io_typeclass__HeadVar__2_160);
    }
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_161;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 195 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__195__1_2_f_0(
#line 195 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 195 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_157)
#line 195 "prog_io_typeclass.m"
{
#line 195 "prog_io_typeclass.m"
  {
#line 195 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 195 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_158;

#line 195 "prog_io_typeclass.m"
    {
#line 195 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__3_158 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_169, parse_tree__prog_io_typeclass__HeadVar__2_157);
    }
#line 195 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_158;
#line 195 "prog_io_typeclass.m"
  }
#line 195 "prog_io_typeclass.m"
}

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 156 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152)
#line 156 "prog_io_typeclass.m"
{
#line 156 "prog_io_typeclass.m"
  {
#line 156 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 156 "prog_io_typeclass.m"
    {
#line 156 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_152)));
    }
#line 156 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
  }
#line 156 "prog_io_typeclass.m"
}

#line 154 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__154__1_2_p_0(
#line 154 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 154 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_150)
#line 154 "prog_io_typeclass.m"
{
#line 154 "prog_io_typeclass.m"
  {
#line 154 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 154 "prog_io_typeclass.m"
    {
#line 154 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_150)));
    }
#line 154 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 154 "prog_io_typeclass.m"
  }
#line 154 "prog_io_typeclass.m"
}

#line 53 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(
#line 53 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 53 "prog_io_typeclass.m"
{
#line 53 "prog_io_typeclass.m"
  {
#line 53 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 53 "prog_io_typeclass.m"
    {
#line 53 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[1], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 53 "prog_io_typeclass.m"
      return;
    }
#line 53 "prog_io_typeclass.m"
  }
#line 53 "prog_io_typeclass.m"
}

#line 53 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 53 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 53 "prog_io_typeclass.m"
{
#line 53 "prog_io_typeclass.m"
  {
#line 53 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 53 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 53 "prog_io_typeclass.m"
    {
#line 53 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 53 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
  }
#line 53 "prog_io_typeclass.m"
}

#line 521 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 521 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 521 "prog_io_typeclass.m"
{
#line 521 "prog_io_typeclass.m"
  {
#line 521 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 521 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 521 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 521 "prog_io_typeclass.m"
    {
#line 521 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 521 "prog_io_typeclass.m"
      return;
    }
#line 521 "prog_io_typeclass.m"
  }
#line 521 "prog_io_typeclass.m"
}

#line 521 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 521 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 521 "prog_io_typeclass.m"
{
#line 521 "prog_io_typeclass.m"
  {
#line 521 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 521 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 521 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 521 "prog_io_typeclass.m"
    {
#line 521 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 521 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 521 "prog_io_typeclass.m"
  }
#line 521 "prog_io_typeclass.m"
}

#line 504 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 504 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 504 "prog_io_typeclass.m"
{
#line 504 "prog_io_typeclass.m"
  {
#line 504 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 504 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_45 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 504 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_46 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 504 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_45 == parse_tree__prog_io_typeclass__CastY_46);
#line 504 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 4591 "parse_tree.prog_io_typeclass.c"
      *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 0;
#line 504 "prog_io_typeclass.m"
    else
#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) {
#line 504 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);

#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 504 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 504 "prog_io_typeclass.m"
                {
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 0);

#line 504 "prog_io_typeclass.m"
                  {
#line 504 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_56_56, parse_tree__prog_io_typeclass__V_5_5);
#line 504 "prog_io_typeclass.m"
                    return;
                  }
#line 504 "prog_io_typeclass.m"
                }
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4632 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4638 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4644 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
            }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);

#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 504 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4668 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 504 "prog_io_typeclass.m"
                {
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 1);

#line 504 "prog_io_typeclass.m"
                  {
#line 504 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_55_55, parse_tree__prog_io_typeclass__V_16_16);
#line 504 "prog_io_typeclass.m"
                    return;
                  }
#line 504 "prog_io_typeclass.m"
                }
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4692 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4698 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
            }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);

#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 504 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4722 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4728 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 504 "prog_io_typeclass.m"
                {
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 2);

#line 504 "prog_io_typeclass.m"
                  {
#line 504 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_52_52, parse_tree__prog_io_typeclass__V_44_44);
#line 504 "prog_io_typeclass.m"
                    return;
                  }
#line 504 "prog_io_typeclass.m"
                }
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4752 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
            }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));

#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 504 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4778 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4784 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4790 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 504 "prog_io_typeclass.m"
                {
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 0)));
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 1)));
#line 504 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 504 "prog_io_typeclass.m"
                  {
#line 504 "prog_io_typeclass.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], &parse_tree__prog_io_typeclass__V_32_32, ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54)), ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30)));
                  }
#line 4810 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 0);
#line 504 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = !(parse_tree__prog_io_typeclass__succeeded);
#line 504 "prog_io_typeclass.m"
                  if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = parse_tree__prog_io_typeclass__V_32_32;
#line 504 "prog_io_typeclass.m"
                  else
#line 504 "prog_io_typeclass.m"
                    {
#line 504 "prog_io_typeclass.m"
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_53_53, parse_tree__prog_io_typeclass__V_31_31);
#line 504 "prog_io_typeclass.m"
                      return;
                    }
#line 504 "prog_io_typeclass.m"
                }
#line 504 "prog_io_typeclass.m"
                break;
#line 504 "prog_io_typeclass.m"
            }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
      }
#line 504 "prog_io_typeclass.m"
  }
#line 504 "prog_io_typeclass.m"
}

#line 504 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 504 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 504 "prog_io_typeclass.m"
{
#line 504 "prog_io_typeclass.m"
  {
#line 504 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 504 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_13 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 504 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_14 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 504 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_13 == parse_tree__prog_io_typeclass__CastY_14);
#line 504 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 504 "prog_io_typeclass.m"
    else
#line 504 "prog_io_typeclass.m"
#line 504 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) {
#line 504 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 504 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 504 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
              {
#line 504 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);
#line 4892 "parse_tree.prog_io_typeclass.c"
                {
#line 4894 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_3_3, parse_tree__prog_io_typeclass__V_4_4);
                }
#line 504 "prog_io_typeclass.m"
              }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 1);
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_6_6;

#line 504 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 504 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
              {
#line 504 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);
#line 4920 "parse_tree.prog_io_typeclass.c"
                {
#line 4922 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_5_5, parse_tree__prog_io_typeclass__V_6_6);
                }
#line 504 "prog_io_typeclass.m"
              }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_11_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 2);
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_12_12;

#line 504 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 504 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
              {
#line 504 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);
#line 4948 "parse_tree.prog_io_typeclass.c"
                {
#line 4950 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__prog_io_typeclass__V_11_11, parse_tree__prog_io_typeclass__V_12_12);
                }
#line 504 "prog_io_typeclass.m"
              }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 504 "prog_io_typeclass.m"
          {
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_16_16;
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_9_9;
#line 504 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_10_10;

#line 504 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 504 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 504 "prog_io_typeclass.m"
              {
#line 504 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 504 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 4984 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5];
#line 4986 "parse_tree.prog_io_typeclass.c"
                {
#line 4988 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_typeclass__V_7_7)), ((MR_Box) (parse_tree__prog_io_typeclass__V_9_9)));
                }
#line 504 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 4993 "parse_tree.prog_io_typeclass.c"
                  {
#line 4995 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_typeclass__V_8_8, parse_tree__prog_io_typeclass__V_10_10);
                  }
#line 504 "prog_io_typeclass.m"
              }
#line 504 "prog_io_typeclass.m"
          }
#line 504 "prog_io_typeclass.m"
          break;
#line 504 "prog_io_typeclass.m"
      }
#line 504 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 504 "prog_io_typeclass.m"
  }
#line 504 "prog_io_typeclass.m"
}

#line 954 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 954 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 954 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 954 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4)
#line 954 "prog_io_typeclass.m"
{
#line 957 "prog_io_typeclass.m"
  {
#line 957 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 957 "prog_io_typeclass.m"
    {
#line 957 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_for_T_5, parse_tree__prog_io_typeclass__Element_4, parse_tree__prog_io_typeclass__List_3);
    }
#line 957 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 957 "prog_io_typeclass.m"
  }
#line 954 "prog_io_typeclass.m"
}

#line 831 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 831 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 831 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 831 "prog_io_typeclass.m"
{
#line 907 "prog_io_typeclass.m"
  {
#line 907 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 907 "prog_io_typeclass.m"
    {
#line 907 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);
#line 907 "prog_io_typeclass.m"
      return;
    }
#line 907 "prog_io_typeclass.m"
  }
#line 831 "prog_io_typeclass.m"
}

#line 795 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 795 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 795 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 795 "prog_io_typeclass.m"
{
#line 795 "prog_io_typeclass.m"
  {
#line 795 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 795 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 795 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__3_62;

#line 795 "prog_io_typeclass.m"
    {
#line 795 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__3_62 = parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__795__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 795 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__3_62));
#line 795 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 795 "prog_io_typeclass.m"
  }
#line 795 "prog_io_typeclass.m"
}

#line 792 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 792 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 792 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 792 "prog_io_typeclass.m"
{
#line 792 "prog_io_typeclass.m"
  {
#line 792 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 792 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 792 "prog_io_typeclass.m"
    {
#line 792 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__792__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 792 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 792 "prog_io_typeclass.m"
  }
#line 792 "prog_io_typeclass.m"
}

#line 778 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 778 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 778 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 778 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 778 "prog_io_typeclass.m"
{
#line 781 "prog_io_typeclass.m"
  {
#line 781 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 781 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 781 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 781 "prog_io_typeclass.m"
    else
#line 782 "prog_io_typeclass.m"
      {
#line 782 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstance_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 1)));
#line 782 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 3)));
#line 782 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 5)));
#line 784 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 0)));
#line 784 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___OriginalTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 2)));
#line 784 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Methods_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 4)));
#line 784 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___ModName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 6)));
#line 784 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 7)));
#line 784 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 8)));
#line 809 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__UnboundTVars_21;
#line 790 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVars_18;
#line 790 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypesVars_19;
#line 790 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 792 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___BoundTVars_20;
#line 793 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 793 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;

#line 790 "prog_io_typeclass.m"
        {
#line 790 "prog_io_typeclass.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__Constraints_12, &parse_tree__prog_io_typeclass__TVars_18);
        }
#line 791 "prog_io_typeclass.m"
        {
#line 791 "prog_io_typeclass.m"
          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_typeclass__Types_10, &parse_tree__prog_io_typeclass__TypesVars_19);
        }
#line 792 "prog_io_typeclass.m"
        {
#line 792 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 792 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 792 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1));
#line 792 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 792 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TypesVars_19));
#line 792 "prog_io_typeclass.m"
        }
#line 792 "prog_io_typeclass.m"
        {
#line 792 "prog_io_typeclass.m"
          mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_29_29, parse_tree__prog_io_typeclass__TVars_18, &parse_tree__prog_io_typeclass___BoundTVars_20, &parse_tree__prog_io_typeclass__UnboundTVars_21);
        }
#line 793 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__UnboundTVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 793 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 793 "prog_io_typeclass.m"
          {
#line 793 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 0)));
#line 793 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 1)));
#line 796 "prog_io_typeclass.m"
            {
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_64_64;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarStrs_24;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarPieces_25;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Prefix_26;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Pieces_27;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_38_38;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 796 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 798 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass__V_31_31;

#line 795 "prog_io_typeclass.m"
              {
#line 795 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 795 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_6[0]));
#line 795 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2));
#line 795 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 795 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 795 "prog_io_typeclass.m"
              }
#line 795 "prog_io_typeclass.m"
              {
#line 795 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarStrs_24 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_typeclass__V_30_30, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 797 "prog_io_typeclass.m"
              {
#line 797 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarPieces_25 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__UnboundTVarStrs_24);
              }
#line 798 "prog_io_typeclass.m"
              {
#line 798 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_31_31 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 798 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_31_31 == (MR_Integer) 1);
#line 800 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 799 "prog_io_typeclass.m"
                {
#line 799 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[83]);
#line 799 "prog_io_typeclass.m"
                }
#line 800 "prog_io_typeclass.m"
              else
#line 801 "prog_io_typeclass.m"
                {
#line 801 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[85]);
#line 801 "prog_io_typeclass.m"
                }
#line 5311 "parse_tree.prog_io_typeclass.c"
              parse_tree__prog_io_typeclass__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 803 "prog_io_typeclass.m"
              {
#line 803 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_38_38 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_64_64, parse_tree__prog_io_typeclass__UnboundTVarPieces_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[48]));
              }
#line 803 "prog_io_typeclass.m"
              {
#line 803 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Pieces_27 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_64_64, parse_tree__prog_io_typeclass__Prefix_26, parse_tree__prog_io_typeclass__V_38_38);
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__InstanceTerm_2);
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_27));
#line 807 "prog_io_typeclass.m"
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_51_51));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_typeclass.m"
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_49_49));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_48_48, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 807 "prog_io_typeclass.m"
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_48_48));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_typeclass.m"
              }
#line 806 "prog_io_typeclass.m"
              {
#line 806 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 806 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 806 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 806 "prog_io_typeclass.m"
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "prog_io_typeclass.m"
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                MR_Word base;
#line 808 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 808 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54));
#line 808 "prog_io_typeclass.m"
              }
#line 796 "prog_io_typeclass.m"
            }
#line 793 "prog_io_typeclass.m"
          }
#line 793 "prog_io_typeclass.m"
        else
#line 810 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 782 "prog_io_typeclass.m"
      }
#line 781 "prog_io_typeclass.m"
  }
#line 778 "prog_io_typeclass.m"
}

#line 714 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 714 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 714 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 714 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 714 "prog_io_typeclass.m"
{
#line 718 "prog_io_typeclass.m"
  {
#line 718 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 718 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 718 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 718 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 722 "prog_io_typeclass.m"
    {
#line 722 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 723 "prog_io_typeclass.m"
    {
#line 723 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[80]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 739 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 740 "prog_io_typeclass.m"
      {
#line 740 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 741 "prog_io_typeclass.m"
        {
#line 741 "prog_io_typeclass.m"
          MR_Word base;
#line 741 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 741 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_29));
#line 741 "prog_io_typeclass.m"
        }
#line 740 "prog_io_typeclass.m"
      }
#line 739 "prog_io_typeclass.m"
    else
#line 726 "prog_io_typeclass.m"
      {
#line 726 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 726 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 726 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeTypes_19;

#line 729 "prog_io_typeclass.m"
        {
#line 729 "prog_io_typeclass.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_17, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_19);
        }
#line 735 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
#line 737 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19;
#line 735 "prog_io_typeclass.m"
        else
#line 731 "prog_io_typeclass.m"
          {
#line 731 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_19, (MR_Integer) 0)));
#line 731 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstance_21;

#line 732 "prog_io_typeclass.m"
            {
#line 732 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 732 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 732 "prog_io_typeclass.m"
            }
#line 734 "prog_io_typeclass.m"
            {
#line 734 "prog_io_typeclass.m"
              MR_Word base;
#line 734 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 734 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_21));
#line 734 "prog_io_typeclass.m"
            }
#line 731 "prog_io_typeclass.m"
          }
#line 726 "prog_io_typeclass.m"
      }
#line 718 "prog_io_typeclass.m"
  }
#line 714 "prog_io_typeclass.m"
}

#line 437 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0_1(
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 437 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 437 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 437 "prog_io_typeclass.m"
{
#line 437 "prog_io_typeclass.m"
  {
#line 437 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 437 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 437 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 437 "prog_io_typeclass.m"
    {
#line 437 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 437 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 437 "prog_io_typeclass.m"
      {
#line 437 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 437 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 437 "prog_io_typeclass.m"
      }
#line 437 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 437 "prog_io_typeclass.m"
  }
#line 437 "prog_io_typeclass.m"
}

#line 672 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Constraints_10,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 672 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 672 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 672 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_14)
#line 672 "prog_io_typeclass.m"
{
#line 677 "prog_io_typeclass.m"
  {
#line 677 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 677 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_15;
#line 677 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_52;
#line 677 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_81;
#line 677 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_82;
#line 677 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_83_83;

#line 678 "prog_io_typeclass.m"
    {
#line 678 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__TVarSet_11, &parse_tree__prog_io_typeclass__VarSet_15);
    }
#line 527 "prog_io_typeclass.m"
    {
#line 527 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_10, &parse_tree__prog_io_typeclass__V_83_83);
    }
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, (MR_Integer) 0)));
#line 528 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, (MR_Integer) 1)));
#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_15, parse_tree__prog_io_typeclass__HeadConstraintTerm_81, parse_tree__prog_io_typeclass__TailConstraintTerms_82, &parse_tree__prog_io_typeclass__Result0_52);
    }
#line 5643 "parse_tree.prog_io_typeclass.c"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_52)) == (MR_mktag((MR_Integer) 0))))
#line 5645 "parse_tree.prog_io_typeclass.c"
      {
#line 5647 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16 = (MR_Word) parse_tree__prog_io_typeclass__Result0_52;

#line 702 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;
#line 5652 "parse_tree.prog_io_typeclass.c"
      }
#line 5654 "parse_tree.prog_io_typeclass.c"
    else
#line 5656 "parse_tree.prog_io_typeclass.c"
      {
#line 5658 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_53;
#line 5660 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_54;
#line 5662 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_52, (MR_Integer) 0)));
#line 5664 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_55;
#line 5666 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__TailConstraints_56;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_34_75;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_35_76;
#line 436 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_60_60;

#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 0)));
#line 433 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 1)));
#line 456 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_53)) == (MR_mktag((MR_Integer) 0)));
#line 456 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 456 "prog_io_typeclass.m"
          {
#line 456 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_53), (MR_Integer) 0);
#line 437 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[5];
#line 5689 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_75 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 5691 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 437 "prog_io_typeclass.m"
            {
#line 437 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_75, parse_tree__prog_io_typeclass__TypeCtorInfo_35_76, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__TailArbConstraints_54, &parse_tree__prog_io_typeclass__TailConstraints_56);
            }
#line 456 "prog_io_typeclass.m"
          }
#line 5700 "parse_tree.prog_io_typeclass.c"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 5702 "parse_tree.prog_io_typeclass.c"
          {
#line 5704 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__ConstraintList_17;
#line 5706 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_18;

#line 441 "prog_io_typeclass.m"
            {
#line 441 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintList_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ConstraintList_17, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_55));
#line 441 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ConstraintList_17, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_56));
#line 441 "prog_io_typeclass.m"
            }
#line 683 "prog_io_typeclass.m"
            {
#line 683 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemInstance0_18);
            }
#line 688 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_18)) == (MR_mktag((MR_Integer) 0))))
#line 687 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = parse_tree__prog_io_typeclass__MaybeItemInstance0_18;
#line 688 "prog_io_typeclass.m"
            else
#line 689 "prog_io_typeclass.m"
              {
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_18, (MR_Integer) 0)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 0)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 1)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__OriginalTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 2)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Body_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 4)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 5)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ModName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 6)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 7)));
#line 689 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 8)));
#line 689 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance_30;
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___ConstraintList0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 3)));

#line 695 "prog_io_typeclass.m"
                {
#line 695 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemInstance_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_21));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_22));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_23));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Body_25));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceVarSet_26));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_27));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_28));
#line 695 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_29));
#line 695 "prog_io_typeclass.m"
                }
#line 698 "prog_io_typeclass.m"
                {
#line 698 "prog_io_typeclass.m"
                  MR_Word base;
#line 698 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = base;
#line 698 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_30));
#line 698 "prog_io_typeclass.m"
                }
#line 689 "prog_io_typeclass.m"
              }
#line 5793 "parse_tree.prog_io_typeclass.c"
          }
#line 5795 "parse_tree.prog_io_typeclass.c"
        else
#line 5797 "parse_tree.prog_io_typeclass.c"
          {
#line 5799 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__Spec_57;
#line 5801 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 5803 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 5805 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 5807 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_71_71;
#line 5809 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_87;

#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_10);
            }
#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[81])));
#line 444 "prog_io_typeclass.m"
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 443 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_57));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedConstraints_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_87, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_71_71));
#line 446 "prog_io_typeclass.m"
            }
#line 702 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_87;
#line 5869 "parse_tree.prog_io_typeclass.c"
          }
#line 5871 "parse_tree.prog_io_typeclass.c"
      }
#line 677 "prog_io_typeclass.m"
  }
#line 672 "prog_io_typeclass.m"
}

#line 659 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 659 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 659 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 659 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 659 "prog_io_typeclass.m"
{
#line 667 "prog_io_typeclass.m"
  {
#line 667 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 667 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 667 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 664 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 664 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_17_17;
#line 664 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 664 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 664 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 664 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 664 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 664 "prog_io_typeclass.m"
      {
#line 664 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 664 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 664 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 664 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 664 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 664 "prog_io_typeclass.m"
          {
#line 664 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_16_16, (MR_Integer) 0)));
#line 664 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_17_17, (MR_String) "<=") == 0);
#line 664 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 664 "prog_io_typeclass.m"
              {
#line 664 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 664 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 664 "prog_io_typeclass.m"
                  {
#line 664 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 664 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 664 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 664 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 664 "prog_io_typeclass.m"
                      {
#line 664 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 664 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 664 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "prog_io_typeclass.m"
                      }
#line 664 "prog_io_typeclass.m"
                  }
#line 664 "prog_io_typeclass.m"
              }
#line 664 "prog_io_typeclass.m"
          }
#line 664 "prog_io_typeclass.m"
      }
#line 667 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
      {
#line 665 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemInstance_12);
#line 665 "prog_io_typeclass.m"
        return;
      }
#line 667 "prog_io_typeclass.m"
    else
#line 718 "prog_io_typeclass.m"
      {
#line 718 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_45 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 718 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_28;
#line 718 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_29;

#line 722 "prog_io_typeclass.m"
        {
#line 722 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_45, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_28);
        }
#line 723 "prog_io_typeclass.m"
        {
#line 723 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_45, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[80]), &parse_tree__prog_io_typeclass__MaybeClassName_29);
        }
#line 739 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_29)) == (MR_mktag((MR_Integer) 0))))
#line 740 "prog_io_typeclass.m"
          {
#line 740 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 0)));

#line 741 "prog_io_typeclass.m"
            {
#line 741 "prog_io_typeclass.m"
              MR_Word base;
#line 741 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 741 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_43));
#line 741 "prog_io_typeclass.m"
            }
#line 740 "prog_io_typeclass.m"
          }
#line 739 "prog_io_typeclass.m"
        else
#line 726 "prog_io_typeclass.m"
          {
#line 726 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 0)));
#line 726 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 1)));
#line 726 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__MaybeTypes_33;

#line 729 "prog_io_typeclass.m"
            {
#line 729 "prog_io_typeclass.m"
              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_31, parse_tree__prog_io_typeclass__VarSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_33);
            }
#line 735 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_33)) == (MR_mktag((MR_Integer) 0))))
#line 737 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_33;
#line 735 "prog_io_typeclass.m"
            else
#line 731 "prog_io_typeclass.m"
              {
#line 731 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_33, (MR_Integer) 0)));
#line 731 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance_35;

#line 732 "prog_io_typeclass.m"
                {
#line 732 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemInstance_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_30));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_34));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_34));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 732 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 732 "prog_io_typeclass.m"
                }
#line 734 "prog_io_typeclass.m"
                {
#line 734 "prog_io_typeclass.m"
                  MR_Word base;
#line 734 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 734 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_35));
#line 734 "prog_io_typeclass.m"
                }
#line 731 "prog_io_typeclass.m"
              }
#line 726 "prog_io_typeclass.m"
          }
#line 718 "prog_io_typeclass.m"
      }
#line 667 "prog_io_typeclass.m"
  }
#line 659 "prog_io_typeclass.m"
}

#line 609 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 609 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 609 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4)
#line 609 "prog_io_typeclass.m"
{
#line 611 "prog_io_typeclass.m"
  {
#line 611 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__DomainTerm_5;
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__RangeTerm_6;
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_12_12;
#line 611 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_13_13;
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_14_14;
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;
#line 611 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_7_7;
#line 618 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_8;
#line 618 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_9;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_46;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_47;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_52;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_53;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypesTerm_44;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerms_45;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypesTerm_50;
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerms_51;

#line 612 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
      {
#line 612 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 1)));
#line 612 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 2)));
#line 612 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
          {
#line 612 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_12_12, (MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_13_13, (MR_String) "->") == 0);
#line 611 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 611 "prog_io_typeclass.m"
              {
#line 612 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 612 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
                  {
#line 612 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__DomainTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 1)));
#line 612 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 612 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
                      {
#line 612 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__RangeTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 1)));
#line 612 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 611 "prog_io_typeclass.m"
                          {
#line 6199 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6201 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_8_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 632 "prog_io_typeclass.m"
                            {
#line 632 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__TypesTerm_44 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_46, parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__DomainTerm_5);
                            }
#line 633 "prog_io_typeclass.m"
                            {
#line 633 "prog_io_typeclass.m"
                              parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypesTerm_44, &parse_tree__prog_io_typeclass__TypeTerms_45);
                            }
#line 634 "prog_io_typeclass.m"
                            {
#line 634 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypeTerms_45, &parse_tree__prog_io_typeclass__Domain_8);
                            }
#line 614 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 614 "prog_io_typeclass.m"
                              {
#line 6222 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6224 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_8_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 632 "prog_io_typeclass.m"
                                {
#line 632 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__TypesTerm_50 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_52, parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__RangeTerm_6);
                                }
#line 633 "prog_io_typeclass.m"
                                {
#line 633 "prog_io_typeclass.m"
                                  parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypesTerm_50, &parse_tree__prog_io_typeclass__TypeTerms_51);
                                }
#line 634 "prog_io_typeclass.m"
                                {
#line 634 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypeTerms_51, &parse_tree__prog_io_typeclass__Range_9);
                                }
#line 614 "prog_io_typeclass.m"
                              }
#line 618 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 617 "prog_io_typeclass.m"
                              {
#line 617 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 617 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_18_18;

#line 617 "prog_io_typeclass.m"
                                {
#line 617 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Domain_8));
#line 617 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Range_9));
#line 617 "prog_io_typeclass.m"
                                }
#line 617 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_typeclass__V_18_18);
#line 617 "prog_io_typeclass.m"
                                {
#line 617 "prog_io_typeclass.m"
                                  MR_Word base;
#line 617 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 617 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 617 "prog_io_typeclass.m"
                                }
#line 617 "prog_io_typeclass.m"
                              }
#line 618 "prog_io_typeclass.m"
                            else
#line 621 "prog_io_typeclass.m"
                              {
#line 621 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__Spec_11;
#line 621 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 621 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_33_33;
#line 621 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 621 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_39_39;

#line 623 "prog_io_typeclass.m"
                                {
#line 623 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_34_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_3);
                                }
#line 623 "prog_io_typeclass.m"
                                {
#line 623 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[78])));
#line 623 "prog_io_typeclass.m"
                                }
#line 623 "prog_io_typeclass.m"
                                {
#line 623 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "prog_io_typeclass.m"
                                }
#line 622 "prog_io_typeclass.m"
                                {
#line 622 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 622 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 622 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 622 "prog_io_typeclass.m"
                                }
#line 624 "prog_io_typeclass.m"
                                {
#line 624 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_11));
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "prog_io_typeclass.m"
                                }
#line 624 "prog_io_typeclass.m"
                                {
#line 624 "prog_io_typeclass.m"
                                  MR_Word base;
#line 624 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 624 "prog_io_typeclass.m"
                                }
#line 621 "prog_io_typeclass.m"
                              }
#line 618 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 611 "prog_io_typeclass.m"
                          }
#line 612 "prog_io_typeclass.m"
                      }
#line 612 "prog_io_typeclass.m"
                  }
#line 611 "prog_io_typeclass.m"
              }
#line 612 "prog_io_typeclass.m"
          }
#line 612 "prog_io_typeclass.m"
      }
#line 611 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 611 "prog_io_typeclass.m"
  }
#line 609 "prog_io_typeclass.m"
}

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 640 "prog_io_typeclass.m"
{
#line 640 "prog_io_typeclass.m"
  {
#line 640 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 640 "prog_io_typeclass.m"
    MR_builtin_longjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0, 1);
#line 640 "prog_io_typeclass.m"
  }
#line 640 "prog_io_typeclass.m"
}

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 640 "prog_io_typeclass.m"
{
#line 640 "prog_io_typeclass.m"
  {
#line 640 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 640 "prog_io_typeclass.m"
    (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86 = ((MR_Word) (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86);
#line 640 "prog_io_typeclass.m"
    {
#line 640 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(parse_tree__prog_io_typeclass__env_ptr);
#line 640 "prog_io_typeclass.m"
      return;
    }
#line 640 "prog_io_typeclass.m"
  }
#line 640 "prog_io_typeclass.m"
}

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 640 "prog_io_typeclass.m"
{
#line 640 "prog_io_typeclass.m"
  {
#line 640 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 641 "prog_io_typeclass.m"
    {
#line 641 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86);
    }
#line 640 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 640 "prog_io_typeclass.m"
      {
#line 642 "prog_io_typeclass.m"
        {
#line 642 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86);
        }
#line 642 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 642 "prog_io_typeclass.m"
          {
#line 642 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(parse_tree__prog_io_typeclass__env_ptr);
#line 642 "prog_io_typeclass.m"
            return;
          }
#line 640 "prog_io_typeclass.m"
      }
#line 640 "prog_io_typeclass.m"
  }
#line 640 "prog_io_typeclass.m"
}

#line 640 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(
#line 640 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 640 "prog_io_typeclass.m"
{
#line 640 "prog_io_typeclass.m"
  {
#line 640 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 640 "prog_io_typeclass.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0) == 0)
#line 640 "prog_io_typeclass.m"
      {
#line 640 "prog_io_typeclass.m"
        {
#line 640 "prog_io_typeclass.m"
          {
#line 640 "prog_io_typeclass.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86, (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84, parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3, parse_tree__prog_io_typeclass__env_ptr);
          }
#line 640 "prog_io_typeclass.m"
        }
#line 640 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 640 "prog_io_typeclass.m"
      }
#line 640 "prog_io_typeclass.m"
    else
#line 640 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 640 "prog_io_typeclass.m"
  }
#line 640 "prog_io_typeclass.m"
}

#line 532 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 532 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 532 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 532 "prog_io_typeclass.m"
{
#line 532 "prog_io_typeclass.m"
  {
#line 532 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s parse_tree__prog_io_typeclass__env;

#line 535 "prog_io_typeclass.m"
    {
#line 535 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__HeadResult_9;
#line 569 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar_31;
#line 569 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Inst_32;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_18_81;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_19_82;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg1_70;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg2_71;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar0_73;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 603 "prog_io_typeclass.m"
      MR_String parse_tree__prog_io_typeclass__V_76_76;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_77_77;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_79_79;
#line 603 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 605 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_74_74;

#line 604 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
        {
#line 604 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 1)));
#line 604 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 2)));
#line 604 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_75_75)) == (MR_mktag((MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
            {
#line 604 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_75_75, (MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_76_76, (MR_String) "=<") == 0);
#line 603 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 603 "prog_io_typeclass.m"
                {
#line 604 "prog_io_typeclass.m"
                  (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 604 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                    {
#line 604 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Arg1_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_77_77, (MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_77_77, (MR_Integer) 1)));
#line 604 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 604 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                        {
#line 604 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__Arg2_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 0)));
#line 604 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 1)));
#line 604 "prog_io_typeclass.m"
                          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (parse_tree__prog_io_typeclass__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "prog_io_typeclass.m"
                          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 603 "prog_io_typeclass.m"
                            {
#line 605 "prog_io_typeclass.m"
                              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg1_70)) == (MR_mktag((MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
                                {
#line 605 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__InstVar0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_70, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_70, (MR_Integer) 1)));
#line 6615 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_18_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6617 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_19_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 606 "prog_io_typeclass.m"
                                  {
#line 606 "prog_io_typeclass.m"
                                    mercury__term__coerce_var_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_18_81, parse_tree__prog_io_typeclass__TypeCtorInfo_19_82, parse_tree__prog_io_typeclass__InstVar0_73, &parse_tree__prog_io_typeclass__InstVar_31);
                                  }
#line 607 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_80_80 = (MR_Integer) 1;
#line 607 "prog_io_typeclass.m"
                                  {
#line 607 "prog_io_typeclass.m"
                                    (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_typeclass__V_80_80, parse_tree__prog_io_typeclass__Arg2_71, &parse_tree__prog_io_typeclass__Inst_32);
                                  }
#line 605 "prog_io_typeclass.m"
                                }
#line 603 "prog_io_typeclass.m"
                            }
#line 604 "prog_io_typeclass.m"
                        }
#line 604 "prog_io_typeclass.m"
                    }
#line 603 "prog_io_typeclass.m"
                }
#line 604 "prog_io_typeclass.m"
            }
#line 604 "prog_io_typeclass.m"
        }
#line 569 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 568 "prog_io_typeclass.m"
        {
#line 568 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_43_43;

#line 568 "prog_io_typeclass.m"
          {
#line 568 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_31));
#line 568 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Inst_32));
#line 568 "prog_io_typeclass.m"
          }
#line 568 "prog_io_typeclass.m"
          {
#line 568 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 568 "prog_io_typeclass.m"
          }
#line 568 "prog_io_typeclass.m"
        }
#line 569 "prog_io_typeclass.m"
      else
#line 573 "prog_io_typeclass.m"
        {
#line 573 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Result0_33;

#line 570 "prog_io_typeclass.m"
          {
#line 570 "prog_io_typeclass.m"
            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_typeclass__parse_fundep_2_p_0(parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__Result0_33);
          }
#line 573 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 572 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = parse_tree__prog_io_typeclass__Result0_33;
#line 573 "prog_io_typeclass.m"
          else
#line 592 "prog_io_typeclass.m"
            {
#line 592 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassName_34;
#line 592 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Args0_35;

#line 574 "prog_io_typeclass.m"
              {
#line 574 "prog_io_typeclass.m"
                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__ClassName_34, &parse_tree__prog_io_typeclass__Args0_35);
              }
#line 592 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 578 "prog_io_typeclass.m"
                {
#line 578 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgsResult_37;

#line 579 "prog_io_typeclass.m"
                  {
#line 579 "prog_io_typeclass.m"
                    parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__Args0_35, parse_tree__prog_io_typeclass__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__ArgsResult_37);
                  }
#line 588 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgsResult_37)) == (MR_mktag((MR_Integer) 0))))
#line 590 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) parse_tree__prog_io_typeclass__ArgsResult_37;
#line 588 "prog_io_typeclass.m"
                  else
#line 581 "prog_io_typeclass.m"
                    {
#line 581 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgsResult_37, (MR_Integer) 0)));
#line 581 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__Constraint_39;
#line 638 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass___ClassName_83;

#line 582 "prog_io_typeclass.m"
                      {
#line 582 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraint_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "prog_io_typeclass.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_34));
#line 582 "prog_io_typeclass.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Args_38));
#line 582 "prog_io_typeclass.m"
                      }
#line 638 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass___ClassName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 0)));
#line 638 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 1)));
#line 640 "prog_io_typeclass.m"
                      {
#line 640 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(&parse_tree__prog_io_typeclass__env);
                      }
#line 585 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 584 "prog_io_typeclass.m"
                        {
#line 584 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 584 "prog_io_typeclass.m"
                          {
#line 584 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 584 "prog_io_typeclass.m"
                          }
#line 584 "prog_io_typeclass.m"
                        }
#line 585 "prog_io_typeclass.m"
                      else
#line 586 "prog_io_typeclass.m"
                        {
#line 586 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 586 "prog_io_typeclass.m"
                          {
#line 586 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 586 "prog_io_typeclass.m"
                          }
#line 586 "prog_io_typeclass.m"
                        }
#line 581 "prog_io_typeclass.m"
                    }
#line 578 "prog_io_typeclass.m"
                }
#line 592 "prog_io_typeclass.m"
              else
#line 594 "prog_io_typeclass.m"
                {
#line 594 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Spec_42;
#line 594 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 594 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 594 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 594 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_63_63;

#line 596 "prog_io_typeclass.m"
                  {
#line 596 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6);
                  }
#line 596 "prog_io_typeclass.m"
                  {
#line 596 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_58_58));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[77])));
#line 596 "prog_io_typeclass.m"
                  }
#line 596 "prog_io_typeclass.m"
                  {
#line 596 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_57_57));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_typeclass.m"
                  }
#line 595 "prog_io_typeclass.m"
                  {
#line 595 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Spec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 595 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 595 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_56_56));
#line 595 "prog_io_typeclass.m"
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_42));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "prog_io_typeclass.m"
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_63_63));
#line 597 "prog_io_typeclass.m"
                  }
#line 594 "prog_io_typeclass.m"
                }
#line 592 "prog_io_typeclass.m"
            }
#line 573 "prog_io_typeclass.m"
        }
#line 546 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__TailTerms_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 542 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 544 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__HeadResult_9;
#line 542 "prog_io_typeclass.m"
        else
#line 540 "prog_io_typeclass.m"
          {
#line 540 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__HeadConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 540 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_20_20;

#line 541 "prog_io_typeclass.m"
            {
#line 541 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_10));
#line 541 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_typeclass.m"
            }
#line 541 "prog_io_typeclass.m"
            {
#line 541 "prog_io_typeclass.m"
              MR_Word base;
#line 541 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 541 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_20_20));
#line 541 "prog_io_typeclass.m"
            }
#line 540 "prog_io_typeclass.m"
          }
#line 546 "prog_io_typeclass.m"
      else
#line 547 "prog_io_typeclass.m"
        {
#line 547 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadTailTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 0)));
#line 547 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailTailTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 1)));
#line 547 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailResult_14;
#line 555 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailConstraints_15;
#line 555 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadConstraint_22;

#line 548 "prog_io_typeclass.m"
          {
#line 548 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_5, parse_tree__prog_io_typeclass__HeadTailTerm_12, parse_tree__prog_io_typeclass__TailTailTerms_13, &parse_tree__prog_io_typeclass__TailResult_14);
          }
#line 551 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 1)));
#line 551 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 551 "prog_io_typeclass.m"
            {
#line 551 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__HeadConstraint_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 552 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TailResult_14)) == (MR_mktag((MR_Integer) 1)));
#line 552 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 552 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__TailConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailResult_14, (MR_Integer) 0)));
#line 551 "prog_io_typeclass.m"
            }
#line 555 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 554 "prog_io_typeclass.m"
            {
#line 554 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 554 "prog_io_typeclass.m"
              {
#line 554 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_22)), parse_tree__prog_io_typeclass__TailConstraints_15);
              }
#line 554 "prog_io_typeclass.m"
              {
#line 554 "prog_io_typeclass.m"
                MR_Word base;
#line 554 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 554 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_16_16));
#line 554 "prog_io_typeclass.m"
              }
#line 554 "prog_io_typeclass.m"
            }
#line 555 "prog_io_typeclass.m"
          else
#line 556 "prog_io_typeclass.m"
            {
#line 556 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 556 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 556 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 556 "prog_io_typeclass.m"
              {
#line 556 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, parse_tree__prog_io_typeclass__HeadResult_9);
              }
#line 557 "prog_io_typeclass.m"
              {
#line 557 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__TailResult_14);
              }
#line 556 "prog_io_typeclass.m"
              {
#line 556 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_18_18, parse_tree__prog_io_typeclass__V_19_19);
              }
#line 556 "prog_io_typeclass.m"
              {
#line 556 "prog_io_typeclass.m"
                MR_Word base;
#line 556 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 556 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 556 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 556 "prog_io_typeclass.m"
              }
#line 556 "prog_io_typeclass.m"
            }
#line 547 "prog_io_typeclass.m"
        }
#line 535 "prog_io_typeclass.m"
    }
#line 532 "prog_io_typeclass.m"
  }
#line 532 "prog_io_typeclass.m"
}

#line 482 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 482 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 482 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 482 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 482 "prog_io_typeclass.m"
{
#line 485 "prog_io_typeclass.m"
  {
#line 485 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 485 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 485 "prog_io_typeclass.m"
      {
#line 485 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 485 "prog_io_typeclass.m"
        {
#line 485 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 485 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 485 "prog_io_typeclass.m"
      }
#line 485 "prog_io_typeclass.m"
    else
#line 487 "prog_io_typeclass.m"
      {
#line 487 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 487 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 487 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub0_9;

#line 488 "prog_io_typeclass.m"
        {
#line 488 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__ProgConstraints0_8, &parse_tree__prog_io_typeclass__InstVarSub0_9);
        }
#line 487 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 494 "prog_io_typeclass.m"
#line 494 "prog_io_typeclass.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) {
#line 494 "prog_io_typeclass.m"
            default:
#line 494 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 494 "prog_io_typeclass.m"
              break;
#line 494 "prog_io_typeclass.m"
            case (MR_Integer) 0:
#line 491 "prog_io_typeclass.m"
              {
#line 491 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 492 "prog_io_typeclass.m"
                {
#line 492 "prog_io_typeclass.m"
                  MR_Word base;
#line 492 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 492 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 492 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 492 "prog_io_typeclass.m"
                }
#line 493 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 491 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 491 "prog_io_typeclass.m"
              }
#line 494 "prog_io_typeclass.m"
              break;
#line 494 "prog_io_typeclass.m"
            case (MR_Integer) 1:
#line 495 "prog_io_typeclass.m"
              {
#line 495 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassConstraint_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 1);

#line 496 "prog_io_typeclass.m"
                {
#line 496 "prog_io_typeclass.m"
                  MR_Word base;
#line 496 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 496 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassConstraint_11));
#line 496 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 496 "prog_io_typeclass.m"
                }
#line 497 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 495 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 495 "prog_io_typeclass.m"
              }
#line 494 "prog_io_typeclass.m"
              break;
#line 494 "prog_io_typeclass.m"
            case (MR_Integer) 3:
#line 499 "prog_io_typeclass.m"
              {
#line 499 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 0)));
#line 499 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 1)));

#line 500 "prog_io_typeclass.m"
                {
#line 500 "prog_io_typeclass.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_12)), ((MR_Box) (parse_tree__prog_io_typeclass__Inst_13)), parse_tree__prog_io_typeclass__InstVarSub0_9, parse_tree__prog_io_typeclass__HeadVar__3_3);
                }
#line 501 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 499 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 499 "prog_io_typeclass.m"
              }
#line 494 "prog_io_typeclass.m"
              break;
#line 494 "prog_io_typeclass.m"
          }
#line 487 "prog_io_typeclass.m"
      }
#line 485 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 485 "prog_io_typeclass.m"
  }
#line 482 "prog_io_typeclass.m"
}

#line 453 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 453 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 453 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3)
#line 453 "prog_io_typeclass.m"
{
#line 456 "prog_io_typeclass.m"
  {
#line 456 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 456 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 456 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 456 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 456 "prog_io_typeclass.m"
  }
#line 453 "prog_io_typeclass.m"
}

#line 357 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 357 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 357 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 357 "prog_io_typeclass.m"
{
#line 360 "prog_io_typeclass.m"
  {
#line 360 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 360 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 360 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 360 "prog_io_typeclass.m"
    else
#line 361 "prog_io_typeclass.m"
      {
#line 361 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Item_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 370 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemPredDecl_9;

#line 362 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 362 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 362 "prog_io_typeclass.m"
          {
#line 362 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 365 "prog_io_typeclass.m"
            {
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 0)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 1)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ArgDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 2)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 3)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 4)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__MaybeDetism_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 5)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 7)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__InstVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 8)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 9)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 10)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 11)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 12)));
#line 365 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassMethod_24;
#line 363 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass___Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 6)));
#line 363 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass___SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 13)));

#line 366 "prog_io_typeclass.m"
              {
#line 366 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ClassMethod_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_10));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PorF_11));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgDecls_12));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithType_13));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_14));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_15));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeVarSet_17));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_18));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ExistQVars_19));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 9) = ((MR_Box) (parse_tree__prog_io_typeclass__Purity_20));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 10) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_21));
#line 366 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 11) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_22));
#line 366 "prog_io_typeclass.m"
              }
#line 369 "prog_io_typeclass.m"
              {
#line 369 "prog_io_typeclass.m"
                MR_Word base;
#line 369 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 369 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_24));
#line 369 "prog_io_typeclass.m"
              }
#line 365 "prog_io_typeclass.m"
            }
#line 362 "prog_io_typeclass.m"
          }
#line 362 "prog_io_typeclass.m"
        else
#line 376 "prog_io_typeclass.m"
          {
#line 376 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemModeDecl_25;

#line 370 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 370 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 370 "prog_io_typeclass.m"
              {
#line 370 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemModeDecl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 372 "prog_io_typeclass.m"
                {
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybePorF_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 1)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 2)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Name_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 0)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__WithInst_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 3)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybeDetism_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 4)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__InstVarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 5)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 6)));
#line 372 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethod_56;
#line 371 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 7)));

#line 373 "prog_io_typeclass.m"
                  {
#line 373 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethod_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_50));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybePorF_26));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgModes_27));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_51));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_52));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_53));
#line 373 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_54));
#line 373 "prog_io_typeclass.m"
                  }
#line 375 "prog_io_typeclass.m"
                  {
#line 375 "prog_io_typeclass.m"
                    MR_Word base;
#line 375 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 375 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_56));
#line 375 "prog_io_typeclass.m"
                  }
#line 372 "prog_io_typeclass.m"
                }
#line 370 "prog_io_typeclass.m"
              }
#line 370 "prog_io_typeclass.m"
            else
#line 378 "prog_io_typeclass.m"
              {
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_29;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_42_42;
#line 378 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_2);
                }
#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[76])));
#line 380 "prog_io_typeclass.m"
                }
#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_io_typeclass.m"
                }
#line 379 "prog_io_typeclass.m"
                {
#line 379 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 379 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 379 "prog_io_typeclass.m"
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_29));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_typeclass.m"
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  MR_Word base;
#line 381 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 381 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 381 "prog_io_typeclass.m"
                }
#line 378 "prog_io_typeclass.m"
              }
#line 376 "prog_io_typeclass.m"
          }
#line 361 "prog_io_typeclass.m"
      }
#line 360 "prog_io_typeclass.m"
  }
#line 357 "prog_io_typeclass.m"
}

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 308 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 308 "prog_io_typeclass.m"
{
#line 308 "prog_io_typeclass.m"
  {
#line 308 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 308 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_56;

#line 308 "prog_io_typeclass.m"
    {
#line 308 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__308__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_56);
    }
#line 308 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_56));
#line 308 "prog_io_typeclass.m"
  }
#line 308 "prog_io_typeclass.m"
}

#line 297 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 297 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 297 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 297 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12)
#line 297 "prog_io_typeclass.m"
{
#line 301 "prog_io_typeclass.m"
  {
#line 301 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 301 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 301 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_54_54 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 301 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 301 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 303 "prog_io_typeclass.m"
    {
#line 303 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__TypeCtorInfo_54_54, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 304 "prog_io_typeclass.m"
    {
#line 304 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_54_54, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 329 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 330 "prog_io_typeclass.m"
      {
#line 330 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 331 "prog_io_typeclass.m"
        {
#line 331 "prog_io_typeclass.m"
          MR_Word base;
#line 331 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 331 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_26));
#line 331 "prog_io_typeclass.m"
        }
#line 330 "prog_io_typeclass.m"
      }
#line 329 "prog_io_typeclass.m"
    else
#line 307 "prog_io_typeclass.m"
      {
#line 307 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 307 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 307 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 307 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars_18;
#line 321 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Vars_19;
#line 310 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SortedTermVars_20;
#line 310 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__NumSortedTermVars_21;
#line 310 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__NumTermVars_22;

#line 308 "prog_io_typeclass.m"
        {
#line 308 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_60_60, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[4], parse_tree__prog_io_typeclass__TermVars0_17, &parse_tree__prog_io_typeclass__TermVars_18);
        }
#line 310 "prog_io_typeclass.m"
        {
#line 310 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__Vars_19);
        }
#line 310 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 310 "prog_io_typeclass.m"
          {
#line 311 "prog_io_typeclass.m"
            {
#line 311 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 312 "prog_io_typeclass.m"
            {
#line 312 "prog_io_typeclass.m"
              mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__SortedTermVars_20, &parse_tree__prog_io_typeclass__NumSortedTermVars_21);
            }
#line 313 "prog_io_typeclass.m"
            {
#line 313 "prog_io_typeclass.m"
              mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__NumTermVars_22);
            }
#line 314 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__NumSortedTermVars_21 == parse_tree__prog_io_typeclass__NumTermVars_22);
#line 310 "prog_io_typeclass.m"
          }
#line 321 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 319 "prog_io_typeclass.m"
          {
#line 319 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_23;

#line 318 "prog_io_typeclass.m"
            {
#line 318 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__TypeClassInfo_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_19));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 318 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_23, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 318 "prog_io_typeclass.m"
            }
#line 320 "prog_io_typeclass.m"
            {
#line 320 "prog_io_typeclass.m"
              MR_Word base;
#line 320 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 320 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_23));
#line 320 "prog_io_typeclass.m"
            }
#line 319 "prog_io_typeclass.m"
          }
#line 321 "prog_io_typeclass.m"
        else
#line 323 "prog_io_typeclass.m"
          {
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_25;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 323 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_51_51;

#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_46_46 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_54_54, parse_tree__prog_io_typeclass__NameTerm_8);
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_46_46));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 326 "prog_io_typeclass.m"
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
            }
#line 325 "prog_io_typeclass.m"
            {
#line 325 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 325 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 325 "prog_io_typeclass.m"
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_25));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              MR_Word base;
#line 327 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_51_51));
#line 327 "prog_io_typeclass.m"
            }
#line 323 "prog_io_typeclass.m"
          }
#line 307 "prog_io_typeclass.m"
      }
#line 301 "prog_io_typeclass.m"
  }
#line 297 "prog_io_typeclass.m"
}

#line 279 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 279 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 279 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 279 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 279 "prog_io_typeclass.m"
{
#line 282 "prog_io_typeclass.m"
  {
#line 282 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 282 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "prog_io_typeclass.m"
      {
#line 282 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 282 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 282 "prog_io_typeclass.m"
      }
#line 282 "prog_io_typeclass.m"
    else
#line 284 "prog_io_typeclass.m"
      {
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 284 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_9;

#line 285 "prog_io_typeclass.m"
        {
#line 285 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__SimpleConstraints0_8, &parse_tree__prog_io_typeclass__FunDeps0_9);
        }
#line 284 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 291 "prog_io_typeclass.m"
          {
#line 291 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 292 "prog_io_typeclass.m"
              {
#line 292 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 2);

#line 293 "prog_io_typeclass.m"
                {
#line 293 "prog_io_typeclass.m"
                  MR_Word base;
#line 293 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 293 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_11));
#line 293 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_9));
#line 293 "prog_io_typeclass.m"
                }
#line 294 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 292 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 292 "prog_io_typeclass.m"
              }
#line 291 "prog_io_typeclass.m"
            else
#line 291 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 288 "prog_io_typeclass.m"
              {
#line 288 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 289 "prog_io_typeclass.m"
                {
#line 289 "prog_io_typeclass.m"
                  MR_Word base;
#line 289 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 289 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 289 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_8));
#line 289 "prog_io_typeclass.m"
                }
#line 290 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__FunDeps0_9;
#line 288 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 288 "prog_io_typeclass.m"
              }
#line 291 "prog_io_typeclass.m"
            else
#line 291 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 291 "prog_io_typeclass.m"
          }
#line 284 "prog_io_typeclass.m"
      }
#line 282 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 282 "prog_io_typeclass.m"
  }
#line 279 "prog_io_typeclass.m"
}

#line 248 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 248 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1)
#line 248 "prog_io_typeclass.m"
{
#line 250 "prog_io_typeclass.m"
  {
#line 250 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 250 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 250 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));

#line 250 "prog_io_typeclass.m"
    {
#line 250 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Domain_3, parse_tree__prog_io_typeclass__Range_4);
    }
#line 250 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 250 "prog_io_typeclass.m"
  }
#line 248 "prog_io_typeclass.m"
}

#line 246 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 246 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 246 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 246 "prog_io_typeclass.m"
{
#line 246 "prog_io_typeclass.m"
  {
#line 246 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 246 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 246 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_2;

#line 246 "prog_io_typeclass.m"
    {
#line 246 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__2_2 = parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 246 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_2));
#line 246 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 246 "prog_io_typeclass.m"
  }
#line 246 "prog_io_typeclass.m"
}

#line 244 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 244 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3)
#line 244 "prog_io_typeclass.m"
{
#line 246 "prog_io_typeclass.m"
  {
#line 246 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 246 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 246 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 246 "prog_io_typeclass.m"
    {
#line 246 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_4_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[3], parse_tree__prog_io_typeclass__FunDeps_3);
    }
#line 246 "prog_io_typeclass.m"
    {
#line 246 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_4_4);
    }
#line 246 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 246 "prog_io_typeclass.m"
  }
#line 244 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 198 "prog_io_typeclass.m"
{
#line 198 "prog_io_typeclass.m"
  {
#line 198 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 198 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 198 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv1_HeadVar__3_161;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv1_HeadVar__3_161 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 198 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv1_HeadVar__3_161));
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 195 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 195 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 195 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 195 "prog_io_typeclass.m"
{
#line 195 "prog_io_typeclass.m"
  {
#line 195 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 195 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 195 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__3_158;

#line 195 "prog_io_typeclass.m"
    {
#line 195 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__3_158 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__195__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 195 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__3_158));
#line 195 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 195 "prog_io_typeclass.m"
  }
#line 195 "prog_io_typeclass.m"
}

#line 156 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 156 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 156 "prog_io_typeclass.m"
{
#line 156 "prog_io_typeclass.m"
  {
#line 156 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 156 "prog_io_typeclass.m"
    {
#line 156 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__156__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 156 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 156 "prog_io_typeclass.m"
  }
#line 156 "prog_io_typeclass.m"
}

#line 154 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 154 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 154 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 154 "prog_io_typeclass.m"
{
#line 154 "prog_io_typeclass.m"
  {
#line 154 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 154 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 154 "prog_io_typeclass.m"
    {
#line 154 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__154__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 154 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 154 "prog_io_typeclass.m"
  }
#line 154 "prog_io_typeclass.m"
}

#line 127 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 127 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 127 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 127 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 127 "prog_io_typeclass.m"
{
#line 132 "prog_io_typeclass.m"
  {
#line 132 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 132 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 132 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;

#line 133 "prog_io_typeclass.m"
    {
#line 133 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 134 "prog_io_typeclass.m"
    {
#line 134 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__ConstraintsTerm_10, &parse_tree__prog_io_typeclass__MaybeParsedConstraints_16);
    }
#line 239 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
#line 240 "prog_io_typeclass.m"
      {
#line 240 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));

#line 241 "prog_io_typeclass.m"
        {
#line 241 "prog_io_typeclass.m"
          MR_Word base;
#line 241 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 241 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_59));
#line 241 "prog_io_typeclass.m"
        }
#line 240 "prog_io_typeclass.m"
      }
#line 239 "prog_io_typeclass.m"
    else
#line 137 "prog_io_typeclass.m"
      {
#line 137 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));
#line 137 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 1)));
#line 137 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;

#line 138 "prog_io_typeclass.m"
        {
#line 138 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_15, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19);
        }
#line 143 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
#line 142 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;
#line 143 "prog_io_typeclass.m"
        else
#line 144 "prog_io_typeclass.m"
          {
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_149_149;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19, (MR_Integer) 0)));
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintVars_22;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedConstraintVars_23;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepVars_24;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedFunDepVars_25;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Params_26;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParams_28;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepNotInParams_30;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintErrorContext_33;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepErrorContext_36;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NotInParams_37;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 144 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_167_167;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_168_168;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_169_169;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_170_170;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 144 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_117_117;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_118_118;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_119_119;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_120_120;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_121_121;
#line 153 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_122_122;
#line 153 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_123_123;
#line 154 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___ConstraintInParams_27;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___FunDepInParams_29;
#line 187 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_171_171;
#line 187 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_172_172;

#line 148 "prog_io_typeclass.m"
            {
#line 148 "prog_io_typeclass.m"
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__ConstraintList_17, &parse_tree__prog_io_typeclass__ConstraintVars_22);
            }
#line 8219 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeInfo_149_149 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 149 "prog_io_typeclass.m"
            {
#line 149 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__ConstraintVars_22, &parse_tree__prog_io_typeclass__SortedConstraintVars_23);
            }
#line 150 "prog_io_typeclass.m"
            {
#line 150 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepVars_24 = parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(parse_tree__prog_io_typeclass__FunDeps_18);
            }
#line 151 "prog_io_typeclass.m"
            {
#line 151 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__FunDepVars_24, &parse_tree__prog_io_typeclass__SortedFunDepVars_25);
            }
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 153 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 154 "prog_io_typeclass.m"
            {
#line 154 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 154 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1));
#line 154 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 154 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 154 "prog_io_typeclass.m"
            }
#line 154 "prog_io_typeclass.m"
            {
#line 154 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__SortedConstraintVars_23, &parse_tree__prog_io_typeclass___ConstraintInParams_27, &parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
            }
#line 156 "prog_io_typeclass.m"
            {
#line 156 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 156 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 156 "prog_io_typeclass.m"
            }
#line 156 "prog_io_typeclass.m"
            {
#line 156 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__V_61_61, parse_tree__prog_io_typeclass__SortedFunDepVars_25, &parse_tree__prog_io_typeclass___FunDepInParams_29, &parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 167 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "prog_io_typeclass.m"
            else
#line 163 "prog_io_typeclass.m"
              {
#line 160 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_62_62;

#line 160 "prog_io_typeclass.m"
                {
#line 160 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_typeclass__ConstraintList_17);
                }
#line 160 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_62_62 == (MR_Integer) 1);
#line 163 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 161 "prog_io_typeclass.m"
                  {
#line 162 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[59]);
#line 161 "prog_io_typeclass.m"
                  }
#line 163 "prog_io_typeclass.m"
                else
#line 164 "prog_io_typeclass.m"
                  {
#line 165 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[61]);
#line 164 "prog_io_typeclass.m"
                  }
#line 163 "prog_io_typeclass.m"
              }
#line 180 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 181 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "prog_io_typeclass.m"
            else
#line 176 "prog_io_typeclass.m"
              {
#line 173 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_69_69;

#line 173 "prog_io_typeclass.m"
                {
#line 173 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__prog_io_typeclass__FunDeps_18);
                }
#line 173 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_69_69 == (MR_Integer) 1);
#line 176 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 174 "prog_io_typeclass.m"
                  {
#line 175 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[63]);
#line 174 "prog_io_typeclass.m"
                  }
#line 176 "prog_io_typeclass.m"
                else
#line 177 "prog_io_typeclass.m"
                  {
#line 178 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[65]);
#line 177 "prog_io_typeclass.m"
                  }
#line 176 "prog_io_typeclass.m"
              }
#line 184 "prog_io_typeclass.m"
            {
#line 184 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__ConstraintNotInParams_28, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 187 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 191 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "prog_io_typeclass.m"
              {
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemTypeClass_38;
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_124_124 = parse_tree__prog_io_typeclass__V_174_174;
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_125_125 = parse_tree__prog_io_typeclass__V_173_173;
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_128_128 = parse_tree__prog_io_typeclass__V_170_170;
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_129_129 = parse_tree__prog_io_typeclass__V_169_169;
#line 186 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_130_130 = parse_tree__prog_io_typeclass__V_168_168;
#line 186 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_131_131 = parse_tree__prog_io_typeclass__V_167_167;

#line 187 "prog_io_typeclass.m"
                {
#line 187 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_124_124));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_125_125));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_18));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 187 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_131_131));
#line 187 "prog_io_typeclass.m"
                }
#line 190 "prog_io_typeclass.m"
                {
#line 190 "prog_io_typeclass.m"
                  MR_Word base;
#line 190 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 190 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClass_38));
#line 190 "prog_io_typeclass.m"
                }
#line 186 "prog_io_typeclass.m"
              }
#line 191 "prog_io_typeclass.m"
            else
#line 192 "prog_io_typeclass.m"
              {
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_166_166;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Prefix_46;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Suffix_47;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Middle_50;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_57;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_58;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_77_77;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_102_102;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_108_108;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_109_109;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_111_111;
#line 192 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_114_114;
#line 204 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_78_78;

#line 195 "prog_io_typeclass.m"
                {
#line 195 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 195 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_6[0]));
#line 195 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3));
#line 195 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 195 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 195 "prog_io_typeclass.m"
                }
#line 194 "prog_io_typeclass.m"
                {
#line 194 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__TypeCtorInfo_156_156, parse_tree__prog_io_typeclass__V_76_76, parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
                }
#line 198 "prog_io_typeclass.m"
                {
#line 198 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_6[0]));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 198 "prog_io_typeclass.m"
                }
#line 197 "prog_io_typeclass.m"
                {
#line 197 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__TypeCtorInfo_156_156, parse_tree__prog_io_typeclass__V_77_77, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
                }
#line 200 "prog_io_typeclass.m"
                {
#line 200 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42);
                }
#line 202 "prog_io_typeclass.m"
                {
#line 202 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43);
                }
#line 204 "prog_io_typeclass.m"
                {
#line 204 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_78_78 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__NotInParams_37);
                }
#line 204 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_78_78 == (MR_Integer) 1);
#line 207 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 205 "prog_io_typeclass.m"
                  {
#line 205 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[67]);
#line 206 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[69]);
#line 205 "prog_io_typeclass.m"
                  }
#line 207 "prog_io_typeclass.m"
                else
#line 208 "prog_io_typeclass.m"
                  {
#line 208 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[71]);
#line 209 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[73]);
#line 208 "prog_io_typeclass.m"
                  }
#line 215 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "prog_io_typeclass.m"
                    {
#line 214 "prog_io_typeclass.m"
                      {
#line 214 "prog_io_typeclass.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_typeclass", (MR_String) "predicate \140parse_tree.prog_io_typeclass.parse_constrained_class\'/7", (MR_String) "no NotInParams");
#line 214 "prog_io_typeclass.m"
                        return;
                      }
#line 212 "prog_io_typeclass.m"
                    }
#line 215 "prog_io_typeclass.m"
                  else
#line 216 "prog_io_typeclass.m"
                    {
#line 218 "prog_io_typeclass.m"
                      {
#line 218 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 216 "prog_io_typeclass.m"
                    }
#line 215 "prog_io_typeclass.m"
                else
#line 215 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "prog_io_typeclass.m"
                  {
#line 223 "prog_io_typeclass.m"
                    {
#line 223 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__ConstraintErrorContext_33);
                    }
#line 221 "prog_io_typeclass.m"
                  }
#line 215 "prog_io_typeclass.m"
                else
#line 226 "prog_io_typeclass.m"
                  {
#line 226 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 226 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_91_91;
#line 226 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_92_92;
#line 226 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_97_97;

#line 231 "prog_io_typeclass.m"
                    {
#line 231 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                    }
#line 230 "prog_io_typeclass.m"
                    {
#line 230 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[75]), parse_tree__prog_io_typeclass__V_97_97);
                    }
#line 230 "prog_io_typeclass.m"
                    {
#line 230 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__ConstraintErrorContext_33, parse_tree__prog_io_typeclass__V_92_92);
                    }
#line 229 "prog_io_typeclass.m"
                    {
#line 229 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__V_91_91);
                    }
#line 226 "prog_io_typeclass.m"
                  }
#line 8634 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 233 "prog_io_typeclass.m"
                {
#line 233 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_102_102 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10]));
                }
#line 233 "prog_io_typeclass.m"
                {
#line 233 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_101_101 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Middle_50, parse_tree__prog_io_typeclass__V_102_102);
                }
#line 233 "prog_io_typeclass.m"
                {
#line 233 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Prefix_46, parse_tree__prog_io_typeclass__V_101_101);
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_57));
#line 235 "prog_io_typeclass.m"
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_111_111));
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_typeclass.m"
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_12));
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 235 "prog_io_typeclass.m"
                }
#line 235 "prog_io_typeclass.m"
                {
#line 235 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_109_109));
#line 235 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 235 "prog_io_typeclass.m"
                }
#line 234 "prog_io_typeclass.m"
                {
#line 234 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 234 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_108_108));
#line 234 "prog_io_typeclass.m"
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_58));
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "prog_io_typeclass.m"
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  MR_Word base;
#line 236 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 236 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_114_114));
#line 236 "prog_io_typeclass.m"
                }
#line 192 "prog_io_typeclass.m"
              }
#line 144 "prog_io_typeclass.m"
          }
#line 137 "prog_io_typeclass.m"
      }
#line 132 "prog_io_typeclass.m"
  }
#line 127 "prog_io_typeclass.m"
}

#line 308 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 308 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 308 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 308 "prog_io_typeclass.m"
{
#line 308 "prog_io_typeclass.m"
  {
#line 308 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 308 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_56;

#line 308 "prog_io_typeclass.m"
    {
#line 308 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__308__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_56);
    }
#line 308 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_56));
#line 308 "prog_io_typeclass.m"
  }
#line 308 "prog_io_typeclass.m"
}

#line 113 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 113 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 113 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 113 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 113 "prog_io_typeclass.m"
{
#line 121 "prog_io_typeclass.m"
  {
#line 121 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 118 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_18_18;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 118 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 118 "prog_io_typeclass.m"
      {
#line 118 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 118 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 118 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 118 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 118 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 118 "prog_io_typeclass.m"
          {
#line 118 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_17_17, (MR_Integer) 0)));
#line 118 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_18_18, (MR_String) "<=") == 0);
#line 118 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 118 "prog_io_typeclass.m"
              {
#line 118 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 118 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 118 "prog_io_typeclass.m"
                  {
#line 118 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 118 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 118 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 118 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 118 "prog_io_typeclass.m"
                      {
#line 118 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 118 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 118 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 118 "prog_io_typeclass.m"
                      }
#line 118 "prog_io_typeclass.m"
                  }
#line 118 "prog_io_typeclass.m"
              }
#line 118 "prog_io_typeclass.m"
          }
#line 118 "prog_io_typeclass.m"
      }
#line 121 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 119 "prog_io_typeclass.m"
      {
#line 119 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
#line 119 "prog_io_typeclass.m"
        return;
      }
#line 121 "prog_io_typeclass.m"
    else
#line 122 "prog_io_typeclass.m"
      {
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_70;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_54_71;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_16;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_31;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_32;

#line 122 "prog_io_typeclass.m"
        {
#line 122 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_16);
        }
#line 8887 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_53_70 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 8889 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_54_71 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 303 "prog_io_typeclass.m"
        {
#line 303 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__TypeCtorInfo_54_71, parse_tree__prog_io_typeclass__TVarSet_16, &parse_tree__prog_io_typeclass__VarSet_31);
        }
#line 304 "prog_io_typeclass.m"
        {
#line 304 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_54_71, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_31, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_32);
        }
#line 329 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_32)) == (MR_mktag((MR_Integer) 0))))
#line 330 "prog_io_typeclass.m"
          {
#line 330 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));

#line 331 "prog_io_typeclass.m"
            {
#line 331 "prog_io_typeclass.m"
              MR_Word base;
#line 331 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 331 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_43));
#line 331 "prog_io_typeclass.m"
            }
#line 330 "prog_io_typeclass.m"
          }
#line 329 "prog_io_typeclass.m"
        else
#line 307 "prog_io_typeclass.m"
          {
#line 307 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_60_77 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 307 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));
#line 307 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 1)));
#line 307 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars_35;
#line 321 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Vars_36;
#line 310 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedTermVars_37;
#line 310 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__NumSortedTermVars_38;
#line 310 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__NumTermVars_39;

#line 308 "prog_io_typeclass.m"
            {
#line 308 "prog_io_typeclass.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_60_77, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[2], parse_tree__prog_io_typeclass__TermVars0_34, &parse_tree__prog_io_typeclass__TermVars_35);
            }
#line 310 "prog_io_typeclass.m"
            {
#line 310 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__Vars_36);
            }
#line 310 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 310 "prog_io_typeclass.m"
              {
#line 311 "prog_io_typeclass.m"
                {
#line 311 "prog_io_typeclass.m"
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_77, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 312 "prog_io_typeclass.m"
                {
#line 312 "prog_io_typeclass.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_77, parse_tree__prog_io_typeclass__SortedTermVars_37, &parse_tree__prog_io_typeclass__NumSortedTermVars_38);
                }
#line 313 "prog_io_typeclass.m"
                {
#line 313 "prog_io_typeclass.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_60_77, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__NumTermVars_39);
                }
#line 314 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__NumSortedTermVars_38 == parse_tree__prog_io_typeclass__NumTermVars_39);
#line 310 "prog_io_typeclass.m"
              }
#line 321 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 319 "prog_io_typeclass.m"
              {
#line 319 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_40;

#line 318 "prog_io_typeclass.m"
                {
#line 318 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__TypeClassInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_33));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_36));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_16));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 318 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_40, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 318 "prog_io_typeclass.m"
                }
#line 320 "prog_io_typeclass.m"
                {
#line 320 "prog_io_typeclass.m"
                  MR_Word base;
#line 320 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 320 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_40));
#line 320 "prog_io_typeclass.m"
                }
#line 319 "prog_io_typeclass.m"
              }
#line 321 "prog_io_typeclass.m"
            else
#line 323 "prog_io_typeclass.m"
              {
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_42;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_63_63;
#line 323 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_68_68;

#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_63_63 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_54_71, parse_tree__prog_io_typeclass__Arg_8);
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_63_63));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 326 "prog_io_typeclass.m"
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_62_62));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
                }
#line 325 "prog_io_typeclass.m"
                {
#line 325 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 325 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 325 "prog_io_typeclass.m"
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_42));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  MR_Word base;
#line 327 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 327 "prog_io_typeclass.m"
                }
#line 323 "prog_io_typeclass.m"
              }
#line 307 "prog_io_typeclass.m"
          }
#line 122 "prog_io_typeclass.m"
      }
#line 121 "prog_io_typeclass.m"
  }
#line 113 "prog_io_typeclass.m"
}

#line 342 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 342 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 342 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 342 "prog_io_typeclass.m"
{
#line 342 "prog_io_typeclass.m"
  {
#line 342 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 342 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__4_18;

#line 342 "prog_io_typeclass.m"
    {
#line 342 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__342__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__4_18);
    }
#line 342 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_18));
#line 342 "prog_io_typeclass.m"
  }
#line 342 "prog_io_typeclass.m"
}

#line 87 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 87 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 87 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 87 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 87 "prog_io_typeclass.m"
{
#line 91 "prog_io_typeclass.m"
  {
#line 91 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 91 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 9159 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__MethodList_47;

#line 92 "prog_io_typeclass.m"
    {
#line 92 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 340 "prog_io_typeclass.m"
    {
#line 340 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_10, &parse_tree__prog_io_typeclass__MethodList_47);
    }
#line 9172 "parse_tree.prog_io_typeclass.c"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 9174 "parse_tree.prog_io_typeclass.c"
      {
#line 9176 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Interface_51;
#line 9178 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 9180 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Methods_82;
#line 9182 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Specs_83;

#line 342 "prog_io_typeclass.m"
        {
#line 342 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[1]));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_8));
#line 342 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_11));
#line 342 "prog_io_typeclass.m"
        }
#line 342 "prog_io_typeclass.m"
        {
#line 342 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[4], parse_tree__prog_io_typeclass__V_54_54, parse_tree__prog_io_typeclass__MethodList_47, &parse_tree__prog_io_typeclass__Interface_51);
        }
#line 391 "prog_io_typeclass.m"
        {
#line 391 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_83);
        }
#line 9211 "parse_tree.prog_io_typeclass.c"
        if ((parse_tree__prog_io_typeclass__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9213 "parse_tree.prog_io_typeclass.c"
          {
#line 9215 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;

#line 97 "prog_io_typeclass.m"
            {
#line 97 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Name_9, parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18);
            }
#line 102 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18)) == (MR_mktag((MR_Integer) 0))))
#line 101 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;
#line 102 "prog_io_typeclass.m"
            else
#line 103 "prog_io_typeclass.m"
              {
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ParsedNameAndVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18, (MR_Integer) 0)));
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 103 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 103 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_32_32;
#line 104 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 104 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 105 "prog_io_typeclass.m"
                {
#line 105 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 105 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_82));
#line 105 "prog_io_typeclass.m"
                }
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 0)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 1)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 2)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 3)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 4)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 5)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 6)));
#line 104 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 7)));
#line 104 "prog_io_typeclass.m"
                {
#line 104 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_25_25));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_15));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 104 "prog_io_typeclass.m"
                }
#line 104 "prog_io_typeclass.m"
                {
#line 104 "prog_io_typeclass.m"
                  MR_Word base;
#line 104 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 104 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_21_21));
#line 104 "prog_io_typeclass.m"
                }
#line 103 "prog_io_typeclass.m"
              }
#line 9314 "parse_tree.prog_io_typeclass.c"
          }
#line 9316 "parse_tree.prog_io_typeclass.c"
        else
#line 9318 "parse_tree.prog_io_typeclass.c"
          {
#line 9320 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_89;

#line 397 "prog_io_typeclass.m"
            {
#line 397 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedMethods_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_83));
#line 397 "prog_io_typeclass.m"
            }
#line 110 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_89;
#line 9333 "parse_tree.prog_io_typeclass.c"
          }
#line 9335 "parse_tree.prog_io_typeclass.c"
      }
#line 9337 "parse_tree.prog_io_typeclass.c"
    else
#line 9339 "parse_tree.prog_io_typeclass.c"
      {
#line 9341 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Spec_53;
#line 9343 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 9345 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 9347 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 9349 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 9351 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_88;

#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_67_67 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_10);
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[54])));
#line 353 "prog_io_typeclass.m"
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_typeclass.m"
        }
#line 352 "prog_io_typeclass.m"
        {
#line 352 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 352 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 352 "prog_io_typeclass.m"
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_53));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "prog_io_typeclass.m"
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__MaybeParsedMethods_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_88, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 354 "prog_io_typeclass.m"
        }
#line 110 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_88;
#line 9411 "parse_tree.prog_io_typeclass.c"
      }
#line 91 "prog_io_typeclass.m"
  }
#line 87 "prog_io_typeclass.m"
}

#line 50 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 50 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 50 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 50 "prog_io_typeclass.m"
{
#line 459 "prog_io_typeclass.m"
  {
#line 459 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 459 "prog_io_typeclass.m"
    {
#line 459 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 459 "prog_io_typeclass.m"
      return;
    }
#line 459 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 45 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_constraints_4_p_0(
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 45 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 45 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 45 "prog_io_typeclass.m"
{
#line 419 "prog_io_typeclass.m"
  {
#line 419 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 419 "prog_io_typeclass.m"
    {
#line 419 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 419 "prog_io_typeclass.m"
      return;
    }
#line 419 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 819 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 819 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 819 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 819 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 819 "prog_io_typeclass.m"
{
#line 819 "prog_io_typeclass.m"
  {
#line 819 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 819 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8;

#line 819 "prog_io_typeclass.m"
    {
#line 819 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8);
    }
#line 819 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8));
#line 819 "prog_io_typeclass.m"
  }
#line 819 "prog_io_typeclass.m"
}

#line 38 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0(
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeClassTerm_9,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 38 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 38 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_12)
#line 38 "prog_io_typeclass.m"
{
#line 647 "prog_io_typeclass.m"
  {
#line 647 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 647 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_24_24;
#line 647 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_25_25;
#line 647 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 647 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_14;
#line 647 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 655 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_15;
#line 655 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_16;
#line 652 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 652 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_20_20;
#line 652 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 652 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 652 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 652 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;

#line 650 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 650 "prog_io_typeclass.m"
      {
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 647 "prog_io_typeclass.m"
          {
#line 9570 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 9572 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 651 "prog_io_typeclass.m"
            {
#line 651 "prog_io_typeclass.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_24_24, parse_tree__prog_io_typeclass__TypeCtorInfo_25_25, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_14);
            }
#line 652 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 652 "prog_io_typeclass.m"
              {
#line 652 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 652 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 652 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 652 "prog_io_typeclass.m"
                  {
#line 652 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_20_20, (MR_String) "where") == 0);
#line 652 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 652 "prog_io_typeclass.m"
                      {
#line 652 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 652 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 652 "prog_io_typeclass.m"
                          {
#line 652 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 652 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 652 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 652 "prog_io_typeclass.m"
                              {
#line 652 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 0)));
#line 652 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 1)));
#line 652 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 652 "prog_io_typeclass.m"
                              }
#line 652 "prog_io_typeclass.m"
                          }
#line 652 "prog_io_typeclass.m"
                      }
#line 652 "prog_io_typeclass.m"
                  }
#line 652 "prog_io_typeclass.m"
              }
#line 655 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 9639 "parse_tree.prog_io_typeclass.c"
              {
#line 9641 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MethodList_56;

#line 817 "prog_io_typeclass.m"
                {
#line 817 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_16, &parse_tree__prog_io_typeclass__MethodList_56);
                }
#line 9649 "parse_tree.prog_io_typeclass.c"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 9651 "parse_tree.prog_io_typeclass.c"
                  {
#line 9653 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Interface_57;
#line 9655 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 9657 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Methods_85;
#line 9659 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Specs_86;

#line 819 "prog_io_typeclass.m"
                    {
#line 819 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 819 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[0]));
#line 819 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_instance_6_p_0_1));
#line 819 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 819 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 819 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_8));
#line 819 "prog_io_typeclass.m"
                    }
#line 819 "prog_io_typeclass.m"
                    {
#line 819 "prog_io_typeclass.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__MethodList_56, &parse_tree__prog_io_typeclass__Interface_57);
                    }
#line 391 "prog_io_typeclass.m"
                    {
#line 391 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_86);
                    }
#line 9688 "parse_tree.prog_io_typeclass.c"
                    if ((parse_tree__prog_io_typeclass__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9690 "parse_tree.prog_io_typeclass.c"
                      {
#line 9692 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_36;

#line 753 "prog_io_typeclass.m"
                        {
#line 753 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_36);
                        }
#line 758 "prog_io_typeclass.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_36)) == (MR_mktag((MR_Integer) 0))))
#line 757 "prog_io_typeclass.m"
                          *parse_tree__prog_io_typeclass__Result_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_36;
#line 758 "prog_io_typeclass.m"
                        else
#line 759 "prog_io_typeclass.m"
                          {
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_36, (MR_Integer) 0)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 0)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__NameString_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 1)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Types_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 2)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__OriginalTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 3)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ModName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 6)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__InstanceContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 7)));
#line 759 "prog_io_typeclass.m"
                            MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 8)));
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance_48;
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance1_49;
#line 759 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 762 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 4)));
#line 762 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 5)));

#line 767 "prog_io_typeclass.m"
                            {
#line 767 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_85));
#line 767 "prog_io_typeclass.m"
                            }
#line 765 "prog_io_typeclass.m"
                            {
#line 765 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__ItemInstance_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_39));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__NameString_40));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_41));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_42));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_45));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_46));
#line 765 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_47));
#line 765 "prog_io_typeclass.m"
                            }
#line 769 "prog_io_typeclass.m"
                            {
#line 769 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__MaybeItemInstance1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance1_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_48));
#line 769 "prog_io_typeclass.m"
                            }
#line 770 "prog_io_typeclass.m"
                            {
#line 770 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(parse_tree__prog_io_typeclass__MaybeItemInstance1_49, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__Result_12);
                            }
#line 759 "prog_io_typeclass.m"
                          }
#line 9782 "parse_tree.prog_io_typeclass.c"
                      }
#line 9784 "parse_tree.prog_io_typeclass.c"
                    else
#line 9786 "parse_tree.prog_io_typeclass.c"
                      {
#line 9788 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_92;

#line 397 "prog_io_typeclass.m"
                        {
#line 397 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__MaybeParsedMethods_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 397 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_92, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_86));
#line 397 "prog_io_typeclass.m"
                        }
#line 775 "prog_io_typeclass.m"
                        *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_92;
#line 9801 "parse_tree.prog_io_typeclass.c"
                      }
#line 9803 "parse_tree.prog_io_typeclass.c"
                  }
#line 9805 "parse_tree.prog_io_typeclass.c"
                else
#line 9807 "parse_tree.prog_io_typeclass.c"
                  {
#line 9809 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Spec_59;
#line 9811 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_68_68;
#line 9813 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 9815 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 9817 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 9819 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_91;

#line 825 "prog_io_typeclass.m"
                    {
#line 825 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_16);
                    }
#line 825 "prog_io_typeclass.m"
                    {
#line 825 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[53])));
#line 825 "prog_io_typeclass.m"
                    }
#line 825 "prog_io_typeclass.m"
                    {
#line 825 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "prog_io_typeclass.m"
                    }
#line 824 "prog_io_typeclass.m"
                    {
#line 824 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 824 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 824 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 824 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 824 "prog_io_typeclass.m"
                    }
#line 826 "prog_io_typeclass.m"
                    {
#line 826 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_59));
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "prog_io_typeclass.m"
                    }
#line 826 "prog_io_typeclass.m"
                    {
#line 826 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MaybeParsedMethods_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_91, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 826 "prog_io_typeclass.m"
                    }
#line 775 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_91;
#line 9879 "parse_tree.prog_io_typeclass.c"
                  }
#line 9881 "parse_tree.prog_io_typeclass.c"
              }
#line 655 "prog_io_typeclass.m"
            else
#line 656 "prog_io_typeclass.m"
              {
#line 656 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__Result_12);
              }
#line 655 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 647 "prog_io_typeclass.m"
          }
#line 650 "prog_io_typeclass.m"
      }
#line 647 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 647 "prog_io_typeclass.m"
  }
#line 38 "prog_io_typeclass.m"
}

#line 33 "prog_io_typeclass.m"
MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_typeclass_6_p_0(
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeClassTerm_9,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 33 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 33 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 33 "prog_io_typeclass.m"
{
#line 75 "prog_io_typeclass.m"
  {
#line 75 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 75 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 75 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_14;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_15;
#line 79 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 79 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_19_19;
#line 79 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 79 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 79 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 79 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 78 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 78 "prog_io_typeclass.m"
      {
#line 78 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 78 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 78 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 75 "prog_io_typeclass.m"
          {
#line 79 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 79 "prog_io_typeclass.m"
              {
#line 79 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 79 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 79 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 79 "prog_io_typeclass.m"
                  {
#line 79 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_19_19, (MR_String) "where") == 0);
#line 79 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 79 "prog_io_typeclass.m"
                      {
#line 79 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 79 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 79 "prog_io_typeclass.m"
                          {
#line 79 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 79 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 79 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 79 "prog_io_typeclass.m"
                              {
#line 79 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 79 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 79 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 79 "prog_io_typeclass.m"
                              }
#line 79 "prog_io_typeclass.m"
                          }
#line 79 "prog_io_typeclass.m"
                      }
#line 79 "prog_io_typeclass.m"
                  }
#line 79 "prog_io_typeclass.m"
              }
#line 82 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 80 "prog_io_typeclass.m"
              {
#line 80 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_14, parse_tree__prog_io_typeclass__Methods_15, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 82 "prog_io_typeclass.m"
            else
#line 83 "prog_io_typeclass.m"
              {
#line 83 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 75 "prog_io_typeclass.m"
          }
#line 78 "prog_io_typeclass.m"
      }
#line 75 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 75 "prog_io_typeclass.m"
  }
#line 33 "prog_io_typeclass.m"
}

void mercury__parse_tree__prog_io_typeclass__init(void)
{
}

void mercury__parse_tree__prog_io_typeclass__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraints_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_maybe_class_and_inst_constraints_0);
}

void mercury__parse_tree__prog_io_typeclass__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_typeclass. */
