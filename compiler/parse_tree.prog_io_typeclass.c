/*
** Automatically generated from `prog_io_typeclass.m'
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


/* :- module parse_tree.prog_io_typeclass. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_typeclass__init
ENDINIT
*/

#include "parse_tree.prog_io_typeclass.mih"


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
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_item.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 534 "prog_io_typeclass.m"
struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s {
#line 537 "prog_io_typeclass.m"
  MR_bool parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded;
#line 639 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_87;
#line 641 "prog_io_typeclass.m"
  jmp_buf parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__commit_0;
#line 641 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_89;
#line 641 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_89;
#line 534 "prog_io_typeclass.m"
};


#line 119 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 122 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 125 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 128 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 131 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 134 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 137 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 140 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0;

#line 143 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 146 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1];

#line 149 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0;

#line 152 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1];

#line 155 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1;

#line 158 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 161 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2];

#line 164 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2;

#line 167 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1];

#line 170 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDesc parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3;

#line 173 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1];

#line 176 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1];

#line 179 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1];

#line 182 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1];

#line 185 "parse_tree.prog_io_typeclass.c"
static const MR_DuPtagLayout parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_ptag_ordered_arbitrary_constraint_0[4];

#line 188 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4];

#line 191 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4];

#line 194 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;

#line 197 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 200 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 203 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 206 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 209 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 211 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 214 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 217 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 219 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 221 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 224 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 227 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 229 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 232 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 235 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 237 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 239 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 242 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 245 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 247 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 250 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 253 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 255 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 257 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3);

#line 842 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 842 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 438 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 438 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 720 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 720 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 720 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 720 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

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

#line 274 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 274 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 274 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 274 "prog_io_typeclass.m"
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

#line 806 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__806__1_2_f_0(
#line 806 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_12,
#line 806 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57);

#line 803 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__803__1_2_p_0(
#line 803 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_17,
#line 803 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_52);

#line 330 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__330__1_2_p_0(
#line 330 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_82,
#line 330 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_83);

#line 220 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(
#line 220 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 220 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_160);

#line 217 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__217__1_2_f_0(
#line 217 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 217 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_157);

#line 178 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(
#line 178 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 178 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152);

#line 176 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__176__1_2_p_0(
#line 176 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 176 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_150);

#line 523 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 523 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 523 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 506 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 506 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 506 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2);

#line 965 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 965 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 965 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 965 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4);

#line 842 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 842 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);

#line 806 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 806 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 806 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 803 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 803 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 803 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 790 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 790 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_4,
#line 790 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_5,
#line 790 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeSpec_6);

#line 830 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0_1(
#line 830 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 830 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 830 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 758 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0(
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_9,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_10,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_12,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_13,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_14,
#line 758 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_15,
#line 758 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_16);

#line 729 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_9,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 729 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 729 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12);

#line 681 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ArgTerm_9,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 681 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 681 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12);

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

#line 534 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 534 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8);

#line 484 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 484 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 484 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 484 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 455 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 455 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 455 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3);

#line 375 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_methods_4_p_0_1(
#line 375 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 375 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 375 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 367 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_methods_4_p_0(
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_7,
#line 367 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeClassMethods_8);

#line 330 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 330 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 330 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 330 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2);

#line 319 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_9,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 319 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 319 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12);

#line 301 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 301 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 301 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 301 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3);

#line 270 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 270 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1);

#line 268 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 268 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 268 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 266 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 266 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3);

#line 220 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 220 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 220 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 217 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 217 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 217 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 178 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 178 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 178 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 176 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 176 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 176 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1);

#line 149 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_10,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_11,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 149 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 149 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14);

#line 110 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_10,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_11,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 110 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 110 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_14);


static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[126][2];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[13][1];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[4][5];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[1][6];

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_6[2][7];




static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_1[126][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where [method_signature_1, ... method_signature_m]"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "optionally followed by"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- typeclass tcname(T1, ... Tn)"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have the form"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "where [method_spec_1, ... method_spec_m]"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ":- instance tcname(type1, ... typen)"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "instance"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and ground types"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constraints may only constrain type variables"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in typeclass declarations."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: functional dependencies are only allowed"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may only constrain type variables and ground types."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on class declarations"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at least one class parameter."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: typeclass declarations require"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class parameters."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected distinct variables"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected a list of class methods."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as class name or inst constraint."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected atom"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be comma-separated lists of variables."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a functional dependency"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the domain and range"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constraints on instance declarations"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[51])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in constraints on instance declaration."))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected list of instance methods."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12])))
  },
  /* row 80 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the superclass constraint"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in superclass constraints"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in the functional dependency"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in functional dependencies"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variable"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a parameter of this type class."))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type variables"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not parameters of this type class."))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In typeclass declaration:"))
  },
  /* row 101 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In class or inst constraint:"))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance declaration:"))
  },
  /* row 108 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variable"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: unbound type variables"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceMethod>"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "pred(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "func(<Name> / <Arity>) is <InstanceName>"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: expected clause or"))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[6])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[1])),
    ((MR_Box) (parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[2])),
    ((MR_Box) (parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[3])),
    ((MR_Box) (parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_3[13][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[28])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[39])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[57])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[61])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[63])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[67])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[73])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[79])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[45])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[49])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[53])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[75])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
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

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_5[1][6] = {
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

static /* final */ const MR_Box parse_tree__prog_io_typeclass_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1556 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1564 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1572 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1580 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1588 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1596 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1604 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1612 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_class_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0
  }
};

#line 1620 "parse_tree.prog_io_typeclass.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_typeclass__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 1628 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1633 "parse_tree.prog_io_typeclass.c"
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

#line 1648 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1653 "parse_tree.prog_io_typeclass.c"
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

#line 1668 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1676 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_2[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 1682 "parse_tree.prog_io_typeclass.c"
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

#line 1697 "parse_tree.prog_io_typeclass.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__field_types_arbitrary_constraint_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0
};

#line 1702 "parse_tree.prog_io_typeclass.c"
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

#line 1717 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_0[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1722 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_1[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1
};

#line 1727 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_2[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3
};

#line 1732 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_stag_ordered_arbitrary_constraint_0_3[1] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2
};

#line 1737 "parse_tree.prog_io_typeclass.c"
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

#line 1761 "parse_tree.prog_io_typeclass.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_name_ordered_arbitrary_constraint_0[4] = {
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_3,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_2,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_1,
  &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__du_functor_desc_arbitrary_constraint_0_0
};

#line 1769 "parse_tree.prog_io_typeclass.c"
static const MR_Integer parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__functor_number_map_arbitrary_constraint_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1777 "parse_tree.prog_io_typeclass.c"
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

#line 1794 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_one_or_more_1parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0 = {
  &mercury__list__list__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0
  }
};

#line 1802 "parse_tree.prog_io_typeclass.c"
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

#line 1819 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1827 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1836 "parse_tree.prog_io_typeclass.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__prog_io_typeclass__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe2_2,
  {
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &parse_tree__prog_io_typeclass__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1845 "parse_tree.prog_io_typeclass.c"
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
  {     (MR_PseudoTypeInfo) &parse_tree__prog_io_typeclass__parse_tree__maybe_error__ti_maybe2_2list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1862 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0_10001(
#line 1865 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1867 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1869 "parse_tree.prog_io_typeclass.c"
{
#line 1871 "parse_tree.prog_io_typeclass.c"
  {
#line 1873 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1876 "parse_tree.prog_io_typeclass.c"
    {
#line 1878 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1881 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1883 "parse_tree.prog_io_typeclass.c"
  }
#line 1885 "parse_tree.prog_io_typeclass.c"
}

#line 1888 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0_10001(
#line 1891 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1893 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1895 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1897 "parse_tree.prog_io_typeclass.c"
{
#line 1899 "parse_tree.prog_io_typeclass.c"
  {
#line 1901 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1904 "parse_tree.prog_io_typeclass.c"
    {
#line 1906 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1909 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1911 "parse_tree.prog_io_typeclass.c"
  }
#line 1913 "parse_tree.prog_io_typeclass.c"
}

#line 1916 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0_10001(
#line 1919 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1921 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1923 "parse_tree.prog_io_typeclass.c"
{
#line 1925 "parse_tree.prog_io_typeclass.c"
  {
#line 1927 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1930 "parse_tree.prog_io_typeclass.c"
    {
#line 1932 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1935 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1937 "parse_tree.prog_io_typeclass.c"
  }
#line 1939 "parse_tree.prog_io_typeclass.c"
}

#line 1942 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0_10001(
#line 1945 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1947 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 1949 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 1951 "parse_tree.prog_io_typeclass.c"
{
#line 1953 "parse_tree.prog_io_typeclass.c"
  {
#line 1955 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 1958 "parse_tree.prog_io_typeclass.c"
    {
#line 1960 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 1963 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 1965 "parse_tree.prog_io_typeclass.c"
  }
#line 1967 "parse_tree.prog_io_typeclass.c"
}

#line 1970 "parse_tree.prog_io_typeclass.c"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0_10001(
#line 1973 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 1975 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 1977 "parse_tree.prog_io_typeclass.c"
{
#line 1979 "parse_tree.prog_io_typeclass.c"
  {
#line 1981 "parse_tree.prog_io_typeclass.c"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 1984 "parse_tree.prog_io_typeclass.c"
    {
#line 1986 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass____Unify____maybe_class_and_inst_constraints_0_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2));
    }
#line 1989 "parse_tree.prog_io_typeclass.c"
    return parse_tree__prog_io_typeclass__succeeded;
#line 1991 "parse_tree.prog_io_typeclass.c"
  }
#line 1993 "parse_tree.prog_io_typeclass.c"
}

#line 1996 "parse_tree.prog_io_typeclass.c"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0_10001(
#line 1999 "parse_tree.prog_io_typeclass.c"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 2001 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2,
#line 2003 "parse_tree.prog_io_typeclass.c"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_3)
#line 2005 "parse_tree.prog_io_typeclass.c"
{
#line 2007 "parse_tree.prog_io_typeclass.c"
  {
#line 2009 "parse_tree.prog_io_typeclass.c"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__1_1;

#line 2012 "parse_tree.prog_io_typeclass.c"
    {
#line 2014 "parse_tree.prog_io_typeclass.c"
      parse_tree__prog_io_typeclass____Compare____maybe_class_and_inst_constraints_0_0(&parse_tree__prog_io_typeclass__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_3));
    }
#line 2017 "parse_tree.prog_io_typeclass.c"
    *parse_tree__prog_io_typeclass__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__1_1));
#line 2019 "parse_tree.prog_io_typeclass.c"
  }
#line 2021 "parse_tree.prog_io_typeclass.c"
}

#line 842 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 842 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 842 "prog_io_typeclass.m"
{
#line 847 "prog_io_typeclass.m"
  {
#line 847 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MethodTerm_7)) == (MR_mktag((MR_Integer) 0)));
#line 847 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethodTerm_9;
#line 847 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethodTerm_10;
#line 847 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TermContext_11;
#line 848 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;
#line 848 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_45_45;
#line 848 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 848 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 848 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_48_48;

#line 848 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
      {
#line 848 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 1)));
#line 848 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TermContext_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) 2)));
#line 848 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_44_44)) == (MR_mktag((MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
          {
#line 848 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 848 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_45_45, (MR_String) "is") == 0);
#line 848 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 848 "prog_io_typeclass.m"
              {
#line 849 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                  {
#line 849 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ClassMethodTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_46_46, (MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 849 "prog_io_typeclass.m"
                      {
#line 849 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__InstanceMethodTerm_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 0)));
#line 849 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_47_47, (MR_Integer) 1)));
#line 849 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "prog_io_typeclass.m"
                      }
#line 849 "prog_io_typeclass.m"
                  }
#line 848 "prog_io_typeclass.m"
              }
#line 848 "prog_io_typeclass.m"
          }
#line 848 "prog_io_typeclass.m"
      }
#line 847 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 854 "prog_io_typeclass.m"
      {
#line 854 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__PredNameTerm_14;
#line 854 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArityTerm_15;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SlashTerm_12;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 855 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_50_50;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_51_51;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_53_53;
#line 855 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_54_54;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_56_56;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 855 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 856 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 855 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
          {
#line 855 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 855 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 855 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_49_49)) == (MR_mktag((MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
              {
#line 855 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, (MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_50_50, (MR_String) "pred") == 0);
#line 855 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
                  {
#line 855 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_51_51)) == (MR_mktag((MR_Integer) 1)));
#line 855 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
                      {
#line 855 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__SlashTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 0)));
#line 855 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_51_51, (MR_Integer) 1)));
#line 855 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
                          {
#line 856 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 856 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 856 "prog_io_typeclass.m"
                              {
#line 856 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 0)));
#line 856 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 1)));
#line 856 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_12, (MR_Integer) 2)));
#line 856 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_53_53)) == (MR_mktag((MR_Integer) 0)));
#line 856 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 856 "prog_io_typeclass.m"
                                  {
#line 856 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_53_53, (MR_Integer) 0)));
#line 856 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_54_54, (MR_String) "/") == 0);
#line 855 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 855 "prog_io_typeclass.m"
                                      {
#line 857 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 857 "prog_io_typeclass.m"
                                          {
#line 857 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__PredNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 0)));
#line 857 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_55_55, (MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 857 "prog_io_typeclass.m"
                                              {
#line 857 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__ArityTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 0)));
#line 857 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_56_56, (MR_Integer) 1)));
#line 857 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "prog_io_typeclass.m"
                                              }
#line 857 "prog_io_typeclass.m"
                                          }
#line 855 "prog_io_typeclass.m"
                                      }
#line 856 "prog_io_typeclass.m"
                                  }
#line 856 "prog_io_typeclass.m"
                              }
#line 855 "prog_io_typeclass.m"
                          }
#line 855 "prog_io_typeclass.m"
                      }
#line 855 "prog_io_typeclass.m"
                  }
#line 855 "prog_io_typeclass.m"
              }
#line 855 "prog_io_typeclass.m"
          }
#line 854 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 859 "prog_io_typeclass.m"
          {
#line 859 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__PredName_17;
#line 859 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__ArityInt_18;
#line 859 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_20;
#line 860 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_260_260 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 860 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 860 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 861 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 860 "prog_io_typeclass.m"
            {
#line 860 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__PredNameTerm_14, &parse_tree__prog_io_typeclass__PredName_17);
            }
#line 860 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 860 "prog_io_typeclass.m"
              {
#line 861 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 861 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 861 "prog_io_typeclass.m"
                  {
#line 861 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 0)));
#line 861 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 1)));
#line 861 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_15, (MR_Integer) 2)));
#line 861 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 860 "prog_io_typeclass.m"
                      {
#line 861 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 861 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 861 "prog_io_typeclass.m"
                          {
#line 861 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__ArityInt_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, (MR_Integer) 0)));
#line 862 "prog_io_typeclass.m"
                            {
#line 862 "prog_io_typeclass.m"
                              parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_260_260, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_20);
                            }
#line 861 "prog_io_typeclass.m"
                          }
#line 860 "prog_io_typeclass.m"
                      }
#line 861 "prog_io_typeclass.m"
                  }
#line 860 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 867 "prog_io_typeclass.m"
              {
#line 867 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_21;
#line 867 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_61_61;

#line 866 "prog_io_typeclass.m"
                {
#line 866 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 866 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_20));
#line 866 "prog_io_typeclass.m"
                }
#line 865 "prog_io_typeclass.m"
                {
#line 865 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__PredName_17));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_61_61));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_18));
#line 865 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 865 "prog_io_typeclass.m"
                }
#line 868 "prog_io_typeclass.m"
                {
#line 868 "prog_io_typeclass.m"
                  MR_Word base;
#line 868 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 868 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 868 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_21));
#line 868 "prog_io_typeclass.m"
                }
#line 867 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
            else
#line 870 "prog_io_typeclass.m"
              {
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_261_261 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 870 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_22;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_23;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_24;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_67_67;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_73_73;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_74_74;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_84_84;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_85_85;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_86_86;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_87_87;
#line 870 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_90_90;

#line 870 "prog_io_typeclass.m"
                {
#line 870 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_22 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 874 "prog_io_typeclass.m"
                {
#line 874 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_22));
#line 874 "prog_io_typeclass.m"
                }
#line 874 "prog_io_typeclass.m"
                {
#line 874 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_74_74));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])));
#line 874 "prog_io_typeclass.m"
                }
#line 874 "prog_io_typeclass.m"
                {
#line 874 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[120])));
#line 874 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_73_73));
#line 874 "prog_io_typeclass.m"
                }
#line 873 "prog_io_typeclass.m"
                {
#line 873 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[119])));
#line 873 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 873 "prog_io_typeclass.m"
                }
#line 872 "prog_io_typeclass.m"
                {
#line 872 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[118])));
#line 872 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_67_67));
#line 872 "prog_io_typeclass.m"
                }
#line 871 "prog_io_typeclass.m"
                {
#line 871 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[117])));
#line 871 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 871 "prog_io_typeclass.m"
                }
#line 876 "prog_io_typeclass.m"
                {
#line 876 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_85_85 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_261_261, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 877 "prog_io_typeclass.m"
                {
#line 877 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_87_87, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_23));
#line 877 "prog_io_typeclass.m"
                }
#line 877 "prog_io_typeclass.m"
                {
#line 877 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_87_87));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "prog_io_typeclass.m"
                }
#line 876 "prog_io_typeclass.m"
                {
#line 876 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_85_85));
#line 876 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_86_86));
#line 876 "prog_io_typeclass.m"
                }
#line 877 "prog_io_typeclass.m"
                {
#line 877 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_84_84));
#line 877 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 877 "prog_io_typeclass.m"
                }
#line 875 "prog_io_typeclass.m"
                {
#line 875 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 875 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_83_83));
#line 875 "prog_io_typeclass.m"
                }
#line 878 "prog_io_typeclass.m"
                {
#line 878 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_24));
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "prog_io_typeclass.m"
                }
#line 878 "prog_io_typeclass.m"
                {
#line 878 "prog_io_typeclass.m"
                  MR_Word base;
#line 878 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 878 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 878 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_90_90));
#line 878 "prog_io_typeclass.m"
                }
#line 870 "prog_io_typeclass.m"
              }
#line 859 "prog_io_typeclass.m"
          }
#line 854 "prog_io_typeclass.m"
        else
#line 880 "prog_io_typeclass.m"
          {
#line 880 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FuncNameTerm_26;
#line 880 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ArityTerm_228;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_92_92;
#line 881 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_93_93;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_94_94;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_95_95;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_96_96;
#line 881 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_97_97;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_98_98;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_99_99;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_100_100;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SlashTerm_213;
#line 881 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 882 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 881 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ClassMethodTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 881 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
              {
#line 881 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 0)));
#line 881 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 1)));
#line 881 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ClassMethodTerm_9, (MR_Integer) 2)));
#line 881 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_92_92)) == (MR_mktag((MR_Integer) 0)));
#line 881 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
                  {
#line 881 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_92_92, (MR_Integer) 0)));
#line 881 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_93_93, (MR_String) "func") == 0);
#line 881 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
                      {
#line 881 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 881 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
                          {
#line 881 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__SlashTerm_213 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 0)));
#line 881 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_94_94, (MR_Integer) 1)));
#line 881 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 881 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
                              {
#line 882 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__SlashTerm_213)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_typeclass.m"
                                if (parse_tree__prog_io_typeclass__succeeded)
#line 882 "prog_io_typeclass.m"
                                  {
#line 882 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 0)));
#line 882 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 1)));
#line 882 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__SlashTerm_213, (MR_Integer) 2)));
#line 882 "prog_io_typeclass.m"
                                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_96_96)) == (MR_mktag((MR_Integer) 0)));
#line 882 "prog_io_typeclass.m"
                                    if (parse_tree__prog_io_typeclass__succeeded)
#line 882 "prog_io_typeclass.m"
                                      {
#line 882 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__V_97_97 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_96_96, (MR_Integer) 0)));
#line 882 "prog_io_typeclass.m"
                                        parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_97_97, (MR_String) "/") == 0);
#line 881 "prog_io_typeclass.m"
                                        if (parse_tree__prog_io_typeclass__succeeded)
#line 881 "prog_io_typeclass.m"
                                          {
#line 883 "prog_io_typeclass.m"
                                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_98_98)) == (MR_mktag((MR_Integer) 1)));
#line 883 "prog_io_typeclass.m"
                                            if (parse_tree__prog_io_typeclass__succeeded)
#line 883 "prog_io_typeclass.m"
                                              {
#line 883 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__FuncNameTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 0)));
#line 883 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_98_98, (MR_Integer) 1)));
#line 883 "prog_io_typeclass.m"
                                                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_99_99)) == (MR_mktag((MR_Integer) 1)));
#line 883 "prog_io_typeclass.m"
                                                if (parse_tree__prog_io_typeclass__succeeded)
#line 883 "prog_io_typeclass.m"
                                                  {
#line 883 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__ArityTerm_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 0)));
#line 883 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_99_99, (MR_Integer) 1)));
#line 883 "prog_io_typeclass.m"
                                                    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 883 "prog_io_typeclass.m"
                                                  }
#line 883 "prog_io_typeclass.m"
                                              }
#line 881 "prog_io_typeclass.m"
                                          }
#line 882 "prog_io_typeclass.m"
                                      }
#line 882 "prog_io_typeclass.m"
                                  }
#line 881 "prog_io_typeclass.m"
                              }
#line 881 "prog_io_typeclass.m"
                          }
#line 881 "prog_io_typeclass.m"
                      }
#line 881 "prog_io_typeclass.m"
                  }
#line 881 "prog_io_typeclass.m"
              }
#line 880 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 885 "prog_io_typeclass.m"
              {
#line 885 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FuncName_28;
#line 885 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_218;
#line 885 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethodName_219;
#line 886 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_262_262 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 886 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 886 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_102_102;
#line 887 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 886 "prog_io_typeclass.m"
                {
#line 886 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__FuncNameTerm_26, &parse_tree__prog_io_typeclass__FuncName_28);
                }
#line 886 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 886 "prog_io_typeclass.m"
                  {
#line 887 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArityTerm_228)) == (MR_mktag((MR_Integer) 0)));
#line 887 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 887 "prog_io_typeclass.m"
                      {
#line 887 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 0)));
#line 887 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 1)));
#line 887 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArityTerm_228, (MR_Integer) 2)));
#line 887 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 886 "prog_io_typeclass.m"
                          {
#line 887 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_101_101)) == (MR_mktag((MR_Integer) 1)));
#line 887 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 887 "prog_io_typeclass.m"
                              {
#line 887 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ArityInt_218 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_101_101, (MR_Integer) 0)));
#line 888 "prog_io_typeclass.m"
                                {
#line 888 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_262_262, parse_tree__prog_io_typeclass__InstanceMethodTerm_10, &parse_tree__prog_io_typeclass__InstanceMethodName_219);
                                }
#line 887 "prog_io_typeclass.m"
                              }
#line 886 "prog_io_typeclass.m"
                          }
#line 887 "prog_io_typeclass.m"
                      }
#line 886 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 893 "prog_io_typeclass.m"
                  {
#line 893 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_104_104;
#line 893 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__InstanceMethod_214;

#line 892 "prog_io_typeclass.m"
                    {
#line 892 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 892 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethodName_219));
#line 892 "prog_io_typeclass.m"
                    }
#line 891 "prog_io_typeclass.m"
                    {
#line 891 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__InstanceMethod_214 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 0) = ((MR_Box) ((MR_Integer) 1));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FuncName_28));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_104_104));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_218));
#line 891 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_214, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__TermContext_11));
#line 891 "prog_io_typeclass.m"
                    }
#line 894 "prog_io_typeclass.m"
                    {
#line 894 "prog_io_typeclass.m"
                      MR_Word base;
#line 894 "prog_io_typeclass.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 894 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 894 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_214));
#line 894 "prog_io_typeclass.m"
                    }
#line 893 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
                else
#line 896 "prog_io_typeclass.m"
                  {
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_263_263 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_107_107;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_113_113;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_116_116;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_117_117;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_126_126;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_127_127;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_128_128;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_129_129;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_130_130;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_133_133;
#line 896 "prog_io_typeclass.m"
                    MR_String parse_tree__prog_io_typeclass__MethodTermStr_215;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Pieces_216;
#line 896 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__Spec_217;

#line 896 "prog_io_typeclass.m"
                    {
#line 896 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__MethodTermStr_215 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 900 "prog_io_typeclass.m"
                    {
#line 900 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_117_117, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_215));
#line 900 "prog_io_typeclass.m"
                    }
#line 900 "prog_io_typeclass.m"
                    {
#line 900 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_117_117));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])));
#line 900 "prog_io_typeclass.m"
                    }
#line 900 "prog_io_typeclass.m"
                    {
#line 900 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[120])));
#line 900 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_116_116));
#line 900 "prog_io_typeclass.m"
                    }
#line 899 "prog_io_typeclass.m"
                    {
#line 899 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 899 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[119])));
#line 899 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_113_113));
#line 899 "prog_io_typeclass.m"
                    }
#line 898 "prog_io_typeclass.m"
                    {
#line 898 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[121])));
#line 898 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_107_107, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 898 "prog_io_typeclass.m"
                    }
#line 897 "prog_io_typeclass.m"
                    {
#line 897 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Pieces_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[117])));
#line 897 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_216, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_107_107));
#line 897 "prog_io_typeclass.m"
                    }
#line 902 "prog_io_typeclass.m"
                    {
#line 902 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_128_128 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_263_263, parse_tree__prog_io_typeclass__MethodTerm_7);
                    }
#line 903 "prog_io_typeclass.m"
                    {
#line 903 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_130_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 903 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_130_130, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_216));
#line 903 "prog_io_typeclass.m"
                    }
#line 903 "prog_io_typeclass.m"
                    {
#line 903 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 903 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_129_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_typeclass.m"
                    }
#line 902 "prog_io_typeclass.m"
                    {
#line 902 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 902 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_127_127, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 902 "prog_io_typeclass.m"
                    }
#line 903 "prog_io_typeclass.m"
                    {
#line 903 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_127_127));
#line 903 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_typeclass.m"
                    }
#line 901 "prog_io_typeclass.m"
                    {
#line 901 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Spec_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 901 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 901 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_217, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_126_126));
#line 901 "prog_io_typeclass.m"
                    }
#line 904 "prog_io_typeclass.m"
                    {
#line 904 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_217));
#line 904 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_typeclass.m"
                    }
#line 904 "prog_io_typeclass.m"
                    {
#line 904 "prog_io_typeclass.m"
                      MR_Word base;
#line 904 "prog_io_typeclass.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_typeclass.m"
                      *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 904 "prog_io_typeclass.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_133_133));
#line 904 "prog_io_typeclass.m"
                    }
#line 896 "prog_io_typeclass.m"
                  }
#line 885 "prog_io_typeclass.m"
              }
#line 880 "prog_io_typeclass.m"
            else
#line 907 "prog_io_typeclass.m"
              {
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_264_264 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_137_137;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_140_140;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_143_143;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_146_146;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_149_149;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_152_152;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_153_153;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_162_162;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_163_163;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_164_164;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_165_165;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_166_166;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_169_169;
#line 907 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_224;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_225;
#line 907 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_226;

#line 907 "prog_io_typeclass.m"
                {
#line 907 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_224 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 913 "prog_io_typeclass.m"
                {
#line 913 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_153_153, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_224));
#line 913 "prog_io_typeclass.m"
                }
#line 913 "prog_io_typeclass.m"
                {
#line 913 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_153_153));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])));
#line 913 "prog_io_typeclass.m"
                }
#line 913 "prog_io_typeclass.m"
                {
#line 913 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[120])));
#line 913 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_149_149, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_152_152));
#line 913 "prog_io_typeclass.m"
                }
#line 912 "prog_io_typeclass.m"
                {
#line 912 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[119])));
#line 912 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_146_146, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_149_149));
#line 912 "prog_io_typeclass.m"
                }
#line 911 "prog_io_typeclass.m"
                {
#line 911 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 911 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[124])));
#line 911 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_143_143, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_146_146));
#line 911 "prog_io_typeclass.m"
                }
#line 910 "prog_io_typeclass.m"
                {
#line 910 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[123])));
#line 910 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_140_140, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_143_143));
#line 910 "prog_io_typeclass.m"
                }
#line 909 "prog_io_typeclass.m"
                {
#line 909 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[122])));
#line 909 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_137_137, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_140_140));
#line 909 "prog_io_typeclass.m"
                }
#line 908 "prog_io_typeclass.m"
                {
#line 908 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[117])));
#line 908 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_225, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_137_137));
#line 908 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_164_164 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_264_264, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_166_166, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_225));
#line 915 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_166_166));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_163_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_164_164));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_163_163, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_165_165));
#line 915 "prog_io_typeclass.m"
                }
#line 915 "prog_io_typeclass.m"
                {
#line 915 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_163_163));
#line 915 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "prog_io_typeclass.m"
                }
#line 914 "prog_io_typeclass.m"
                {
#line 914 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 914 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 914 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 914 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_226, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_162_162));
#line 914 "prog_io_typeclass.m"
                }
#line 916 "prog_io_typeclass.m"
                {
#line 916 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_226));
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "prog_io_typeclass.m"
                }
#line 916 "prog_io_typeclass.m"
                {
#line 916 "prog_io_typeclass.m"
                  MR_Word base;
#line 916 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 916 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 916 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 916 "prog_io_typeclass.m"
                }
#line 907 "prog_io_typeclass.m"
              }
#line 880 "prog_io_typeclass.m"
          }
#line 854 "prog_io_typeclass.m"
      }
#line 847 "prog_io_typeclass.m"
    else
#line 928 "prog_io_typeclass.m"
      {
#line 928 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeIOM_31;

#line 929 "prog_io_typeclass.m"
        {
#line 929 "prog_io_typeclass.m"
          parse_tree__prog_io_item__parse_item_or_marker_5_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_3[12], parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, (MR_Integer) -1, &parse_tree__prog_io_typeclass__MaybeIOM_31);
        }
#line 934 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31)) == (MR_mktag((MR_Integer) 0))))
#line 933 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = (MR_Word) parse_tree__prog_io_typeclass__MaybeIOM_31;
#line 934 "prog_io_typeclass.m"
        else
#line 935 "prog_io_typeclass.m"
          {
#line 935 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__IOM_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeIOM_31, (MR_Integer) 0)));
#line 936 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemClause_35;
#line 937 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Item_34;

#line 937 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__IOM_33)) == (MR_mktag((MR_Integer) 0)));
#line 937 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 937 "prog_io_typeclass.m"
              {
#line 937 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Item_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__IOM_33, (MR_Integer) 0)));
#line 938 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Item_34)) == (MR_mktag((MR_Integer) 0)));
#line 938 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 938 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemClause_35 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Item_34), (MR_Integer) 0);
#line 937 "prog_io_typeclass.m"
              }
#line 936 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 941 "prog_io_typeclass.m"
              {
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassMethodName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 0)));
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__PredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 1)));
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__HeadArgs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 2)));
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 6)));
#line 941 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_173_173;
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_175_175;
#line 941 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__ArityInt_235;
#line 941 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstanceMethod_236;
#line 940 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___Origin_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 3)));
#line 940 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___VarSet_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 4)));
#line 940 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass___ClauseBody_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 5)));
#line 940 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass___SeqNum_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemClause_35, (MR_Integer) 7)));

#line 942 "prog_io_typeclass.m"
                {
#line 942 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_173_173 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[11], parse_tree__prog_io_typeclass__HeadArgs_38);
                }
#line 942 "prog_io_typeclass.m"
                {
#line 942 "prog_io_typeclass.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__prog_io_typeclass__PredOrFunc_37, &parse_tree__prog_io_typeclass__ArityInt_235, parse_tree__prog_io_typeclass__V_173_173);
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemClause_35));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 944 "prog_io_typeclass.m"
                }
#line 944 "prog_io_typeclass.m"
                {
#line 944 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_174_174, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_175_175));
#line 944 "prog_io_typeclass.m"
                }
#line 943 "prog_io_typeclass.m"
                {
#line 943 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__InstanceMethod_236 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__PredOrFunc_37));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethodName_36));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_174_174));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ArityInt_235));
#line 943 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__InstanceMethod_236, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_42));
#line 943 "prog_io_typeclass.m"
                }
#line 946 "prog_io_typeclass.m"
                {
#line 946 "prog_io_typeclass.m"
                  MR_Word base;
#line 946 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 946 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 946 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethod_236));
#line 946 "prog_io_typeclass.m"
                }
#line 941 "prog_io_typeclass.m"
              }
#line 936 "prog_io_typeclass.m"
            else
#line 948 "prog_io_typeclass.m"
              {
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_266_266 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_179_179;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_182_182;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_185_185;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_188_188;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_191_191;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_194_194;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_195_195;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_204_204;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_205_205;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_206_206;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_207_207;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_208_208;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_211_211;
#line 948 "prog_io_typeclass.m"
                MR_String parse_tree__prog_io_typeclass__MethodTermStr_237;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_238;
#line 948 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_239;

#line 948 "prog_io_typeclass.m"
                {
#line 948 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MethodTermStr_237 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 954 "prog_io_typeclass.m"
                {
#line 954 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_195_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_195_195, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__MethodTermStr_237));
#line 954 "prog_io_typeclass.m"
                }
#line 954 "prog_io_typeclass.m"
                {
#line 954 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_195_195));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[14])));
#line 954 "prog_io_typeclass.m"
                }
#line 954 "prog_io_typeclass.m"
                {
#line 954 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[120])));
#line 954 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_191_191, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_194_194));
#line 954 "prog_io_typeclass.m"
                }
#line 953 "prog_io_typeclass.m"
                {
#line 953 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[119])));
#line 953 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_188_188, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_191_191));
#line 953 "prog_io_typeclass.m"
                }
#line 952 "prog_io_typeclass.m"
                {
#line 952 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[124])));
#line 952 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_185_185, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_188_188));
#line 952 "prog_io_typeclass.m"
                }
#line 951 "prog_io_typeclass.m"
                {
#line 951 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[123])));
#line 951 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_182_182, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_185_185));
#line 951 "prog_io_typeclass.m"
                }
#line 950 "prog_io_typeclass.m"
                {
#line 950 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[122])));
#line 950 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_179_179, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_182_182));
#line 950 "prog_io_typeclass.m"
                }
#line 949 "prog_io_typeclass.m"
                {
#line 949 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[125])));
#line 949 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Pieces_238, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_179_179));
#line 949 "prog_io_typeclass.m"
                }
#line 956 "prog_io_typeclass.m"
                {
#line 956 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_206_206 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_266_266, parse_tree__prog_io_typeclass__MethodTerm_7);
                }
#line 957 "prog_io_typeclass.m"
                {
#line 957 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_208_208 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 957 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_208_208, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_238));
#line 957 "prog_io_typeclass.m"
                }
#line 957 "prog_io_typeclass.m"
                {
#line 957 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_208_208));
#line 957 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_207_207, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "prog_io_typeclass.m"
                }
#line 956 "prog_io_typeclass.m"
                {
#line 956 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_205_205 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_206_206));
#line 956 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_205_205, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_207_207));
#line 956 "prog_io_typeclass.m"
                }
#line 957 "prog_io_typeclass.m"
                {
#line 957 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_205_205));
#line 957 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "prog_io_typeclass.m"
                }
#line 955 "prog_io_typeclass.m"
                {
#line 955 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_239 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 955 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 955 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 955 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_239, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_204_204));
#line 955 "prog_io_typeclass.m"
                }
#line 958 "prog_io_typeclass.m"
                {
#line 958 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_239));
#line 958 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "prog_io_typeclass.m"
                }
#line 958 "prog_io_typeclass.m"
                {
#line 958 "prog_io_typeclass.m"
                  MR_Word base;
#line 958 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 958 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeInstanceMethod_8 = base;
#line 958 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_211_211));
#line 958 "prog_io_typeclass.m"
                }
#line 948 "prog_io_typeclass.m"
              }
#line 935 "prog_io_typeclass.m"
          }
#line 928 "prog_io_typeclass.m"
      }
#line 847 "prog_io_typeclass.m"
  }
#line 842 "prog_io_typeclass.m"
}

#line 438 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0_1(
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

#line 720 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 720 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 720 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 720 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 720 "prog_io_typeclass.m"
{
#line 723 "prog_io_typeclass.m"
  {
#line 723 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 723 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_23;
#line 723 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_52;
#line 723 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_53;
#line 723 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_54_54;

#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_54_54);
    }
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 0)));
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_54_54, (MR_Integer) 1)));
#line 531 "prog_io_typeclass.m"
    {
#line 531 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_52, parse_tree__prog_io_typeclass__TailConstraintTerms_53, &parse_tree__prog_io_typeclass__Result0_23);
    }
#line 450 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_23)) == (MR_mktag((MR_Integer) 0))))
#line 452 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_23;
#line 450 "prog_io_typeclass.m"
    else
#line 434 "prog_io_typeclass.m"
      {
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_24;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_25;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_23, (MR_Integer) 0)));
#line 435 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_26;
#line 435 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailConstraints_27;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_34_46;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_35_47;
#line 437 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_31_31;

#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, (MR_Integer) 0)));
#line 434 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, (MR_Integer) 1)));
#line 458 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_24)) == (MR_mktag((MR_Integer) 0)));
#line 458 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 458 "prog_io_typeclass.m"
          {
#line 458 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_26 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_24), (MR_Integer) 0);
#line 438 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_31_31 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[5];
#line 3658 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_46 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 3660 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 438 "prog_io_typeclass.m"
            {
#line 438 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_46, parse_tree__prog_io_typeclass__TypeCtorInfo_35_47, parse_tree__prog_io_typeclass__V_31_31, parse_tree__prog_io_typeclass__TailArbConstraints_25, &parse_tree__prog_io_typeclass__TailConstraints_27);
            }
#line 458 "prog_io_typeclass.m"
          }
#line 435 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 443 "prog_io_typeclass.m"
          {
#line 443 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_26));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_27));
#line 443 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              MR_Word base;
#line 443 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 443 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
          }
#line 435 "prog_io_typeclass.m"
        else
#line 447 "prog_io_typeclass.m"
          {
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_28;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_37_37;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_42_42;

#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_37_37 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_37_37));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[116])));
#line 446 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "prog_io_typeclass.m"
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 445 "prog_io_typeclass.m"
            }
#line 448 "prog_io_typeclass.m"
            {
#line 448 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_28));
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "prog_io_typeclass.m"
            }
#line 448 "prog_io_typeclass.m"
            {
#line 448 "prog_io_typeclass.m"
              MR_Word base;
#line 448 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 448 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
          }
#line 434 "prog_io_typeclass.m"
      }
#line 723 "prog_io_typeclass.m"
  }
#line 720 "prog_io_typeclass.m"
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

#line 274 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(
#line 274 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 274 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_7,
#line 274 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 274 "prog_io_typeclass.m"
{
#line 277 "prog_io_typeclass.m"
  {
#line 277 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 277 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 277 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 277 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 277 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 531 "prog_io_typeclass.m"
    {
#line 531 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 296 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 297 "prog_io_typeclass.m"
      {
#line 297 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 298 "prog_io_typeclass.m"
        {
#line 298 "prog_io_typeclass.m"
          MR_Word base;
#line 298 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 298 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 298 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 298 "prog_io_typeclass.m"
        }
#line 297 "prog_io_typeclass.m"
      }
#line 296 "prog_io_typeclass.m"
    else
#line 280 "prog_io_typeclass.m"
      {
#line 280 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 280 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 280 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 280 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 282 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_13;
#line 282 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_14;
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_46;
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_47;
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_51;

#line 280 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 280 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 281 "prog_io_typeclass.m"
        {
#line 281 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 281 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 281 "prog_io_typeclass.m"
        }
#line 305 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraint_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 0)));
#line 305 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__Constraints_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, (MR_Integer) 1)));
#line 307 "prog_io_typeclass.m"
        {
#line 307 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_47, &parse_tree__prog_io_typeclass__SimpleConstraints0_50, &parse_tree__prog_io_typeclass__FunDeps0_51);
        }
#line 306 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 313 "prog_io_typeclass.m"
          {
#line 313 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 2))))
#line 314 "prog_io_typeclass.m"
              {
#line 314 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_53 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 2);

#line 315 "prog_io_typeclass.m"
                {
#line 315 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDeps_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_53));
#line 315 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__FunDeps_14, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_51));
#line 315 "prog_io_typeclass.m"
                }
#line 316 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__Constraints_13 = parse_tree__prog_io_typeclass__SimpleConstraints0_50;
#line 314 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 314 "prog_io_typeclass.m"
              }
#line 313 "prog_io_typeclass.m"
            else
#line 313 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_46)) == (MR_mktag((MR_Integer) 0))))
#line 310 "prog_io_typeclass.m"
              {
#line 310 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_46), (MR_Integer) 0);

#line 311 "prog_io_typeclass.m"
                {
#line 311 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Constraints_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_52));
#line 311 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Constraints_13, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_50));
#line 311 "prog_io_typeclass.m"
                }
#line 312 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__FunDeps_14 = parse_tree__prog_io_typeclass__FunDeps0_51;
#line 310 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 310 "prog_io_typeclass.m"
              }
#line 313 "prog_io_typeclass.m"
            else
#line 313 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 313 "prog_io_typeclass.m"
          }
#line 282 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 286 "prog_io_typeclass.m"
          {
#line 286 "prog_io_typeclass.m"
            MR_Word base;
#line 286 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 286 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Constraints_13));
#line 286 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_14));
#line 286 "prog_io_typeclass.m"
          }
#line 282 "prog_io_typeclass.m"
        else
#line 290 "prog_io_typeclass.m"
          {
#line 290 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 290 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 290 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 290 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 290 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 292 "prog_io_typeclass.m"
            {
#line 292 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 292 "prog_io_typeclass.m"
            {
#line 292 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 292 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[115])));
#line 292 "prog_io_typeclass.m"
            }
#line 293 "prog_io_typeclass.m"
            {
#line 293 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 293 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "prog_io_typeclass.m"
            }
#line 291 "prog_io_typeclass.m"
            {
#line 291 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 291 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 291 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 291 "prog_io_typeclass.m"
            }
#line 294 "prog_io_typeclass.m"
            {
#line 294 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 294 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "prog_io_typeclass.m"
            }
#line 294 "prog_io_typeclass.m"
            {
#line 294 "prog_io_typeclass.m"
              MR_Word base;
#line 294 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 294 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 294 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 294 "prog_io_typeclass.m"
            }
#line 290 "prog_io_typeclass.m"
          }
#line 280 "prog_io_typeclass.m"
      }
#line 277 "prog_io_typeclass.m"
  }
#line 274 "prog_io_typeclass.m"
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
#line 461 "prog_io_typeclass.m"
  {
#line 461 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 461 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Result0_9;
#line 461 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadConstraintTerm_42;
#line 461 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TailConstraintTerms_43;
#line 461 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_44_44;

#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_44_44);
    }
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 0)));
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_44_44, (MR_Integer) 1)));
#line 531 "prog_io_typeclass.m"
    {
#line 531 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_42, parse_tree__prog_io_typeclass__TailConstraintTerms_43, &parse_tree__prog_io_typeclass__Result0_9);
    }
#line 479 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_9)) == (MR_mktag((MR_Integer) 0))))
#line 480 "prog_io_typeclass.m"
      {
#line 480 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));

#line 481 "prog_io_typeclass.m"
        {
#line 481 "prog_io_typeclass.m"
          MR_Word base;
#line 481 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 481 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = base;
#line 481 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_17));
#line 481 "prog_io_typeclass.m"
        }
#line 480 "prog_io_typeclass.m"
      }
#line 479 "prog_io_typeclass.m"
    else
#line 464 "prog_io_typeclass.m"
      {
#line 464 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_10;
#line 464 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_11;
#line 464 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ArbitraryConstraints_12;
#line 464 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_9, (MR_Integer) 0)));
#line 466 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints_13;
#line 466 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub_14;

#line 464 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__HeadArbConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 464 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__TailArbConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 465 "prog_io_typeclass.m"
        {
#line 465 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ArbitraryConstraints_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadArbConstraint_10));
#line 465 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArbitraryConstraints_12, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailArbConstraints_11));
#line 465 "prog_io_typeclass.m"
        }
#line 467 "prog_io_typeclass.m"
        {
#line 467 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__ArbitraryConstraints_12, &parse_tree__prog_io_typeclass__ProgConstraints_13, &parse_tree__prog_io_typeclass__InstVarSub_14);
        }
#line 466 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 470 "prog_io_typeclass.m"
          {
#line 470 "prog_io_typeclass.m"
            MR_Word base;
#line 470 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__Result_8 = base;
#line 470 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints_13));
#line 470 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVarSub_14));
#line 470 "prog_io_typeclass.m"
          }
#line 466 "prog_io_typeclass.m"
        else
#line 473 "prog_io_typeclass.m"
          {
#line 473 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_16;
#line 473 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 473 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 473 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 473 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 475 "prog_io_typeclass.m"
            {
#line 475 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_31_31 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 475 "prog_io_typeclass.m"
            {
#line 475 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 475 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[114])));
#line 475 "prog_io_typeclass.m"
            }
#line 476 "prog_io_typeclass.m"
            {
#line 476 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 476 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 476 "prog_io_typeclass.m"
            }
#line 474 "prog_io_typeclass.m"
            {
#line 474 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 474 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_16, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 474 "prog_io_typeclass.m"
            }
#line 477 "prog_io_typeclass.m"
            {
#line 477 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_16));
#line 477 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "prog_io_typeclass.m"
            }
#line 477 "prog_io_typeclass.m"
            {
#line 477 "prog_io_typeclass.m"
              MR_Word base;
#line 477 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 477 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 477 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_36_36));
#line 477 "prog_io_typeclass.m"
            }
#line 473 "prog_io_typeclass.m"
          }
#line 464 "prog_io_typeclass.m"
      }
#line 461 "prog_io_typeclass.m"
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

#line 529 "prog_io_typeclass.m"
    {
#line 529 "prog_io_typeclass.m"
      parse_tree__prog_io_util__conjunction_to_one_or_more_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7, &parse_tree__prog_io_typeclass__V_57_57);
    }
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__HeadConstraintTerm_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 530 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__TailConstraintTerms_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 1)));
#line 531 "prog_io_typeclass.m"
    {
#line 531 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__HeadConstraintTerm_55, parse_tree__prog_io_typeclass__TailConstraintTerms_56, &parse_tree__prog_io_typeclass__Result0_26);
    }
#line 450 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Result0_26)) == (MR_mktag((MR_Integer) 0))))
#line 452 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__Result0_26;
#line 450 "prog_io_typeclass.m"
    else
#line 434 "prog_io_typeclass.m"
      {
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadArbConstraint_27;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TailArbConstraints_28;
#line 434 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Result0_26, (MR_Integer) 0)));
#line 435 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__HeadConstraint_29;
#line 435 "prog_io_typeclass.m"
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
#line 458 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27)) == (MR_mktag((MR_Integer) 0)));
#line 458 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 458 "prog_io_typeclass.m"
          {
#line 458 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadConstraint_29 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadArbConstraint_27), (MR_Integer) 0);
#line 438 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_34_34 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[4];
#line 4456 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_34_49 = (MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0;
#line 4458 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeCtorInfo_35_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 438 "prog_io_typeclass.m"
            {
#line 438 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__list__map_3_p_2(parse_tree__prog_io_typeclass__TypeCtorInfo_34_49, parse_tree__prog_io_typeclass__TypeCtorInfo_35_50, parse_tree__prog_io_typeclass__V_34_34, parse_tree__prog_io_typeclass__TailArbConstraints_28, &parse_tree__prog_io_typeclass__TailConstraints_30);
            }
#line 458 "prog_io_typeclass.m"
          }
#line 435 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 443 "prog_io_typeclass.m"
          {
#line 443 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;

#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_29));
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__TailConstraints_30));
#line 443 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
            {
#line 443 "prog_io_typeclass.m"
              MR_Word base;
#line 443 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 443 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 443 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_35_35));
#line 443 "prog_io_typeclass.m"
            }
#line 443 "prog_io_typeclass.m"
          }
#line 435 "prog_io_typeclass.m"
        else
#line 447 "prog_io_typeclass.m"
          {
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_31;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_38_38;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_39_39;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_40_40;
#line 447 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_45_45;

#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_40_40 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__ConstraintsTerm_7);
            }
#line 446 "prog_io_typeclass.m"
            {
#line 446 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_40_40));
#line 446 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[113])));
#line 446 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
            {
#line 447 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 447 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 447 "prog_io_typeclass.m"
            }
#line 445 "prog_io_typeclass.m"
            {
#line 445 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 445 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_31, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_38_38));
#line 445 "prog_io_typeclass.m"
            }
#line 448 "prog_io_typeclass.m"
            {
#line 448 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_31));
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "prog_io_typeclass.m"
            }
#line 448 "prog_io_typeclass.m"
            {
#line 448 "prog_io_typeclass.m"
              MR_Word base;
#line 448 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 448 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 448 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 448 "prog_io_typeclass.m"
            }
#line 447 "prog_io_typeclass.m"
          }
#line 434 "prog_io_typeclass.m"
      }
#line 420 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 806 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__806__1_2_f_0(
#line 806 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_12,
#line 806 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_57)
#line 806 "prog_io_typeclass.m"
{
#line 806 "prog_io_typeclass.m"
  {
#line 806 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 806 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_58;

#line 806 "prog_io_typeclass.m"
    {
#line 806 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__3_58 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TVarSet_12, parse_tree__prog_io_typeclass__HeadVar__2_57);
    }
#line 806 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_58;
#line 806 "prog_io_typeclass.m"
  }
#line 806 "prog_io_typeclass.m"
}

#line 803 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__803__1_2_p_0(
#line 803 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypesVars_17,
#line 803 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_52)
#line 803 "prog_io_typeclass.m"
{
#line 803 "prog_io_typeclass.m"
  {
#line 803 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 968 "prog_io_typeclass.m"
    {
#line 968 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_52)), parse_tree__prog_io_typeclass__TypesVars_17);
    }
#line 803 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 803 "prog_io_typeclass.m"
  }
#line 803 "prog_io_typeclass.m"
}

#line 330 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__330__1_2_p_0(
#line 330 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_82,
#line 330 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_83)
#line 330 "prog_io_typeclass.m"
{
#line 330 "prog_io_typeclass.m"
  {
#line 330 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 330 "prog_io_typeclass.m"
    {
#line 330 "prog_io_typeclass.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_82, parse_tree__prog_io_typeclass__HeadVar__2_83);
    }
#line 330 "prog_io_typeclass.m"
  }
#line 330 "prog_io_typeclass.m"
}

#line 220 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(
#line 220 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 220 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_160)
#line 220 "prog_io_typeclass.m"
{
#line 220 "prog_io_typeclass.m"
  {
#line 220 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 220 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_161;

#line 220 "prog_io_typeclass.m"
    {
#line 220 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__3_161 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_169, parse_tree__prog_io_typeclass__HeadVar__2_160);
    }
#line 220 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_161;
#line 220 "prog_io_typeclass.m"
  }
#line 220 "prog_io_typeclass.m"
}

#line 217 "prog_io_typeclass.m"
static MR_String MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__217__1_2_f_0(
#line 217 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_169,
#line 217 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_157)
#line 217 "prog_io_typeclass.m"
{
#line 217 "prog_io_typeclass.m"
  {
#line 217 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 217 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__HeadVar__3_158;

#line 217 "prog_io_typeclass.m"
    {
#line 217 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__3_158 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__HeadVar__1_169, parse_tree__prog_io_typeclass__HeadVar__2_157);
    }
#line 217 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__3_158;
#line 217 "prog_io_typeclass.m"
  }
#line 217 "prog_io_typeclass.m"
}

#line 178 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(
#line 178 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 178 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_152)
#line 178 "prog_io_typeclass.m"
{
#line 178 "prog_io_typeclass.m"
  {
#line 178 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 178 "prog_io_typeclass.m"
    {
#line 178 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_152)));
    }
#line 178 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 178 "prog_io_typeclass.m"
  }
#line 178 "prog_io_typeclass.m"
}

#line 176 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__176__1_2_p_0(
#line 176 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Params_26,
#line 176 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_150)
#line 176 "prog_io_typeclass.m"
{
#line 176 "prog_io_typeclass.m"
  {
#line 176 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 176 "prog_io_typeclass.m"
    {
#line 176 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__is_in_list_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], parse_tree__prog_io_typeclass__Params_26, ((MR_Box) (parse_tree__prog_io_typeclass__HeadVar__2_150)));
    }
#line 176 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 176 "prog_io_typeclass.m"
  }
#line 176 "prog_io_typeclass.m"
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
      parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[1], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 53 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 53 "prog_io_typeclass.m"
  }
#line 53 "prog_io_typeclass.m"
}

#line 523 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraints_0_0(
#line 523 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 523 "prog_io_typeclass.m"
{
#line 523 "prog_io_typeclass.m"
  {
#line 523 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 523 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 523 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_5 = parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 523 "prog_io_typeclass.m"
    {
#line 523 "prog_io_typeclass.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_5)));
    }
#line 523 "prog_io_typeclass.m"
  }
#line 523 "prog_io_typeclass.m"
}

#line 523 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraints_0_0(
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 523 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 523 "prog_io_typeclass.m"
{
#line 523 "prog_io_typeclass.m"
  {
#line 523 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 523 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar1_3 = parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 523 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Cast_HeadVar2_4 = parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 523 "prog_io_typeclass.m"
    {
#line 523 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__prog_io_typeclass__Cast_HeadVar2_4)));
    }
#line 523 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 523 "prog_io_typeclass.m"
  }
#line 523 "prog_io_typeclass.m"
}

#line 506 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass____Compare____arbitrary_constraint_0_0(
#line 506 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 506 "prog_io_typeclass.m"
{
#line 506 "prog_io_typeclass.m"
  {
#line 506 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 506 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_45 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 506 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_46 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__3_3;

#line 506 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_45 == parse_tree__prog_io_typeclass__CastY_46);
#line 506 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 4911 "parse_tree.prog_io_typeclass.c"
      *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 0;
#line 506 "prog_io_typeclass.m"
    else
#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) {
#line 506 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_56_56 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);

#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 506 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 506 "prog_io_typeclass.m"
                {
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 0);

#line 506 "prog_io_typeclass.m"
                  {
#line 506 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_56_56, parse_tree__prog_io_typeclass__V_5_5);
                  }
#line 506 "prog_io_typeclass.m"
                }
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 4950 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 4956 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 4962 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
            }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_55_55 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);

#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 506 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 4986 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 506 "prog_io_typeclass.m"
                {
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_16_16 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 1);

#line 506 "prog_io_typeclass.m"
                  {
#line 506 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_55_55, parse_tree__prog_io_typeclass__V_16_16);
                  }
#line 506 "prog_io_typeclass.m"
                }
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 5008 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 5014 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
            }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);

#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 506 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 5038 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 5044 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 506 "prog_io_typeclass.m"
                {
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_44_44 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3), (MR_Integer) 2);

#line 506 "prog_io_typeclass.m"
                  {
#line 506 "prog_io_typeclass.m"
                    parse_tree__prog_data____Compare____prog_fundep_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_52_52, parse_tree__prog_io_typeclass__V_44_44);
                  }
#line 506 "prog_io_typeclass.m"
                }
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 5066 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
            }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));

#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
            switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__3_3)) {
#line 506 "prog_io_typeclass.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 0:
#line 5092 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 1:
#line 5098 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 2;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 2:
#line 5104 "parse_tree.prog_io_typeclass.c"
                *parse_tree__prog_io_typeclass__HeadVar__1_1 = (MR_Integer) 1;
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
              case (MR_Integer) 3:
#line 506 "prog_io_typeclass.m"
                {
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 0)));
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__3_3, (MR_Integer) 1)));
#line 506 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_32_32;

#line 506 "prog_io_typeclass.m"
                  {
#line 506 "prog_io_typeclass.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], &parse_tree__prog_io_typeclass__V_32_32, ((MR_Box) (parse_tree__prog_io_typeclass__V_54_54)), ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30)));
                  }
#line 5124 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_32_32 == (MR_Integer) 0);
#line 506 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__succeeded = !(parse_tree__prog_io_typeclass__succeeded);
#line 506 "prog_io_typeclass.m"
                  if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
                    *parse_tree__prog_io_typeclass__HeadVar__1_1 = parse_tree__prog_io_typeclass__V_32_32;
#line 506 "prog_io_typeclass.m"
                  else
#line 506 "prog_io_typeclass.m"
                    {
#line 506 "prog_io_typeclass.m"
                      parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__prog_io_typeclass__HeadVar__1_1, parse_tree__prog_io_typeclass__V_53_53, parse_tree__prog_io_typeclass__V_31_31);
                    }
#line 506 "prog_io_typeclass.m"
                }
#line 506 "prog_io_typeclass.m"
                break;
#line 506 "prog_io_typeclass.m"
            }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
      }
#line 506 "prog_io_typeclass.m"
  }
#line 506 "prog_io_typeclass.m"
}

#line 506 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass____Unify____arbitrary_constraint_0_0(
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 506 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2)
#line 506 "prog_io_typeclass.m"
{
#line 506 "prog_io_typeclass.m"
  {
#line 506 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 506 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastX_13 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__1_1;
#line 506 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass__CastY_14 = (MR_Integer) parse_tree__prog_io_typeclass__HeadVar__2_2;

#line 506 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__CastX_13 == parse_tree__prog_io_typeclass__CastY_14);
#line 506 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 506 "prog_io_typeclass.m"
    else
#line 506 "prog_io_typeclass.m"
#line 506 "prog_io_typeclass.m"
      switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) {
#line 506 "prog_io_typeclass.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 0:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_3_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 506 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 506 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
              {
#line 506 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_4_4 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 0);
#line 5204 "parse_tree.prog_io_typeclass.c"
                {
#line 5206 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_3_3, parse_tree__prog_io_typeclass__V_4_4);
                }
#line 506 "prog_io_typeclass.m"
              }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 1:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_5_5 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 1);
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_6_6;

#line 506 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 506 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
              {
#line 506 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_6_6 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 1);
#line 5232 "parse_tree.prog_io_typeclass.c"
                {
#line 5234 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(parse_tree__prog_io_typeclass__V_5_5, parse_tree__prog_io_typeclass__V_6_6);
                }
#line 506 "prog_io_typeclass.m"
              }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 2:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_11_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 2);
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_12_12;

#line 506 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 506 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
              {
#line 506 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_12_12 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2), (MR_Integer) 2);
#line 5260 "parse_tree.prog_io_typeclass.c"
                {
#line 5262 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____prog_fundep_0_0(parse_tree__prog_io_typeclass__V_11_11, parse_tree__prog_io_typeclass__V_12_12);
                }
#line 506 "prog_io_typeclass.m"
              }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
        case (MR_Integer) 3:
#line 506 "prog_io_typeclass.m"
          {
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_16_16;
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_9_9;
#line 506 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_10_10;

#line 506 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 506 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 506 "prog_io_typeclass.m"
              {
#line 506 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 0)));
#line 506 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__HeadVar__2_2, (MR_Integer) 1)));
#line 5296 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeInfo_16_16 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6];
#line 5298 "parse_tree.prog_io_typeclass.c"
                {
#line 5300 "parse_tree.prog_io_typeclass.c"
                  parse_tree__prog_io_typeclass__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_16_16, ((MR_Box) (parse_tree__prog_io_typeclass__V_7_7)), ((MR_Box) (parse_tree__prog_io_typeclass__V_9_9)));
                }
#line 506 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 5305 "parse_tree.prog_io_typeclass.c"
                  {
#line 5307 "parse_tree.prog_io_typeclass.c"
                    parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__prog_io_typeclass__V_8_8, parse_tree__prog_io_typeclass__V_10_10);
                  }
#line 506 "prog_io_typeclass.m"
              }
#line 506 "prog_io_typeclass.m"
          }
#line 506 "prog_io_typeclass.m"
          break;
#line 506 "prog_io_typeclass.m"
      }
#line 506 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 506 "prog_io_typeclass.m"
  }
#line 506 "prog_io_typeclass.m"
}

#line 965 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__is_in_list_2_p_0(
#line 965 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TypeInfo_for_T_5,
#line 965 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__List_3,
#line 965 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__Element_4)
#line 965 "prog_io_typeclass.m"
{
#line 968 "prog_io_typeclass.m"
  {
#line 968 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 968 "prog_io_typeclass.m"
    {
#line 968 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = mercury__list__member_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_for_T_5, parse_tree__prog_io_typeclass__Element_4, parse_tree__prog_io_typeclass__List_3);
    }
#line 968 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 968 "prog_io_typeclass.m"
  }
#line 965 "prog_io_typeclass.m"
}

#line 842 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass___ModuleName_5,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 842 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodTerm_7,
#line 842 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeInstanceMethod_8)
#line 842 "prog_io_typeclass.m"
{
#line 847 "prog_io_typeclass.m"
  {
#line 847 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 847 "prog_io_typeclass.m"
    {
#line 847 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_101_114_109_95_116_111_95_105_110_115_116_97_110_99_101_95_109_101_116_104_111_100_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__MethodTerm_7, parse_tree__prog_io_typeclass__MaybeInstanceMethod_8);
    }
#line 847 "prog_io_typeclass.m"
  }
#line 842 "prog_io_typeclass.m"
}

#line 806 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2(
#line 806 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 806 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 806 "prog_io_typeclass.m"
{
#line 806 "prog_io_typeclass.m"
  {
#line 806 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 806 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 806 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__3_58;

#line 806 "prog_io_typeclass.m"
    {
#line 806 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__3_58 = parse_tree__prog_io_typeclass__IntroducedFrom__func__check_tvars_in_instance_constraint__806__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 806 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__3_58));
#line 806 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 806 "prog_io_typeclass.m"
  }
#line 806 "prog_io_typeclass.m"
}

#line 803 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1(
#line 803 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 803 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 803 "prog_io_typeclass.m"
{
#line 803 "prog_io_typeclass.m"
  {
#line 803 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 803 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 803 "prog_io_typeclass.m"
    {
#line 803 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__check_tvars_in_instance_constraint__803__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 803 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 803 "prog_io_typeclass.m"
  }
#line 803 "prog_io_typeclass.m"
}

#line 790 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(
#line 790 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_4,
#line 790 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_5,
#line 790 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeSpec_6)
#line 790 "prog_io_typeclass.m"
{
#line 793 "prog_io_typeclass.m"
  {
#line 793 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 793 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Types_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 1)));
#line 793 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 3)));
#line 793 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 5)));
#line 795 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 0)));
#line 795 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___OriginalTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 2)));
#line 795 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___Methods_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 4)));
#line 795 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___ModName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 6)));
#line 795 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 7)));
#line 795 "prog_io_typeclass.m"
    MR_Integer parse_tree__prog_io_typeclass___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_4, (MR_Integer) 8)));
#line 800 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__UnboundTVars_19;
#line 801 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVars_16;
#line 801 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypesVars_17;
#line 801 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 803 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass___BoundTVars_18;
#line 804 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 804 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_21_21;

#line 801 "prog_io_typeclass.m"
    {
#line 801 "prog_io_typeclass.m"
      parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__Constraints_10, &parse_tree__prog_io_typeclass__TVars_16);
    }
#line 802 "prog_io_typeclass.m"
    {
#line 802 "prog_io_typeclass.m"
      parse_tree__prog_type__type_vars_list_2_p_0(parse_tree__prog_io_typeclass__Types_8, &parse_tree__prog_io_typeclass__TypesVars_17);
    }
#line 803 "prog_io_typeclass.m"
    {
#line 803 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 803 "prog_io_typeclass.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[0]));
#line 803 "prog_io_typeclass.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_1));
#line 803 "prog_io_typeclass.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 803 "prog_io_typeclass.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_27_27, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TypesVars_17));
#line 803 "prog_io_typeclass.m"
    }
#line 803 "prog_io_typeclass.m"
    {
#line 803 "prog_io_typeclass.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], parse_tree__prog_io_typeclass__V_27_27, parse_tree__prog_io_typeclass__TVars_16, &parse_tree__prog_io_typeclass___BoundTVars_18, &parse_tree__prog_io_typeclass__UnboundTVars_19);
    }
#line 804 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__UnboundTVars_19)) == (MR_mktag((MR_Integer) 1)));
#line 804 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 804 "prog_io_typeclass.m"
      {
#line 804 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_19, (MR_Integer) 0)));
#line 804 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__UnboundTVars_19, (MR_Integer) 1)));
#line 807 "prog_io_typeclass.m"
        {
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TypeInfo_55_55 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1];
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_60_60;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__UnboundTVarStrs_22;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__UnboundTVarPieces_23;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Prefix_24;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Pieces_25;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Spec_26;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_36_36;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_48_48;
#line 807 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_49_49;
#line 809 "prog_io_typeclass.m"
          MR_Integer parse_tree__prog_io_typeclass__V_29_29;

#line 806 "prog_io_typeclass.m"
          {
#line 806 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 806 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_28_28, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0]));
#line 806 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_28_28, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0_2));
#line 806 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 806 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_28_28, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_12));
#line 806 "prog_io_typeclass.m"
          }
#line 806 "prog_io_typeclass.m"
          {
#line 806 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__UnboundTVarStrs_22 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_55_55, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, parse_tree__prog_io_typeclass__V_28_28, parse_tree__prog_io_typeclass__UnboundTVars_19);
          }
#line 808 "prog_io_typeclass.m"
          {
#line 808 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__UnboundTVarPieces_23 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__UnboundTVarStrs_22);
          }
#line 809 "prog_io_typeclass.m"
          {
#line 809 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_29_29 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_55_55, parse_tree__prog_io_typeclass__UnboundTVars_19);
          }
#line 809 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_29_29 == (MR_Integer) 1);
#line 809 "prog_io_typeclass.m"
          if (parse_tree__prog_io_typeclass__succeeded)
#line 810 "prog_io_typeclass.m"
            {
#line 810 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Prefix_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[110]);
#line 810 "prog_io_typeclass.m"
            }
#line 809 "prog_io_typeclass.m"
          else
#line 812 "prog_io_typeclass.m"
            {
#line 812 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Prefix_24 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[112]);
#line 812 "prog_io_typeclass.m"
            }
#line 5608 "parse_tree.prog_io_typeclass.c"
          parse_tree__prog_io_typeclass__TypeCtorInfo_60_60 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 814 "prog_io_typeclass.m"
          {
#line 814 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_36_36 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_60_60, parse_tree__prog_io_typeclass__UnboundTVarPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[77]));
          }
#line 814 "prog_io_typeclass.m"
          {
#line 814 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Pieces_25 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_60_60, parse_tree__prog_io_typeclass__Prefix_24, parse_tree__prog_io_typeclass__V_36_36);
          }
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_47_47 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__NameTerm_5);
          }
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_25));
#line 818 "prog_io_typeclass.m"
          }
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_49_49));
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "prog_io_typeclass.m"
          }
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_48_48));
#line 818 "prog_io_typeclass.m"
          }
#line 818 "prog_io_typeclass.m"
          {
#line 818 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_46_46));
#line 818 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "prog_io_typeclass.m"
          }
#line 817 "prog_io_typeclass.m"
          {
#line 817 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 817 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 817 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 817 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_26, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 817 "prog_io_typeclass.m"
          }
#line 819 "prog_io_typeclass.m"
          {
#line 819 "prog_io_typeclass.m"
            MR_Word base;
#line 819 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeSpec_6 = base;
#line 819 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_26));
#line 819 "prog_io_typeclass.m"
          }
#line 807 "prog_io_typeclass.m"
        }
#line 804 "prog_io_typeclass.m"
      }
#line 804 "prog_io_typeclass.m"
    else
#line 821 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "prog_io_typeclass.m"
  }
#line 790 "prog_io_typeclass.m"
}

#line 830 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0_1(
#line 830 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 830 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 830 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 830 "prog_io_typeclass.m"
{
#line 830 "prog_io_typeclass.m"
  {
#line 830 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 830 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8;

#line 830 "prog_io_typeclass.m"
    {
#line 830 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__term_to_instance_method_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8);
    }
#line 830 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_MaybeInstanceMethod_8));
#line 830 "prog_io_typeclass.m"
  }
#line 830 "prog_io_typeclass.m"
}

#line 758 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0(
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_9,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_10,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_11,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_12,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_13,
#line 758 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_14,
#line 758 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_15,
#line 758 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_16)
#line 758 "prog_io_typeclass.m"
{
#line 763 "prog_io_typeclass.m"
  {
#line 763 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 763 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_17;
#line 763 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeInstanceMethods_18;
#line 828 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MethodList_56;
#line 768 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo0_19;
#line 768 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__InstanceMethods_20;

#line 764 "prog_io_typeclass.m"
    {
#line 764 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_9, parse_tree__prog_io_typeclass__TVarSet_11, parse_tree__prog_io_typeclass__NameTerm_12, parse_tree__prog_io_typeclass__Context_14, parse_tree__prog_io_typeclass__SeqNum_15, &parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_17);
    }
#line 828 "prog_io_typeclass.m"
    {
#line 828 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__MethodsTerm_13, &parse_tree__prog_io_typeclass__MethodList_56);
    }
#line 828 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 831 "prog_io_typeclass.m"
      {
#line 831 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Interface_57;
#line 831 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 831 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Methods_85;
#line 831 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_86;

#line 830 "prog_io_typeclass.m"
        {
#line 830 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 830 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_6[1]));
#line 830 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0_1));
#line 830 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 830 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_9));
#line 830 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_10));
#line 830 "prog_io_typeclass.m"
        }
#line 830 "prog_io_typeclass.m"
        {
#line 830 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[10], parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__MethodList_56, &parse_tree__prog_io_typeclass__Interface_57);
        }
#line 392 "prog_io_typeclass.m"
        {
#line 392 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__Interface_57, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_85, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_86);
        }
#line 396 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__Specs_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "prog_io_typeclass.m"
          {
#line 395 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__MaybeInstanceMethods_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_85));
#line 395 "prog_io_typeclass.m"
          }
#line 396 "prog_io_typeclass.m"
        else
#line 398 "prog_io_typeclass.m"
          {
#line 398 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_86));
#line 398 "prog_io_typeclass.m"
          }
#line 831 "prog_io_typeclass.m"
      }
#line 828 "prog_io_typeclass.m"
    else
#line 834 "prog_io_typeclass.m"
      {
#line 834 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Spec_59;
#line 834 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_68_68;
#line 834 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_69_69;
#line 834 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_70_70;
#line 834 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_75_75;

#line 836 "prog_io_typeclass.m"
        {
#line 836 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_70_70 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__MethodsTerm_13);
        }
#line 836 "prog_io_typeclass.m"
        {
#line 836 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_70_70));
#line 836 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[108])));
#line 836 "prog_io_typeclass.m"
        }
#line 836 "prog_io_typeclass.m"
        {
#line 836 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_69_69));
#line 836 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 836 "prog_io_typeclass.m"
        }
#line 835 "prog_io_typeclass.m"
        {
#line 835 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 835 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 835 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 835 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_59, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_68_68));
#line 835 "prog_io_typeclass.m"
        }
#line 837 "prog_io_typeclass.m"
        {
#line 837 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_59));
#line 837 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "prog_io_typeclass.m"
        }
#line 837 "prog_io_typeclass.m"
        {
#line 837 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__MaybeInstanceMethods_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 837 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeInstanceMethods_18, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_75_75));
#line 837 "prog_io_typeclass.m"
        }
#line 834 "prog_io_typeclass.m"
      }
#line 769 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_17)) == (MR_mktag((MR_Integer) 1)));
#line 769 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 769 "prog_io_typeclass.m"
      {
#line 769 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__ItemInstanceInfo0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_17, (MR_Integer) 0)));
#line 770 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeInstanceMethods_18)) == (MR_mktag((MR_Integer) 1)));
#line 770 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 770 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__InstanceMethods_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeInstanceMethods_18, (MR_Integer) 0)));
#line 769 "prog_io_typeclass.m"
      }
#line 768 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 774 "prog_io_typeclass.m"
      {
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_21;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeCheckSpec_22;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_31_31;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_33_33;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_34_34;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_37_37;
#line 774 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_38_38;
#line 774 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_39_39;
#line 772 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_35_35;
#line 772 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 773 "prog_io_typeclass.m"
        {
#line 773 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 773 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceMethods_20));
#line 773 "prog_io_typeclass.m"
        }
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 0)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 1)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 2)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 3)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 4)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 5)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 6)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 7)));
#line 772 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_19, (MR_Integer) 8)));
#line 772 "prog_io_typeclass.m"
        {
#line 772 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_31_31));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_34_34));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_11));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_37_37));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_38_38));
#line 772 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 772 "prog_io_typeclass.m"
        }
#line 775 "prog_io_typeclass.m"
        {
#line 775 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__check_tvars_in_instance_constraint_3_p_0(parse_tree__prog_io_typeclass__ItemInstanceInfo_21, parse_tree__prog_io_typeclass__NameTerm_12, &parse_tree__prog_io_typeclass__MaybeCheckSpec_22);
        }
#line 780 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__MaybeCheckSpec_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "prog_io_typeclass.m"
          {
#line 782 "prog_io_typeclass.m"
            MR_Word base;
#line 782 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_16 = base;
#line 782 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstanceInfo_21));
#line 782 "prog_io_typeclass.m"
          }
#line 780 "prog_io_typeclass.m"
        else
#line 778 "prog_io_typeclass.m"
          {
#line 778 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeCheckSpec_22, (MR_Integer) 0)));
#line 778 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_27_27;

#line 779 "prog_io_typeclass.m"
            {
#line 779 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_23));
#line 779 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "prog_io_typeclass.m"
            }
#line 779 "prog_io_typeclass.m"
            {
#line 779 "prog_io_typeclass.m"
              MR_Word base;
#line 779 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_16 = base;
#line 779 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 779 "prog_io_typeclass.m"
            }
#line 778 "prog_io_typeclass.m"
          }
#line 774 "prog_io_typeclass.m"
      }
#line 768 "prog_io_typeclass.m"
    else
#line 786 "prog_io_typeclass.m"
      {
#line 786 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_24;
#line 786 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 786 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 785 "prog_io_typeclass.m"
        {
#line 785 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_29_29 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0, parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_17);
        }
#line 786 "prog_io_typeclass.m"
        {
#line 786 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_30_30 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[9], parse_tree__prog_io_typeclass__MaybeInstanceMethods_18);
        }
#line 785 "prog_io_typeclass.m"
        {
#line 785 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_29_29, parse_tree__prog_io_typeclass__V_30_30);
        }
#line 787 "prog_io_typeclass.m"
        {
#line 787 "prog_io_typeclass.m"
          MR_Word base;
#line 787 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 787 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_16 = base;
#line 787 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_24));
#line 787 "prog_io_typeclass.m"
        }
#line 786 "prog_io_typeclass.m"
      }
#line 763 "prog_io_typeclass.m"
  }
#line 758 "prog_io_typeclass.m"
}

#line 729 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_9,
#line 729 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 729 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 729 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12)
#line 729 "prog_io_typeclass.m"
{
#line 733 "prog_io_typeclass.m"
  {
#line 733 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 733 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_31;
#line 733 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__NameContextPieces_13;
#line 733 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 733 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 736 "prog_io_typeclass.m"
    {
#line 736 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__NameContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[107]))));
    }
#line 6138 "parse_tree.prog_io_typeclass.c"
    parse_tree__prog_io_typeclass__TypeCtorInfo_31_31 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 737 "prog_io_typeclass.m"
    {
#line 737 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__TVarSet_8, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 738 "prog_io_typeclass.m"
    {
#line 738 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_31, parse_tree__prog_io_typeclass__NameTerm_9, parse_tree__prog_io_typeclass__VarSet_14, parse_tree__prog_io_typeclass__NameContextPieces_13, &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 753 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 754 "prog_io_typeclass.m"
      {
#line 754 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 755 "prog_io_typeclass.m"
        {
#line 755 "prog_io_typeclass.m"
          MR_Word base;
#line 755 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 755 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12 = base;
#line 755 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_28));
#line 755 "prog_io_typeclass.m"
        }
#line 754 "prog_io_typeclass.m"
      }
#line 753 "prog_io_typeclass.m"
    else
#line 741 "prog_io_typeclass.m"
      {
#line 741 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 741 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeTerms_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 741 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeTypes_19;

#line 743 "prog_io_typeclass.m"
        {
#line 743 "prog_io_typeclass.m"
          parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TypeTerms_17, parse_tree__prog_io_typeclass__VarSet_14, parse_tree__prog_io_typeclass__NameContextPieces_13, &parse_tree__prog_io_typeclass__MaybeTypes_19);
        }
#line 749 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19)) == (MR_mktag((MR_Integer) 0))))
#line 751 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_19;
#line 749 "prog_io_typeclass.m"
        else
#line 745 "prog_io_typeclass.m"
          {
#line 745 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Types_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_19, (MR_Integer) 0)));
#line 745 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_21;

#line 746 "prog_io_typeclass.m"
            {
#line 746 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstanceInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_20));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_8));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 746 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_21, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 746 "prog_io_typeclass.m"
            }
#line 748 "prog_io_typeclass.m"
            {
#line 748 "prog_io_typeclass.m"
              MR_Word base;
#line 748 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12 = base;
#line 748 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstanceInfo_21));
#line 748 "prog_io_typeclass.m"
            }
#line 745 "prog_io_typeclass.m"
          }
#line 741 "prog_io_typeclass.m"
      }
#line 733 "prog_io_typeclass.m"
  }
#line 729 "prog_io_typeclass.m"
}

#line 681 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ArgTerm_9,
#line 681 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 681 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 681 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12)
#line 681 "prog_io_typeclass.m"
{
#line 686 "prog_io_typeclass.m"
  {
#line 686 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerm_9)) == (MR_mktag((MR_Integer) 0)));
#line 686 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__NameTerm_13;
#line 686 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_14;
#line 687 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_16_16;
#line 687 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_17_17;
#line 687 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 687 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_19_19;
#line 687 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_20_20;
#line 687 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_15_15;

#line 687 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 687 "prog_io_typeclass.m"
      {
#line 687 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_9, (MR_Integer) 0)));
#line 687 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_9, (MR_Integer) 1)));
#line 687 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_9, (MR_Integer) 2)));
#line 687 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 687 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 687 "prog_io_typeclass.m"
          {
#line 687 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_16_16, (MR_Integer) 0)));
#line 687 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_17_17, (MR_String) "<=") == 0);
#line 687 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 687 "prog_io_typeclass.m"
              {
#line 687 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 687 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 687 "prog_io_typeclass.m"
                  {
#line 687 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__NameTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 0)));
#line 687 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_18_18, (MR_Integer) 1)));
#line 687 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 687 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 687 "prog_io_typeclass.m"
                      {
#line 687 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__ConstraintsTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 0)));
#line 687 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_19_19, (MR_Integer) 1)));
#line 687 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 687 "prog_io_typeclass.m"
                      }
#line 687 "prog_io_typeclass.m"
                  }
#line 687 "prog_io_typeclass.m"
              }
#line 687 "prog_io_typeclass.m"
          }
#line 687 "prog_io_typeclass.m"
      }
#line 686 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 701 "prog_io_typeclass.m"
      {
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_31_75;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_28;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeInstanceConstraints_30;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__NameContextPieces_57;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__VarSet_58;
#line 701 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeClassName_59;
#line 707 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo0_31;
#line 707 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstanceConstraints_32;

#line 702 "prog_io_typeclass.m"
        {
#line 702 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, (MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__TVarSet_8, &parse_tree__prog_io_typeclass__VarSet_28);
        }
#line 736 "prog_io_typeclass.m"
        {
#line 736 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__NameContextPieces_57 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[107]))));
        }
#line 6372 "parse_tree.prog_io_typeclass.c"
        parse_tree__prog_io_typeclass__TypeCtorInfo_31_75 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 737 "prog_io_typeclass.m"
        {
#line 737 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__TypeCtorInfo_31_75, parse_tree__prog_io_typeclass__TVarSet_8, &parse_tree__prog_io_typeclass__VarSet_58);
        }
#line 738 "prog_io_typeclass.m"
        {
#line 738 "prog_io_typeclass.m"
          parse_tree__prog_io_sym_name__parse_sym_name_and_args_4_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_31_75, parse_tree__prog_io_typeclass__NameTerm_13, parse_tree__prog_io_typeclass__VarSet_58, parse_tree__prog_io_typeclass__NameContextPieces_57, &parse_tree__prog_io_typeclass__MaybeClassName_59);
        }
#line 753 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_59)) == (MR_mktag((MR_Integer) 0))))
#line 754 "prog_io_typeclass.m"
          {
#line 754 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_59, (MR_Integer) 0)));

#line 755 "prog_io_typeclass.m"
            {
#line 755 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 755 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_72));
#line 755 "prog_io_typeclass.m"
            }
#line 754 "prog_io_typeclass.m"
          }
#line 753 "prog_io_typeclass.m"
        else
#line 741 "prog_io_typeclass.m"
          {
#line 741 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ClassName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_59, (MR_Integer) 0)));
#line 741 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeTerms_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_59, (MR_Integer) 1)));
#line 741 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__MaybeTypes_63;

#line 743 "prog_io_typeclass.m"
            {
#line 743 "prog_io_typeclass.m"
              parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__TypeTerms_61, parse_tree__prog_io_typeclass__VarSet_58, parse_tree__prog_io_typeclass__NameContextPieces_57, &parse_tree__prog_io_typeclass__MaybeTypes_63);
            }
#line 749 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_63)) == (MR_mktag((MR_Integer) 0))))
#line 751 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29 = (MR_Word) parse_tree__prog_io_typeclass__MaybeTypes_63;
#line 749 "prog_io_typeclass.m"
            else
#line 745 "prog_io_typeclass.m"
              {
#line 745 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Types_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeTypes_63, (MR_Integer) 0)));
#line 745 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_65;

#line 746 "prog_io_typeclass.m"
                {
#line 746 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemInstanceInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_60));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_64));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__Types_64));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_8));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_7));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 746 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_65, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 746 "prog_io_typeclass.m"
                }
#line 748 "prog_io_typeclass.m"
                {
#line 748 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstanceInfo_65));
#line 748 "prog_io_typeclass.m"
                }
#line 745 "prog_io_typeclass.m"
              }
#line 741 "prog_io_typeclass.m"
          }
#line 705 "prog_io_typeclass.m"
        {
#line 705 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_105_110_115_116_97_110_99_101_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_28, parse_tree__prog_io_typeclass__ConstraintsTerm_14, &parse_tree__prog_io_typeclass__MaybeInstanceConstraints_30);
        }
#line 708 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29)) == (MR_mktag((MR_Integer) 1)));
#line 708 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 708 "prog_io_typeclass.m"
          {
#line 708 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__ItemInstanceInfo0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29, (MR_Integer) 0)));
#line 709 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeInstanceConstraints_30)) == (MR_mktag((MR_Integer) 1)));
#line 709 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 709 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__InstanceConstraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeInstanceConstraints_30, (MR_Integer) 0)));
#line 708 "prog_io_typeclass.m"
          }
#line 707 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 712 "prog_io_typeclass.m"
          {
#line 712 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_33;
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 0)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 1)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 2)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 4)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 5)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 6)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 7)));
#line 711 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 8)));
#line 711 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo0_31, (MR_Integer) 3)));

#line 711 "prog_io_typeclass.m"
            {
#line 711 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ItemInstanceInfo_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_37_37));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_38_38));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_39_39));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__InstanceConstraints_32));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_41_41));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_42_42));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_44_44));
#line 711 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemInstanceInfo_33, 8) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 711 "prog_io_typeclass.m"
            }
#line 713 "prog_io_typeclass.m"
            {
#line 713 "prog_io_typeclass.m"
              MR_Word base;
#line 713 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12 = base;
#line 713 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstanceInfo_33));
#line 713 "prog_io_typeclass.m"
            }
#line 712 "prog_io_typeclass.m"
          }
#line 707 "prog_io_typeclass.m"
        else
#line 716 "prog_io_typeclass.m"
          {
#line 716 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Specs_34;
#line 716 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_35_35;
#line 716 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_36_36;

#line 715 "prog_io_typeclass.m"
            {
#line 715 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_35_35 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0, parse_tree__prog_io_typeclass__MaybeItemInstanceInfo0_29);
            }
#line 716 "prog_io_typeclass.m"
            {
#line 716 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_36_36 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[8], parse_tree__prog_io_typeclass__MaybeInstanceConstraints_30);
            }
#line 715 "prog_io_typeclass.m"
            {
#line 715 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Specs_34 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_35_35, parse_tree__prog_io_typeclass__V_36_36);
            }
#line 717 "prog_io_typeclass.m"
            {
#line 717 "prog_io_typeclass.m"
              MR_Word base;
#line 717 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 717 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12 = base;
#line 717 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_34));
#line 717 "prog_io_typeclass.m"
            }
#line 716 "prog_io_typeclass.m"
          }
#line 701 "prog_io_typeclass.m"
      }
#line 686 "prog_io_typeclass.m"
    else
#line 692 "prog_io_typeclass.m"
      {
#line 692 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_underived_instance_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__TVarSet_8, parse_tree__prog_io_typeclass__ArgTerm_9, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_12);
      }
#line 686 "prog_io_typeclass.m"
  }
#line 681 "prog_io_typeclass.m"
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
#line 614 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_8;
#line 614 "prog_io_typeclass.m"
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
#line 6704 "parse_tree.prog_io_typeclass.c"
                            parse_tree__prog_io_typeclass__TypeCtorInfo_7_46 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6706 "parse_tree.prog_io_typeclass.c"
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
#line 6727 "parse_tree.prog_io_typeclass.c"
                                parse_tree__prog_io_typeclass__TypeCtorInfo_7_52 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 6729 "parse_tree.prog_io_typeclass.c"
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
#line 614 "prog_io_typeclass.m"
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
#line 614 "prog_io_typeclass.m"
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
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[106])));
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
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
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
#line 614 "prog_io_typeclass.m"
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
    (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_89 = ((MR_Word) (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_89);
#line 641 "prog_io_typeclass.m"
    {
#line 641 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_2(parse_tree__prog_io_typeclass__env_ptr);
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
      (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonvar_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_89);
    }
#line 641 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 641 "prog_io_typeclass.m"
      {
#line 643 "prog_io_typeclass.m"
        {
#line 643 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_type__type_is_nonground_1_p_0((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgType_89);
        }
#line 643 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 643 "prog_io_typeclass.m"
          {
#line 643 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_1(parse_tree__prog_io_typeclass__env_ptr);
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
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &(parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__conv0_ArgType_89, (parse_tree__prog_io_typeclass__env_ptr)->parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_87, parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_3, parse_tree__prog_io_typeclass__env_ptr);
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

#line 534 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_5,
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadTerm_6,
#line 534 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TailTerms_7,
#line 534 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Result_8)
#line 534 "prog_io_typeclass.m"
{
#line 534 "prog_io_typeclass.m"
  {
#line 534 "prog_io_typeclass.m"
    struct parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0_s parse_tree__prog_io_typeclass__env;

#line 537 "prog_io_typeclass.m"
    {
#line 537 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__HeadResult_9;
#line 567 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar_31;
#line 567 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Inst_32;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_18_84;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_19_85;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg1_73;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__Arg2_74;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__InstVar0_76;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 604 "prog_io_typeclass.m"
      MR_String parse_tree__prog_io_typeclass__V_79_79;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_81_81;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_82_82;
#line 604 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_83_83;
#line 605 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_75_75;
#line 606 "prog_io_typeclass.m"
      MR_Word parse_tree__prog_io_typeclass__V_77_77;

#line 605 "prog_io_typeclass.m"
      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
        {
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadTerm_6, (MR_Integer) 2)));
#line 605 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_78_78)) == (MR_mktag((MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
            {
#line 605 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_79_79, (MR_String) "=<") == 0);
#line 604 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                {
#line 605 "prog_io_typeclass.m"
                  (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
                    {
#line 605 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Arg1_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_80_80, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 605 "prog_io_typeclass.m"
                        {
#line 605 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__Arg2_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, (MR_Integer) 0)));
#line 605 "prog_io_typeclass.m"
                          parse_tree__prog_io_typeclass__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_81_81, (MR_Integer) 1)));
#line 605 "prog_io_typeclass.m"
                          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = (parse_tree__prog_io_typeclass__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "prog_io_typeclass.m"
                          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 604 "prog_io_typeclass.m"
                            {
#line 606 "prog_io_typeclass.m"
                              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Arg1_73)) == (MR_mktag((MR_Integer) 1)));
#line 606 "prog_io_typeclass.m"
                              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 606 "prog_io_typeclass.m"
                                {
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__InstVar0_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_73, (MR_Integer) 0)));
#line 606 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__Arg1_73, (MR_Integer) 1)));
#line 7116 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_18_84 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 7118 "parse_tree.prog_io_typeclass.c"
                                  parse_tree__prog_io_typeclass__TypeCtorInfo_19_85 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 607 "prog_io_typeclass.m"
                                  {
#line 607 "prog_io_typeclass.m"
                                    mercury__term__coerce_var_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_18_84, parse_tree__prog_io_typeclass__TypeCtorInfo_19_85, parse_tree__prog_io_typeclass__InstVar0_76, &parse_tree__prog_io_typeclass__InstVar_31);
                                  }
#line 608 "prog_io_typeclass.m"
                                  parse_tree__prog_io_typeclass__V_83_83 = (MR_Integer) 1;
#line 608 "prog_io_typeclass.m"
                                  {
#line 608 "prog_io_typeclass.m"
                                    (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0(parse_tree__prog_io_typeclass__V_83_83, parse_tree__prog_io_typeclass__Arg2_74, &parse_tree__prog_io_typeclass__Inst_32);
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
#line 567 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 570 "prog_io_typeclass.m"
        {
#line 570 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__V_43_43;

#line 570 "prog_io_typeclass.m"
          {
#line 570 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_31));
#line 570 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Inst_32));
#line 570 "prog_io_typeclass.m"
          }
#line 570 "prog_io_typeclass.m"
          {
#line 570 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 570 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_43_43));
#line 570 "prog_io_typeclass.m"
          }
#line 570 "prog_io_typeclass.m"
        }
#line 567 "prog_io_typeclass.m"
      else
#line 571 "prog_io_typeclass.m"
        {
#line 571 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__Result0_33;

#line 572 "prog_io_typeclass.m"
          {
#line 572 "prog_io_typeclass.m"
            (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_typeclass__parse_fundep_2_p_0(parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__Result0_33);
          }
#line 571 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 574 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__HeadResult_9 = parse_tree__prog_io_typeclass__Result0_33;
#line 571 "prog_io_typeclass.m"
          else
#line 575 "prog_io_typeclass.m"
            {
#line 575 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__ClassName_34;
#line 575 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__Args0_35;

#line 576 "prog_io_typeclass.m"
              {
#line 576 "prog_io_typeclass.m"
                (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_args_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6, &parse_tree__prog_io_typeclass__ClassName_34, &parse_tree__prog_io_typeclass__Args0_35);
              }
#line 575 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 579 "prog_io_typeclass.m"
                {
#line 579 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgsResultContextPieces_36;
#line 579 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__ArgsResult_37;

#line 579 "prog_io_typeclass.m"
                  {
#line 579 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ArgsResultContextPieces_36 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[104]))));
                  }
#line 580 "prog_io_typeclass.m"
                  {
#line 580 "prog_io_typeclass.m"
                    parse_tree__prog_io_util__parse_types_4_p_0(parse_tree__prog_io_typeclass__Args0_35, parse_tree__prog_io_typeclass__VarSet_5, parse_tree__prog_io_typeclass__ArgsResultContextPieces_36, &parse_tree__prog_io_typeclass__ArgsResult_37);
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
                      MR_Word parse_tree__prog_io_typeclass___ClassName_86;

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
                      parse_tree__prog_io_typeclass___ClassName_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 0)));
#line 639 "prog_io_typeclass.m"
                      (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__ArgTypes_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Constraint_39, (MR_Integer) 1)));
#line 641 "prog_io_typeclass.m"
                      {
#line 641 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_4(&parse_tree__prog_io_typeclass__env);
                      }
#line 584 "prog_io_typeclass.m"
                      if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 585 "prog_io_typeclass.m"
                        {
#line 585 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 585 "prog_io_typeclass.m"
                          {
#line 585 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_46_46));
#line 585 "prog_io_typeclass.m"
                          }
#line 585 "prog_io_typeclass.m"
                        }
#line 584 "prog_io_typeclass.m"
                      else
#line 587 "prog_io_typeclass.m"
                        {
#line 587 "prog_io_typeclass.m"
                          MR_Word parse_tree__prog_io_typeclass__V_47_47 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_typeclass__Constraint_39);

#line 587 "prog_io_typeclass.m"
                          {
#line 587 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 587 "prog_io_typeclass.m"
                            MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 587 "prog_io_typeclass.m"
                          }
#line 587 "prog_io_typeclass.m"
                        }
#line 582 "prog_io_typeclass.m"
                    }
#line 579 "prog_io_typeclass.m"
                }
#line 575 "prog_io_typeclass.m"
              else
#line 595 "prog_io_typeclass.m"
                {
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__Spec_42;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 595 "prog_io_typeclass.m"
                  MR_Word parse_tree__prog_io_typeclass__V_65_65;

#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_60_60 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__HeadTerm_6);
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[105])));
#line 597 "prog_io_typeclass.m"
                  }
#line 597 "prog_io_typeclass.m"
                  {
#line 597 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_59_59));
#line 597 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "prog_io_typeclass.m"
                  }
#line 596 "prog_io_typeclass.m"
                  {
#line 596 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Spec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 596 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_42, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_58_58));
#line 596 "prog_io_typeclass.m"
                  }
#line 598 "prog_io_typeclass.m"
                  {
#line 598 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_42));
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 598 "prog_io_typeclass.m"
                  }
#line 598 "prog_io_typeclass.m"
                  {
#line 598 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__HeadResult_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "prog_io_typeclass.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadResult_9, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 598 "prog_io_typeclass.m"
                  }
#line 595 "prog_io_typeclass.m"
                }
#line 575 "prog_io_typeclass.m"
            }
#line 571 "prog_io_typeclass.m"
        }
#line 548 "prog_io_typeclass.m"
      if ((parse_tree__prog_io_typeclass__TailTerms_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 0))))
#line 546 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__Result_8 = (MR_Word) parse_tree__prog_io_typeclass__HeadResult_9;
#line 544 "prog_io_typeclass.m"
        else
#line 542 "prog_io_typeclass.m"
          {
#line 542 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__HeadConstraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 542 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_20_20;

#line 543 "prog_io_typeclass.m"
            {
#line 543 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_10));
#line 543 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "prog_io_typeclass.m"
            }
#line 543 "prog_io_typeclass.m"
            {
#line 543 "prog_io_typeclass.m"
              MR_Word base;
#line 543 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__Result_8 = base;
#line 543 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_20_20));
#line 543 "prog_io_typeclass.m"
            }
#line 542 "prog_io_typeclass.m"
          }
#line 548 "prog_io_typeclass.m"
      else
#line 549 "prog_io_typeclass.m"
        {
#line 549 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadTailTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 0)));
#line 549 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailTailTerms_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailTerms_7, (MR_Integer) 1)));
#line 549 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailResult_14;
#line 552 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__TailConstraints_15;
#line 552 "prog_io_typeclass.m"
          MR_Word parse_tree__prog_io_typeclass__HeadConstraint_22;

#line 550 "prog_io_typeclass.m"
          {
#line 550 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0(parse_tree__prog_io_typeclass__VarSet_5, parse_tree__prog_io_typeclass__HeadTailTerm_12, parse_tree__prog_io_typeclass__TailTailTerms_13, &parse_tree__prog_io_typeclass__TailResult_14);
          }
#line 553 "prog_io_typeclass.m"
          (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadResult_9)) == (MR_mktag((MR_Integer) 1)));
#line 553 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 553 "prog_io_typeclass.m"
            {
#line 553 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__HeadConstraint_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadResult_9, (MR_Integer) 0)));
#line 554 "prog_io_typeclass.m"
              (parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__TailResult_14)) == (MR_mktag((MR_Integer) 1)));
#line 554 "prog_io_typeclass.m"
              if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 554 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__TailConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__TailResult_14, (MR_Integer) 0)));
#line 553 "prog_io_typeclass.m"
            }
#line 552 "prog_io_typeclass.m"
          if ((parse_tree__prog_io_typeclass__env).parse_tree__prog_io_typeclass__parse_arbitrary_constraint_list_4_p_0_env_0__succeeded)
#line 556 "prog_io_typeclass.m"
            {
#line 556 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 556 "prog_io_typeclass.m"
              {
#line 556 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_16_16 = mercury__list__one_or_more_cons_2_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, ((MR_Box) (parse_tree__prog_io_typeclass__HeadConstraint_22)), parse_tree__prog_io_typeclass__TailConstraints_15);
              }
#line 556 "prog_io_typeclass.m"
              {
#line 556 "prog_io_typeclass.m"
                MR_Word base;
#line 556 "prog_io_typeclass.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 556 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_16_16));
#line 556 "prog_io_typeclass.m"
              }
#line 556 "prog_io_typeclass.m"
            }
#line 552 "prog_io_typeclass.m"
          else
#line 558 "prog_io_typeclass.m"
            {
#line 558 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_17_17;
#line 558 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_18_18;
#line 558 "prog_io_typeclass.m"
              MR_Word parse_tree__prog_io_typeclass__V_19_19;

#line 558 "prog_io_typeclass.m"
              {
#line 558 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_18_18 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass__parse_tree__prog_io_typeclass__type_ctor_info_arbitrary_constraint_0, parse_tree__prog_io_typeclass__HeadResult_9);
              }
#line 559 "prog_io_typeclass.m"
              {
#line 559 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_19_19 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[7], parse_tree__prog_io_typeclass__TailResult_14);
              }
#line 558 "prog_io_typeclass.m"
              {
#line 558 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_17_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_18_18, parse_tree__prog_io_typeclass__V_19_19);
              }
#line 558 "prog_io_typeclass.m"
              {
#line 558 "prog_io_typeclass.m"
                MR_Word base;
#line 558 "prog_io_typeclass.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 558 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__Result_8 = base;
#line 558 "prog_io_typeclass.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_17_17));
#line 558 "prog_io_typeclass.m"
              }
#line 558 "prog_io_typeclass.m"
            }
#line 549 "prog_io_typeclass.m"
        }
#line 537 "prog_io_typeclass.m"
    }
#line 534 "prog_io_typeclass.m"
  }
#line 534 "prog_io_typeclass.m"
}

#line 484 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(
#line 484 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 484 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 484 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 484 "prog_io_typeclass.m"
{
#line 487 "prog_io_typeclass.m"
  {
#line 487 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 487 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "prog_io_typeclass.m"
      {
#line 487 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "prog_io_typeclass.m"
        {
#line 487 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__HeadVar__3_3 = mercury__map__init_0_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
        }
#line 487 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 487 "prog_io_typeclass.m"
      }
#line 487 "prog_io_typeclass.m"
    else
#line 489 "prog_io_typeclass.m"
      {
#line 489 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 489 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 489 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__InstVarSub0_9;

#line 490 "prog_io_typeclass.m"
        {
#line 490 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_class_and_inst_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__ProgConstraints0_8, &parse_tree__prog_io_typeclass__InstVarSub0_9);
        }
#line 489 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 496 "prog_io_typeclass.m"
#line 496 "prog_io_typeclass.m"
          switch (MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) {
#line 496 "prog_io_typeclass.m"
            default:
#line 496 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 496 "prog_io_typeclass.m"
              break;
#line 496 "prog_io_typeclass.m"
            case (MR_Integer) 0:
#line 493 "prog_io_typeclass.m"
              {
#line 493 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 494 "prog_io_typeclass.m"
                {
#line 494 "prog_io_typeclass.m"
                  MR_Word base;
#line 494 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 494 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 494 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 494 "prog_io_typeclass.m"
                }
#line 495 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 493 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 493 "prog_io_typeclass.m"
              }
#line 496 "prog_io_typeclass.m"
              break;
#line 496 "prog_io_typeclass.m"
            case (MR_Integer) 1:
#line 497 "prog_io_typeclass.m"
              {
#line 497 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ClassConstraint_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 1);

#line 498 "prog_io_typeclass.m"
                {
#line 498 "prog_io_typeclass.m"
                  MR_Word base;
#line 498 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 498 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassConstraint_11));
#line 498 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ProgConstraints0_8));
#line 498 "prog_io_typeclass.m"
                }
#line 499 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__InstVarSub0_9;
#line 497 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 497 "prog_io_typeclass.m"
              }
#line 496 "prog_io_typeclass.m"
              break;
#line 496 "prog_io_typeclass.m"
            case (MR_Integer) 3:
#line 501 "prog_io_typeclass.m"
              {
#line 501 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__InstVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 0)));
#line 501 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Inst_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__Constraint_4, (MR_Integer) 1)));

#line 502 "prog_io_typeclass.m"
                {
#line 502 "prog_io_typeclass.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (parse_tree__prog_io_typeclass__InstVar_12)), ((MR_Box) (parse_tree__prog_io_typeclass__Inst_13)), parse_tree__prog_io_typeclass__InstVarSub0_9, parse_tree__prog_io_typeclass__HeadVar__3_3);
                }
#line 503 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__ProgConstraints0_8;
#line 501 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 501 "prog_io_typeclass.m"
              }
#line 496 "prog_io_typeclass.m"
              break;
#line 496 "prog_io_typeclass.m"
          }
#line 489 "prog_io_typeclass.m"
      }
#line 487 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 487 "prog_io_typeclass.m"
  }
#line 484 "prog_io_typeclass.m"
}

#line 455 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__get_simple_constraint_2_p_0(
#line 455 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 455 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__Constraint_3)
#line 455 "prog_io_typeclass.m"
{
#line 458 "prog_io_typeclass.m"
  {
#line 458 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));

#line 458 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 458 "prog_io_typeclass.m"
      *parse_tree__prog_io_typeclass__Constraint_3 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__HeadVar__1_1), (MR_Integer) 0);
#line 458 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 458 "prog_io_typeclass.m"
  }
#line 455 "prog_io_typeclass.m"
}

#line 375 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_methods_4_p_0_1(
#line 375 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 375 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 375 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 375 "prog_io_typeclass.m"
{
#line 375 "prog_io_typeclass.m"
  {
#line 375 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 375 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__4_4;

#line 375 "prog_io_typeclass.m"
    {
#line 375 "prog_io_typeclass.m"
      parse_tree__prog_io_item__parse_class_method_decl_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__4_4);
    }
#line 375 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__4_4));
#line 375 "prog_io_typeclass.m"
  }
#line 375 "prog_io_typeclass.m"
}

#line 367 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_class_methods_4_p_0(
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_5,
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_6,
#line 367 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_7,
#line 367 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeClassMethods_8)
#line 367 "prog_io_typeclass.m"
{
#line 371 "prog_io_typeclass.m"
  {
#line 371 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 371 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MethodTerms_9;

#line 373 "prog_io_typeclass.m"
    {
#line 373 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_util__list_term_to_term_list_2_p_0(parse_tree__prog_io_typeclass__MethodsTerm_7, &parse_tree__prog_io_typeclass__MethodTerms_9);
    }
#line 371 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 376 "prog_io_typeclass.m"
      {
#line 376 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeMethods_10;
#line 376 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_13_13;
#line 376 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Methods_38;
#line 376 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_39;

#line 375 "prog_io_typeclass.m"
        {
#line 375 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 375 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_13_13, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_6[0]));
#line 375 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_13_13, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_class_methods_4_p_0_1));
#line 375 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_13_13, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__ModuleName_5));
#line 375 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_13_13, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__VarSet_6));
#line 375 "prog_io_typeclass.m"
        }
#line 375 "prog_io_typeclass.m"
        {
#line 375 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[5], parse_tree__prog_io_typeclass__V_13_13, parse_tree__prog_io_typeclass__MethodTerms_9, &parse_tree__prog_io_typeclass__MaybeMethods_10);
        }
#line 392 "prog_io_typeclass.m"
        {
#line 392 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_101_114_114_111_114_115_95_50_95_95_91_49_93_95_48_5_p_0(parse_tree__prog_io_typeclass__MaybeMethods_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Methods_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_typeclass__Specs_39);
        }
#line 396 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__Specs_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 395 "prog_io_typeclass.m"
          {
#line 395 "prog_io_typeclass.m"
            MR_Word base;
#line 395 "prog_io_typeclass.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeClassMethods_8 = base;
#line 395 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Methods_38));
#line 395 "prog_io_typeclass.m"
          }
#line 396 "prog_io_typeclass.m"
        else
#line 398 "prog_io_typeclass.m"
          {
#line 398 "prog_io_typeclass.m"
            MR_Word base;
#line 398 "prog_io_typeclass.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "prog_io_typeclass.m"
            *parse_tree__prog_io_typeclass__MaybeClassMethods_8 = base;
#line 398 "prog_io_typeclass.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_39));
#line 398 "prog_io_typeclass.m"
          }
#line 376 "prog_io_typeclass.m"
      }
#line 371 "prog_io_typeclass.m"
    else
#line 379 "prog_io_typeclass.m"
      {
#line 379 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Spec_12;
#line 379 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_21_21;
#line 379 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_22_22;
#line 379 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 379 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_28_28;

#line 381 "prog_io_typeclass.m"
        {
#line 381 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_23_23 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_typeclass__MethodsTerm_7);
        }
#line 381 "prog_io_typeclass.m"
        {
#line 381 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 381 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[103])));
#line 381 "prog_io_typeclass.m"
        }
#line 381 "prog_io_typeclass.m"
        {
#line 381 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_22_22));
#line 381 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_typeclass.m"
        }
#line 380 "prog_io_typeclass.m"
        {
#line 380 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 380 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_21_21));
#line 380 "prog_io_typeclass.m"
        }
#line 382 "prog_io_typeclass.m"
        {
#line 382 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_12));
#line 382 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "prog_io_typeclass.m"
        }
#line 382 "prog_io_typeclass.m"
        {
#line 382 "prog_io_typeclass.m"
          MR_Word base;
#line 382 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeClassMethods_8 = base;
#line 382 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 382 "prog_io_typeclass.m"
        }
#line 379 "prog_io_typeclass.m"
      }
#line 371 "prog_io_typeclass.m"
  }
#line 367 "prog_io_typeclass.m"
}

#line 330 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0_1(
#line 330 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 330 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1,
#line 330 "prog_io_typeclass.m"
  MR_Box * parse_tree__prog_io_typeclass__wrapper_arg_2)
#line 330 "prog_io_typeclass.m"
{
#line 330 "prog_io_typeclass.m"
  {
#line 330 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 330 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_83;

#line 330 "prog_io_typeclass.m"
    {
#line 330 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_unconstrained_class__330__1_2_p_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1), &parse_tree__prog_io_typeclass__conv0_HeadVar__2_83);
    }
#line 330 "prog_io_typeclass.m"
    *parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_83));
#line 330 "prog_io_typeclass.m"
  }
#line 330 "prog_io_typeclass.m"
}

#line 319 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__TVarSet_8,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_9,
#line 319 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 319 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 319 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12)
#line 319 "prog_io_typeclass.m"
{
#line 323 "prog_io_typeclass.m"
  {
#line 323 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 323 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_80_80;
#line 323 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_81_81;
#line 323 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ContextPieces_13;
#line 323 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__VarSet_14;
#line 323 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassName_15;

#line 324 "prog_io_typeclass.m"
    {
#line 324 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__ContextPieces_13 = mercury__cord__singleton_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_typeclass_scalar_common_1[100]))));
    }
#line 7968 "parse_tree.prog_io_typeclass.c"
    parse_tree__prog_io_typeclass__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 7970 "parse_tree.prog_io_typeclass.c"
    parse_tree__prog_io_typeclass__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 325 "prog_io_typeclass.m"
    {
#line 325 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_80_80, parse_tree__prog_io_typeclass__TypeCtorInfo_81_81, parse_tree__prog_io_typeclass__TVarSet_8, &parse_tree__prog_io_typeclass__VarSet_14);
    }
#line 326 "prog_io_typeclass.m"
    {
#line 326 "prog_io_typeclass.m"
      parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_81_81, parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__NameTerm_9, parse_tree__prog_io_typeclass__VarSet_14, parse_tree__prog_io_typeclass__ContextPieces_13, &parse_tree__prog_io_typeclass__MaybeClassName_15);
    }
#line 362 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassName_15)) == (MR_mktag((MR_Integer) 0))))
#line 363 "prog_io_typeclass.m"
      {
#line 363 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));

#line 364 "prog_io_typeclass.m"
        {
#line 364 "prog_io_typeclass.m"
          MR_Word base;
#line 364 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 364 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 364 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_28));
#line 364 "prog_io_typeclass.m"
        }
#line 363 "prog_io_typeclass.m"
      }
#line 362 "prog_io_typeclass.m"
    else
#line 329 "prog_io_typeclass.m"
      {
#line 329 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TypeInfo_87_87 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[4];
#line 329 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 0)));
#line 329 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassName_15, (MR_Integer) 1)));
#line 329 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TermVars_18;

#line 330 "prog_io_typeclass.m"
        {
#line 330 "prog_io_typeclass.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[3], parse_tree__prog_io_typeclass__TypeInfo_87_87, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[3], parse_tree__prog_io_typeclass__TermVars0_17, &parse_tree__prog_io_typeclass__TermVars_18);
        }
#line 338 "prog_io_typeclass.m"
        if ((parse_tree__prog_io_typeclass__TermVars_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "prog_io_typeclass.m"
          {
#line 332 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Spec_20;
#line 332 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_64_64;
#line 332 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_65_65;
#line 332 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_66_66;
#line 332 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_71_71;

#line 336 "prog_io_typeclass.m"
            {
#line 336 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_66_66 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_81_81, parse_tree__prog_io_typeclass__NameTerm_9);
            }
#line 336 "prog_io_typeclass.m"
            {
#line 336 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 336 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_66_66));
#line 336 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[101])));
#line 336 "prog_io_typeclass.m"
            }
#line 336 "prog_io_typeclass.m"
            {
#line 336 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 336 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "prog_io_typeclass.m"
            }
#line 335 "prog_io_typeclass.m"
            {
#line 335 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 335 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 335 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 335 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_20, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 335 "prog_io_typeclass.m"
            }
#line 337 "prog_io_typeclass.m"
            {
#line 337 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_20));
#line 337 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "prog_io_typeclass.m"
            }
#line 337 "prog_io_typeclass.m"
            {
#line 337 "prog_io_typeclass.m"
              MR_Word base;
#line 337 "prog_io_typeclass.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 337 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_71_71));
#line 337 "prog_io_typeclass.m"
            }
#line 332 "prog_io_typeclass.m"
          }
#line 338 "prog_io_typeclass.m"
        else
#line 340 "prog_io_typeclass.m"
          {
#line 340 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Vars_23;
#line 341 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedTermVars_24;
#line 341 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__NumSortedTermVars_25;
#line 341 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__NumTermVars_26;

#line 341 "prog_io_typeclass.m"
            {
#line 341 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = mercury__term__term_list_to_var_list_2_p_0(parse_tree__prog_io_typeclass__TypeCtorInfo_80_80, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__Vars_23);
            }
#line 341 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 341 "prog_io_typeclass.m"
              {
#line 342 "prog_io_typeclass.m"
                {
#line 342 "prog_io_typeclass.m"
                  mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_87_87, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__SortedTermVars_24);
                }
#line 343 "prog_io_typeclass.m"
                {
#line 343 "prog_io_typeclass.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_87_87, parse_tree__prog_io_typeclass__SortedTermVars_24, &parse_tree__prog_io_typeclass__NumSortedTermVars_25);
                }
#line 344 "prog_io_typeclass.m"
                {
#line 344 "prog_io_typeclass.m"
                  mercury__list__length_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_87_87, parse_tree__prog_io_typeclass__TermVars_18, &parse_tree__prog_io_typeclass__NumTermVars_26);
                }
#line 345 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__NumSortedTermVars_25 == parse_tree__prog_io_typeclass__NumTermVars_26);
#line 341 "prog_io_typeclass.m"
              }
#line 340 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 350 "prog_io_typeclass.m"
              {
#line 350 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeClassInfo_27;

#line 349 "prog_io_typeclass.m"
                {
#line 349 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__TypeClassInfo_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassName_16));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__Vars_23));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_8));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 349 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__TypeClassInfo_27, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__SeqNum_11));
#line 349 "prog_io_typeclass.m"
                }
#line 351 "prog_io_typeclass.m"
                {
#line 351 "prog_io_typeclass.m"
                  MR_Word base;
#line 351 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 351 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__TypeClassInfo_27));
#line 351 "prog_io_typeclass.m"
                }
#line 350 "prog_io_typeclass.m"
              }
#line 340 "prog_io_typeclass.m"
            else
#line 354 "prog_io_typeclass.m"
              {
#line 354 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_45_45;
#line 354 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_46_46;
#line 354 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_47_47;
#line 354 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_52_52;
#line 354 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_74;

#line 357 "prog_io_typeclass.m"
                {
#line 357 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_47_47 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_81_81, parse_tree__prog_io_typeclass__NameTerm_9);
                }
#line 357 "prog_io_typeclass.m"
                {
#line 357 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 357 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_47_47));
#line 357 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[102])));
#line 357 "prog_io_typeclass.m"
                }
#line 358 "prog_io_typeclass.m"
                {
#line 358 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_46_46));
#line 358 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "prog_io_typeclass.m"
                }
#line 356 "prog_io_typeclass.m"
                {
#line 356 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 356 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 356 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_74, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_45_45));
#line 356 "prog_io_typeclass.m"
                }
#line 359 "prog_io_typeclass.m"
                {
#line 359 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_74));
#line 359 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "prog_io_typeclass.m"
                }
#line 359 "prog_io_typeclass.m"
                {
#line 359 "prog_io_typeclass.m"
                  MR_Word base;
#line 359 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeTypeClassInfo_12 = base;
#line 359 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_52_52));
#line 359 "prog_io_typeclass.m"
                }
#line 354 "prog_io_typeclass.m"
              }
#line 340 "prog_io_typeclass.m"
          }
#line 329 "prog_io_typeclass.m"
      }
#line 323 "prog_io_typeclass.m"
  }
#line 319 "prog_io_typeclass.m"
}

#line 301 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(
#line 301 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1,
#line 301 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__2_2,
#line 301 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__HeadVar__3_3)
#line 301 "prog_io_typeclass.m"
{
#line 304 "prog_io_typeclass.m"
  {
#line 304 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 304 "prog_io_typeclass.m"
    if ((parse_tree__prog_io_typeclass__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "prog_io_typeclass.m"
      {
#line 304 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "prog_io_typeclass.m"
        *parse_tree__prog_io_typeclass__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 304 "prog_io_typeclass.m"
      }
#line 304 "prog_io_typeclass.m"
    else
#line 306 "prog_io_typeclass.m"
      {
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraint_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Constraints_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 306 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps0_9;

#line 307 "prog_io_typeclass.m"
        {
#line 307 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__collect_simple_and_fundep_constraints_3_p_0(parse_tree__prog_io_typeclass__Constraints_5, &parse_tree__prog_io_typeclass__SimpleConstraints0_8, &parse_tree__prog_io_typeclass__FunDeps0_9);
        }
#line 306 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 313 "prog_io_typeclass.m"
          {
#line 313 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 2))))
#line 314 "prog_io_typeclass.m"
              {
#line 314 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDep_11 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 2);

#line 315 "prog_io_typeclass.m"
                {
#line 315 "prog_io_typeclass.m"
                  MR_Word base;
#line 315 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__3_3 = base;
#line 315 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDep_11));
#line 315 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps0_9));
#line 315 "prog_io_typeclass.m"
                }
#line 316 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__2_2 = parse_tree__prog_io_typeclass__SimpleConstraints0_8;
#line 314 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 314 "prog_io_typeclass.m"
              }
#line 313 "prog_io_typeclass.m"
            else
#line 313 "prog_io_typeclass.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__Constraint_4)) == (MR_mktag((MR_Integer) 0))))
#line 310 "prog_io_typeclass.m"
              {
#line 310 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__SimpleConstraint_10 = (MR_Word) MR_body(((MR_Word) parse_tree__prog_io_typeclass__Constraint_4), (MR_Integer) 0);

#line 311 "prog_io_typeclass.m"
                {
#line 311 "prog_io_typeclass.m"
                  MR_Word base;
#line 311 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__HeadVar__2_2 = base;
#line 311 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraint_10));
#line 311 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__SimpleConstraints0_8));
#line 311 "prog_io_typeclass.m"
                }
#line 312 "prog_io_typeclass.m"
                *parse_tree__prog_io_typeclass__HeadVar__3_3 = parse_tree__prog_io_typeclass__FunDeps0_9;
#line 310 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = MR_TRUE;
#line 310 "prog_io_typeclass.m"
              }
#line 313 "prog_io_typeclass.m"
            else
#line 313 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__succeeded = MR_FALSE;
#line 313 "prog_io_typeclass.m"
          }
#line 306 "prog_io_typeclass.m"
      }
#line 304 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 304 "prog_io_typeclass.m"
  }
#line 301 "prog_io_typeclass.m"
}

#line 270 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(
#line 270 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__HeadVar__1_1)
#line 270 "prog_io_typeclass.m"
{
#line 272 "prog_io_typeclass.m"
  {
#line 272 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 272 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 272 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Domain_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 0)));
#line 272 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__Range_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__HeadVar__1_1, (MR_Integer) 1)));

#line 272 "prog_io_typeclass.m"
    {
#line 272 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], parse_tree__prog_io_typeclass__Domain_3, parse_tree__prog_io_typeclass__Range_4);
    }
#line 272 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 272 "prog_io_typeclass.m"
  }
#line 270 "prog_io_typeclass.m"
}

#line 268 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0_1(
#line 268 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 268 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 268 "prog_io_typeclass.m"
{
#line 268 "prog_io_typeclass.m"
  {
#line 268 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 268 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 268 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__conv0_HeadVar__2_2;

#line 268 "prog_io_typeclass.m"
    {
#line 268 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__2_2 = parse_tree__prog_io_typeclass__tvars_in_fundep_1_f_0(((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 268 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__2_2));
#line 268 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 268 "prog_io_typeclass.m"
  }
#line 268 "prog_io_typeclass.m"
}

#line 266 "prog_io_typeclass.m"
static MR_Word MR_CALL 
parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(
#line 266 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__FunDeps_3)
#line 266 "prog_io_typeclass.m"
{
#line 268 "prog_io_typeclass.m"
  {
#line 268 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 268 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 268 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_4_4;

#line 268 "prog_io_typeclass.m"
    {
#line 268 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__V_4_4 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[2], (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_2[2], parse_tree__prog_io_typeclass__FunDeps_3);
    }
#line 268 "prog_io_typeclass.m"
    {
#line 268 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__HeadVar__2_2 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1], parse_tree__prog_io_typeclass__V_4_4);
    }
#line 268 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__HeadVar__2_2;
#line 268 "prog_io_typeclass.m"
  }
#line 266 "prog_io_typeclass.m"
}

#line 220 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4(
#line 220 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 220 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 220 "prog_io_typeclass.m"
{
#line 220 "prog_io_typeclass.m"
  {
#line 220 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 220 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 220 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv1_HeadVar__3_161;

#line 220 "prog_io_typeclass.m"
    {
#line 220 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv1_HeadVar__3_161 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__220__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 220 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv1_HeadVar__3_161));
#line 220 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 220 "prog_io_typeclass.m"
  }
#line 220 "prog_io_typeclass.m"
}

#line 217 "prog_io_typeclass.m"
static MR_Box MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3(
#line 217 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 217 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 217 "prog_io_typeclass.m"
{
#line 217 "prog_io_typeclass.m"
  {
#line 217 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 217 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;
#line 217 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__conv0_HeadVar__3_158;

#line 217 "prog_io_typeclass.m"
    {
#line 217 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__conv0_HeadVar__3_158 = parse_tree__prog_io_typeclass__IntroducedFrom__func__parse_constrained_class__217__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 217 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_typeclass__conv0_HeadVar__3_158));
#line 217 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__wrapper_arg_2;
#line 217 "prog_io_typeclass.m"
  }
#line 217 "prog_io_typeclass.m"
}

#line 178 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2(
#line 178 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 178 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 178 "prog_io_typeclass.m"
{
#line 178 "prog_io_typeclass.m"
  {
#line 178 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 178 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 178 "prog_io_typeclass.m"
    {
#line 178 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__178__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 178 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 178 "prog_io_typeclass.m"
  }
#line 178 "prog_io_typeclass.m"
}

#line 176 "prog_io_typeclass.m"
static MR_bool MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1(
#line 176 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__closure_arg,
#line 176 "prog_io_typeclass.m"
  MR_Box parse_tree__prog_io_typeclass__wrapper_arg_1)
#line 176 "prog_io_typeclass.m"
{
#line 176 "prog_io_typeclass.m"
  {
#line 176 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 176 "prog_io_typeclass.m"
    MR_Box parse_tree__prog_io_typeclass__closure = parse_tree__prog_io_typeclass__closure_arg;

#line 176 "prog_io_typeclass.m"
    {
#line 176 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__succeeded = parse_tree__prog_io_typeclass__IntroducedFrom__pred__parse_constrained_class__176__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_typeclass__wrapper_arg_1));
    }
#line 176 "prog_io_typeclass.m"
    return parse_tree__prog_io_typeclass__succeeded;
#line 176 "prog_io_typeclass.m"
  }
#line 176 "prog_io_typeclass.m"
}

#line 149 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_10,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_11,
#line 149 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 149 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 149 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClass_14)
#line 149 "prog_io_typeclass.m"
{
#line 154 "prog_io_typeclass.m"
  {
#line 154 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;
#line 154 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__TVarSet_15;
#line 154 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeParsedConstraints_16;

#line 155 "prog_io_typeclass.m"
    {
#line 155 "prog_io_typeclass.m"
      mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_15);
    }
#line 156 "prog_io_typeclass.m"
    {
#line 156 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_115_117_112_101_114_99_108_97_115_115_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__ConstraintsTerm_11, &parse_tree__prog_io_typeclass__MaybeParsedConstraints_16);
    }
#line 261 "prog_io_typeclass.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeParsedConstraints_16)) == (MR_mktag((MR_Integer) 0))))
#line 262 "prog_io_typeclass.m"
      {
#line 262 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));

#line 263 "prog_io_typeclass.m"
        {
#line 263 "prog_io_typeclass.m"
          MR_Word base;
#line 263 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 263 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 263 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_59));
#line 263 "prog_io_typeclass.m"
        }
#line 262 "prog_io_typeclass.m"
      }
#line 261 "prog_io_typeclass.m"
    else
#line 159 "prog_io_typeclass.m"
      {
#line 159 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ConstraintList_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 0)));
#line 159 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__FunDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeParsedConstraints_16, (MR_Integer) 1)));
#line 159 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;

#line 160 "prog_io_typeclass.m"
        {
#line 160 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__TVarSet_15, parse_tree__prog_io_typeclass__NameTerm_10, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19);
        }
#line 165 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19)) == (MR_mktag((MR_Integer) 0))))
#line 164 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19;
#line 165 "prog_io_typeclass.m"
        else
#line 166 "prog_io_typeclass.m"
          {
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__TypeInfo_149_149;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClass0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClass0_19, (MR_Integer) 0)));
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintVars_22;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedConstraintVars_23;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepVars_24;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__SortedFunDepVars_25;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__Params_26;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParams_28;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepNotInParams_30;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintErrorContext_33;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__FunDepErrorContext_36;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NotInParams_37;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 166 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_167_167;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_168_168;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_169_169;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_170_170;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_173_173;
#line 166 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_174_174;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_117_117;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_118_118;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_119_119;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_120_120;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_121_121;
#line 175 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_122_122;
#line 175 "prog_io_typeclass.m"
            MR_Integer parse_tree__prog_io_typeclass__V_123_123;
#line 176 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___ConstraintInParams_27;
#line 178 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass___FunDepInParams_29;
#line 209 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_171_171;
#line 209 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_172_172;

#line 170 "prog_io_typeclass.m"
            {
#line 170 "prog_io_typeclass.m"
              parse_tree__prog_type__constraint_list_get_tvars_2_p_0(parse_tree__prog_io_typeclass__ConstraintList_17, &parse_tree__prog_io_typeclass__ConstraintVars_22);
            }
#line 8753 "parse_tree.prog_io_typeclass.c"
            parse_tree__prog_io_typeclass__TypeInfo_149_149 = (MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[1];
#line 171 "prog_io_typeclass.m"
            {
#line 171 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__ConstraintVars_22, &parse_tree__prog_io_typeclass__SortedConstraintVars_23);
            }
#line 172 "prog_io_typeclass.m"
            {
#line 172 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepVars_24 = parse_tree__prog_io_typeclass__tvars_in_fundeps_1_f_0(parse_tree__prog_io_typeclass__FunDeps_18);
            }
#line 173 "prog_io_typeclass.m"
            {
#line 173 "prog_io_typeclass.m"
              mercury__list__sort_and_remove_dups_2_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__FunDepVars_24, &parse_tree__prog_io_typeclass__SortedFunDepVars_25);
            }
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__Params_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 175 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 176 "prog_io_typeclass.m"
            {
#line 176 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 176 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[0]));
#line 176 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_1));
#line 176 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 176 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 176 "prog_io_typeclass.m"
            }
#line 176 "prog_io_typeclass.m"
            {
#line 176 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__V_60_60, parse_tree__prog_io_typeclass__SortedConstraintVars_23, &parse_tree__prog_io_typeclass___ConstraintInParams_27, &parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
            }
#line 178 "prog_io_typeclass.m"
            {
#line 178 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 178 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_4[0]));
#line 178 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_2));
#line 178 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 178 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_61_61, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__Params_26));
#line 178 "prog_io_typeclass.m"
            }
#line 178 "prog_io_typeclass.m"
            {
#line 178 "prog_io_typeclass.m"
              mercury__list__filter_4_p_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__V_61_61, parse_tree__prog_io_typeclass__SortedFunDepVars_25, &parse_tree__prog_io_typeclass___FunDepInParams_29, &parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 189 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "prog_io_typeclass.m"
            else
#line 182 "prog_io_typeclass.m"
              {
#line 182 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_62_62;

#line 182 "prog_io_typeclass.m"
                {
#line 182 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_62_62 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, parse_tree__prog_io_typeclass__ConstraintList_17);
                }
#line 182 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_62_62 == (MR_Integer) 1);
#line 182 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 183 "prog_io_typeclass.m"
                  {
#line 184 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[83]);
#line 183 "prog_io_typeclass.m"
                  }
#line 182 "prog_io_typeclass.m"
                else
#line 186 "prog_io_typeclass.m"
                  {
#line 187 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__ConstraintErrorContext_33 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[85]);
#line 186 "prog_io_typeclass.m"
                  }
#line 182 "prog_io_typeclass.m"
              }
#line 202 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 203 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "prog_io_typeclass.m"
            else
#line 195 "prog_io_typeclass.m"
              {
#line 195 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_69_69;

#line 195 "prog_io_typeclass.m"
                {
#line 195 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_69_69 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, parse_tree__prog_io_typeclass__FunDeps_18);
                }
#line 195 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_69_69 == (MR_Integer) 1);
#line 195 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 196 "prog_io_typeclass.m"
                  {
#line 197 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[87]);
#line 196 "prog_io_typeclass.m"
                  }
#line 195 "prog_io_typeclass.m"
                else
#line 199 "prog_io_typeclass.m"
                  {
#line 200 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__FunDepErrorContext_36 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[89]);
#line 199 "prog_io_typeclass.m"
                  }
#line 195 "prog_io_typeclass.m"
              }
#line 206 "prog_io_typeclass.m"
            {
#line 206 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__NotInParams_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__ConstraintNotInParams_28, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
            }
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 0)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 1)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 2)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 3)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 4)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 5)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 6)));
#line 209 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_167_167 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass0_21, (MR_Integer) 7)));
#line 213 "prog_io_typeclass.m"
            if ((parse_tree__prog_io_typeclass__NotInParams_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "prog_io_typeclass.m"
              {
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ItemTypeClass_38;
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_124_124 = parse_tree__prog_io_typeclass__V_174_174;
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_125_125 = parse_tree__prog_io_typeclass__V_173_173;
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_128_128 = parse_tree__prog_io_typeclass__V_170_170;
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_129_129 = parse_tree__prog_io_typeclass__V_169_169;
#line 208 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_130_130 = parse_tree__prog_io_typeclass__V_168_168;
#line 208 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_131_131 = parse_tree__prog_io_typeclass__V_167_167;

#line 209 "prog_io_typeclass.m"
                {
#line 209 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ItemTypeClass_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_124_124));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_125_125));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__ConstraintList_17));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__FunDeps_18));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_128_128));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__V_129_129));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_130_130));
#line 209 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClass_38, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_131_131));
#line 209 "prog_io_typeclass.m"
                }
#line 212 "prog_io_typeclass.m"
                {
#line 212 "prog_io_typeclass.m"
                  MR_Word base;
#line 212 "prog_io_typeclass.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 212 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 212 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClass_38));
#line 212 "prog_io_typeclass.m"
                }
#line 208 "prog_io_typeclass.m"
              }
#line 213 "prog_io_typeclass.m"
            else
#line 214 "prog_io_typeclass.m"
              {
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_156_156 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_166_166;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Prefix_46;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Suffix_47;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Middle_50;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Pieces_57;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__Spec_58;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_77_77;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_101_101;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_102_102;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_108_108;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_109_109;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_110_110;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_111_111;
#line 214 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__V_114_114;
#line 226 "prog_io_typeclass.m"
                MR_Integer parse_tree__prog_io_typeclass__V_78_78;

#line 217 "prog_io_typeclass.m"
                {
#line 217 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 217 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0]));
#line 217 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_3));
#line 217 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 217 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 217 "prog_io_typeclass.m"
                }
#line 216 "prog_io_typeclass.m"
                {
#line 216 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__TypeCtorInfo_156_156, parse_tree__prog_io_typeclass__V_76_76, parse_tree__prog_io_typeclass__ConstraintNotInParams_28);
                }
#line 220 "prog_io_typeclass.m"
                {
#line 220 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 220 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 0) = ((MR_Box) (&parse_tree__prog_io_typeclass_scalar_common_5[0]));
#line 220 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0_4));
#line 220 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 220 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_77_77, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_169_169));
#line 220 "prog_io_typeclass.m"
                }
#line 219 "prog_io_typeclass.m"
                {
#line 219 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43 = mercury__list__map_2_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__TypeCtorInfo_156_156, parse_tree__prog_io_typeclass__V_77_77, parse_tree__prog_io_typeclass__FunDepNotInParams_30);
                }
#line 222 "prog_io_typeclass.m"
                {
#line 222 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__ConstraintNotInParamsStrs_42);
                }
#line 224 "prog_io_typeclass.m"
                {
#line 224 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45 = parse_tree__error_util__list_to_pieces_1_f_0(parse_tree__prog_io_typeclass__FunDepNotInParamsStrs_43);
                }
#line 226 "prog_io_typeclass.m"
                {
#line 226 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_78_78 = mercury__list__length_1_f_0(parse_tree__prog_io_typeclass__TypeInfo_149_149, parse_tree__prog_io_typeclass__NotInParams_37);
                }
#line 226 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_78_78 == (MR_Integer) 1);
#line 226 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 227 "prog_io_typeclass.m"
                  {
#line 227 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[91]);
#line 228 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[93]);
#line 227 "prog_io_typeclass.m"
                  }
#line 226 "prog_io_typeclass.m"
                else
#line 230 "prog_io_typeclass.m"
                  {
#line 230 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Prefix_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[95]);
#line 231 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__Suffix_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[97]);
#line 230 "prog_io_typeclass.m"
                  }
#line 237 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__ConstraintNotInParams_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "prog_io_typeclass.m"
                  if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "prog_io_typeclass.m"
                    {
#line 236 "prog_io_typeclass.m"
                      {
#line 236 "prog_io_typeclass.m"
                        mercury__require__unexpected_3_p_0((MR_String) "parse_tree.prog_io_typeclass", (MR_String) "predicate \140parse_tree.prog_io_typeclass.parse_constrained_class\'/7", (MR_String) "no NotInParams");
#line 236 "prog_io_typeclass.m"
                        return;
                      }
#line 234 "prog_io_typeclass.m"
                    }
#line 237 "prog_io_typeclass.m"
                  else
#line 238 "prog_io_typeclass.m"
                    {
#line 240 "prog_io_typeclass.m"
                      {
#line 240 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                      }
#line 238 "prog_io_typeclass.m"
                    }
#line 237 "prog_io_typeclass.m"
                else
#line 237 "prog_io_typeclass.m"
                if ((parse_tree__prog_io_typeclass__FunDepNotInParams_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "prog_io_typeclass.m"
                  {
#line 245 "prog_io_typeclass.m"
                    {
#line 245 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__ConstraintErrorContext_33);
                    }
#line 243 "prog_io_typeclass.m"
                  }
#line 237 "prog_io_typeclass.m"
                else
#line 248 "prog_io_typeclass.m"
                  {
#line 248 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__TypeCtorInfo_165_165 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 248 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_91_91;
#line 248 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_92_92;
#line 248 "prog_io_typeclass.m"
                    MR_Word parse_tree__prog_io_typeclass__V_97_97;

#line 253 "prog_io_typeclass.m"
                    {
#line 253 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_97_97 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__FunDepNotInParamsPieces_45, parse_tree__prog_io_typeclass__FunDepErrorContext_36);
                    }
#line 252 "prog_io_typeclass.m"
                    {
#line 252 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_92_92 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[99]), parse_tree__prog_io_typeclass__V_97_97);
                    }
#line 252 "prog_io_typeclass.m"
                    {
#line 252 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__V_91_91 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__ConstraintErrorContext_33, parse_tree__prog_io_typeclass__V_92_92);
                    }
#line 251 "prog_io_typeclass.m"
                    {
#line 251 "prog_io_typeclass.m"
                      parse_tree__prog_io_typeclass__Middle_50 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_165_165, parse_tree__prog_io_typeclass__ConstraintNotInParamsPieces_44, parse_tree__prog_io_typeclass__V_91_91);
                    }
#line 248 "prog_io_typeclass.m"
                  }
#line 9168 "parse_tree.prog_io_typeclass.c"
                parse_tree__prog_io_typeclass__TypeCtorInfo_166_166 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 255 "prog_io_typeclass.m"
                {
#line 255 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_102_102 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Suffix_47, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[12]));
                }
#line 255 "prog_io_typeclass.m"
                {
#line 255 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_101_101 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Middle_50, parse_tree__prog_io_typeclass__V_102_102);
                }
#line 255 "prog_io_typeclass.m"
                {
#line 255 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Pieces_57 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_typeclass__TypeCtorInfo_166_166, parse_tree__prog_io_typeclass__Prefix_46, parse_tree__prog_io_typeclass__V_101_101);
                }
#line 257 "prog_io_typeclass.m"
                {
#line 257 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Pieces_57));
#line 257 "prog_io_typeclass.m"
                }
#line 257 "prog_io_typeclass.m"
                {
#line 257 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_111_111));
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io_typeclass.m"
                }
#line 257 "prog_io_typeclass.m"
                {
#line 257 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_12));
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_110_110));
#line 257 "prog_io_typeclass.m"
                }
#line 257 "prog_io_typeclass.m"
                {
#line 257 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_109_109));
#line 257 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "prog_io_typeclass.m"
                }
#line 256 "prog_io_typeclass.m"
                {
#line 256 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__Spec_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 256 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 256 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_58, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_108_108));
#line 256 "prog_io_typeclass.m"
                }
#line 258 "prog_io_typeclass.m"
                {
#line 258 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_58));
#line 258 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "prog_io_typeclass.m"
                }
#line 258 "prog_io_typeclass.m"
                {
#line 258 "prog_io_typeclass.m"
                  MR_Word base;
#line 258 "prog_io_typeclass.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 258 "prog_io_typeclass.m"
                  *parse_tree__prog_io_typeclass__MaybeItemTypeClass_14 = base;
#line 258 "prog_io_typeclass.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_114_114));
#line 258 "prog_io_typeclass.m"
                }
#line 214 "prog_io_typeclass.m"
              }
#line 166 "prog_io_typeclass.m"
          }
#line 159 "prog_io_typeclass.m"
      }
#line 154 "prog_io_typeclass.m"
  }
#line 149 "prog_io_typeclass.m"
}

#line 110 "prog_io_typeclass.m"
static void MR_CALL 
parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_8,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_9,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__NameTerm_10,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__MethodsTerm_11,
#line 110 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_12,
#line 110 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_13,
#line 110 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_14)
#line 110 "prog_io_typeclass.m"
{
#line 114 "prog_io_typeclass.m"
  {
#line 114 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__NameTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 114 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15;
#line 114 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__MaybeClassMethods_16;
#line 138 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__NameTerm_53;
#line 138 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_54;
#line 139 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_57_57;
#line 139 "prog_io_typeclass.m"
    MR_String parse_tree__prog_io_typeclass__V_58_58;
#line 139 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 139 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 139 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_61_61;
#line 139 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_55_55;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17;
#line 118 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ClassMethods_18;

#line 139 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
      {
#line 139 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__NameTerm_10, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__NameTerm_10, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__NameTerm_10, (MR_Integer) 2)));
#line 139 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_57_57)) == (MR_mktag((MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
          {
#line 139 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_57_57, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_58_58, (MR_String) "<=") == 0);
#line 139 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
              {
#line 139 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                  {
#line 139 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__NameTerm_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_59_59, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                      {
#line 139 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__ConstraintsTerm_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_60_60, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_61_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "prog_io_typeclass.m"
                      }
#line 139 "prog_io_typeclass.m"
                  }
#line 139 "prog_io_typeclass.m"
              }
#line 139 "prog_io_typeclass.m"
          }
#line 139 "prog_io_typeclass.m"
      }
#line 138 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 141 "prog_io_typeclass.m"
      {
#line 141 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__NameTerm_53, parse_tree__prog_io_typeclass__ConstraintsTerm_54, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15);
      }
#line 138 "prog_io_typeclass.m"
    else
#line 144 "prog_io_typeclass.m"
      {
#line 144 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_56;

#line 144 "prog_io_typeclass.m"
        {
#line 144 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_56);
        }
#line 145 "prog_io_typeclass.m"
        {
#line 145 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__TVarSet_56, parse_tree__prog_io_typeclass__NameTerm_10, parse_tree__prog_io_typeclass__Context_12, parse_tree__prog_io_typeclass__SeqNum_13, &parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15);
        }
#line 144 "prog_io_typeclass.m"
      }
#line 117 "prog_io_typeclass.m"
    {
#line 117 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__parse_class_methods_4_p_0(parse_tree__prog_io_typeclass__ModuleName_8, parse_tree__prog_io_typeclass__VarSet_9, parse_tree__prog_io_typeclass__MethodsTerm_11, &parse_tree__prog_io_typeclass__MaybeClassMethods_16);
    }
#line 119 "prog_io_typeclass.m"
    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15)) == (MR_mktag((MR_Integer) 1)));
#line 119 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 119 "prog_io_typeclass.m"
      {
#line 119 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15, (MR_Integer) 0)));
#line 120 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeClassMethods_16)) == (MR_mktag((MR_Integer) 1)));
#line 120 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 120 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ClassMethods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeClassMethods_16, (MR_Integer) 0)));
#line 119 "prog_io_typeclass.m"
      }
#line 118 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 122 "prog_io_typeclass.m"
      {
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_19;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__ItemTypeClassInfo_20;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 122 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_32_32;
#line 122 "prog_io_typeclass.m"
        MR_Integer parse_tree__prog_io_typeclass__V_33_33;
#line 123 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_30_30;
#line 123 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_31_31;

#line 122 "prog_io_typeclass.m"
        {
#line 122 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_9, &parse_tree__prog_io_typeclass__TVarSet_19);
        }
#line 124 "prog_io_typeclass.m"
        {
#line 124 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 124 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ClassMethods_18));
#line 124 "prog_io_typeclass.m"
        }
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 0)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 1)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 2)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 3)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 4)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 5)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 6)));
#line 123 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo0_17, (MR_Integer) 7)));
#line 123 "prog_io_typeclass.m"
        {
#line 123 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__ItemTypeClassInfo_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_26_26));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__V_27_27));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 3) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 4) = ((MR_Box) (parse_tree__prog_io_typeclass__V_23_23));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 5) = ((MR_Box) (parse_tree__prog_io_typeclass__TVarSet_19));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 6) = ((MR_Box) (parse_tree__prog_io_typeclass__V_32_32));
#line 123 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ItemTypeClassInfo_20, 7) = ((MR_Box) (parse_tree__prog_io_typeclass__V_33_33));
#line 123 "prog_io_typeclass.m"
        }
#line 126 "prog_io_typeclass.m"
        {
#line 126 "prog_io_typeclass.m"
          MR_Word base;
#line 126 "prog_io_typeclass.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_14 = base;
#line 126 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClassInfo_20));
#line 126 "prog_io_typeclass.m"
        }
#line 122 "prog_io_typeclass.m"
      }
#line 118 "prog_io_typeclass.m"
    else
#line 129 "prog_io_typeclass.m"
      {
#line 129 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Specs_21;
#line 129 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_24_24;
#line 129 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_25_25;

#line 128 "prog_io_typeclass.m"
        {
#line 128 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_24_24 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0, parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo0_15);
        }
#line 129 "prog_io_typeclass.m"
        {
#line 129 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_25_25 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_typeclass_scalar_common_1[0], parse_tree__prog_io_typeclass__MaybeClassMethods_16);
        }
#line 128 "prog_io_typeclass.m"
        {
#line 128 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_typeclass__V_24_24, parse_tree__prog_io_typeclass__V_25_25);
        }
#line 130 "prog_io_typeclass.m"
        {
#line 130 "prog_io_typeclass.m"
          MR_Word base;
#line 130 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_14 = base;
#line 130 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Specs_21));
#line 130 "prog_io_typeclass.m"
        }
#line 129 "prog_io_typeclass.m"
      }
#line 114 "prog_io_typeclass.m"
  }
#line 110 "prog_io_typeclass.m"
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
#line 461 "prog_io_typeclass.m"
  {
#line 461 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded;

#line 461 "prog_io_typeclass.m"
    {
#line 461 "prog_io_typeclass.m"
      parse_tree__prog_io_typeclass__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_99_108_97_115_115_95_97_110_100_95_105_110_115_116_95_99_111_110_115_116_114_97_105_110_116_115_95_95_91_49_93_95_48_4_p_0(parse_tree__prog_io_typeclass__VarSet_6, parse_tree__prog_io_typeclass__ConstraintsTerm_7, parse_tree__prog_io_typeclass__Result_8);
    }
#line 461 "prog_io_typeclass.m"
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
    }
#line 420 "prog_io_typeclass.m"
  }
#line 45 "prog_io_typeclass.m"
}

#line 38 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_instance_item_6_p_0(
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ArgTerms_9,
#line 38 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 38 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 38 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeIOM_12)
#line 38 "prog_io_typeclass.m"
{
#line 650 "prog_io_typeclass.m"
  {
#line 650 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 650 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ArgTerm_13;
#line 650 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_23_23;

#line 650 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 650 "prog_io_typeclass.m"
      {
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgTerms_9, (MR_Integer) 0)));
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgTerms_9, (MR_Integer) 1)));
#line 650 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 650 "prog_io_typeclass.m"
      }
#line 650 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 651 "prog_io_typeclass.m"
      {
#line 651 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__TVarSet_14;
#line 651 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18;
#line 652 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__NameTerm_15;
#line 652 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MethodsTerm_16;
#line 653 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_24_24;
#line 653 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_25_25;
#line 653 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 653 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 653 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 653 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_17_17;

#line 651 "prog_io_typeclass.m"
        {
#line 651 "prog_io_typeclass.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_14);
        }
#line 653 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
          {
#line 653 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 1)));
#line 653 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 2)));
#line 653 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
              {
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_24_24, (MR_Integer) 0)));
#line 653 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_25_25, (MR_String) "where") == 0);
#line 653 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 653 "prog_io_typeclass.m"
                  {
#line 654 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 654 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 654 "prog_io_typeclass.m"
                      {
#line 654 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__NameTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, (MR_Integer) 0)));
#line 654 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, (MR_Integer) 1)));
#line 654 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 654 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 654 "prog_io_typeclass.m"
                          {
#line 654 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__MethodsTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_27_27, (MR_Integer) 0)));
#line 654 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_27_27, (MR_Integer) 1)));
#line 654 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "prog_io_typeclass.m"
                          }
#line 654 "prog_io_typeclass.m"
                      }
#line 653 "prog_io_typeclass.m"
                  }
#line 653 "prog_io_typeclass.m"
              }
#line 653 "prog_io_typeclass.m"
          }
#line 652 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 656 "prog_io_typeclass.m"
          {
#line 656 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_non_empty_instance_8_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__NameTerm_15, parse_tree__prog_io_typeclass__MethodsTerm_16, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18);
          }
#line 652 "prog_io_typeclass.m"
        else
#line 659 "prog_io_typeclass.m"
          {
#line 659 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_instance_name_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__TVarSet_14, parse_tree__prog_io_typeclass__ArgTerm_13, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18);
          }
#line 665 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18)) == (MR_mktag((MR_Integer) 0))))
#line 667 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18;
#line 665 "prog_io_typeclass.m"
        else
#line 663 "prog_io_typeclass.m"
          {
#line 663 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemInstanceInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemInstanceInfo_18, (MR_Integer) 0)));
#line 663 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;
#line 663 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_30_30;

#line 664 "prog_io_typeclass.m"
            {
#line 664 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 664 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_30_30, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemInstanceInfo_19));
#line 664 "prog_io_typeclass.m"
            }
#line 664 "prog_io_typeclass.m"
            {
#line 664 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 664 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_30_30));
#line 664 "prog_io_typeclass.m"
            }
#line 664 "prog_io_typeclass.m"
            {
#line 664 "prog_io_typeclass.m"
              MR_Word base;
#line 664 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeIOM_12 = base;
#line 664 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 664 "prog_io_typeclass.m"
            }
#line 663 "prog_io_typeclass.m"
          }
#line 651 "prog_io_typeclass.m"
      }
#line 650 "prog_io_typeclass.m"
    else
#line 675 "prog_io_typeclass.m"
      {
#line 675 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Spec_22;
#line 675 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 675 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_60_60;
#line 675 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_65_65;

#line 677 "prog_io_typeclass.m"
        {
#line 677 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 677 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[81])));
#line 677 "prog_io_typeclass.m"
        }
#line 677 "prog_io_typeclass.m"
        {
#line 677 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_60_60));
#line 677 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "prog_io_typeclass.m"
        }
#line 676 "prog_io_typeclass.m"
        {
#line 676 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 676 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 676 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_59_59));
#line 676 "prog_io_typeclass.m"
        }
#line 678 "prog_io_typeclass.m"
        {
#line 678 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_22));
#line 678 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "prog_io_typeclass.m"
        }
#line 678 "prog_io_typeclass.m"
        {
#line 678 "prog_io_typeclass.m"
          MR_Word base;
#line 678 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 678 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeIOM_12 = base;
#line 678 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_65_65));
#line 678 "prog_io_typeclass.m"
        }
#line 675 "prog_io_typeclass.m"
      }
#line 650 "prog_io_typeclass.m"
  }
#line 38 "prog_io_typeclass.m"
}

#line 33 "prog_io_typeclass.m"
void MR_CALL 
parse_tree__prog_io_typeclass__parse_typeclass_item_6_p_0(
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ModuleName_7,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__VarSet_8,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__ArgTerms_9,
#line 33 "prog_io_typeclass.m"
  MR_Word parse_tree__prog_io_typeclass__Context_10,
#line 33 "prog_io_typeclass.m"
  MR_Integer parse_tree__prog_io_typeclass__SeqNum_11,
#line 33 "prog_io_typeclass.m"
  MR_Word * parse_tree__prog_io_typeclass__MaybeIOM_12)
#line 33 "prog_io_typeclass.m"
{
#line 80 "prog_io_typeclass.m"
  {
#line 80 "prog_io_typeclass.m"
    MR_bool parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 80 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__ArgTerm_13;
#line 80 "prog_io_typeclass.m"
    MR_Word parse_tree__prog_io_typeclass__V_22_22;

#line 80 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 80 "prog_io_typeclass.m"
      {
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__ArgTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgTerms_9, (MR_Integer) 0)));
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__ArgTerms_9, (MR_Integer) 1)));
#line 80 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 80 "prog_io_typeclass.m"
      }
#line 80 "prog_io_typeclass.m"
    if (parse_tree__prog_io_typeclass__succeeded)
#line 90 "prog_io_typeclass.m"
      {
#line 90 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17;
#line 81 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__NameTerm_14;
#line 81 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__MethodsTerm_15;
#line 82 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_23_23;
#line 82 "prog_io_typeclass.m"
        MR_String parse_tree__prog_io_typeclass__V_24_24;
#line 82 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_25_25;
#line 82 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_26_26;
#line 82 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_27_27;
#line 82 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_16_16;

#line 82 "prog_io_typeclass.m"
        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
          {
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 1)));
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 2)));
#line 82 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
              {
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_23_23, (MR_Integer) 0)));
#line 82 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_24_24, (MR_String) "where") == 0);
#line 82 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 82 "prog_io_typeclass.m"
                  {
#line 83 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 83 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 83 "prog_io_typeclass.m"
                      {
#line 83 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__NameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_25_25, (MR_Integer) 0)));
#line 83 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_25_25, (MR_Integer) 1)));
#line 83 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 83 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 83 "prog_io_typeclass.m"
                          {
#line 83 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__MethodsTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, (MR_Integer) 0)));
#line 83 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_26_26, (MR_Integer) 1)));
#line 83 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 83 "prog_io_typeclass.m"
                          }
#line 83 "prog_io_typeclass.m"
                      }
#line 82 "prog_io_typeclass.m"
                  }
#line 82 "prog_io_typeclass.m"
              }
#line 82 "prog_io_typeclass.m"
          }
#line 81 "prog_io_typeclass.m"
        if (parse_tree__prog_io_typeclass__succeeded)
#line 85 "prog_io_typeclass.m"
          {
#line 85 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__parse_non_empty_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__NameTerm_14, parse_tree__prog_io_typeclass__MethodsTerm_15, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17);
          }
#line 81 "prog_io_typeclass.m"
        else
#line 138 "prog_io_typeclass.m"
          {
#line 138 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__NameTerm_72;
#line 138 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ConstraintsTerm_73;
#line 139 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_76_76;
#line 139 "prog_io_typeclass.m"
            MR_String parse_tree__prog_io_typeclass__V_77_77;
#line 139 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_78_78;
#line 139 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_79_79;
#line 139 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_80_80;
#line 139 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_74_74;

#line 139 "prog_io_typeclass.m"
            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__ArgTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
              {
#line 139 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__ArgTerm_13, (MR_Integer) 2)));
#line 139 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_76_76)) == (MR_mktag((MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                  {
#line 139 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_76_76, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                    parse_tree__prog_io_typeclass__succeeded = (strcmp(parse_tree__prog_io_typeclass__V_77_77, (MR_String) "<=") == 0);
#line 139 "prog_io_typeclass.m"
                    if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                      {
#line 139 "prog_io_typeclass.m"
                        parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                        if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                          {
#line 139 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__NameTerm_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_78_78, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                            parse_tree__prog_io_typeclass__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_typeclass__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                            if (parse_tree__prog_io_typeclass__succeeded)
#line 139 "prog_io_typeclass.m"
                              {
#line 139 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__ConstraintsTerm_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_79_79, (MR_Integer) 0)));
#line 139 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_79_79, (MR_Integer) 1)));
#line 139 "prog_io_typeclass.m"
                                parse_tree__prog_io_typeclass__succeeded = (parse_tree__prog_io_typeclass__V_80_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 139 "prog_io_typeclass.m"
                              }
#line 139 "prog_io_typeclass.m"
                          }
#line 139 "prog_io_typeclass.m"
                      }
#line 139 "prog_io_typeclass.m"
                  }
#line 139 "prog_io_typeclass.m"
              }
#line 138 "prog_io_typeclass.m"
            if (parse_tree__prog_io_typeclass__succeeded)
#line 141 "prog_io_typeclass.m"
              {
#line 141 "prog_io_typeclass.m"
                parse_tree__prog_io_typeclass__parse_constrained_class_7_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__VarSet_8, parse_tree__prog_io_typeclass__NameTerm_72, parse_tree__prog_io_typeclass__ConstraintsTerm_73, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17);
              }
#line 138 "prog_io_typeclass.m"
            else
#line 144 "prog_io_typeclass.m"
              {
#line 144 "prog_io_typeclass.m"
                MR_Word parse_tree__prog_io_typeclass__TVarSet_75;

#line 144 "prog_io_typeclass.m"
                {
#line 144 "prog_io_typeclass.m"
                  mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_typeclass__VarSet_8, &parse_tree__prog_io_typeclass__TVarSet_75);
                }
#line 145 "prog_io_typeclass.m"
                {
#line 145 "prog_io_typeclass.m"
                  parse_tree__prog_io_typeclass__parse_unconstrained_class_6_p_0(parse_tree__prog_io_typeclass__ModuleName_7, parse_tree__prog_io_typeclass__TVarSet_75, parse_tree__prog_io_typeclass__ArgTerm_13, parse_tree__prog_io_typeclass__Context_10, parse_tree__prog_io_typeclass__SeqNum_11, &parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17);
                }
#line 144 "prog_io_typeclass.m"
              }
#line 138 "prog_io_typeclass.m"
          }
#line 94 "prog_io_typeclass.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17)) == (MR_mktag((MR_Integer) 0))))
#line 96 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17;
#line 94 "prog_io_typeclass.m"
        else
#line 92 "prog_io_typeclass.m"
          {
#line 92 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__ItemTypeClassInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__MaybeItemTypeClassInfo_17, (MR_Integer) 0)));
#line 92 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_28_28;
#line 92 "prog_io_typeclass.m"
            MR_Word parse_tree__prog_io_typeclass__V_29_29;

#line 93 "prog_io_typeclass.m"
            {
#line 93 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 93 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 93 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_typeclass__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_typeclass__ItemTypeClassInfo_18));
#line 93 "prog_io_typeclass.m"
            }
#line 93 "prog_io_typeclass.m"
            {
#line 93 "prog_io_typeclass.m"
              parse_tree__prog_io_typeclass__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 93 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_29_29));
#line 93 "prog_io_typeclass.m"
            }
#line 93 "prog_io_typeclass.m"
            {
#line 93 "prog_io_typeclass.m"
              MR_Word base;
#line 93 "prog_io_typeclass.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "prog_io_typeclass.m"
              *parse_tree__prog_io_typeclass__MaybeIOM_12 = base;
#line 93 "prog_io_typeclass.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_28_28));
#line 93 "prog_io_typeclass.m"
            }
#line 92 "prog_io_typeclass.m"
          }
#line 90 "prog_io_typeclass.m"
      }
#line 80 "prog_io_typeclass.m"
    else
#line 104 "prog_io_typeclass.m"
      {
#line 104 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__Spec_21;
#line 104 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_58_58;
#line 104 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_59_59;
#line 104 "prog_io_typeclass.m"
        MR_Word parse_tree__prog_io_typeclass__V_64_64;

#line 106 "prog_io_typeclass.m"
        {
#line 106 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 106 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Context_10));
#line 106 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_typeclass_scalar_common_1[80])));
#line 106 "prog_io_typeclass.m"
        }
#line 106 "prog_io_typeclass.m"
        {
#line 106 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_59_59));
#line 106 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "prog_io_typeclass.m"
        }
#line 105 "prog_io_typeclass.m"
        {
#line 105 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 105 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 105 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_typeclass__Spec_21, 2) = ((MR_Box) (parse_tree__prog_io_typeclass__V_58_58));
#line 105 "prog_io_typeclass.m"
        }
#line 107 "prog_io_typeclass.m"
        {
#line 107 "prog_io_typeclass.m"
          parse_tree__prog_io_typeclass__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__Spec_21));
#line 107 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_typeclass__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "prog_io_typeclass.m"
        }
#line 107 "prog_io_typeclass.m"
        {
#line 107 "prog_io_typeclass.m"
          MR_Word base;
#line 107 "prog_io_typeclass.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 107 "prog_io_typeclass.m"
          *parse_tree__prog_io_typeclass__MaybeIOM_12 = base;
#line 107 "prog_io_typeclass.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_typeclass__V_64_64));
#line 107 "prog_io_typeclass.m"
        }
#line 104 "prog_io_typeclass.m"
      }
#line 80 "prog_io_typeclass.m"
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
