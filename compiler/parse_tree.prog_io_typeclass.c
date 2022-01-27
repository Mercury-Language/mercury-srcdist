/*
** Automatically generated from `prog_io_typeclass.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 533 "prog_io_typeclass.m"
struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s {
#line 536 "prog_io_typeclass.m"
  MR_bool parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded;
#line 639 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84;
#line 641 "prog_io_typeclass.m"
  jmp_buf parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0;
#line 641 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86;
#line 641 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86;
#line 533 "prog_io_typeclass.m"
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

#line 832 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 832 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 401 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 401 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 401 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5);

#line 255 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 255 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 438 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 797 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__797__1_3_f_0(
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62);

#line 793 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__793__1_2_p_0(
#line 793 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 793 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57);

#line 343 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__343__1_4_p_0(
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 343 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18);

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__311__1_2_p_0(
#line 311 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 311 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55);

#line 201 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162);

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159);

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154);

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152);

#line 522 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 522 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 522 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 505 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 505 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 505 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 955 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 955 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 955 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 955 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4);

#line 832 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 832 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 797 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 793 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 793 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 793 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 779 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 779 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 779 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 779 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 715 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 715 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 715 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0_1(
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 438 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 673 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Constraints_10,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 673 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 673 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_14);

#line 660 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 660 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 660 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12);

#line 610 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 610 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 610 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4);

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg);

#line 533 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 533 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 483 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 483 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 483 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 483 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 454 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 454 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 454 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3);

#line 358 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 358 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 358 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 358 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 311 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 300 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 300 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 300 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12);

#line 282 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 282 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 282 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 282 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 251 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 251 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1);

#line 249 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 247 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 247 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3);

#line 201 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 198 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 130 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 130 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 130 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 311 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 116 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 116 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 116 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);

#line 343 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 343 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 343 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 343 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 90 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 90 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 90 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 820 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 820 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 820 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 820 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);


static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[98][2];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[7][3];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[4][7];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[11][1];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[4][5];




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

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[4][7] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1451 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1459 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1467 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 1475 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 1483 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1491 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1499 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1507 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1515 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1523 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1528 "parse_tree.prog_io_typeclass.c"
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

#line 1543 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1548 "parse_tree.prog_io_typeclass.c"
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

#line 1563 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1571 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1577 "parse_tree.prog_io_typeclass.c"
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

#line 1592 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

#line 1597 "parse_tree.prog_io_typeclass.c"
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

#line 1612 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1617 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1
};

#line 1622 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3
};

#line 1627 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2
};

#line 1632 "parse_tree.prog_io_typeclass.c"
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

#line 1656 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1664 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1672 "parse_tree.prog_io_typeclass.c"
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

#line 1689 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  }
};

#line 1697 "parse_tree.prog_io_typeclass.c"
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

#line 1714 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1722 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1731 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__prog_io_util__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__prog_io_util__parse_tree__prog_io_util__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1740 "parse_tree.prog_io_typeclass.c"
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

#line 1757 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 1760 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1762 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1764 "parse_tree.prog_io_typeclass.c"
{
#line 1766 "parse_tree.prog_io_typeclass.c"
  {
#line 1768 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1771 "parse_tree.prog_io_typeclass.c"
    {
#line 1773 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1776 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1778 "parse_tree.prog_io_typeclass.c"
  }
#line 1780 "parse_tree.prog_io_typeclass.c"
}

#line 1783 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 1786 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1788 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1790 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1792 "parse_tree.prog_io_typeclass.c"
{
#line 1794 "parse_tree.prog_io_typeclass.c"
  {
#line 1796 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1799 "parse_tree.prog_io_typeclass.c"
    {
#line 1801 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1804 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1806 "parse_tree.prog_io_typeclass.c"
  }
#line 1808 "parse_tree.prog_io_typeclass.c"
}

#line 1811 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 1814 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1816 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1818 "parse_tree.prog_io_typeclass.c"
{
#line 1820 "parse_tree.prog_io_typeclass.c"
  {
#line 1822 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1825 "parse_tree.prog_io_typeclass.c"
    {
#line 1827 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1830 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1832 "parse_tree.prog_io_typeclass.c"
  }
#line 1834 "parse_tree.prog_io_typeclass.c"
}

#line 1837 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 1840 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1842 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1844 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1846 "parse_tree.prog_io_typeclass.c"
{
#line 1848 "parse_tree.prog_io_typeclass.c"
  {
#line 1850 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1853 "parse_tree.prog_io_typeclass.c"
    {
#line 1855 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1858 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1860 "parse_tree.prog_io_typeclass.c"
  }
#line 1862 "parse_tree.prog_io_typeclass.c"
}

#line 1865 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 1868 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1870 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1872 "parse_tree.prog_io_typeclass.c"
{
#line 1874 "parse_tree.prog_io_typeclass.c"
  {
#line 1876 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1879 "parse_tree.prog_io_typeclass.c"
    {
#line 1881 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1884 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1886 "parse_tree.prog_io_typeclass.c"
  }
#line 1888 "parse_tree.prog_io_typeclass.c"
}

#line 1891 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 1894 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1896 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1898 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1900 "parse_tree.prog_io_typeclass.c"
{
#line 1902 "parse_tree.prog_io_typeclass.c"
  {
#line 1904 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1907 "parse_tree.prog_io_typeclass.c"
    {
#line 1909 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1912 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1914 "parse_tree.prog_io_typeclass.c"
  }
#line 1916 "parse_tree.prog_io_typeclass.c"
}

#line 832 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 832 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 832 "prog_io_typeclass.m"
{
#line 908 "prog_io_typeclass.m"
  {
#line 908 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 908 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethodTerm_9;
#line 908 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethodTerm_10;
#line 908 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TermContext_11;
#line 838 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 838 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_45_45;
#line 838 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 838 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 838 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_48_48;

#line 838 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 838 "prog_io_typeclass.m"
      {
#line 838 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 0)));
#line 838 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 1)));
#line 838 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 2)));
#line 838 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 838 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 838 "prog_io_typeclass.m"
          {
#line 838 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 838 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_45_45, (MR_String) "is") == 0);
#line 838 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 838 "prog_io_typeclass.m"
              {
#line 839 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 839 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 839 "prog_io_typeclass.m"
                  {
#line 839 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 0)));
#line 839 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 1)));
#line 839 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 839 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 839 "prog_io_typeclass.m"
                      {
#line 839 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 0)));
#line 839 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 1)));
#line 839 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "prog_io_typeclass.m"
                      }
#line 839 "prog_io_typeclass.m"
                  }
#line 838 "prog_io_typeclass.m"
              }
#line 838 "prog_io_typeclass.m"
          }
#line 838 "prog_io_typeclass.m"
      }
#line 908 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 870 "prog_io_typeclass.m"
      {
#line 870 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__PredNameTerm_14;
#line 870 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArityTerm_15;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SlashTerm_12;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 845 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_50_50;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_53_53;
#line 845 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_54_54;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 845 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 846 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 845 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
          {
#line 845 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 845 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 845 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
              {
#line 845 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, (MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_50_50, (MR_String) "pred") == 0);
#line 845 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                  {
#line 845 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 845 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                      {
#line 845 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 0)));
#line 845 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 1)));
#line 845 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 845 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                          {
#line 846 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 846 "prog_io_typeclass.m"
                              {
#line 846 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 1)));
#line 846 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 2)));
#line 846 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_53_53)) == (MR_mktag((MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 846 "prog_io_typeclass.m"
                                  {
#line 846 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_53_53, (MR_Integer) 0)));
#line 846 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_54_54, (MR_String) "/") == 0);
#line 845 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 845 "prog_io_typeclass.m"
                                      {
#line 847 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 847 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 847 "prog_io_typeclass.m"
                                          {
#line 847 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 0)));
#line 847 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 1)));
#line 847 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 847 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 847 "prog_io_typeclass.m"
                                              {
#line 847 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 0)));
#line 847 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 1)));
#line 847 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "prog_io_typeclass.m"
                                              }
#line 847 "prog_io_typeclass.m"
                                          }
#line 845 "prog_io_typeclass.m"
                                      }
#line 846 "prog_io_typeclass.m"
                                  }
#line 846 "prog_io_typeclass.m"
                              }
#line 845 "prog_io_typeclass.m"
                          }
#line 845 "prog_io_typeclass.m"
                      }
#line 845 "prog_io_typeclass.m"
                  }
#line 845 "prog_io_typeclass.m"
              }
#line 845 "prog_io_typeclass.m"
          }
#line 870 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 859 "prog_io_typeclass.m"
          {
#line 859 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__PredName_17;
#line 859 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__ArityInt_18;
#line 859 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_20;
#line 850 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 850 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 850 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 851 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 850 "prog_io_typeclass.m"
            {
#line 850 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__PredNameTerm_14, &parse_tree__prog_io_typeclass__PredName_17);
            }
#line 850 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
              {
#line 851 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                  {
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 0)));
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 1)));
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 2)));
#line 851 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 850 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 850 "prog_io_typeclass.m"
                      {
#line 851 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 851 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 851 "prog_io_typeclass.m"
                          {
#line 851 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__ArityInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, (MR_Integer) 0)));
#line 852 "prog_io_typeclass.m"
                            {
#line 852 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_20);
                            }
#line 851 "prog_io_typeclass.m"
                          }
#line 850 "prog_io_typeclass.m"
                      }
#line 851 "prog_io_typeclass.m"
                  }
#line 850 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 857 "prog_io_typeclass.m"
              {
#line 857 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_21;
#line 857 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;

#line 856 "prog_io_typeclass.m"
                {
#line 856 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 856 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_20));
#line 856 "prog_io_typeclass.m"
                }
#line 855 "prog_io_typeclass.m"
                {
#line 855 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PredName_17));
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_18));
#line 855 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 855 "prog_io_typeclass.m"
                }
#line 858 "prog_io_typeclass.m"
                {
#line 858 "prog_io_typeclass.m"
                  MR_Word base;
#line 858 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 858 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 858 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_21));
#line 858 "prog_io_typeclass.m"
                }
#line 857 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
            else
#line 860 "prog_io_typeclass.m"
              {
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_261_261 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 860 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_22;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_23;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_24;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_84_84;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_85_85;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_86_86;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_87_87;
#line 860 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_90_90;

#line 860 "prog_io_typeclass.m"
                {
#line 860 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_22 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 864 "prog_io_typeclass.m"
                {
#line 864 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_22));
#line 864 "prog_io_typeclass.m"
                }
#line 864 "prog_io_typeclass.m"
                {
#line 864 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 864 "prog_io_typeclass.m"
                }
#line 864 "prog_io_typeclass.m"
                {
#line 864 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 864 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 864 "prog_io_typeclass.m"
                }
#line 863 "prog_io_typeclass.m"
                {
#line 863 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 863 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 863 "prog_io_typeclass.m"
                }
#line 862 "prog_io_typeclass.m"
                {
#line 862 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90])));
#line 862 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 862 "prog_io_typeclass.m"
                }
#line 861 "prog_io_typeclass.m"
                {
#line 861 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 861 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 861 "prog_io_typeclass.m"
                }
#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_85_85 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 867 "prog_io_typeclass.m"
                {
#line 867 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_23));
#line 867 "prog_io_typeclass.m"
                }
#line 867 "prog_io_typeclass.m"
                {
#line 867 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_87_87));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "prog_io_typeclass.m"
                }
#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_85_85));
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_86_86));
#line 866 "prog_io_typeclass.m"
                }
#line 867 "prog_io_typeclass.m"
                {
#line 867 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 867 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "prog_io_typeclass.m"
                }
#line 865 "prog_io_typeclass.m"
                {
#line 865 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_83_83));
#line 865 "prog_io_typeclass.m"
                }
#line 868 "prog_io_typeclass.m"
                {
#line 868 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_24));
#line 868 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "prog_io_typeclass.m"
                }
#line 868 "prog_io_typeclass.m"
                {
#line 868 "prog_io_typeclass.m"
                  MR_Word base;
#line 868 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 868 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 868 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_90_90));
#line 868 "prog_io_typeclass.m"
                }
#line 860 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
          }
#line 870 "prog_io_typeclass.m"
        else
#line 896 "prog_io_typeclass.m"
          {
#line 896 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FuncNameTerm_26;
#line 896 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ArityTerm_228;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_92_92;
#line 871 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_93_93;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_95_95;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_96_96;
#line 871 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_97_97;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_98_98;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_99_99;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_100_100;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SlashTerm_213;
#line 871 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 872 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 871 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
              {
#line 871 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 871 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 871 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_92_92)) == (MR_mktag((MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                  {
#line 871 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_92_92, (MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_93_93, (MR_String) "func") == 0);
#line 871 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                      {
#line 871 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 871 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                          {
#line 871 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__SlashTerm_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 0)));
#line 871 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 1)));
#line 871 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                              {
#line 872 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_213)) == (MR_mktag((MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 872 "prog_io_typeclass.m"
                                  {
#line 872 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 1)));
#line 872 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 2)));
#line 872 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 872 "prog_io_typeclass.m"
                                      {
#line 872 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_96_96, (MR_Integer) 0)));
#line 872 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_97_97, (MR_String) "/") == 0);
#line 871 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 871 "prog_io_typeclass.m"
                                          {
#line 873 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 873 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 873 "prog_io_typeclass.m"
                                              {
#line 873 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__FuncNameTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 0)));
#line 873 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 1)));
#line 873 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 873 "prog_io_typeclass.m"
                                                if (parse_tree__prog_io_typeclass__succeeded)
#line 873 "prog_io_typeclass.m"
                                                  {
#line 873 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__ArityTerm_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 0)));
#line 873 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 1)));
#line 873 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "prog_io_typeclass.m"
                                                  }
#line 873 "prog_io_typeclass.m"
                                              }
#line 871 "prog_io_typeclass.m"
                                          }
#line 872 "prog_io_typeclass.m"
                                      }
#line 872 "prog_io_typeclass.m"
                                  }
#line 871 "prog_io_typeclass.m"
                              }
#line 871 "prog_io_typeclass.m"
                          }
#line 871 "prog_io_typeclass.m"
                      }
#line 871 "prog_io_typeclass.m"
                  }
#line 871 "prog_io_typeclass.m"
              }
#line 896 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 885 "prog_io_typeclass.m"
              {
#line 885 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FuncName_28;
#line 885 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_218;
#line 885 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_219;
#line 876 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 876 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 876 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_102_102;
#line 877 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 876 "prog_io_typeclass.m"
                {
#line 876 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__FuncNameTerm_26, &parse_tree__prog_io_typeclass__FuncName_28);
                }
#line 876 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 876 "prog_io_typeclass.m"
                  {
#line 877 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_228)) == (MR_mktag((MR_Integer) 0)));
#line 877 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 877 "prog_io_typeclass.m"
                      {
#line 877 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 0)));
#line 877 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 1)));
#line 877 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 2)));
#line 877 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 876 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 876 "prog_io_typeclass.m"
                          {
#line 877 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 877 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 877 "prog_io_typeclass.m"
                              {
#line 877 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ArityInt_218 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_101_101, (MR_Integer) 0)));
#line 878 "prog_io_typeclass.m"
                                {
#line 878 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_219);
                                }
#line 877 "prog_io_typeclass.m"
                              }
#line 876 "prog_io_typeclass.m"
                          }
#line 877 "prog_io_typeclass.m"
                      }
#line 876 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 883 "prog_io_typeclass.m"
                  {
#line 883 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 883 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceMethod_214;

#line 882 "prog_io_typeclass.m"
                    {
#line 882 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 882 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_219));
#line 882 "prog_io_typeclass.m"
                    }
#line 881 "prog_io_typeclass.m"
                    {
#line 881 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__InstanceMethod_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 0) = ((MR_Box) ((MR_Integer) 1));
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FuncName_28));
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_104_104));
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_218));
#line 881 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 881 "prog_io_typeclass.m"
                    }
#line 884 "prog_io_typeclass.m"
                    {
#line 884 "prog_io_typeclass.m"
                      MR_Word base;
#line 884 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 884 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 884 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_214));
#line 884 "prog_io_typeclass.m"
                    }
#line 883 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
                else
#line 886 "prog_io_typeclass.m"
                  {
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_263_263 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_107_107;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_117_117;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_126_126;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_127_127;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_128_128;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_129_129;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_130_130;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_133_133;
#line 886 "prog_io_typeclass.m"
                    MR_String parse_tree__prog_io_typeclass__MethodTermStr_215;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Pieces_216;
#line 886 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_217;

#line 886 "prog_io_typeclass.m"
                    {
#line 886 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MethodTermStr_215 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 890 "prog_io_typeclass.m"
                    {
#line 890 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_215));
#line 890 "prog_io_typeclass.m"
                    }
#line 890 "prog_io_typeclass.m"
                    {
#line 890 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_117_117));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 890 "prog_io_typeclass.m"
                    }
#line 890 "prog_io_typeclass.m"
                    {
#line 890 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 890 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 890 "prog_io_typeclass.m"
                    }
#line 889 "prog_io_typeclass.m"
                    {
#line 889 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 889 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 889 "prog_io_typeclass.m"
                    }
#line 888 "prog_io_typeclass.m"
                    {
#line 888 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[93])));
#line 888 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 888 "prog_io_typeclass.m"
                    }
#line 887 "prog_io_typeclass.m"
                    {
#line 887 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 887 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_107_107));
#line 887 "prog_io_typeclass.m"
                    }
#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_128_128 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 893 "prog_io_typeclass.m"
                    {
#line 893 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_130_130, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_216));
#line 893 "prog_io_typeclass.m"
                    }
#line 893 "prog_io_typeclass.m"
                    {
#line 893 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_typeclass.m"
                    }
#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 892 "prog_io_typeclass.m"
                    }
#line 893 "prog_io_typeclass.m"
                    {
#line 893 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 893 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_typeclass.m"
                    }
#line 891 "prog_io_typeclass.m"
                    {
#line 891 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 891 "prog_io_typeclass.m"
                    }
#line 894 "prog_io_typeclass.m"
                    {
#line 894 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 894 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_217));
#line 894 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 894 "prog_io_typeclass.m"
                    }
#line 894 "prog_io_typeclass.m"
                    {
#line 894 "prog_io_typeclass.m"
                      MR_Word base;
#line 894 "prog_io_typeclass.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 894 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 894 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 894 "prog_io_typeclass.m"
                    }
#line 886 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
              }
#line 896 "prog_io_typeclass.m"
            else
#line 897 "prog_io_typeclass.m"
              {
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_264_264 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_137_137;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_140_140;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_143_143;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_146_146;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_149_149;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_152_152;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_153_153;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_162_162;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_163_163;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_164_164;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_165_165;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_166_166;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_169_169;
#line 897 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_224;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_225;
#line 897 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_226;

#line 897 "prog_io_typeclass.m"
                {
#line 897 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_224 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 903 "prog_io_typeclass.m"
                {
#line 903 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_224));
#line 903 "prog_io_typeclass.m"
                }
#line 903 "prog_io_typeclass.m"
                {
#line 903 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_153_153));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 903 "prog_io_typeclass.m"
                }
#line 903 "prog_io_typeclass.m"
                {
#line 903 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 903 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_152_152));
#line 903 "prog_io_typeclass.m"
                }
#line 902 "prog_io_typeclass.m"
                {
#line 902 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 902 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_149_149));
#line 902 "prog_io_typeclass.m"
                }
#line 901 "prog_io_typeclass.m"
                {
#line 901 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[96])));
#line 901 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_146_146));
#line 901 "prog_io_typeclass.m"
                }
#line 900 "prog_io_typeclass.m"
                {
#line 900 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[95])));
#line 900 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_143_143));
#line 900 "prog_io_typeclass.m"
                }
#line 899 "prog_io_typeclass.m"
                {
#line 899 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[94])));
#line 899 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_140_140));
#line 899 "prog_io_typeclass.m"
                }
#line 898 "prog_io_typeclass.m"
                {
#line 898 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[89])));
#line 898 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_137_137));
#line 898 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_164_164 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_166_166, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_225));
#line 905 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_166_166));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_164_164));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_165_165));
#line 905 "prog_io_typeclass.m"
                }
#line 905 "prog_io_typeclass.m"
                {
#line 905 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_163_163));
#line 905 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 905 "prog_io_typeclass.m"
                }
#line 904 "prog_io_typeclass.m"
                {
#line 904 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 904 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_162_162));
#line 904 "prog_io_typeclass.m"
                }
#line 906 "prog_io_typeclass.m"
                {
#line 906 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_226));
#line 906 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "prog_io_typeclass.m"
                }
#line 906 "prog_io_typeclass.m"
                {
#line 906 "prog_io_typeclass.m"
                  MR_Word base;
#line 906 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 906 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 906 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 906 "prog_io_typeclass.m"
                }
#line 897 "prog_io_typeclass.m"
              }
#line 896 "prog_io_typeclass.m"
          }
#line 870 "prog_io_typeclass.m"
      }
#line 908 "prog_io_typeclass.m"
    else
#line 918 "prog_io_typeclass.m"
      {
#line 918 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeIOM_31;

#line 919 "prog_io_typeclass.m"
        {
#line 919 "prog_io_typeclass.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_4[10], parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) -1, &parse_tree__prog_io_typeclass__MaybeIOM_31);
        }
#line 924 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31)) == (MR_mktag((MR_Integer) 0))))
#line 923 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = (MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31;
#line 924 "prog_io_typeclass.m"
        else
#line 925 "prog_io_typeclass.m"
          {
#line 925 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__IOM_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeIOM_31, (MR_Integer) 0)));
#line 937 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemClause_35;
#line 927 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Item_34;

#line 927 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__IOM_33)) == (MR_mktag((MR_Integer) 0)));
#line 927 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 927 "prog_io_typeclass.m"
              {
#line 927 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Item_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__IOM_33, (MR_Integer) 0)));
#line 928 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_34)) == (MR_mktag((MR_Integer) 1)));
#line 928 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 928 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemClause_35 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Item_34), (MR_Integer) 1);
#line 927 "prog_io_typeclass.m"
              }
#line 937 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 931 "prog_io_typeclass.m"
              {
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassMethodName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 0)));
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 1)));
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__HeadArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 2)));
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 6)));
#line 931 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_173_173;
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 931 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_235;
#line 931 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_236;
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___Origin_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 3)));
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___VarSet_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 4)));
#line 930 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___ClauseBody_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 5)));
#line 930 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 7)));

#line 932 "prog_io_typeclass.m"
                {
#line 932 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_173_173 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], parse_tree__prog_io_typeclass__HeadArgs_38);
                }
#line 932 "prog_io_typeclass.m"
                {
#line 932 "prog_io_typeclass.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_io_typeclass__PredOrFunc_37, &parse_tree__prog_io_typeclass__ArityInt_235, parse_tree__prog_io_typeclass__V_173_173);
                }
#line 934 "prog_io_typeclass.m"
                {
#line 934 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemClause_35));
#line 934 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 934 "prog_io_typeclass.m"
                }
#line 934 "prog_io_typeclass.m"
                {
#line 934 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_175_175));
#line 934 "prog_io_typeclass.m"
                }
#line 933 "prog_io_typeclass.m"
                {
#line 933 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__PredOrFunc_37));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethodName_36));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_174_174));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_235));
#line 933 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_42));
#line 933 "prog_io_typeclass.m"
                }
#line 936 "prog_io_typeclass.m"
                {
#line 936 "prog_io_typeclass.m"
                  MR_Word base;
#line 936 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 936 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_236));
#line 936 "prog_io_typeclass.m"
                }
#line 931 "prog_io_typeclass.m"
              }
#line 937 "prog_io_typeclass.m"
            else
#line 938 "prog_io_typeclass.m"
              {
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_266_266 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_179_179;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_182_182;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_185_185;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_188_188;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_191_191;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_194_194;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_195_195;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_204_204;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_205_205;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_206_206;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_207_207;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_208_208;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_211_211;
#line 938 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_237;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_238;
#line 938 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_239;

#line 938 "prog_io_typeclass.m"
                {
#line 938 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_237 = parse_tree__mercury_to_mercury__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_237));
#line 944 "prog_io_typeclass.m"
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_195_195));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[52])));
#line 944 "prog_io_typeclass.m"
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92])));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_194_194));
#line 944 "prog_io_typeclass.m"
                }
#line 943 "prog_io_typeclass.m"
                {
#line 943 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[91])));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_191_191));
#line 943 "prog_io_typeclass.m"
                }
#line 942 "prog_io_typeclass.m"
                {
#line 942 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[96])));
#line 942 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_188_188));
#line 942 "prog_io_typeclass.m"
                }
#line 941 "prog_io_typeclass.m"
                {
#line 941 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[95])));
#line 941 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_185_185));
#line 941 "prog_io_typeclass.m"
                }
#line 940 "prog_io_typeclass.m"
                {
#line 940 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[94])));
#line 940 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_182_182));
#line 940 "prog_io_typeclass.m"
                }
#line 939 "prog_io_typeclass.m"
                {
#line 939 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[97])));
#line 939 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_179_179));
#line 939 "prog_io_typeclass.m"
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_206_206 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 947 "prog_io_typeclass.m"
                {
#line 947 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_208_208, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_238));
#line 947 "prog_io_typeclass.m"
                }
#line 947 "prog_io_typeclass.m"
                {
#line 947 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_208_208));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "prog_io_typeclass.m"
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_206_206));
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_207_207));
#line 946 "prog_io_typeclass.m"
                }
#line 947 "prog_io_typeclass.m"
                {
#line 947 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_205_205));
#line 947 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "prog_io_typeclass.m"
                }
#line 945 "prog_io_typeclass.m"
                {
#line 945 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 945 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 945 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 945 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_204_204));
#line 945 "prog_io_typeclass.m"
                }
#line 948 "prog_io_typeclass.m"
                {
#line 948 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_239));
#line 948 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "prog_io_typeclass.m"
                }
#line 948 "prog_io_typeclass.m"
                {
#line 948 "prog_io_typeclass.m"
                  MR_Word base;
#line 948 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 948 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 948 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_211_211));
#line 948 "prog_io_typeclass.m"
                }
#line 938 "prog_io_typeclass.m"
              }
#line 925 "prog_io_typeclass.m"
          }
#line 918 "prog_io_typeclass.m"
      }
#line 908 "prog_io_typeclass.m"
  }
#line 832 "prog_io_typeclass.m"
}

#line 401 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2,
#line 401 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3,
#line 401 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4,
#line 401 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5)
#line 401 "prog_io_typeclass.m"
{
#line 404 "prog_io_typeclass.m"
  {
#line 404 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 404 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "prog_io_typeclass.m"
      {
#line 404 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4;
#line 404 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2;
#line 404 "prog_io_typeclass.m"
      }
#line 404 "prog_io_typeclass.m"
    else
#line 405 "prog_io_typeclass.m"
      {
#line 405 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 405 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;

#line 406 "prog_io_typeclass.m"
        {
#line 406 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Xs_13, parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_0_2, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_0_4, &parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
        }
#line 410 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__X_12)) == (MR_mktag((MR_Integer) 0))))
#line 411 "prog_io_typeclass.m"
          {
#line 411 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__CurSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0)));

#line 412 "prog_io_typeclass.m"
            {
#line 412 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__CurSpecs_17, parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23);
            }
#line 411 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22;
#line 411 "prog_io_typeclass.m"
          }
#line 410 "prog_io_typeclass.m"
        else
#line 408 "prog_io_typeclass.m"
          {
#line 408 "prog_io_typeclass.m"
            MR_Box parse_tree__prog_io_typeclass__CurMethod_16 = (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__X_12, (MR_Integer) 0));

#line 409 "prog_io_typeclass.m"
            {
#line 409 "prog_io_typeclass.m"
              MR_Word base;
#line 409 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_3 = base;
#line 409 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = parse_tree__prog_io_typeclass__CurMethod_16;
#line 409 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__STATE_VARIABLE_Methods_22_22));
#line 409 "prog_io_typeclass.m"
            }
#line 408 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_5 = parse_tree__prog_io_typeclass__STATE_VARIABLE_Specs_23_23;
#line 408 "prog_io_typeclass.m"
          }
#line 405 "prog_io_typeclass.m"
      }
#line 404 "prog_io_typeclass.m"
  }
#line 401 "prog_io_typeclass.m"
}

#line 255 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 255 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 255 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 255 "prog_io_typeclass.m"
{
#line 258 "prog_io_typeclass.m"
  {
#line 258 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 258 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 528 "prog_io_typeclass.m"
    {
#line 528 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 530 "prog_io_typeclass.m"
    {
#line 530 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 277 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 278 "prog_io_typeclass.m"
      {
#line 278 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 279 "prog_io_typeclass.m"
        {
#line 279 "prog_io_typeclass.m"
          MR_Word base;
#line 279 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 279 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 279 "prog_io_typeclass.m"
        }
#line 278 "prog_io_typeclass.m"
      }
#line 277 "prog_io_typeclass.m"
    else
#line 261 "prog_io_typeclass.m"
      {
#line 261 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 261 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 261 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 261 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 268 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_13;
#line 268 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_14;
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_46;
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_47;
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_51;

#line 261 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 261 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 262 "prog_io_typeclass.m"
        {
#line 262 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 262 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 262 "prog_io_typeclass.m"
        }
#line 286 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraint_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 0)));
#line 286 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraints_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 1)));
#line 288 "prog_io_typeclass.m"
        {
#line 288 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_47, &parse_tree__prog_io_typeclass__SimpleConstraints0_50, &parse_tree__prog_io_typeclass__FunDeps0_51);
        }
#line 287 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 294 "prog_io_typeclass.m"
          {
#line 294 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 2))))
#line 295 "prog_io_typeclass.m"
              {
#line 295 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_53 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 2);

#line 296 "prog_io_typeclass.m"
                {
#line 296 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDeps_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_53));
#line 296 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_51));
#line 296 "prog_io_typeclass.m"
                }
#line 297 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Constraints_13 = parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 295 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 295 "prog_io_typeclass.m"
              }
#line 294 "prog_io_typeclass.m"
            else
#line 294 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 0))))
#line 291 "prog_io_typeclass.m"
              {
#line 291 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 0);

#line 292 "prog_io_typeclass.m"
                {
#line 292 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Constraints_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_52));
#line 292 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_50));
#line 292 "prog_io_typeclass.m"
                }
#line 293 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__FunDeps_14 = parse_tree__prog_io_typeclass__FunDeps0_51;
#line 291 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 291 "prog_io_typeclass.m"
              }
#line 294 "prog_io_typeclass.m"
            else
#line 294 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 294 "prog_io_typeclass.m"
          }
#line 268 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 267 "prog_io_typeclass.m"
          {
#line 267 "prog_io_typeclass.m"
            MR_Word base;
#line 267 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 267 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_13));
#line 267 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_14));
#line 267 "prog_io_typeclass.m"
          }
#line 268 "prog_io_typeclass.m"
        else
#line 271 "prog_io_typeclass.m"
          {
#line 271 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 271 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 271 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 271 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 271 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 273 "prog_io_typeclass.m"
            {
#line 273 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 273 "prog_io_typeclass.m"
            {
#line 273 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 273 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[88])));
#line 273 "prog_io_typeclass.m"
            }
#line 274 "prog_io_typeclass.m"
            {
#line 274 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 274 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "prog_io_typeclass.m"
            }
#line 272 "prog_io_typeclass.m"
            {
#line 272 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 272 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 272 "prog_io_typeclass.m"
            }
#line 275 "prog_io_typeclass.m"
            {
#line 275 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 275 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 275 "prog_io_typeclass.m"
            }
#line 275 "prog_io_typeclass.m"
            {
#line 275 "prog_io_typeclass.m"
              MR_Word base;
#line 275 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 275 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 275 "prog_io_typeclass.m"
            }
#line 271 "prog_io_typeclass.m"
          }
#line 261 "prog_io_typeclass.m"
      }
#line 258 "prog_io_typeclass.m"
  }
#line 255 "prog_io_typeclass.m"
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
#line 460 "prog_io_typeclass.m"
  {
#line 460 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 460 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 460 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 460 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 460 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 528 "prog_io_typeclass.m"
    {
#line 528 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 530 "prog_io_typeclass.m"
    {
#line 530 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 478 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 479 "prog_io_typeclass.m"
      {
#line 479 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 480 "prog_io_typeclass.m"
        {
#line 480 "prog_io_typeclass.m"
          MR_Word base;
#line 480 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 480 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 480 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 480 "prog_io_typeclass.m"
        }
#line 479 "prog_io_typeclass.m"
      }
#line 478 "prog_io_typeclass.m"
    else
#line 463 "prog_io_typeclass.m"
      {
#line 463 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 463 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 463 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 463 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 470 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints_13;
#line 470 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub_14;

#line 463 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 463 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 464 "prog_io_typeclass.m"
        {
#line 464 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 464 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 464 "prog_io_typeclass.m"
        }
#line 466 "prog_io_typeclass.m"
        {
#line 466 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_12, &parse_tree__prog_io_typeclass__ProgConstraints_13, &parse_tree__prog_io_typeclass__InstVarSub_14);
        }
#line 470 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 469 "prog_io_typeclass.m"
          {
#line 469 "prog_io_typeclass.m"
            MR_Word base;
#line 469 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 469 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints_13));
#line 469 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSub_14));
#line 469 "prog_io_typeclass.m"
          }
#line 470 "prog_io_typeclass.m"
        else
#line 472 "prog_io_typeclass.m"
          {
#line 472 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 472 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 472 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 472 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 472 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 474 "prog_io_typeclass.m"
            {
#line 474 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 474 "prog_io_typeclass.m"
            {
#line 474 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[87])));
#line 474 "prog_io_typeclass.m"
            }
#line 475 "prog_io_typeclass.m"
            {
#line 475 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "prog_io_typeclass.m"
            }
#line 473 "prog_io_typeclass.m"
            {
#line 473 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 473 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 473 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 473 "prog_io_typeclass.m"
            }
#line 476 "prog_io_typeclass.m"
            {
#line 476 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 476 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_typeclass.m"
            }
#line 476 "prog_io_typeclass.m"
            {
#line 476 "prog_io_typeclass.m"
              MR_Word base;
#line 476 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 476 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 476 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 476 "prog_io_typeclass.m"
            }
#line 472 "prog_io_typeclass.m"
          }
#line 463 "prog_io_typeclass.m"
      }
#line 460 "prog_io_typeclass.m"
  }
#line 50 "prog_io_typeclass.m"
}

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 438 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 438 "prog_io_typeclass.m"
{
#line 438 "prog_io_typeclass.m"
  {
#line 438 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 438 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 438 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 438 "prog_io_typeclass.m"
    {
#line 438 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 438 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 438 "prog_io_typeclass.m"
      {
#line 438 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 438 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 438 "prog_io_typeclass.m"
      }
#line 438 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 438 "prog_io_typeclass.m"
  }
#line 438 "prog_io_typeclass.m"
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
#line 420 "prog_io_typeclass.m"
  {
#line 420 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 420 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_26;
#line 420 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_55;
#line 420 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_56;
#line 420 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_57_57;

#line 528 "prog_io_typeclass.m"
    {
#line 528 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_57_57);
    }
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 1)));
#line 530 "prog_io_typeclass.m"
    {
#line 530 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_55, parse_tree__prog_io_typeclass__TailConstraintTerms_56, &parse_tree__prog_io_typeclass__Result0_26);
    }
#line 449 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_26)) == (MR_mktag((MR_Integer) 0))))
#line 451 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_26;
#line 449 "prog_io_typeclass.m"
    else
#line 434 "prog_io_typeclass.m"
      {
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_27;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_28;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_26, (MR_Integer) 0)));
#line 443 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_29;
#line 443 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailConstraints_30;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_34_49;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_35_50;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_34_34;

#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, (MR_Integer) 0)));
#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, (MR_Integer) 1)));
#line 457 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27)) == (MR_mktag((MR_Integer) 0)));
#line 457 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 457 "prog_io_typeclass.m"
          {
#line 457 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_29 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27), (MR_Integer) 0);
#line 438 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_34_34 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[6];
#line 4107 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_49 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 4109 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 438 "prog_io_typeclass.m"
            {
#line 438 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_49, parse_tree__prog_io_typeclass__TypeCtorInfo_35_50, parse_tree__prog_io_typeclass__V_34_34, parse_tree__prog_io_typeclass__TailArbConstraints_28, &parse_tree__prog_io_typeclass__TailConstraints_30);
            }
#line 457 "prog_io_typeclass.m"
          }
#line 443 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 442 "prog_io_typeclass.m"
          {
#line 442 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;

#line 442 "prog_io_typeclass.m"
            {
#line 442 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_29));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_30));
#line 442 "prog_io_typeclass.m"
            }
#line 442 "prog_io_typeclass.m"
            {
#line 442 "prog_io_typeclass.m"
              MR_Word base;
#line 442 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 442 "prog_io_typeclass.m"
            }
#line 442 "prog_io_typeclass.m"
          }
#line 443 "prog_io_typeclass.m"
        else
#line 446 "prog_io_typeclass.m"
          {
#line 446 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_31;
#line 446 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_38_38;
#line 446 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 446 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 446 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;

#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_40_40 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[86])));
#line 445 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_io_typeclass.m"
            }
#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_38_38));
#line 444 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_31));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              MR_Word base;
#line 447 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 447 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 447 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
          }
#line 434 "prog_io_typeclass.m"
      }
#line 420 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 797 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__797__1_3_f_0(
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_14,
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_31,
#line 797 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_62)
#line 797 "prog_io_typeclass.m"
{
#line 797 "prog_io_typeclass.m"
  {
#line 797 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 797 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_63;

#line 797 "prog_io_typeclass.m"
    {
#line 797 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_63 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__HeadVar__2_31, parse_tree__prog_io_typeclass__HeadVar__3_62);
    }
#line 797 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_63;
#line 797 "prog_io_typeclass.m"
  }
#line 797 "prog_io_typeclass.m"
}

#line 793 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__793__1_2_p_0(
#line 793 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_19,
#line 793 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57)
#line 793 "prog_io_typeclass.m"
{
#line 793 "prog_io_typeclass.m"
  {
#line 793 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 958 "prog_io_typeclass.m"
    {
#line 958 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_57)), parse_tree__prog_io_typeclass__TypesVars_19);
    }
#line 793 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 793 "prog_io_typeclass.m"
  }
#line 793 "prog_io_typeclass.m"
}

#line 343 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__343__1_4_p_0(
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_7,
#line 343 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_17,
#line 343 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__4_18)
#line 343 "prog_io_typeclass.m"
{
#line 343 "prog_io_typeclass.m"
  {
#line 343 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 343 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Item_12;

#line 346 "prog_io_typeclass.m"
    {
#line 346 "prog_io_typeclass.m"
      parse_tree__prog_io_item__parse_decl_5_p_0(parse_tree__prog_io_typeclass__ModuleName_5, parse_tree__prog_io_typeclass__VarSet_7, parse_tree__prog_io_typeclass__HeadVar__3_17, (MR_Integer) -1, &parse_tree__prog_io_typeclass__Item_12);
    }
#line 348 "prog_io_typeclass.m"
    {
#line 348 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(parse_tree__prog_io_typeclass__Item_12, parse_tree__prog_io_typeclass__HeadVar__3_17, parse_tree__prog_io_typeclass__HeadVar__4_18);
#line 348 "prog_io_typeclass.m"
      return;
    }
#line 343 "prog_io_typeclass.m"
  }
#line 343 "prog_io_typeclass.m"
}

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__311__1_2_p_0(
#line 311 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_54,
#line 311 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_55)
#line 311 "prog_io_typeclass.m"
{
#line 311 "prog_io_typeclass.m"
  {
#line 311 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 311 "prog_io_typeclass.m"
    {
#line 311 "prog_io_typeclass.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_54, parse_tree__prog_io_typeclass__HeadVar__2_55);
#line 311 "prog_io_typeclass.m"
      return;
    }
#line 311 "prog_io_typeclass.m"
  }
#line 311 "prog_io_typeclass.m"
}

#line 201 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_79,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 201 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_162)
#line 201 "prog_io_typeclass.m"
{
#line 201 "prog_io_typeclass.m"
  {
#line 201 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 201 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_163;

#line 201 "prog_io_typeclass.m"
    {
#line 201 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_163 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_79, parse_tree__prog_io_typeclass__HeadVar__3_162);
    }
#line 201 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_163;
#line 201 "prog_io_typeclass.m"
  }
#line 201 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_77,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_171,
#line 198 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_159)
#line 198 "prog_io_typeclass.m"
{
#line 198 "prog_io_typeclass.m"
  {
#line 198 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 198 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__4_160;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__HeadVar__4_160 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__2_171, parse_tree__prog_io_typeclass__HeadVar__1_77, parse_tree__prog_io_typeclass__HeadVar__3_159);
    }
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__4_160;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 159 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_154)
#line 159 "prog_io_typeclass.m"
{
#line 159 "prog_io_typeclass.m"
  {
#line 159 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 159 "prog_io_typeclass.m"
    {
#line 159 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_154)));
    }
#line 159 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
  }
#line 159 "prog_io_typeclass.m"
}

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 157 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152)
#line 157 "prog_io_typeclass.m"
{
#line 157 "prog_io_typeclass.m"
  {
#line 157 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 157 "prog_io_typeclass.m"
    {
#line 157 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_152)));
    }
#line 157 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
  }
#line 157 "prog_io_typeclass.m"
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

#line 522 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 522 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 522 "prog_io_typeclass.m"
{
#line 522 "prog_io_typeclass.m"
  {
#line 522 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 522 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 522 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 522 "prog_io_typeclass.m"
    {
#line 522 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
#line 522 "prog_io_typeclass.m"
      return;
    }
#line 522 "prog_io_typeclass.m"
  }
#line 522 "prog_io_typeclass.m"
}

#line 522 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 522 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 522 "prog_io_typeclass.m"
{
#line 522 "prog_io_typeclass.m"
  {
#line 522 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 522 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 522 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 522 "prog_io_typeclass.m"
    {
#line 522 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 522 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 522 "prog_io_typeclass.m"
  }
#line 522 "prog_io_typeclass.m"
}

#line 505 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 505 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 505 "prog_io_typeclass.m"
{
#line 505 "prog_io_typeclass.m"
  {
#line 505 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 505 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_45 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 505 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_46 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 505 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_45 == parse_tree__prog_io_typeclass__CastY_46);
#line 505 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 4611 "parse_tree.prog_io_typeclass.c"
      *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 0;
#line 505 "prog_io_typeclass.m"
    else
#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) {
#line 505 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);

#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 505 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 505 "prog_io_typeclass.m"
                {
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 0);

#line 505 "prog_io_typeclass.m"
                  {
#line 505 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_56_56, parse_tree__prog_io_typeclass__V_5_5);
#line 505 "prog_io_typeclass.m"
                    return;
                  }
#line 505 "prog_io_typeclass.m"
                }
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4652 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4658 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4664 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
            }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);

#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 505 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4688 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 505 "prog_io_typeclass.m"
                {
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 1);

#line 505 "prog_io_typeclass.m"
                  {
#line 505 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_55_55, parse_tree__prog_io_typeclass__V_16_16);
#line 505 "prog_io_typeclass.m"
                    return;
                  }
#line 505 "prog_io_typeclass.m"
                }
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4712 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4718 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
            }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);

#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 505 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4742 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4748 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 505 "prog_io_typeclass.m"
                {
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 2);

#line 505 "prog_io_typeclass.m"
                  {
#line 505 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_52_52, parse_tree__prog_io_typeclass__V_44_44);
#line 505 "prog_io_typeclass.m"
                    return;
                  }
#line 505 "prog_io_typeclass.m"
                }
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4772 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
            }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));

#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 505 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4798 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4804 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4810 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 505 "prog_io_typeclass.m"
                {
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 0)));
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 1)));
#line 505 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 505 "prog_io_typeclass.m"
                  {
#line 505 "prog_io_typeclass.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], &parse_tree__prog_io_typeclass__V_32_32, ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54)), ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30)));
                  }
#line 4830 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 0);
#line 505 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = !(parse_tree__prog_io_typeclass__succeeded);
#line 505 "prog_io_typeclass.m"
                  if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = parse_tree__prog_io_typeclass__V_32_32;
#line 505 "prog_io_typeclass.m"
                  else
#line 505 "prog_io_typeclass.m"
                    {
#line 505 "prog_io_typeclass.m"
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_53_53, parse_tree__prog_io_typeclass__V_31_31);
#line 505 "prog_io_typeclass.m"
                      return;
                    }
#line 505 "prog_io_typeclass.m"
                }
#line 505 "prog_io_typeclass.m"
                break;
#line 505 "prog_io_typeclass.m"
            }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
      }
#line 505 "prog_io_typeclass.m"
  }
#line 505 "prog_io_typeclass.m"
}

#line 505 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 505 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 505 "prog_io_typeclass.m"
{
#line 505 "prog_io_typeclass.m"
  {
#line 505 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 505 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_13 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 505 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_14 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 505 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_13 == parse_tree__prog_io_typeclass__CastY_14);
#line 505 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 505 "prog_io_typeclass.m"
    else
#line 505 "prog_io_typeclass.m"
#line 505 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) {
#line 505 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 505 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 505 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
              {
#line 505 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);
#line 4912 "parse_tree.prog_io_typeclass.c"
                {
#line 4914 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_3_3, parse_tree__prog_io_typeclass__V_4_4);
                }
#line 505 "prog_io_typeclass.m"
              }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 1);
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_6_6;

#line 505 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 505 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
              {
#line 505 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);
#line 4940 "parse_tree.prog_io_typeclass.c"
                {
#line 4942 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_5_5, parse_tree__prog_io_typeclass__V_6_6);
                }
#line 505 "prog_io_typeclass.m"
              }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_11_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 2);
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_12_12;

#line 505 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 505 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
              {
#line 505 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);
#line 4968 "parse_tree.prog_io_typeclass.c"
                {
#line 4970 "parse_tree.prog_io_typeclass.c"
                  return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__prog_io_typeclass__V_11_11, parse_tree__prog_io_typeclass__V_12_12);
                }
#line 505 "prog_io_typeclass.m"
              }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 505 "prog_io_typeclass.m"
          {
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_16_16;
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_9_9;
#line 505 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_10_10;

#line 505 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 505 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 505 "prog_io_typeclass.m"
              {
#line 505 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 505 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 5004 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5];
#line 5006 "parse_tree.prog_io_typeclass.c"
                {
#line 5008 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_typeclass__V_7_7)), ((MR_Box) (parse_tree__prog_io_typeclass__V_9_9)));
                }
#line 505 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 5013 "parse_tree.prog_io_typeclass.c"
                  {
#line 5015 "parse_tree.prog_io_typeclass.c"
                    return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_typeclass__V_8_8, parse_tree__prog_io_typeclass__V_10_10);
                  }
#line 505 "prog_io_typeclass.m"
              }
#line 505 "prog_io_typeclass.m"
          }
#line 505 "prog_io_typeclass.m"
          break;
#line 505 "prog_io_typeclass.m"
      }
#line 505 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 505 "prog_io_typeclass.m"
  }
#line 505 "prog_io_typeclass.m"
}

#line 955 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 955 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 955 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 955 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4)
#line 955 "prog_io_typeclass.m"
{
#line 958 "prog_io_typeclass.m"
  {
#line 958 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 958 "prog_io_typeclass.m"
    {
#line 958 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_for_T_5, parse_tree__prog_io_typeclass__Element_4, parse_tree__prog_io_typeclass__List_3);
    }
#line 958 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 958 "prog_io_typeclass.m"
  }
#line 955 "prog_io_typeclass.m"
}

#line 832 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 832 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 832 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 832 "prog_io_typeclass.m"
{
#line 908 "prog_io_typeclass.m"
  {
#line 908 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 908 "prog_io_typeclass.m"
    {
#line 908 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);
#line 908 "prog_io_typeclass.m"
      return;
    }
#line 908 "prog_io_typeclass.m"
  }
#line 832 "prog_io_typeclass.m"
}

#line 797 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 797 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 797 "prog_io_typeclass.m"
{
#line 797 "prog_io_typeclass.m"
  {
#line 797 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 797 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 797 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_63;

#line 797 "prog_io_typeclass.m"
    {
#line 797 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_63 = parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__797__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 797 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_63));
#line 797 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 797 "prog_io_typeclass.m"
  }
#line 797 "prog_io_typeclass.m"
}

#line 793 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 793 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 793 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 793 "prog_io_typeclass.m"
{
#line 793 "prog_io_typeclass.m"
  {
#line 793 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 793 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 793 "prog_io_typeclass.m"
    {
#line 793 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__793__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 793 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 793 "prog_io_typeclass.m"
  }
#line 793 "prog_io_typeclass.m"
}

#line 779 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 779 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 779 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__InstanceTerm_2,
#line 779 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 779 "prog_io_typeclass.m"
{
#line 782 "prog_io_typeclass.m"
  {
#line 782 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 782 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 782 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 782 "prog_io_typeclass.m"
    else
#line 783 "prog_io_typeclass.m"
      {
#line 783 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstance_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 783 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 1)));
#line 783 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 3)));
#line 783 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 5)));
#line 785 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 0)));
#line 785 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___OriginalTypes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 2)));
#line 785 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Methods_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 4)));
#line 785 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___ModName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 6)));
#line 785 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 7)));
#line 785 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass___SeqNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_6, (MR_Integer) 8)));
#line 810 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__UnboundTVars_21;
#line 791 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVars_18;
#line 791 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypesVars_19;
#line 791 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 793 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass___BoundTVars_20;
#line 794 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 794 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;

#line 791 "prog_io_typeclass.m"
        {
#line 791 "prog_io_typeclass.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__Constraints_12, &parse_tree__prog_io_typeclass__TVars_18);
        }
#line 792 "prog_io_typeclass.m"
        {
#line 792 "prog_io_typeclass.m"
          parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_typeclass__Types_10, &parse_tree__prog_io_typeclass__TypesVars_19);
        }
#line 793 "prog_io_typeclass.m"
        {
#line 793 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 793 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 793 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1));
#line 793 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 793 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TypesVars_19));
#line 793 "prog_io_typeclass.m"
        }
#line 793 "prog_io_typeclass.m"
        {
#line 793 "prog_io_typeclass.m"
          mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_29_29, parse_tree__prog_io_typeclass__TVars_18, &parse_tree__prog_io_typeclass___BoundTVars_20, &parse_tree__prog_io_typeclass__UnboundTVars_21);
        }
#line 794 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__UnboundTVars_21)) == (MR_mktag((MR_Integer) 1)));
#line 794 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 794 "prog_io_typeclass.m"
          {
#line 794 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 0)));
#line 794 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_21, (MR_Integer) 1)));
#line 797 "prog_io_typeclass.m"
            {
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeInfo_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_65_65;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarStrs_24;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__UnboundTVarPieces_25;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Prefix_26;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Pieces_27;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 797 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 799 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass__V_32_32;

#line 797 "prog_io_typeclass.m"
              {
#line 797 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[3]));
#line 797 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2));
#line 797 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 797 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 4) = ((MR_Box) ((MR_Integer) 0));
#line 797 "prog_io_typeclass.m"
              }
#line 797 "prog_io_typeclass.m"
              {
#line 797 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarStrs_24 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_typeclass__V_30_30, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 798 "prog_io_typeclass.m"
              {
#line 798 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__UnboundTVarPieces_25 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__UnboundTVarStrs_24);
              }
#line 799 "prog_io_typeclass.m"
              {
#line 799 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_60_60, parse_tree__prog_io_typeclass__UnboundTVars_21);
              }
#line 799 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 1);
#line 801 "prog_io_typeclass.m"
              if (parse_tree__prog_io_typeclass__succeeded)
#line 800 "prog_io_typeclass.m"
                {
#line 800 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[83]);
#line 800 "prog_io_typeclass.m"
                }
#line 801 "prog_io_typeclass.m"
              else
#line 802 "prog_io_typeclass.m"
                {
#line 802 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Prefix_26 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[85]);
#line 802 "prog_io_typeclass.m"
                }
#line 5333 "parse_tree.prog_io_typeclass.c"
              parse_tree__prog_io_typeclass__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 804 "prog_io_typeclass.m"
              {
#line 804 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_39_39 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__UnboundTVarPieces_25, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[48]));
              }
#line 804 "prog_io_typeclass.m"
              {
#line 804 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Pieces_27 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_65_65, parse_tree__prog_io_typeclass__Prefix_26, parse_tree__prog_io_typeclass__V_39_39);
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__InstanceTerm_2);
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_27));
#line 808 "prog_io_typeclass.m"
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_52_52));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "prog_io_typeclass.m"
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_51_51));
#line 808 "prog_io_typeclass.m"
              }
#line 808 "prog_io_typeclass.m"
              {
#line 808 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_49_49));
#line 808 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "prog_io_typeclass.m"
              }
#line 807 "prog_io_typeclass.m"
              {
#line 807 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 807 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_48_48));
#line 807 "prog_io_typeclass.m"
              }
#line 809 "prog_io_typeclass.m"
              {
#line 809 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 809 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 809 "prog_io_typeclass.m"
              }
#line 809 "prog_io_typeclass.m"
              {
#line 809 "prog_io_typeclass.m"
                MR_Word base;
#line 809 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 809 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 809 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_55_55));
#line 809 "prog_io_typeclass.m"
              }
#line 797 "prog_io_typeclass.m"
            }
#line 794 "prog_io_typeclass.m"
          }
#line 794 "prog_io_typeclass.m"
        else
#line 811 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 783 "prog_io_typeclass.m"
      }
#line 782 "prog_io_typeclass.m"
  }
#line 779 "prog_io_typeclass.m"
}

#line 715 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 715 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 715 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 715 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 715 "prog_io_typeclass.m"
{
#line 719 "prog_io_typeclass.m"
  {
#line 719 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 719 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 719 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 719 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 723 "prog_io_typeclass.m"
    {
#line 723 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 724 "prog_io_typeclass.m"
    {
#line 724 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[80]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 740 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 741 "prog_io_typeclass.m"
      {
#line 741 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 742 "prog_io_typeclass.m"
        {
#line 742 "prog_io_typeclass.m"
          MR_Word base;
#line 742 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 742 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_29));
#line 742 "prog_io_typeclass.m"
        }
#line 741 "prog_io_typeclass.m"
      }
#line 740 "prog_io_typeclass.m"
    else
#line 727 "prog_io_typeclass.m"
      {
#line 727 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 727 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 727 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeTypes_19;

#line 730 "prog_io_typeclass.m"
        {
#line 730 "prog_io_typeclass.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_17, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_19);
        }
#line 736 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
#line 738 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19;
#line 736 "prog_io_typeclass.m"
        else
#line 732 "prog_io_typeclass.m"
          {
#line 732 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_19, (MR_Integer) 0)));
#line 732 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstance_21;

#line 733 "prog_io_typeclass.m"
            {
#line 733 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 733 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 733 "prog_io_typeclass.m"
            }
#line 735 "prog_io_typeclass.m"
            {
#line 735 "prog_io_typeclass.m"
              MR_Word base;
#line 735 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 735 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 735 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_21));
#line 735 "prog_io_typeclass.m"
            }
#line 732 "prog_io_typeclass.m"
          }
#line 727 "prog_io_typeclass.m"
      }
#line 719 "prog_io_typeclass.m"
  }
#line 715 "prog_io_typeclass.m"
}

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0_1(
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 438 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 438 "prog_io_typeclass.m"
{
#line 438 "prog_io_typeclass.m"
  {
#line 438 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 438 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 438 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_Constraint_3;

#line 438 "prog_io_typeclass.m"
    {
#line 438 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_Constraint_3);
    }
#line 438 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 438 "prog_io_typeclass.m"
      {
#line 438 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_Constraint_3));
#line 438 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 438 "prog_io_typeclass.m"
      }
#line 438 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 438 "prog_io_typeclass.m"
  }
#line 438 "prog_io_typeclass.m"
}

#line 673 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Constraints_10,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 673 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 673 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 673 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_14)
#line 673 "prog_io_typeclass.m"
{
#line 678 "prog_io_typeclass.m"
  {
#line 678 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 678 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_15;
#line 678 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_52;
#line 678 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_81;
#line 678 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_82;
#line 678 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_83_83;

#line 679 "prog_io_typeclass.m"
    {
#line 679 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__TVarSet_11, &parse_tree__prog_io_typeclass__VarSet_15);
    }
#line 528 "prog_io_typeclass.m"
    {
#line 528 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_10, &parse_tree__prog_io_typeclass__V_83_83);
    }
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, (MR_Integer) 0)));
#line 529 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_83_83, (MR_Integer) 1)));
#line 530 "prog_io_typeclass.m"
    {
#line 530 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_15, parse_tree__prog_io_typeclass__HeadConstraintTerm_81, parse_tree__prog_io_typeclass__TailConstraintTerms_82, &parse_tree__prog_io_typeclass__Result0_52);
    }
#line 5665 "parse_tree.prog_io_typeclass.c"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_52)) == (MR_mktag((MR_Integer) 0))))
#line 5667 "parse_tree.prog_io_typeclass.c"
      {
#line 5669 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16 = (MR_Word) parse_tree__prog_io_typeclass__Result0_52;

#line 703 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;
#line 5674 "parse_tree.prog_io_typeclass.c"
      }
#line 5676 "parse_tree.prog_io_typeclass.c"
    else
#line 5678 "parse_tree.prog_io_typeclass.c"
      {
#line 5680 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_53;
#line 5682 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_54;
#line 5684 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_52, (MR_Integer) 0)));
#line 5686 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_55;
#line 5688 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__TailConstraints_56;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_34_75;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_35_76;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_60_60;

#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 0)));
#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 1)));
#line 457 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_53)) == (MR_mktag((MR_Integer) 0)));
#line 457 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 457 "prog_io_typeclass.m"
          {
#line 457 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_53), (MR_Integer) 0);
#line 438 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[5];
#line 5711 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_75 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 5713 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 438 "prog_io_typeclass.m"
            {
#line 438 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_75, parse_tree__prog_io_typeclass__TypeCtorInfo_35_76, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__TailArbConstraints_54, &parse_tree__prog_io_typeclass__TailConstraints_56);
            }
#line 457 "prog_io_typeclass.m"
          }
#line 5722 "parse_tree.prog_io_typeclass.c"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 5724 "parse_tree.prog_io_typeclass.c"
          {
#line 5726 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__ConstraintList_17;
#line 5728 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_18;

#line 442 "prog_io_typeclass.m"
            {
#line 442 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintList_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ConstraintList_17, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_55));
#line 442 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ConstraintList_17, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_56));
#line 442 "prog_io_typeclass.m"
            }
#line 684 "prog_io_typeclass.m"
            {
#line 684 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemInstance0_18);
            }
#line 689 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_18)) == (MR_mktag((MR_Integer) 0))))
#line 688 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = parse_tree__prog_io_typeclass__MaybeItemInstance0_18;
#line 689 "prog_io_typeclass.m"
            else
#line 690 "prog_io_typeclass.m"
              {
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_18, (MR_Integer) 0)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 0)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Types_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 1)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__OriginalTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 2)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Body_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 4)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 5)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ModName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 6)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 7)));
#line 690 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 8)));
#line 690 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance_30;
#line 691 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___ConstraintList0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_20, (MR_Integer) 3)));

#line 696 "prog_io_typeclass.m"
                {
#line 696 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemInstance_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_21));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_22));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_23));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Body_25));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceVarSet_26));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_27));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_28));
#line 696 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_30, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_29));
#line 696 "prog_io_typeclass.m"
                }
#line 699 "prog_io_typeclass.m"
                {
#line 699 "prog_io_typeclass.m"
                  MR_Word base;
#line 699 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 699 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = base;
#line 699 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_30));
#line 699 "prog_io_typeclass.m"
                }
#line 690 "prog_io_typeclass.m"
              }
#line 5815 "parse_tree.prog_io_typeclass.c"
          }
#line 5817 "parse_tree.prog_io_typeclass.c"
        else
#line 5819 "parse_tree.prog_io_typeclass.c"
          {
#line 5821 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__Spec_57;
#line 5823 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 5825 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 5827 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 5829 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__V_71_71;
#line 5831 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_87;

#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_66_66 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Constraints_10);
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[81])));
#line 445 "prog_io_typeclass.m"
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "prog_io_typeclass.m"
            }
#line 444 "prog_io_typeclass.m"
            {
#line 444 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 444 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_57, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 444 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_57));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedConstraints_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_87, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_71_71));
#line 447 "prog_io_typeclass.m"
            }
#line 703 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemInstance_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_87;
#line 5891 "parse_tree.prog_io_typeclass.c"
          }
#line 5893 "parse_tree.prog_io_typeclass.c"
      }
#line 678 "prog_io_typeclass.m"
  }
#line 673 "prog_io_typeclass.m"
}

#line 660 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 660 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 660 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 660 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstance_12)
#line 660 "prog_io_typeclass.m"
{
#line 668 "prog_io_typeclass.m"
  {
#line 668 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 668 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 668 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 665 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 665 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_17_17;
#line 665 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 665 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 665 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 665 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 665 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
      {
#line 665 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 665 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 665 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 665 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 665 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
          {
#line 665 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_16_16, (MR_Integer) 0)));
#line 665 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_17_17, (MR_String) "<=") == 0);
#line 665 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
              {
#line 665 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 665 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
                  {
#line 665 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 665 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 665 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 665 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 665 "prog_io_typeclass.m"
                      {
#line 665 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 665 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 665 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "prog_io_typeclass.m"
                      }
#line 665 "prog_io_typeclass.m"
                  }
#line 665 "prog_io_typeclass.m"
              }
#line 665 "prog_io_typeclass.m"
          }
#line 665 "prog_io_typeclass.m"
      }
#line 668 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 666 "prog_io_typeclass.m"
      {
#line 666 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_derived_instance_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__TVarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemInstance_12);
#line 666 "prog_io_typeclass.m"
        return;
      }
#line 668 "prog_io_typeclass.m"
    else
#line 719 "prog_io_typeclass.m"
      {
#line 719 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_45 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 719 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_28;
#line 719 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_29;

#line 723 "prog_io_typeclass.m"
        {
#line 723 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_45, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_28);
        }
#line 724 "prog_io_typeclass.m"
        {
#line 724 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_45, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_28, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[80]), &parse_tree__prog_io_typeclass__MaybeClassName_29);
        }
#line 740 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_29)) == (MR_mktag((MR_Integer) 0))))
#line 741 "prog_io_typeclass.m"
          {
#line 741 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 0)));

#line 742 "prog_io_typeclass.m"
            {
#line 742 "prog_io_typeclass.m"
              MR_Word base;
#line 742 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 742 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_43));
#line 742 "prog_io_typeclass.m"
            }
#line 741 "prog_io_typeclass.m"
          }
#line 740 "prog_io_typeclass.m"
        else
#line 727 "prog_io_typeclass.m"
          {
#line 727 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 0)));
#line 727 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermTypes_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_29, (MR_Integer) 1)));
#line 727 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__MaybeTypes_33;

#line 730 "prog_io_typeclass.m"
            {
#line 730 "prog_io_typeclass.m"
              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TermTypes_31, parse_tree__prog_io_typeclass__VarSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__MaybeTypes_33);
            }
#line 736 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_33)) == (MR_mktag((MR_Integer) 0))))
#line 738 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_33;
#line 736 "prog_io_typeclass.m"
            else
#line 732 "prog_io_typeclass.m"
              {
#line 732 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Types_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_33, (MR_Integer) 0)));
#line 732 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstance_35;

#line 733 "prog_io_typeclass.m"
                {
#line 733 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemInstance_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_30));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_34));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_34));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 733 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_35, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 733 "prog_io_typeclass.m"
                }
#line 735 "prog_io_typeclass.m"
                {
#line 735 "prog_io_typeclass.m"
                  MR_Word base;
#line 735 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 735 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemInstance_12 = base;
#line 735 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_35));
#line 735 "prog_io_typeclass.m"
                }
#line 732 "prog_io_typeclass.m"
              }
#line 727 "prog_io_typeclass.m"
          }
#line 719 "prog_io_typeclass.m"
      }
#line 668 "prog_io_typeclass.m"
  }
#line 660 "prog_io_typeclass.m"
}

#line 610 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_fundep_2_p_0(
#line 610 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_3,
#line 610 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_4)
#line 610 "prog_io_typeclass.m"
{
#line 612 "prog_io_typeclass.m"
  {
#line 612 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__DomainTerm_5;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__RangeTerm_6;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_12_12;
#line 612 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_13_13;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_14_14;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;
#line 612 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 613 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_7_7;
#line 619 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_8;
#line 619 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_9;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_46;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_47;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_7_52;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_8_53;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypesTerm_44;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerms_45;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypesTerm_50;
#line 615 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeTerms_51;

#line 613 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 613 "prog_io_typeclass.m"
      {
#line 613 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 0)));
#line 613 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 1)));
#line 613 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Term_3, (MR_Integer) 2)));
#line 613 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_12_12)) == (MR_mktag((MR_Integer) 0)));
#line 613 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 613 "prog_io_typeclass.m"
          {
#line 613 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_12_12, (MR_Integer) 0)));
#line 613 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_13_13, (MR_String) "->") == 0);
#line 612 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
              {
#line 613 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 613 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 613 "prog_io_typeclass.m"
                  {
#line 613 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__DomainTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 0)));
#line 613 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_14_14, (MR_Integer) 1)));
#line 613 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 613 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 613 "prog_io_typeclass.m"
                      {
#line 613 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__RangeTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 0)));
#line 613 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_15_15, (MR_Integer) 1)));
#line 613 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 612 "prog_io_typeclass.m"
                          {
#line 6221 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6223 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_8_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 633 "prog_io_typeclass.m"
                            {
#line 633 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__TypesTerm_44 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_46, parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__DomainTerm_5);
                            }
#line 634 "prog_io_typeclass.m"
                            {
#line 634 "prog_io_typeclass.m"
                              parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypesTerm_44, &parse_tree__prog_io_typeclass__TypeTerms_45);
                            }
#line 635 "prog_io_typeclass.m"
                            {
#line 635 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_47, parse_tree__prog_io_typeclass__TypeTerms_45, &parse_tree__prog_io_typeclass__Domain_8);
                            }
#line 615 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 615 "prog_io_typeclass.m"
                              {
#line 6244 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6246 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_8_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 633 "prog_io_typeclass.m"
                                {
#line 633 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__TypesTerm_50 = mercury__term__coerce_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_7_52, parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__RangeTerm_6);
                                }
#line 634 "prog_io_typeclass.m"
                                {
#line 634 "prog_io_typeclass.m"
                                  parse_tree__prog_io_util__conjunction_to_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypesTerm_50, &parse_tree__prog_io_typeclass__TypeTerms_51);
                                }
#line 635 "prog_io_typeclass.m"
                                {
#line 635 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_8_53, parse_tree__prog_io_typeclass__TypeTerms_51, &parse_tree__prog_io_typeclass__Range_9);
                                }
#line 615 "prog_io_typeclass.m"
                              }
#line 619 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 618 "prog_io_typeclass.m"
                              {
#line 618 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 618 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_18_18;

#line 618 "prog_io_typeclass.m"
                                {
#line 618 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Domain_8));
#line 618 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Range_9));
#line 618 "prog_io_typeclass.m"
                                }
#line 618 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_17_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__prog_io_typeclass__V_18_18);
#line 618 "prog_io_typeclass.m"
                                {
#line 618 "prog_io_typeclass.m"
                                  MR_Word base;
#line 618 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 618 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 618 "prog_io_typeclass.m"
                                }
#line 618 "prog_io_typeclass.m"
                              }
#line 619 "prog_io_typeclass.m"
                            else
#line 622 "prog_io_typeclass.m"
                              {
#line 622 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__Spec_11;
#line 622 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 622 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_33_33;
#line 622 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 622 "prog_io_typeclass.m"
                                MR_Word parse_tree__prog_io_typeclass__V_39_39;

#line 624 "prog_io_typeclass.m"
                                {
#line 624 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_34_34 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_3);
                                }
#line 624 "prog_io_typeclass.m"
                                {
#line 624 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[78])));
#line 624 "prog_io_typeclass.m"
                                }
#line 624 "prog_io_typeclass.m"
                                {
#line 624 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 624 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 624 "prog_io_typeclass.m"
                                }
#line 623 "prog_io_typeclass.m"
                                {
#line 623 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__Spec_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 623 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 623 "prog_io_typeclass.m"
                                }
#line 625 "prog_io_typeclass.m"
                                {
#line 625 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_11));
#line 625 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "prog_io_typeclass.m"
                                }
#line 625 "prog_io_typeclass.m"
                                {
#line 625 "prog_io_typeclass.m"
                                  MR_Word base;
#line 625 "prog_io_typeclass.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 625 "prog_io_typeclass.m"
                                  *parse_tree__prog_io_typeclass__Result_4 = base;
#line 625 "prog_io_typeclass.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 625 "prog_io_typeclass.m"
                                }
#line 622 "prog_io_typeclass.m"
                              }
#line 619 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 612 "prog_io_typeclass.m"
                          }
#line 613 "prog_io_typeclass.m"
                      }
#line 613 "prog_io_typeclass.m"
                  }
#line 612 "prog_io_typeclass.m"
              }
#line 613 "prog_io_typeclass.m"
          }
#line 613 "prog_io_typeclass.m"
      }
#line 612 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 612 "prog_io_typeclass.m"
  }
#line 610 "prog_io_typeclass.m"
}

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 641 "prog_io_typeclass.m"
{
#line 641 "prog_io_typeclass.m"
  {
#line 641 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 641 "prog_io_typeclass.m"
    MR_builtin_longjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0, 1);
#line 641 "prog_io_typeclass.m"
  }
#line 641 "prog_io_typeclass.m"
}

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 641 "prog_io_typeclass.m"
{
#line 641 "prog_io_typeclass.m"
  {
#line 641 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 641 "prog_io_typeclass.m"
    (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86 = ((MR_Word) (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86);
#line 641 "prog_io_typeclass.m"
    {
#line 641 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(parse_tree__prog_io_typeclass__env_ptr);
#line 641 "prog_io_typeclass.m"
      return;
    }
#line 641 "prog_io_typeclass.m"
  }
#line 641 "prog_io_typeclass.m"
}

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 641 "prog_io_typeclass.m"
{
#line 641 "prog_io_typeclass.m"
  {
#line 641 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 642 "prog_io_typeclass.m"
    {
#line 642 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86);
    }
#line 641 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 641 "prog_io_typeclass.m"
      {
#line 643 "prog_io_typeclass.m"
        {
#line 643 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_86);
        }
#line 643 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 643 "prog_io_typeclass.m"
          {
#line 643 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(parse_tree__prog_io_typeclass__env_ptr);
#line 643 "prog_io_typeclass.m"
            return;
          }
#line 641 "prog_io_typeclass.m"
      }
#line 641 "prog_io_typeclass.m"
  }
#line 641 "prog_io_typeclass.m"
}

#line 641 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(
#line 641 "prog_io_typeclass.m"
  void * parse_tree__prog_io_typeclass__env_ptr_arg)
#line 641 "prog_io_typeclass.m"
{
#line 641 "prog_io_typeclass.m"
  {
#line 641 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s * parse_tree__prog_io_typeclass__env_ptr = (struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s *) parse_tree__prog_io_typeclass__env_ptr_arg;

#line 641 "prog_io_typeclass.m"
    if (MR_builtin_setjmp((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0) == 0)
#line 641 "prog_io_typeclass.m"
      {
#line 641 "prog_io_typeclass.m"
        {
#line 641 "prog_io_typeclass.m"
          {
#line 641 "prog_io_typeclass.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_86, (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84, parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3, parse_tree__prog_io_typeclass__env_ptr);
          }
#line 641 "prog_io_typeclass.m"
        }
#line 641 "prog_io_typeclass.m"
        (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = MR_FALSE;
#line 641 "prog_io_typeclass.m"
      }
#line 641 "prog_io_typeclass.m"
    else
#line 641 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = MR_TRUE;
#line 641 "prog_io_typeclass.m"
  }
#line 641 "prog_io_typeclass.m"
}

#line 533 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 533 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 533 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 533 "prog_io_typeclass.m"
{
#line 533 "prog_io_typeclass.m"
  {
#line 533 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s parse_tree__prog_io_typeclass__env;

#line 536 "prog_io_typeclass.m"
    {
#line 536 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__HeadResult_9;
#line 570 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar_31;
#line 570 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Inst_32;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_18_81;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_19_82;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg1_70;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg2_71;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar0_73;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 604 "prog_io_typeclass.m"
      MR_String parse_tree__prog_io_typeclass__V_76_76;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_77_77;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_79_79;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 605 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 606 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_74_74;

#line 605 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
        {
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 2)));
#line 605 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_75_75)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
            {
#line 605 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_75_75, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_76_76, (MR_String) "=<") == 0);
#line 604 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                {
#line 605 "prog_io_typeclass.m"
                  (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
                    {
#line 605 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Arg1_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_77_77, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_77_77, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
                        {
#line 605 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__Arg2_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (parse_tree__prog_io_typeclass__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "prog_io_typeclass.m"
                          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                            {
#line 606 "prog_io_typeclass.m"
                              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg1_70)) == (MR_mktag((MR_Integer) 1)));
#line 606 "prog_io_typeclass.m"
                              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 606 "prog_io_typeclass.m"
                                {
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__InstVar0_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_70, (MR_Integer) 0)));
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_70, (MR_Integer) 1)));
#line 6637 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_18_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6639 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_19_82 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 607 "prog_io_typeclass.m"
                                  {
#line 607 "prog_io_typeclass.m"
                                    mercury__term__coerce_var_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_18_81, parse_tree__prog_io_typeclass__TypeCtorInfo_19_82, parse_tree__prog_io_typeclass__InstVar0_73, &parse_tree__prog_io_typeclass__InstVar_31);
                                  }
#line 608 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_80_80 = (MR_Integer) 1;
#line 608 "prog_io_typeclass.m"
                                  {
#line 608 "prog_io_typeclass.m"
                                    (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_typeclass__V_80_80, parse_tree__prog_io_typeclass__Arg2_71, &parse_tree__prog_io_typeclass__Inst_32);
                                  }
#line 606 "prog_io_typeclass.m"
                                }
#line 604 "prog_io_typeclass.m"
                            }
#line 605 "prog_io_typeclass.m"
                        }
#line 605 "prog_io_typeclass.m"
                    }
#line 604 "prog_io_typeclass.m"
                }
#line 605 "prog_io_typeclass.m"
            }
#line 605 "prog_io_typeclass.m"
        }
#line 570 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 569 "prog_io_typeclass.m"
        {
#line 569 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_43_43;

#line 569 "prog_io_typeclass.m"
          {
#line 569 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_31));
#line 569 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Inst_32));
#line 569 "prog_io_typeclass.m"
          }
#line 569 "prog_io_typeclass.m"
          {
#line 569 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 569 "prog_io_typeclass.m"
          }
#line 569 "prog_io_typeclass.m"
        }
#line 570 "prog_io_typeclass.m"
      else
#line 574 "prog_io_typeclass.m"
        {
#line 574 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Result0_33;

#line 571 "prog_io_typeclass.m"
          {
#line 571 "prog_io_typeclass.m"
            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_typeclass__parse_fundep_2_p_0(parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__Result0_33);
          }
#line 574 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 573 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = parse_tree__prog_io_typeclass__Result0_33;
#line 574 "prog_io_typeclass.m"
          else
#line 593 "prog_io_typeclass.m"
            {
#line 593 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassName_34;
#line 593 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Args0_35;

#line 575 "prog_io_typeclass.m"
              {
#line 575 "prog_io_typeclass.m"
                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__ClassName_34, &parse_tree__prog_io_typeclass__Args0_35);
              }
#line 593 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 579 "prog_io_typeclass.m"
                {
#line 579 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgsResult_37;

#line 580 "prog_io_typeclass.m"
                  {
#line 580 "prog_io_typeclass.m"
                    parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__Args0_35, parse_tree__prog_io_typeclass__VarSet_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__ArgsResult_37);
                  }
#line 589 "prog_io_typeclass.m"
                  if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgsResult_37)) == (MR_mktag((MR_Integer) 0))))
#line 591 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) parse_tree__prog_io_typeclass__ArgsResult_37;
#line 589 "prog_io_typeclass.m"
                  else
#line 582 "prog_io_typeclass.m"
                    {
#line 582 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__Args_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgsResult_37, (MR_Integer) 0)));
#line 582 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass__Constraint_39;
#line 639 "prog_io_typeclass.m"
                      MR_Word parse_tree__prog_io_typeclass___ClassName_83;

#line 583 "prog_io_typeclass.m"
                      {
#line 583 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraint_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "prog_io_typeclass.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_34));
#line 583 "prog_io_typeclass.m"
                        MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Args_38));
#line 583 "prog_io_typeclass.m"
                      }
#line 639 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass___ClassName_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 0)));
#line 639 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 1)));
#line 641 "prog_io_typeclass.m"
                      {
#line 641 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(&parse_tree__prog_io_typeclass__env);
                      }
#line 586 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 585 "prog_io_typeclass.m"
                        {
#line 585 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 585 "prog_io_typeclass.m"
                          {
#line 585 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 585 "prog_io_typeclass.m"
                          }
#line 585 "prog_io_typeclass.m"
                        }
#line 586 "prog_io_typeclass.m"
                      else
#line 587 "prog_io_typeclass.m"
                        {
#line 587 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 587 "prog_io_typeclass.m"
                          {
#line 587 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 587 "prog_io_typeclass.m"
                          }
#line 587 "prog_io_typeclass.m"
                        }
#line 582 "prog_io_typeclass.m"
                    }
#line 579 "prog_io_typeclass.m"
                }
#line 593 "prog_io_typeclass.m"
              else
#line 595 "prog_io_typeclass.m"
                {
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Spec_42;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_63_63;

#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6);
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_58_58));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[77])));
#line 597 "prog_io_typeclass.m"
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_57_57));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "prog_io_typeclass.m"
                  }
#line 596 "prog_io_typeclass.m"
                  {
#line 596 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Spec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_56_56));
#line 596 "prog_io_typeclass.m"
                  }
#line 598 "prog_io_typeclass.m"
                  {
#line 598 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_42));
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "prog_io_typeclass.m"
                  }
#line 598 "prog_io_typeclass.m"
                  {
#line 598 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_63_63));
#line 598 "prog_io_typeclass.m"
                  }
#line 595 "prog_io_typeclass.m"
                }
#line 593 "prog_io_typeclass.m"
            }
#line 574 "prog_io_typeclass.m"
        }
#line 547 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__TailTerms_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 545 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__HeadResult_9;
#line 543 "prog_io_typeclass.m"
        else
#line 541 "prog_io_typeclass.m"
          {
#line 541 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__HeadConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 541 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_20_20;

#line 542 "prog_io_typeclass.m"
            {
#line 542 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_10));
#line 542 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_typeclass.m"
            }
#line 542 "prog_io_typeclass.m"
            {
#line 542 "prog_io_typeclass.m"
              MR_Word base;
#line 542 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 542 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_20_20));
#line 542 "prog_io_typeclass.m"
            }
#line 541 "prog_io_typeclass.m"
          }
#line 547 "prog_io_typeclass.m"
      else
#line 548 "prog_io_typeclass.m"
        {
#line 548 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadTailTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 0)));
#line 548 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailTailTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 1)));
#line 548 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailResult_14;
#line 556 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailConstraints_15;
#line 556 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadConstraint_22;

#line 549 "prog_io_typeclass.m"
          {
#line 549 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_5, parse_tree__prog_io_typeclass__HeadTailTerm_12, parse_tree__prog_io_typeclass__TailTailTerms_13, &parse_tree__prog_io_typeclass__TailResult_14);
          }
#line 552 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 1)));
#line 552 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 552 "prog_io_typeclass.m"
            {
#line 552 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__HeadConstraint_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 553 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TailResult_14)) == (MR_mktag((MR_Integer) 1)));
#line 553 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 553 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__TailConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailResult_14, (MR_Integer) 0)));
#line 552 "prog_io_typeclass.m"
            }
#line 556 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 555 "prog_io_typeclass.m"
            {
#line 555 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 555 "prog_io_typeclass.m"
              {
#line 555 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_22)), parse_tree__prog_io_typeclass__TailConstraints_15);
              }
#line 555 "prog_io_typeclass.m"
              {
#line 555 "prog_io_typeclass.m"
                MR_Word base;
#line 555 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 555 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 555 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_16_16));
#line 555 "prog_io_typeclass.m"
              }
#line 555 "prog_io_typeclass.m"
            }
#line 556 "prog_io_typeclass.m"
          else
#line 557 "prog_io_typeclass.m"
            {
#line 557 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 557 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 557 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 557 "prog_io_typeclass.m"
              {
#line 557 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, parse_tree__prog_io_typeclass__HeadResult_9);
              }
#line 558 "prog_io_typeclass.m"
              {
#line 558 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = parse_tree__prog_io_util__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], parse_tree__prog_io_typeclass__TailResult_14);
              }
#line 557 "prog_io_typeclass.m"
              {
#line 557 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_18_18, parse_tree__prog_io_typeclass__V_19_19);
              }
#line 557 "prog_io_typeclass.m"
              {
#line 557 "prog_io_typeclass.m"
                MR_Word base;
#line 557 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 557 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 557 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 557 "prog_io_typeclass.m"
              }
#line 557 "prog_io_typeclass.m"
            }
#line 548 "prog_io_typeclass.m"
        }
#line 536 "prog_io_typeclass.m"
    }
#line 533 "prog_io_typeclass.m"
  }
#line 533 "prog_io_typeclass.m"
}

#line 483 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 483 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 483 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 483 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 483 "prog_io_typeclass.m"
{
#line 486 "prog_io_typeclass.m"
  {
#line 486 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 486 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "prog_io_typeclass.m"
      {
#line 486 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 486 "prog_io_typeclass.m"
        {
#line 486 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 486 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 486 "prog_io_typeclass.m"
      }
#line 486 "prog_io_typeclass.m"
    else
#line 488 "prog_io_typeclass.m"
      {
#line 488 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 488 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub0_9;

#line 489 "prog_io_typeclass.m"
        {
#line 489 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__ProgConstraints0_8, &parse_tree__prog_io_typeclass__InstVarSub0_9);
        }
#line 488 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 495 "prog_io_typeclass.m"
#line 495 "prog_io_typeclass.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) {
#line 495 "prog_io_typeclass.m"
            default:
#line 495 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 495 "prog_io_typeclass.m"
              break;
#line 495 "prog_io_typeclass.m"
            case (MR_Integer) 0:
#line 492 "prog_io_typeclass.m"
              {
#line 492 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 493 "prog_io_typeclass.m"
                {
#line 493 "prog_io_typeclass.m"
                  MR_Word base;
#line 493 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 493 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 493 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 493 "prog_io_typeclass.m"
                }
#line 494 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 492 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 492 "prog_io_typeclass.m"
              }
#line 495 "prog_io_typeclass.m"
              break;
#line 495 "prog_io_typeclass.m"
            case (MR_Integer) 1:
#line 496 "prog_io_typeclass.m"
              {
#line 496 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassConstraint_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 1);

#line 497 "prog_io_typeclass.m"
                {
#line 497 "prog_io_typeclass.m"
                  MR_Word base;
#line 497 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 497 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassConstraint_11));
#line 497 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 497 "prog_io_typeclass.m"
                }
#line 498 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 496 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 496 "prog_io_typeclass.m"
              }
#line 495 "prog_io_typeclass.m"
              break;
#line 495 "prog_io_typeclass.m"
            case (MR_Integer) 3:
#line 500 "prog_io_typeclass.m"
              {
#line 500 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 0)));
#line 500 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 1)));

#line 501 "prog_io_typeclass.m"
                {
#line 501 "prog_io_typeclass.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_12)), ((MR_Box) (parse_tree__prog_io_typeclass__Inst_13)), parse_tree__prog_io_typeclass__InstVarSub0_9, parse_tree__prog_io_typeclass__HeadVar__3_3);
                }
#line 502 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 500 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 500 "prog_io_typeclass.m"
              }
#line 495 "prog_io_typeclass.m"
              break;
#line 495 "prog_io_typeclass.m"
          }
#line 488 "prog_io_typeclass.m"
      }
#line 486 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 486 "prog_io_typeclass.m"
  }
#line 483 "prog_io_typeclass.m"
}

#line 454 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 454 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 454 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3)
#line 454 "prog_io_typeclass.m"
{
#line 457 "prog_io_typeclass.m"
  {
#line 457 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 457 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 457 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 457 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 457 "prog_io_typeclass.m"
  }
#line 454 "prog_io_typeclass.m"
}

#line 358 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__item_to_class_method_3_p_0(
#line 358 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 358 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Term_2,
#line 358 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 358 "prog_io_typeclass.m"
{
#line 361 "prog_io_typeclass.m"
  {
#line 361 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 361 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 361 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 361 "prog_io_typeclass.m"
    else
#line 362 "prog_io_typeclass.m"
      {
#line 362 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Item_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 371 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemPredDecl_9;

#line 363 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 363 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 363 "prog_io_typeclass.m"
          {
#line 363 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__ItemPredDecl_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 366 "prog_io_typeclass.m"
            {
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 0)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__PorF_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 1)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ArgDecls_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 2)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 3)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 4)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__MaybeDetism_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 5)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 7)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__InstVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 8)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 9)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Purity_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 10)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Constraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 11)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 12)));
#line 366 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassMethod_24;
#line 364 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass___Origin_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 6)));
#line 364 "prog_io_typeclass.m"
              MR_Integer parse_tree__prog_io_typeclass___SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemPredDecl_9, (MR_Integer) 13)));

#line 367 "prog_io_typeclass.m"
              {
#line 367 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ClassMethod_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_10));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PorF_11));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgDecls_12));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithType_13));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_14));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_15));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeVarSet_17));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_18));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ExistQVars_19));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 9) = ((MR_Box) (parse_tree__prog_io_typeclass__Purity_20));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 10) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_21));
#line 367 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethod_24, 11) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_22));
#line 367 "prog_io_typeclass.m"
              }
#line 370 "prog_io_typeclass.m"
              {
#line 370 "prog_io_typeclass.m"
                MR_Word base;
#line 370 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 370 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 370 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_24));
#line 370 "prog_io_typeclass.m"
              }
#line 366 "prog_io_typeclass.m"
            }
#line 363 "prog_io_typeclass.m"
          }
#line 363 "prog_io_typeclass.m"
        else
#line 377 "prog_io_typeclass.m"
          {
#line 377 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemModeDecl_25;

#line 371 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 371 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 371 "prog_io_typeclass.m"
              {
#line 371 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__ItemModeDecl_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Item_6, (MR_Integer) 1)));
#line 373 "prog_io_typeclass.m"
                {
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybePorF_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 1)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 2)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Name_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 0)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__WithInst_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 3)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__MaybeDetism_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 4)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__InstVarSet_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 5)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Context_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 6)));
#line 373 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ClassMethod_56;
#line 372 "prog_io_typeclass.m"
                  MR_Integer parse_tree__prog_io_typeclass___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemModeDecl_25, (MR_Integer) 7)));

#line 374 "prog_io_typeclass.m"
                  {
#line 374 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethod_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Name_50));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybePorF_26));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ArgModes_27));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__WithInst_51));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__MaybeDetism_52));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSet_53));
#line 374 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ClassMethod_56, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_54));
#line 374 "prog_io_typeclass.m"
                  }
#line 376 "prog_io_typeclass.m"
                  {
#line 376 "prog_io_typeclass.m"
                    MR_Word base;
#line 376 "prog_io_typeclass.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 376 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethod_56));
#line 376 "prog_io_typeclass.m"
                  }
#line 373 "prog_io_typeclass.m"
                }
#line 371 "prog_io_typeclass.m"
              }
#line 371 "prog_io_typeclass.m"
            else
#line 379 "prog_io_typeclass.m"
              {
#line 379 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_29;
#line 379 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 379 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_41_41;
#line 379 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_42_42;
#line 379 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_47_47;

#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Term_2);
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[76])));
#line 381 "prog_io_typeclass.m"
                }
#line 381 "prog_io_typeclass.m"
                {
#line 381 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 381 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_typeclass.m"
                }
#line 380 "prog_io_typeclass.m"
                {
#line 380 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 380 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_29, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 380 "prog_io_typeclass.m"
                }
#line 382 "prog_io_typeclass.m"
                {
#line 382 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_29));
#line 382 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "prog_io_typeclass.m"
                }
#line 382 "prog_io_typeclass.m"
                {
#line 382 "prog_io_typeclass.m"
                  MR_Word base;
#line 382 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 382 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 382 "prog_io_typeclass.m"
                }
#line 379 "prog_io_typeclass.m"
              }
#line 377 "prog_io_typeclass.m"
          }
#line 362 "prog_io_typeclass.m"
      }
#line 361 "prog_io_typeclass.m"
  }
#line 358 "prog_io_typeclass.m"
}

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 311 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 311 "prog_io_typeclass.m"
{
#line 311 "prog_io_typeclass.m"
  {
#line 311 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 311 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 311 "prog_io_typeclass.m"
    {
#line 311 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__311__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 311 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 311 "prog_io_typeclass.m"
  }
#line 311 "prog_io_typeclass.m"
}

#line 300 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_8,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_9,
#line 300 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 300 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 300 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12)
#line 300 "prog_io_typeclass.m"
{
#line 304 "prog_io_typeclass.m"
  {
#line 304 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 304 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 304 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 304 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 304 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 306 "prog_io_typeclass.m"
    {
#line 306 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__TVarSet_9, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 307 "prog_io_typeclass.m"
    {
#line 307 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__NameTerm_8, parse_tree__prog_io_typeclass__VarSet_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 330 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 331 "prog_io_typeclass.m"
      {
#line 331 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 332 "prog_io_typeclass.m"
        {
#line 332 "prog_io_typeclass.m"
          MR_Word base;
#line 332 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 332 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_24));
#line 332 "prog_io_typeclass.m"
        }
#line 331 "prog_io_typeclass.m"
      }
#line 330 "prog_io_typeclass.m"
    else
#line 310 "prog_io_typeclass.m"
      {
#line 310 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_59 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 310 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 310 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 310 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars_18;
#line 322 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Vars_19;
#line 313 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SortedTermVars_20;
#line 313 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_29_29;
#line 313 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_60_60;

#line 311 "prog_io_typeclass.m"
        {
#line 311 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_59, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[4], parse_tree__prog_io_typeclass__TermVars0_17, &parse_tree__prog_io_typeclass__TermVars_18);
        }
#line 313 "prog_io_typeclass.m"
        {
#line 313 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_52, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__Vars_19);
        }
#line 313 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 313 "prog_io_typeclass.m"
          {
#line 314 "prog_io_typeclass.m"
            {
#line 314 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 315 "prog_io_typeclass.m"
            {
#line 315 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__SortedTermVars_20);
            }
#line 315 "prog_io_typeclass.m"
            {
#line 315 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_59, parse_tree__prog_io_typeclass__TermVars_18);
            }
#line 315 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_29_29 == parse_tree__prog_io_typeclass__V_60_60);
#line 313 "prog_io_typeclass.m"
          }
#line 322 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 320 "prog_io_typeclass.m"
          {
#line 320 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_21;

#line 319 "prog_io_typeclass.m"
            {
#line 319 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__TypeClassInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_19));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_9));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 319 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 319 "prog_io_typeclass.m"
            }
#line 321 "prog_io_typeclass.m"
            {
#line 321 "prog_io_typeclass.m"
              MR_Word base;
#line 321 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 321 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_21));
#line 321 "prog_io_typeclass.m"
            }
#line 320 "prog_io_typeclass.m"
          }
#line 322 "prog_io_typeclass.m"
        else
#line 324 "prog_io_typeclass.m"
          {
#line 324 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_23;
#line 324 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_43_43;
#line 324 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 324 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 324 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_50_50;

#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_53, parse_tree__prog_io_typeclass__NameTerm_8);
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 327 "prog_io_typeclass.m"
            }
#line 327 "prog_io_typeclass.m"
            {
#line 327 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 327 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
            }
#line 326 "prog_io_typeclass.m"
            {
#line 326 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 326 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 326 "prog_io_typeclass.m"
            }
#line 328 "prog_io_typeclass.m"
            {
#line 328 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_23));
#line 328 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "prog_io_typeclass.m"
            }
#line 328 "prog_io_typeclass.m"
            {
#line 328 "prog_io_typeclass.m"
              MR_Word base;
#line 328 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 328 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 328 "prog_io_typeclass.m"
            }
#line 324 "prog_io_typeclass.m"
          }
#line 310 "prog_io_typeclass.m"
      }
#line 304 "prog_io_typeclass.m"
  }
#line 300 "prog_io_typeclass.m"
}

#line 282 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 282 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 282 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 282 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 282 "prog_io_typeclass.m"
{
#line 285 "prog_io_typeclass.m"
  {
#line 285 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 285 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "prog_io_typeclass.m"
      {
#line 285 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 285 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 285 "prog_io_typeclass.m"
      }
#line 285 "prog_io_typeclass.m"
    else
#line 287 "prog_io_typeclass.m"
      {
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 287 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_9;

#line 288 "prog_io_typeclass.m"
        {
#line 288 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__SimpleConstraints0_8, &parse_tree__prog_io_typeclass__FunDeps0_9);
        }
#line 287 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 294 "prog_io_typeclass.m"
          {
#line 294 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 295 "prog_io_typeclass.m"
              {
#line 295 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 2);

#line 296 "prog_io_typeclass.m"
                {
#line 296 "prog_io_typeclass.m"
                  MR_Word base;
#line 296 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 296 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_11));
#line 296 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_9));
#line 296 "prog_io_typeclass.m"
                }
#line 297 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 295 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 295 "prog_io_typeclass.m"
              }
#line 294 "prog_io_typeclass.m"
            else
#line 294 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 291 "prog_io_typeclass.m"
              {
#line 291 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 292 "prog_io_typeclass.m"
                {
#line 292 "prog_io_typeclass.m"
                  MR_Word base;
#line 292 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 292 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 292 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_8));
#line 292 "prog_io_typeclass.m"
                }
#line 293 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__FunDeps0_9;
#line 291 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 291 "prog_io_typeclass.m"
              }
#line 294 "prog_io_typeclass.m"
            else
#line 294 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 294 "prog_io_typeclass.m"
          }
#line 287 "prog_io_typeclass.m"
      }
#line 285 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 285 "prog_io_typeclass.m"
  }
#line 282 "prog_io_typeclass.m"
}

#line 251 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 251 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1)
#line 251 "prog_io_typeclass.m"
{
#line 253 "prog_io_typeclass.m"
  {
#line 253 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));

#line 253 "prog_io_typeclass.m"
    {
#line 253 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__Domain_3, parse_tree__prog_io_typeclass__Range_4);
    }
#line 253 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 253 "prog_io_typeclass.m"
  }
#line 251 "prog_io_typeclass.m"
}

#line 249 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 249 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 249 "prog_io_typeclass.m"
{
#line 249 "prog_io_typeclass.m"
  {
#line 249 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 249 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_2;

#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__2_2 = parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 249 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_2));
#line 249 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 249 "prog_io_typeclass.m"
  }
#line 249 "prog_io_typeclass.m"
}

#line 247 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 247 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3)
#line 247 "prog_io_typeclass.m"
{
#line 249 "prog_io_typeclass.m"
  {
#line 249 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 249 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_4_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[3], parse_tree__prog_io_typeclass__FunDeps_3);
    }
#line 249 "prog_io_typeclass.m"
    {
#line 249 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__V_4_4);
    }
#line 249 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 249 "prog_io_typeclass.m"
  }
#line 247 "prog_io_typeclass.m"
}

#line 201 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 201 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 201 "prog_io_typeclass.m"
{
#line 201 "prog_io_typeclass.m"
  {
#line 201 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 201 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 201 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv1_HeadVar__4_163;

#line 201 "prog_io_typeclass.m"
    {
#line 201 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv1_HeadVar__4_163 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__201__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 201 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv1_HeadVar__4_163));
#line 201 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 201 "prog_io_typeclass.m"
  }
#line 201 "prog_io_typeclass.m"
}

#line 198 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
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
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__4_160;

#line 198 "prog_io_typeclass.m"
    {
#line 198 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__4_160 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__198__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 198 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_160));
#line 198 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 198 "prog_io_typeclass.m"
  }
#line 198 "prog_io_typeclass.m"
}

#line 159 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 159 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 159 "prog_io_typeclass.m"
{
#line 159 "prog_io_typeclass.m"
  {
#line 159 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 159 "prog_io_typeclass.m"
    {
#line 159 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__159__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 159 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 159 "prog_io_typeclass.m"
  }
#line 159 "prog_io_typeclass.m"
}

#line 157 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 157 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 157 "prog_io_typeclass.m"
{
#line 157 "prog_io_typeclass.m"
  {
#line 157 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 157 "prog_io_typeclass.m"
    {
#line 157 "prog_io_typeclass.m"
      return parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__157__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 157 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 157 "prog_io_typeclass.m"
  }
#line 157 "prog_io_typeclass.m"
}

#line 130 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Decl_9,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_10,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 130 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 130 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 130 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 130 "prog_io_typeclass.m"
{
#line 135 "prog_io_typeclass.m"
  {
#line 135 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 135 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 135 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;

#line 136 "prog_io_typeclass.m"
    {
#line 136 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 137 "prog_io_typeclass.m"
    {
#line 137 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__ConstraintsTerm_10, &parse_tree__prog_io_typeclass__MaybeParsedConstraints_16);
    }
#line 242 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
#line 243 "prog_io_typeclass.m"
      {
#line 243 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));

#line 244 "prog_io_typeclass.m"
        {
#line 244 "prog_io_typeclass.m"
          MR_Word base;
#line 244 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 244 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_59));
#line 244 "prog_io_typeclass.m"
        }
#line 243 "prog_io_typeclass.m"
      }
#line 242 "prog_io_typeclass.m"
    else
#line 140 "prog_io_typeclass.m"
      {
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 1)));
#line 140 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;

#line 141 "prog_io_typeclass.m"
        {
#line 141 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Decl_9, parse_tree__prog_io_typeclass__TVarSet_15, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19);
        }
#line 146 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
#line 145 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;
#line 146 "prog_io_typeclass.m"
        else
#line 147 "prog_io_typeclass.m"
          {
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_151_151;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19, (MR_Integer) 0)));
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintVars_22;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedConstraintVars_23;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepVars_24;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedFunDepVars_25;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Params_26;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParams_28;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepNotInParams_30;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintErrorContext_33;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepErrorContext_36;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NotInParams_37;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 147 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_169_169;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_170_170;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_171_171;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_172_172;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 147 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_176_176;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_119_119;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_120_120;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_121_121;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_122_122;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_123_123;
#line 156 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_124_124;
#line 156 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_125_125;
#line 157 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___ConstraintInParams_27;
#line 159 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___FunDepInParams_29;
#line 190 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 190 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_174_174;

#line 151 "prog_io_typeclass.m"
            {
#line 151 "prog_io_typeclass.m"
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__ConstraintList_17, &parse_tree__prog_io_typeclass__ConstraintVars_22);
            }
#line 8241 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeInfo_151_151 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0];
#line 152 "prog_io_typeclass.m"
            {
#line 152 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintVars_22, &parse_tree__prog_io_typeclass__SortedConstraintVars_23);
            }
#line 153 "prog_io_typeclass.m"
            {
#line 153 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepVars_24 = parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(parse_tree__prog_io_typeclass__FunDeps_18);
            }
#line 154 "prog_io_typeclass.m"
            {
#line 154 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__FunDepVars_24, &parse_tree__prog_io_typeclass__SortedFunDepVars_25);
            }
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 156 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 157 "prog_io_typeclass.m"
            {
#line 157 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 157 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 157 "prog_io_typeclass.m"
            }
#line 157 "prog_io_typeclass.m"
            {
#line 157 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__SortedConstraintVars_23, &parse_tree__prog_io_typeclass___ConstraintInParams_27, &parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
            }
#line 159 "prog_io_typeclass.m"
            {
#line 159 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[1]));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 159 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 159 "prog_io_typeclass.m"
            }
#line 159 "prog_io_typeclass.m"
            {
#line 159 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__V_61_61, parse_tree__prog_io_typeclass__SortedFunDepVars_25, &parse_tree__prog_io_typeclass___FunDepInParams_29, &parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 170 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 171 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "prog_io_typeclass.m"
            else
#line 166 "prog_io_typeclass.m"
              {
#line 163 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_62_62;

#line 163 "prog_io_typeclass.m"
                {
#line 163 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_typeclass__ConstraintList_17);
                }
#line 163 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_62_62 == (MR_Integer) 1);
#line 166 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 164 "prog_io_typeclass.m"
                  {
#line 165 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[59]);
#line 164 "prog_io_typeclass.m"
                  }
#line 166 "prog_io_typeclass.m"
                else
#line 167 "prog_io_typeclass.m"
                  {
#line 168 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[61]);
#line 167 "prog_io_typeclass.m"
                  }
#line 166 "prog_io_typeclass.m"
              }
#line 183 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 184 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "prog_io_typeclass.m"
            else
#line 179 "prog_io_typeclass.m"
              {
#line 176 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_69_69;

#line 176 "prog_io_typeclass.m"
                {
#line 176 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__prog_io_typeclass__FunDeps_18);
                }
#line 176 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_69_69 == (MR_Integer) 1);
#line 179 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 177 "prog_io_typeclass.m"
                  {
#line 178 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[63]);
#line 177 "prog_io_typeclass.m"
                  }
#line 179 "prog_io_typeclass.m"
                else
#line 180 "prog_io_typeclass.m"
                  {
#line 181 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[65]);
#line 180 "prog_io_typeclass.m"
                  }
#line 179 "prog_io_typeclass.m"
              }
#line 187 "prog_io_typeclass.m"
            {
#line 187 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__ConstraintNotInParams_28, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 190 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_169_169 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 194 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "prog_io_typeclass.m"
              {
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemTypeClass_38;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_126_126 = parse_tree__prog_io_typeclass__V_176_176;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_127_127 = parse_tree__prog_io_typeclass__V_175_175;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_130_130 = parse_tree__prog_io_typeclass__V_172_172;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_131_131 = parse_tree__prog_io_typeclass__V_171_171;
#line 189 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_132_132 = parse_tree__prog_io_typeclass__V_170_170;
#line 189 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_133_133 = parse_tree__prog_io_typeclass__V_169_169;

#line 190 "prog_io_typeclass.m"
                {
#line 190 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_18));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_131_131));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_132_132));
#line 190 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 190 "prog_io_typeclass.m"
                }
#line 193 "prog_io_typeclass.m"
                {
#line 193 "prog_io_typeclass.m"
                  MR_Word base;
#line 193 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 193 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 193 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClass_38));
#line 193 "prog_io_typeclass.m"
                }
#line 189 "prog_io_typeclass.m"
              }
#line 194 "prog_io_typeclass.m"
            else
#line 195 "prog_io_typeclass.m"
              {
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_158_158 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_168_168;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Prefix_46;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Suffix_47;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Middle_50;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_57;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_58;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_103_103;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_111_111;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_112_112;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 195 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 207 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_80_80;

#line 198 "prog_io_typeclass.m"
                {
#line 198 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 3) = ((MR_Box) ((MR_Integer) 0));
#line 198 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 198 "prog_io_typeclass.m"
                }
#line 198 "prog_io_typeclass.m"
                {
#line 198 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_76_76, parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
                }
#line 201 "prog_io_typeclass.m"
                {
#line 201 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2]));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 3) = ((MR_Box) ((MR_Integer) 0));
#line 201 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_171_171));
#line 201 "prog_io_typeclass.m"
                }
#line 201 "prog_io_typeclass.m"
                {
#line 201 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__TypeCtorInfo_158_158, parse_tree__prog_io_typeclass__V_78_78, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
                }
#line 203 "prog_io_typeclass.m"
                {
#line 203 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42);
                }
#line 205 "prog_io_typeclass.m"
                {
#line 205 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43);
                }
#line 207 "prog_io_typeclass.m"
                {
#line 207 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_80_80 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_151_151, parse_tree__prog_io_typeclass__NotInParams_37);
                }
#line 207 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_80_80 == (MR_Integer) 1);
#line 210 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 208 "prog_io_typeclass.m"
                  {
#line 208 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[67]);
#line 209 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[69]);
#line 208 "prog_io_typeclass.m"
                  }
#line 210 "prog_io_typeclass.m"
                else
#line 211 "prog_io_typeclass.m"
                  {
#line 211 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[71]);
#line 212 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[73]);
#line 211 "prog_io_typeclass.m"
                  }
#line 218 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 218 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "prog_io_typeclass.m"
                    {
#line 217 "prog_io_typeclass.m"
                      {
#line 217 "prog_io_typeclass.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_typeclass", (MR_String) "predicate \140parse_tree.prog_io_typeclass.parse_constrained_class\'/7", (MR_String) "no NotInParams");
#line 217 "prog_io_typeclass.m"
                        return;
                      }
#line 215 "prog_io_typeclass.m"
                    }
#line 218 "prog_io_typeclass.m"
                  else
#line 219 "prog_io_typeclass.m"
                    {
#line 221 "prog_io_typeclass.m"
                      {
#line 221 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 219 "prog_io_typeclass.m"
                    }
#line 218 "prog_io_typeclass.m"
                else
#line 218 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "prog_io_typeclass.m"
                  {
#line 226 "prog_io_typeclass.m"
                    {
#line 226 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__ConstraintErrorContext_33);
                    }
#line 224 "prog_io_typeclass.m"
                  }
#line 218 "prog_io_typeclass.m"
                else
#line 229 "prog_io_typeclass.m"
                  {
#line 229 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_167_167 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 229 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_93_93;
#line 229 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 229 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_99_99;

#line 234 "prog_io_typeclass.m"
                    {
#line 234 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_99_99 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                    }
#line 233 "prog_io_typeclass.m"
                    {
#line 233 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_94_94 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[75]), parse_tree__prog_io_typeclass__V_99_99);
                    }
#line 233 "prog_io_typeclass.m"
                    {
#line 233 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintErrorContext_33, parse_tree__prog_io_typeclass__V_94_94);
                    }
#line 232 "prog_io_typeclass.m"
                    {
#line 232 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_167_167, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__V_93_93);
                    }
#line 229 "prog_io_typeclass.m"
                  }
#line 8660 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeCtorInfo_168_168 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_104_104 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[10]));
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_103_103 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Middle_50, parse_tree__prog_io_typeclass__V_104_104);
                }
#line 236 "prog_io_typeclass.m"
                {
#line 236 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_168_168, parse_tree__prog_io_typeclass__Prefix_46, parse_tree__prog_io_typeclass__V_103_103);
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_57));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_12));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_112_112));
#line 238 "prog_io_typeclass.m"
                }
#line 238 "prog_io_typeclass.m"
                {
#line 238 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_111_111));
#line 238 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "prog_io_typeclass.m"
                }
#line 237 "prog_io_typeclass.m"
                {
#line 237 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 237 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 237 "prog_io_typeclass.m"
                }
#line 239 "prog_io_typeclass.m"
                {
#line 239 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_58));
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "prog_io_typeclass.m"
                }
#line 239 "prog_io_typeclass.m"
                {
#line 239 "prog_io_typeclass.m"
                  MR_Word base;
#line 239 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 239 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 239 "prog_io_typeclass.m"
                }
#line 195 "prog_io_typeclass.m"
              }
#line 147 "prog_io_typeclass.m"
          }
#line 140 "prog_io_typeclass.m"
      }
#line 135 "prog_io_typeclass.m"
  }
#line 130 "prog_io_typeclass.m"
}

#line 311 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0_1(
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 311 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 311 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 311 "prog_io_typeclass.m"
{
#line 311 "prog_io_typeclass.m"
  {
#line 311 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 311 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_55;

#line 311 "prog_io_typeclass.m"
    {
#line 311 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__311__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_55);
    }
#line 311 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_55));
#line 311 "prog_io_typeclass.m"
  }
#line 311 "prog_io_typeclass.m"
}

#line 116 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_head_6_p_0(
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Arg_8,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 116 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 116 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 116 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_12)
#line 116 "prog_io_typeclass.m"
{
#line 124 "prog_io_typeclass.m"
  {
#line 124 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_8)) == (MR_mktag((MR_Integer) 0)));
#line 124 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_13;
#line 124 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_14;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 121 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_18_18;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 121 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 121 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
      {
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_8, (MR_Integer) 2)));
#line 121 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_17_17)) == (MR_mktag((MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
          {
#line 121 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_17_17, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_18_18, (MR_String) "<=") == 0);
#line 121 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
              {
#line 121 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
                  {
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 121 "prog_io_typeclass.m"
                      {
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 121 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_typeclass.m"
                      }
#line 121 "prog_io_typeclass.m"
                  }
#line 121 "prog_io_typeclass.m"
              }
#line 121 "prog_io_typeclass.m"
          }
#line 121 "prog_io_typeclass.m"
      }
#line 124 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 122 "prog_io_typeclass.m"
      {
#line 122 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_13, parse_tree__prog_io_typeclass__Constraints_14, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
#line 122 "prog_io_typeclass.m"
        return;
      }
#line 124 "prog_io_typeclass.m"
    else
#line 125 "prog_io_typeclass.m"
      {
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_52_69;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_53_70;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_16;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_31;
#line 125 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_32;

#line 125 "prog_io_typeclass.m"
        {
#line 125 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_16);
        }
#line 8913 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_52_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 8915 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_53_70 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 306 "prog_io_typeclass.m"
        {
#line 306 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__TVarSet_16, &parse_tree__prog_io_typeclass__VarSet_31);
        }
#line 307 "prog_io_typeclass.m"
        {
#line 307 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_8, parse_tree__prog_io_typeclass__VarSet_31, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[56]), &parse_tree__prog_io_typeclass__MaybeClassName_32);
        }
#line 330 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_32)) == (MR_mktag((MR_Integer) 0))))
#line 331 "prog_io_typeclass.m"
          {
#line 331 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));

#line 332 "prog_io_typeclass.m"
            {
#line 332 "prog_io_typeclass.m"
              MR_Word base;
#line 332 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 332 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 332 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_41));
#line 332 "prog_io_typeclass.m"
            }
#line 331 "prog_io_typeclass.m"
          }
#line 330 "prog_io_typeclass.m"
        else
#line 310 "prog_io_typeclass.m"
          {
#line 310 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_59_76 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3];
#line 310 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 0)));
#line 310 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_32, (MR_Integer) 1)));
#line 310 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TermVars_35;
#line 322 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Vars_36;
#line 313 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedTermVars_37;
#line 313 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_46_46;
#line 313 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_77_77;

#line 311 "prog_io_typeclass.m"
            {
#line 311 "prog_io_typeclass.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], parse_tree__prog_io_typeclass__TypeInfo_59_76, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[2], parse_tree__prog_io_typeclass__TermVars0_34, &parse_tree__prog_io_typeclass__TermVars_35);
            }
#line 313 "prog_io_typeclass.m"
            {
#line 313 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_52_69, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__Vars_36);
            }
#line 313 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 313 "prog_io_typeclass.m"
              {
#line 314 "prog_io_typeclass.m"
                {
#line 314 "prog_io_typeclass.m"
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35, &parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 315 "prog_io_typeclass.m"
                {
#line 315 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_46_46 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__SortedTermVars_37);
                }
#line 315 "prog_io_typeclass.m"
                {
#line 315 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_77_77 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_59_76, parse_tree__prog_io_typeclass__TermVars_35);
                }
#line 315 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_46_46 == parse_tree__prog_io_typeclass__V_77_77);
#line 313 "prog_io_typeclass.m"
              }
#line 322 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 320 "prog_io_typeclass.m"
              {
#line 320 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_38;

#line 319 "prog_io_typeclass.m"
                {
#line 319 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__TypeClassInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_33));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_36));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_16));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 319 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 319 "prog_io_typeclass.m"
                }
#line 321 "prog_io_typeclass.m"
                {
#line 321 "prog_io_typeclass.m"
                  MR_Word base;
#line 321 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 321 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 321 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_38));
#line 321 "prog_io_typeclass.m"
                }
#line 320 "prog_io_typeclass.m"
              }
#line 322 "prog_io_typeclass.m"
            else
#line 324 "prog_io_typeclass.m"
              {
#line 324 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_40;
#line 324 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 324 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 324 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_62_62;
#line 324 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;

#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_53_70, parse_tree__prog_io_typeclass__Arg_8);
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_62_62));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])));
#line 327 "prog_io_typeclass.m"
                }
#line 327 "prog_io_typeclass.m"
                {
#line 327 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 327 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "prog_io_typeclass.m"
                }
#line 326 "prog_io_typeclass.m"
                {
#line 326 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 326 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 326 "prog_io_typeclass.m"
                }
#line 328 "prog_io_typeclass.m"
                {
#line 328 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_40));
#line 328 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "prog_io_typeclass.m"
                }
#line 328 "prog_io_typeclass.m"
                {
#line 328 "prog_io_typeclass.m"
                  MR_Word base;
#line 328 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_12 = base;
#line 328 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 328 "prog_io_typeclass.m"
                }
#line 324 "prog_io_typeclass.m"
              }
#line 310 "prog_io_typeclass.m"
          }
#line 125 "prog_io_typeclass.m"
      }
#line 124 "prog_io_typeclass.m"
  }
#line 116 "prog_io_typeclass.m"
}

#line 343 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1(
#line 343 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 343 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 343 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 343 "prog_io_typeclass.m"
{
#line 343 "prog_io_typeclass.m"
  {
#line 343 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 343 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__4_18;

#line 343 "prog_io_typeclass.m"
    {
#line 343 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_class_methods__343__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__4_18);
    }
#line 343 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_18));
#line 343 "prog_io_typeclass.m"
  }
#line 343 "prog_io_typeclass.m"
}

#line 90 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Name_9,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Methods_10,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_11,
#line 90 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 90 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 90 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 90 "prog_io_typeclass.m"
{
#line 94 "prog_io_typeclass.m"
  {
#line 94 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 94 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 9185 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__MethodList_47;

#line 95 "prog_io_typeclass.m"
    {
#line 95 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_11, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 341 "prog_io_typeclass.m"
    {
#line 341 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_10, &parse_tree__prog_io_typeclass__MethodList_47);
    }
#line 9198 "parse_tree.prog_io_typeclass.c"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 9200 "parse_tree.prog_io_typeclass.c"
      {
#line 9202 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Interface_51;
#line 9204 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_54_54;
#line 9206 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Methods_82;
#line 9208 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Specs_83;

#line 343 "prog_io_typeclass.m"
        {
#line 343 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 343 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[1]));
#line 343 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0_1));
#line 343 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 343 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_8));
#line 343 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_11));
#line 343 "prog_io_typeclass.m"
        }
#line 343 "prog_io_typeclass.m"
        {
#line 343 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[4], parse_tree__prog_io_typeclass__V_54_54, parse_tree__prog_io_typeclass__MethodList_47, &parse_tree__prog_io_typeclass__Interface_51);
        }
#line 392 "prog_io_typeclass.m"
        {
#line 392 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_51, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_83);
        }
#line 9237 "parse_tree.prog_io_typeclass.c"
        if ((parse_tree__prog_io_typeclass__Specs_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9239 "parse_tree.prog_io_typeclass.c"
          {
#line 9241 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;

#line 100 "prog_io_typeclass.m"
            {
#line 100 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__Name_9, parse_tree__prog_io_typeclass__VarSet_11, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18);
            }
#line 105 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18)) == (MR_mktag((MR_Integer) 0))))
#line 104 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18;
#line 105 "prog_io_typeclass.m"
            else
#line 106 "prog_io_typeclass.m"
              {
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ParsedNameAndVars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedNameAndVars_18, (MR_Integer) 0)));
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 106 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 106 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_32_32;
#line 107 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 107 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 108 "prog_io_typeclass.m"
                {
#line 108 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_82));
#line 108 "prog_io_typeclass.m"
                }
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 0)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 1)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 2)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 3)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 4)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 5)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 6)));
#line 107 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ParsedNameAndVars_20, (MR_Integer) 7)));
#line 107 "prog_io_typeclass.m"
                {
#line 107 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_25_25));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_15));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_21_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 107 "prog_io_typeclass.m"
                }
#line 107 "prog_io_typeclass.m"
                {
#line 107 "prog_io_typeclass.m"
                  MR_Word base;
#line 107 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 107 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_21_21));
#line 107 "prog_io_typeclass.m"
                }
#line 106 "prog_io_typeclass.m"
              }
#line 9340 "parse_tree.prog_io_typeclass.c"
          }
#line 9342 "parse_tree.prog_io_typeclass.c"
        else
#line 9344 "parse_tree.prog_io_typeclass.c"
          {
#line 9346 "parse_tree.prog_io_typeclass.c"
            MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_89;

#line 398 "prog_io_typeclass.m"
            {
#line 398 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeParsedMethods_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_89, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_83));
#line 398 "prog_io_typeclass.m"
            }
#line 113 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_89;
#line 9359 "parse_tree.prog_io_typeclass.c"
          }
#line 9361 "parse_tree.prog_io_typeclass.c"
      }
#line 9363 "parse_tree.prog_io_typeclass.c"
    else
#line 9365 "parse_tree.prog_io_typeclass.c"
      {
#line 9367 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__Spec_53;
#line 9369 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 9371 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 9373 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 9375 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__V_72_72;
#line 9377 "parse_tree.prog_io_typeclass.c"
        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_88;

#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_67_67 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_10);
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[54])));
#line 354 "prog_io_typeclass.m"
        }
#line 354 "prog_io_typeclass.m"
        {
#line 354 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 354 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "prog_io_typeclass.m"
        }
#line 353 "prog_io_typeclass.m"
        {
#line 353 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 353 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_53, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 353 "prog_io_typeclass.m"
        }
#line 355 "prog_io_typeclass.m"
        {
#line 355 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_53));
#line 355 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "prog_io_typeclass.m"
        }
#line 355 "prog_io_typeclass.m"
        {
#line 355 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__MaybeParsedMethods_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 355 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_88, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_72_72));
#line 355 "prog_io_typeclass.m"
        }
#line 113 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_88;
#line 9437 "parse_tree.prog_io_typeclass.c"
      }
#line 94 "prog_io_typeclass.m"
  }
#line 90 "prog_io_typeclass.m"
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
#line 460 "prog_io_typeclass.m"
  {
#line 460 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 460 "prog_io_typeclass.m"
    {
#line 460 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 460 "prog_io_typeclass.m"
      return;
    }
#line 460 "prog_io_typeclass.m"
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
#line 420 "prog_io_typeclass.m"
  {
#line 420 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 420 "prog_io_typeclass.m"
    {
#line 420 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
#line 420 "prog_io_typeclass.m"
      return;
    }
#line 420 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 820 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_6_p_0_1(
#line 820 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 820 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 820 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 820 "prog_io_typeclass.m"
{
#line 820 "prog_io_typeclass.m"
  {
#line 820 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 820 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8;

#line 820 "prog_io_typeclass.m"
    {
#line 820 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8);
    }
#line 820 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8));
#line 820 "prog_io_typeclass.m"
  }
#line 820 "prog_io_typeclass.m"
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
#line 648 "prog_io_typeclass.m"
  {
#line 648 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_24_24;
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_25_25;
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_14;
#line 648 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 656 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_15;
#line 656 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_16;
#line 653 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 653 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_20_20;
#line 653 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 653 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 653 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 653 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;

#line 651 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 651 "prog_io_typeclass.m"
      {
#line 651 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 651 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 651 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 648 "prog_io_typeclass.m"
          {
#line 9596 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_24_24 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 9598 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 652 "prog_io_typeclass.m"
            {
#line 652 "prog_io_typeclass.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_24_24, parse_tree__prog_io_typeclass__TypeCtorInfo_25_25, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_14);
            }
#line 653 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
              {
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
                  {
#line 653 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_20_20, (MR_String) "where") == 0);
#line 653 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
                      {
#line 653 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
                          {
#line 653 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
                              {
#line 653 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_22_22, (MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "prog_io_typeclass.m"
                              }
#line 653 "prog_io_typeclass.m"
                          }
#line 653 "prog_io_typeclass.m"
                      }
#line 653 "prog_io_typeclass.m"
                  }
#line 653 "prog_io_typeclass.m"
              }
#line 656 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 9665 "parse_tree.prog_io_typeclass.c"
              {
#line 9667 "parse_tree.prog_io_typeclass.c"
                MR_Word parse_tree__prog_io_typeclass__MethodList_56;

#line 818 "prog_io_typeclass.m"
                {
#line 818 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__Methods_16, &parse_tree__prog_io_typeclass__MethodList_56);
                }
#line 9675 "parse_tree.prog_io_typeclass.c"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 9677 "parse_tree.prog_io_typeclass.c"
                  {
#line 9679 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Interface_57;
#line 9681 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 9683 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Methods_85;
#line 9685 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Specs_86;

#line 820 "prog_io_typeclass.m"
                    {
#line 820 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 820 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[0]));
#line 820 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_instance_6_p_0_1));
#line 820 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 820 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 820 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_8));
#line 820 "prog_io_typeclass.m"
                    }
#line 820 "prog_io_typeclass.m"
                    {
#line 820 "prog_io_typeclass.m"
                      mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__MethodList_56, &parse_tree__prog_io_typeclass__Interface_57);
                    }
#line 392 "prog_io_typeclass.m"
                    {
#line 392 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_86);
                    }
#line 9714 "parse_tree.prog_io_typeclass.c"
                    if ((parse_tree__prog_io_typeclass__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9716 "parse_tree.prog_io_typeclass.c"
                      {
#line 9718 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance0_36;

#line 754 "prog_io_typeclass.m"
                        {
#line 754 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstance0_36);
                        }
#line 759 "prog_io_typeclass.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstance0_36)) == (MR_mktag((MR_Integer) 0))))
#line 758 "prog_io_typeclass.m"
                          *parse_tree__prog_io_typeclass__Result_12 = parse_tree__prog_io_typeclass__MaybeItemInstance0_36;
#line 759 "prog_io_typeclass.m"
                        else
#line 760 "prog_io_typeclass.m"
                          {
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance0_36, (MR_Integer) 0)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 0)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__NameString_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 1)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__Types_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 2)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__OriginalTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 3)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ModName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 6)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__InstanceContext_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 7)));
#line 760 "prog_io_typeclass.m"
                            MR_Integer parse_tree__prog_io_typeclass__ItemSeqNum_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 8)));
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__ItemInstance_48;
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__MaybeItemInstance1_49;
#line 760 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_50_50;
#line 763 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 4)));
#line 763 "prog_io_typeclass.m"
                            MR_Word parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance0_38, (MR_Integer) 5)));

#line 768 "prog_io_typeclass.m"
                            {
#line 768 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 768 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_85));
#line 768 "prog_io_typeclass.m"
                            }
#line 766 "prog_io_typeclass.m"
                            {
#line 766 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__ItemInstance_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_39));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__NameString_40));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_41));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__OriginalTypes_42));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_50_50));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_14));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModName_45));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceContext_46));
#line 766 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstance_48, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemSeqNum_47));
#line 766 "prog_io_typeclass.m"
                            }
#line 770 "prog_io_typeclass.m"
                            {
#line 770 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__MaybeItemInstance1_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io_typeclass.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstance1_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstance_48));
#line 770 "prog_io_typeclass.m"
                            }
#line 771 "prog_io_typeclass.m"
                            {
#line 771 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(parse_tree__prog_io_typeclass__MaybeItemInstance1_49, parse_tree__prog_io_typeclass__Name_15, parse_tree__prog_io_typeclass__Result_12);
                            }
#line 760 "prog_io_typeclass.m"
                          }
#line 9808 "parse_tree.prog_io_typeclass.c"
                      }
#line 9810 "parse_tree.prog_io_typeclass.c"
                    else
#line 9812 "parse_tree.prog_io_typeclass.c"
                      {
#line 9814 "parse_tree.prog_io_typeclass.c"
                        MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_92;

#line 398 "prog_io_typeclass.m"
                        {
#line 398 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__MaybeParsedMethods_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_io_typeclass.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_92, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_86));
#line 398 "prog_io_typeclass.m"
                        }
#line 776 "prog_io_typeclass.m"
                        *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_92;
#line 9827 "parse_tree.prog_io_typeclass.c"
                      }
#line 9829 "parse_tree.prog_io_typeclass.c"
                  }
#line 9831 "parse_tree.prog_io_typeclass.c"
                else
#line 9833 "parse_tree.prog_io_typeclass.c"
                  {
#line 9835 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__Spec_59;
#line 9837 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_68_68;
#line 9839 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 9841 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 9843 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 9845 "parse_tree.prog_io_typeclass.c"
                    MR_Word parse_tree__prog_io_typeclass__MaybeParsedMethods_91;

#line 826 "prog_io_typeclass.m"
                    {
#line 826 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__Methods_16);
                    }
#line 826 "prog_io_typeclass.m"
                    {
#line 826 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[53])));
#line 826 "prog_io_typeclass.m"
                    }
#line 826 "prog_io_typeclass.m"
                    {
#line 826 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 826 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "prog_io_typeclass.m"
                    }
#line 825 "prog_io_typeclass.m"
                    {
#line 825 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 825 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 825 "prog_io_typeclass.m"
                    }
#line 827 "prog_io_typeclass.m"
                    {
#line 827 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_59));
#line 827 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "prog_io_typeclass.m"
                    }
#line 827 "prog_io_typeclass.m"
                    {
#line 827 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MaybeParsedMethods_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 827 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedMethods_91, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 827 "prog_io_typeclass.m"
                    }
#line 776 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__Result_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeParsedMethods_91;
#line 9905 "parse_tree.prog_io_typeclass.c"
                  }
#line 9907 "parse_tree.prog_io_typeclass.c"
              }
#line 656 "prog_io_typeclass.m"
            else
#line 657 "prog_io_typeclass.m"
              {
#line 657 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__Result_12);
              }
#line 656 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 648 "prog_io_typeclass.m"
          }
#line 651 "prog_io_typeclass.m"
      }
#line 648 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 648 "prog_io_typeclass.m"
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
#line 78 "prog_io_typeclass.m"
  {
#line 78 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TypeClassTerm_9)) == (MR_mktag((MR_Integer) 1)));
#line 78 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Arg_13;
#line 78 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 85 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Name_14;
#line 85 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Methods_15;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 82 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_19_19;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 82 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 81 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 81 "prog_io_typeclass.m"
      {
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Arg_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 0)));
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TypeClassTerm_9, (MR_Integer) 1)));
#line 81 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 78 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 78 "prog_io_typeclass.m"
          {
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg_13)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
              {
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Arg_13, (MR_Integer) 2)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                  {
#line 82 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_19_19, (MR_String) "where") == 0);
#line 82 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                      {
#line 82 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                          {
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_20_20, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                              {
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__Methods_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 82 "prog_io_typeclass.m"
                              }
#line 82 "prog_io_typeclass.m"
                          }
#line 82 "prog_io_typeclass.m"
                      }
#line 82 "prog_io_typeclass.m"
                  }
#line 82 "prog_io_typeclass.m"
              }
#line 85 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 83 "prog_io_typeclass.m"
              {
#line 83 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Name_14, parse_tree__prog_io_typeclass__Methods_15, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 85 "prog_io_typeclass.m"
            else
#line 86 "prog_io_typeclass.m"
              {
#line 86 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_class_head_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__Arg_13, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemTypeClass_12);
              }
#line 85 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 78 "prog_io_typeclass.m"
          }
#line 81 "prog_io_typeclass.m"
      }
#line 78 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 78 "prog_io_typeclass.m"
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
