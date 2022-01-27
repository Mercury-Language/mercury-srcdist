/*
** Automatically generated from `prog_io_item.m'
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


/* :- module parse_tree.prog_io_item. */
/* :- implementation. */

/*
INIT mercury__parse_tree__prog_io_item__init
ENDINIT
*/

#include "parse_tree.prog_io_item.mih"


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
#include "parse_tree.prog_io_dcg.mih"
#include "parse_tree.prog_io_goal.mih"
#include "parse_tree.prog_io_iom.mih"
#include "parse_tree.prog_io_mode_defn.mih"
#include "parse_tree.prog_io_mutable.mih"
#include "parse_tree.prog_io_pragma.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_type_defn.mih"
#include "parse_tree.prog_io_typeclass.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.version.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 110 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0;

#line 113 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 116 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 119 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 122 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 125 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 128 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0;

#line 131 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 134 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_0;

#line 137 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_1;

#line 140 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_2;

#line 143 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_incl_imp_use_0[3];

#line 146 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_incl_imp_use_0[3];

#line 149 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_incl_imp_use_0[3];

#line 152 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_0;

#line 155 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_1;

#line 158 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_maybe_allow_mode_defn_0[2];

#line 161 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_maybe_allow_mode_defn_0[2];

#line 164 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_maybe_allow_mode_defn_0[2];

#line 167 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_purity_attr_0[1];

#line 170 "parse_tree.prog_io_item.c"
static const MR_NotagFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__notag_functor_desc_purity_attr_0;

#line 173 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_term_1term__type_ctor_info_generic_0;

#line 176 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_0[2];

#line 179 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_0;

#line 182 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_1[2];

#line 185 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_1;

#line 188 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_0[1];

#line 191 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_1[1];

#line 194 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_quant_constr_attr_0[2];

#line 197 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_quant_constr_attr_0[2];

#line 200 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quant_constr_attr_0[2];

#line 203 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_0;

#line 206 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_1;

#line 209 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_quantifier_type_0[2];

#line 212 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_quantifier_type_0[2];

#line 215 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quantifier_type_0[2];

#line 218 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____incl_imp_use_0_0_10001(
#line 221 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 223 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 226 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____incl_imp_use_0_0_10001(
#line 229 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 231 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 233 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 236 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0_10001(
#line 239 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 241 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 244 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0_10001(
#line 247 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 249 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 251 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 254 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____purity_attr_0_0_10001(
#line 257 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 259 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 262 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____purity_attr_0_0_10001(
#line 265 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 267 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 269 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 272 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quant_constr_attr_0_0_10001(
#line 275 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 277 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 280 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quant_constr_attr_0_0_10001(
#line 283 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 285 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 287 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 290 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quantifier_type_0_0_10001(
#line 293 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 295 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2);

#line 298 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quantifier_type_0_0_10001(
#line 301 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 303 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 305 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3);

#line 1749 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1749 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1749 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_14,
#line 1749 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16);

#line 462 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 462 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23,
#line 462 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16);

#line 1617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1617__1_2_p_0(
#line 1617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1617 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39);

#line 845 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__845__1_2_p_0(
#line 845 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_57,
#line 845 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_58);

#line 390 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quantifier_type_0_0(
#line 390 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 390 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quantifier_type_0_0(
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 394 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quant_constr_attr_0_0(
#line 394 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 394 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quant_constr_attr_0_0(
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 387 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____purity_attr_0_0(
#line 387 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 387 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____purity_attr_0_0(
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 639 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0(
#line 639 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 639 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0(
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 547 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____incl_imp_use_0_0(
#line 547 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3);

#line 547 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____incl_imp_use_0_0(
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2);

#line 1962 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1962 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1962 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4);

#line 1948 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1948 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1);

#line 1927 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1927 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8);

#line 1916 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1916 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6);

#line 1893 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3);

#line 1860 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1860 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1860 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1860 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6);

#line 1831 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1831 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1831 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1831 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1831 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8);

#line 1802 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1802 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1802 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1802 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1802 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8);

#line 1709 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_promise_item_5_p_0(
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_7,
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_8,
#line 1709 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 1709 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10);

#line 1632 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_loop_18_p_0(
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Specs_6,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_8,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_10,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_12,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_14,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__15_15,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__16_16,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__17_17,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__18_18);

#line 1617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
#line 1617 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1617 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1617 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1572 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_8,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ContextPieces_9,
#line 1572 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10);

#line 1534 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_from_attrs_3_p_0(
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1534 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 1480 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1480 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1480 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1480 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1463 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_21,
#line 1463 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_22,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_23,
#line 1463 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_24);

#line 1419 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1419 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1419 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1419 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1403 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_19,
#line 1403 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_20,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_21,
#line 1403 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_22);

#line 1344 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_13,
#line 1344 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_14,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_15,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_16,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_17,
#line 1344 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_18);

#line 1311 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_11,
#line 1311 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_12,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_13,
#line 1311 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);

#line 1302 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1302 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1302 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2);

#line 1284 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1284 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1284 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1284 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1284 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4);

#line 1271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 1240 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 1240 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 1240 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 1240 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6);

#line 1217 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 1217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 1217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1217 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6);

#line 1209 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 1209 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 1209 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1209 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3);

#line 1133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_23,
#line 1133 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_24,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_25,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_26);

#line 1049 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_9_p_0(
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_13,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1049 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_16,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_17,
#line 1049 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_18);

#line 945 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_13,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_15,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_16,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_17,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_18,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_19,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 945 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_22,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_23,
#line 945 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_24);

#line 863 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 863 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 863 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_17,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_18,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_19,
#line 863 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20);

#line 845 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 845 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 845 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 845 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 808 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet0_9,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_10,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_11,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 808 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 808 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);

#line 740 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_version_numbers_marker_6_p_0(
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 740 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_8,
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 740 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 740 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12);

#line 678 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_external_item_6_p_0(
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 678 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 678 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12);

#line 643 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_defn_or_decl_item_8_p_0(
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 643 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__AllowModeDefn_14,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_15,
#line 643 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16);

#line 630 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_use_4_p_0(
#line 630 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 630 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 630 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 630 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8);

#line 623 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_import_4_p_0(
#line 623 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 623 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 623 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 623 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8);

#line 617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_include_4_p_0(
#line 617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 617 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 617 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Incl_8);

#line 590 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_5(
#line 590 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 590 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 590 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 576 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_4(
#line 576 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 576 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 576 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 583 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_3(
#line 583 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 583 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 583 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 560 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_2(
#line 560 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 560 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 560 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 565 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_1(
#line 565 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 565 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 565 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2);

#line 552 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0(
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 552 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_13,
#line 552 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_14,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__IIU_15,
#line 552 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16);

#line 527 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_section_marker_6_p_0(
#line 527 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_7,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_8,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_9,
#line 527 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_10,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Section_11,
#line 527 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12);

#line 506 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_end_module_marker_4_p_0(
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_6,
#line 506 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_7,
#line 506 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_8);

#line 487 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_marker_4_p_0(
#line 487 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 487 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_6,
#line 487 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_7,
#line 487 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_8);

#line 441 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_purity_attr_10_p_0(
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 441 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 441 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Purity_17,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_25,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_26,
#line 441 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20);

#line 420 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_constraint_attr_10_p_0(
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 420 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 420 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_17,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27,
#line 420 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20);

#line 398 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_quant_attr_10_p_0(
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 398 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 398 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_17,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27,
#line 398 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20);

#line 158 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_decl_item_or_marker_7_p_0(
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 158 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 158 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14);

#line 147 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__decl_functor_is_not_valid_2_f_0(
#line 147 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 147 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_5);

#line 137 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__decl_is_not_an_atom_2_f_0(
#line 137 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 137 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5);


static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[263][2];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[33][1];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[2][6];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[3][7];

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[3][5];


#line 311 "prog_io_item.m"
/* sealed */ struct parse_tree__prog_io_item__vector_common_type_7_0_s {
#line 311 "prog_io_item.m"
  const MR_String parse_tree__prog_io_item__vector_common_type_7_0__vct_7_f_0;
#line 311 "prog_io_item.m"
};

static /* final */ const struct parse_tree__prog_io_item__vector_common_type_7_0_s parse_tree__prog_io_item_vector_common_7[32];



static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_1[263][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are allowed in class interfaces."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only pred, func and mode declarations"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid declaration."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not a valid declaration type."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not allowed on mode declarations."))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: purity annotations"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a list of variables."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "only to denote the quantification"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear in declarations"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a constraint or a conjunction of constraints."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear in declarations only to introduce"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in front of a predicate or function declaration."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may appear only as an annotation"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a module name."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "module"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "end_module"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[42])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have no arguments."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a list of one or more module names."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of a predicate or function."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or the declaration of one mode"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be either the definition of a mode,"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration requires arity."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "low_level_backend"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "high_level_backend"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[80])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "optionally preceded by either"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument specifying a procedure,"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "version_numbers"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid module name in"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[92])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid version number in"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[92])))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "from item ids to timestamps."))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "a module name, and a tuple containing maps"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a version number,"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have exactly three arguments,"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and determinism both specified."))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_inst"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "with_type"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specified without argument modes."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not specified."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: arguments have modes but"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst variables in"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints on"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in return type of"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "expected in"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[139])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "="))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function result does not."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function arguments have modes,"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but function arguments do not."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: function result has mode,"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a function whose name is a variable."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[132])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In function"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[161])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In predicate"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[161])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of function mode declaration."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in return mode"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are not allowed."))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: duplicate purity annotations"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "some"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in first argument of"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "all"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[179])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should be a goal."))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "promise"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[190])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[192])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotation:"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[195])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid inst in"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(e.g. \":- module \'Foo\'.\")."))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[10])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be quoted using single quotes"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[202])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: module names starting with capital letters"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[204])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[132])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 210 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the keyword"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the symbol"))
  },
  /* row 213 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 214 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: an"))
  },
  /* row 216 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 217 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 218 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 219 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 220 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In equation head:"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause head:"))
  },
  /* row 224 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 225 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "should have just one argument,"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which should specify the types and maybe the modes"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the arguments of a"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 232 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 233 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: syntax error in arguments of"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration at"))
  },
  /* row 240 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 241 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 242 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 243 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: inconsistent constraints"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables in function declaration:"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The argument without a mode is the"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The arguments without modes are the"))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: some but not all arguments have modes."))
  },
  /* row 249 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 250 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 251 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on inst variables"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in predicate mode declaration:"))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in function mode declaration:"))
  },
  /* row 256 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "function mode declaration at"))
  },
  /* row 258 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 259 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: invalid determinism category"))
  },
  /* row 261 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[30])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 262 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[32])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_1[7])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[0])),
    ((MR_Box) (parse_tree__prog_io_item__parse_clause_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[1])),
    ((MR_Box) (parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_io_item_scalar_common_6[2])),
    ((MR_Box) (parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_3[33][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "true"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[14])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[46])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[50])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[68])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[74])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[90])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[94])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 24))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[96])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[110])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[118])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[122])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[127])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[143])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[148])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[152])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[156])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[200])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[160])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[166])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[173])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[177])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[193])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[206])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[22])))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_5[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0))
  },
};

static /* final */ const MR_Box parse_tree__prog_io_item_scalar_common_6[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};


static /* final */ const struct parse_tree__prog_io_item__vector_common_type_7_0_s parse_tree__prog_io_item_vector_common_7[32] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     NULL },
  /* row 2 */   {     (MR_String) "semipure" },
  /* row 3 */   {     NULL },
  /* row 4 */   {     (MR_String) "impure" },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     (MR_String) "func" },
  /* row 9 */   {     (MR_String) "=>" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     NULL },
  /* row 12 */   {     NULL },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     (MR_String) "some" },
  /* row 17 */   {     (MR_String) "mode" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) "all" },
  /* row 27 */   {     (MR_String) "<=" },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "pred" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2854 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__varset__pti_varset_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2862 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2870 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__parse_tree__maybe_error__pti_maybe1_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2878 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2886 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2894 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__prog_io_item__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 2903 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 2911 "parse_tree.prog_io_item.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__prog_io_item__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2919 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_0 = {
  (MR_String) "iiu_include_module",
  (MR_Integer) 0
};

#line 2925 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_1 = {
  (MR_String) "iiu_import_module",
  (MR_Integer) 1
};

#line 2931 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_2 = {
  (MR_String) "iiu_use_module",
  (MR_Integer) 2
};

#line 2937 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_incl_imp_use_0[3] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_2
};

#line 2944 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_incl_imp_use_0[3] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_incl_imp_use_0_2
};

#line 2951 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_incl_imp_use_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2958 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_incl_imp_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_item____Unify____incl_imp_use_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____incl_imp_use_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "incl_imp_use",
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_incl_imp_use_0 },
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_incl_imp_use_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_incl_imp_use_0
};

#line 2975 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_0 = {
  (MR_String) "allow_mode_decl_and_defn",
  (MR_Integer) 0
};

#line 2981 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_1 = {
  (MR_String) "allow_mode_decl_only",
  (MR_Integer) 1
};

#line 2987 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_maybe_allow_mode_defn_0[2] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_1
};

#line 2993 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_maybe_allow_mode_defn_0[2] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_maybe_allow_mode_defn_0_1
};

#line 2999 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_maybe_allow_mode_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3005 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_maybe_allow_mode_defn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "maybe_allow_mode_defn",
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_maybe_allow_mode_defn_0 },
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_maybe_allow_mode_defn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_maybe_allow_mode_defn_0
};

#line 3022 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_purity_attr_0[1] = {
  (MR_Integer) 0
};

#line 3027 "parse_tree.prog_io_item.c"
static const MR_NotagFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__notag_functor_desc_purity_attr_0 = {
  (MR_String) "purity_attr",
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0,
  NULL
};

#line 3034 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__prog_io_item____Unify____purity_attr_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____purity_attr_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "purity_attr",
  {     &parse_tree__prog_io_item__parse_tree__prog_io_item__notag_functor_desc_purity_attr_0 },
  {     &parse_tree__prog_io_item__parse_tree__prog_io_item__notag_functor_desc_purity_attr_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_purity_attr_0
};

#line 3051 "parse_tree.prog_io_item.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__prog_io_item__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 3059 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_term_1term__type_ctor_info_generic_0
};

#line 3065 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_0 = {
  (MR_String) "qca_quant_vars",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_0,
  NULL,
  NULL,
  NULL
};

#line 3080 "parse_tree.prog_io_item.c"
static const MR_PseudoTypeInfo parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quantifier_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_io_item__term__ti_term_1term__type_ctor_info_generic_0
};

#line 3086 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_1 = {
  (MR_String) "qca_constraint",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__prog_io_item__parse_tree__prog_io_item__field_types_quant_constr_attr_0_1,
  NULL,
  NULL,
  NULL
};

#line 3101 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_0[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_0
};

#line 3106 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_1[1] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_1
};

#line 3111 "parse_tree.prog_io_item.c"
static const MR_DuPtagLayout parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_quant_constr_attr_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__prog_io_item__parse_tree__prog_io_item__du_stag_ordered_quant_constr_attr_0_1
  }
};

#line 3125 "parse_tree.prog_io_item.c"
static const MR_DuFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_quant_constr_attr_0[2] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_1,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__du_functor_desc_quant_constr_attr_0_0
};

#line 3131 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quant_constr_attr_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3137 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__prog_io_item____Unify____quant_constr_attr_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____quant_constr_attr_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "quant_constr_attr",
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__du_name_ordered_quant_constr_attr_0 },
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__du_ptag_ordered_quant_constr_attr_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quant_constr_attr_0
};

#line 3154 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_0 = {
  (MR_String) "quant_type_exist",
  (MR_Integer) 0
};

#line 3160 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDesc parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_1 = {
  (MR_String) "quant_type_univ",
  (MR_Integer) 1
};

#line 3166 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_1
};

#line 3172 "parse_tree.prog_io_item.c"
static const MR_EnumFunctorDescPtr parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_quantifier_type_0[2] = {
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_0,
  &parse_tree__prog_io_item__parse_tree__prog_io_item__enum_functor_desc_quantifier_type_0_1
};

#line 3178 "parse_tree.prog_io_item.c"
static const MR_Integer parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quantifier_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3184 "parse_tree.prog_io_item.c"
const MR_TypeCtorInfo_Struct parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quantifier_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__prog_io_item____Unify____quantifier_type_0_0_10001)),
  ((MR_Box) (parse_tree__prog_io_item____Compare____quantifier_type_0_0_10001)),
  (MR_String) "parse_tree.prog_io_item",
  (MR_String) "quantifier_type",
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_name_ordered_quantifier_type_0 },
  {     parse_tree__prog_io_item__parse_tree__prog_io_item__enum_value_ordered_quantifier_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__prog_io_item__parse_tree__prog_io_item__functor_number_map_quantifier_type_0
};

#line 3201 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____incl_imp_use_0_0_10001(
#line 3204 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 3206 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 3208 "parse_tree.prog_io_item.c"
{
#line 3210 "parse_tree.prog_io_item.c"
  {
#line 3212 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 3215 "parse_tree.prog_io_item.c"
    {
#line 3217 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____incl_imp_use_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 3220 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 3222 "parse_tree.prog_io_item.c"
  }
#line 3224 "parse_tree.prog_io_item.c"
}

#line 3227 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____incl_imp_use_0_0_10001(
#line 3230 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 3232 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 3234 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 3236 "parse_tree.prog_io_item.c"
{
#line 3238 "parse_tree.prog_io_item.c"
  {
#line 3240 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 3243 "parse_tree.prog_io_item.c"
    {
#line 3245 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____incl_imp_use_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 3248 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 3250 "parse_tree.prog_io_item.c"
  }
#line 3252 "parse_tree.prog_io_item.c"
}

#line 3255 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0_10001(
#line 3258 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 3260 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 3262 "parse_tree.prog_io_item.c"
{
#line 3264 "parse_tree.prog_io_item.c"
  {
#line 3266 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 3269 "parse_tree.prog_io_item.c"
    {
#line 3271 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 3274 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 3276 "parse_tree.prog_io_item.c"
  }
#line 3278 "parse_tree.prog_io_item.c"
}

#line 3281 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0_10001(
#line 3284 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 3286 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 3288 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 3290 "parse_tree.prog_io_item.c"
{
#line 3292 "parse_tree.prog_io_item.c"
  {
#line 3294 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 3297 "parse_tree.prog_io_item.c"
    {
#line 3299 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 3302 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 3304 "parse_tree.prog_io_item.c"
  }
#line 3306 "parse_tree.prog_io_item.c"
}

#line 3309 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____purity_attr_0_0_10001(
#line 3312 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 3314 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 3316 "parse_tree.prog_io_item.c"
{
#line 3318 "parse_tree.prog_io_item.c"
  {
#line 3320 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 3323 "parse_tree.prog_io_item.c"
    {
#line 3325 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____purity_attr_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 3328 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 3330 "parse_tree.prog_io_item.c"
  }
#line 3332 "parse_tree.prog_io_item.c"
}

#line 3335 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____purity_attr_0_0_10001(
#line 3338 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 3340 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 3342 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 3344 "parse_tree.prog_io_item.c"
{
#line 3346 "parse_tree.prog_io_item.c"
  {
#line 3348 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 3351 "parse_tree.prog_io_item.c"
    {
#line 3353 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____purity_attr_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 3356 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 3358 "parse_tree.prog_io_item.c"
  }
#line 3360 "parse_tree.prog_io_item.c"
}

#line 3363 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quant_constr_attr_0_0_10001(
#line 3366 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 3368 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 3370 "parse_tree.prog_io_item.c"
{
#line 3372 "parse_tree.prog_io_item.c"
  {
#line 3374 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 3377 "parse_tree.prog_io_item.c"
    {
#line 3379 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____quant_constr_attr_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 3382 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 3384 "parse_tree.prog_io_item.c"
  }
#line 3386 "parse_tree.prog_io_item.c"
}

#line 3389 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quant_constr_attr_0_0_10001(
#line 3392 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 3394 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 3396 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 3398 "parse_tree.prog_io_item.c"
{
#line 3400 "parse_tree.prog_io_item.c"
  {
#line 3402 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 3405 "parse_tree.prog_io_item.c"
    {
#line 3407 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____quant_constr_attr_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 3410 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 3412 "parse_tree.prog_io_item.c"
  }
#line 3414 "parse_tree.prog_io_item.c"
}

#line 3417 "parse_tree.prog_io_item.c"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quantifier_type_0_0_10001(
#line 3420 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 3422 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2)
#line 3424 "parse_tree.prog_io_item.c"
{
#line 3426 "parse_tree.prog_io_item.c"
  {
#line 3428 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 3431 "parse_tree.prog_io_item.c"
    {
#line 3433 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item____Unify____quantifier_type_0_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2));
    }
#line 3436 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 3438 "parse_tree.prog_io_item.c"
  }
#line 3440 "parse_tree.prog_io_item.c"
}

#line 3443 "parse_tree.prog_io_item.c"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quantifier_type_0_0_10001(
#line 3446 "parse_tree.prog_io_item.c"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_1,
#line 3448 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_2,
#line 3450 "parse_tree.prog_io_item.c"
  MR_Box parse_tree__prog_io_item__wrapper_arg_3)
#line 3452 "parse_tree.prog_io_item.c"
{
#line 3454 "parse_tree.prog_io_item.c"
  {
#line 3456 "parse_tree.prog_io_item.c"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__1_1;

#line 3459 "parse_tree.prog_io_item.c"
    {
#line 3461 "parse_tree.prog_io_item.c"
      parse_tree__prog_io_item____Compare____quantifier_type_0_0(&parse_tree__prog_io_item__conv0_HeadVar__1_1, ((MR_Word) parse_tree__prog_io_item__wrapper_arg_2), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_3));
    }
#line 3464 "parse_tree.prog_io_item.c"
    *parse_tree__prog_io_item__wrapper_arg_1 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__1_1));
#line 3466 "parse_tree.prog_io_item.c"
  }
#line 3468 "parse_tree.prog_io_item.c"
}

#line 1749 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1749 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 1749 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 1749 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PromiseType_14,
#line 1749 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16)
#line 1749 "prog_io_item.m"
{
#line 1755 "prog_io_item.m"
  {
#line 1755 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 1755 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_17;
#line 1755 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;

#line 1755 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1755 "prog_io_item.m"
      {
#line 1755 "prog_io_item.m"
        parse_tree__prog_io_item__Term_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 1755 "prog_io_item.m"
        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 1755 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1755 "prog_io_item.m"
      }
#line 1755 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1756 "prog_io_item.m"
      {
#line 1756 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ProgVarSet0_18;
#line 1756 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_19;
#line 1756 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeGoal0_20;
#line 1756 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ProgVarSet_21;

#line 1756 "prog_io_item.m"
        {
#line 1756 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_9, &parse_tree__prog_io_item__ProgVarSet0_18);
        }
#line 1757 "prog_io_item.m"
        {
#line 1757 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_19 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
#line 1758 "prog_io_item.m"
        {
#line 1758 "prog_io_item.m"
          parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_17, parse_tree__prog_io_item__ContextPieces_19, &parse_tree__prog_io_item__MaybeGoal0_20, parse_tree__prog_io_item__ProgVarSet0_18, &parse_tree__prog_io_item__ProgVarSet_21);
        }
#line 1779 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_20)) == (MR_mktag((MR_Integer) 0))))
#line 1781 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_20;
#line 1779 "prog_io_item.m"
        else
#line 1760 "prog_io_item.m"
          {
#line 1760 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Goal_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_20, (MR_Integer) 0)));
#line 1760 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPromise_24;
#line 1760 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_25;
#line 1760 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;

#line 1775 "prog_io_item.m"
            {
#line 1775 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPromise_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 0) = ((MR_Box) (parse_tree__prog_io_item__PromiseType_14));
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_22));
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_21));
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1775 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_24, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 1775 "prog_io_item.m"
            }
#line 1777 "prog_io_item.m"
            {
#line 1777 "prog_io_item.m"
              parse_tree__prog_io_item__Item_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1777 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_25, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_24));
#line 1777 "prog_io_item.m"
            }
#line 1778 "prog_io_item.m"
            {
#line 1778 "prog_io_item.m"
              parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1778 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_25));
#line 1778 "prog_io_item.m"
            }
#line 1778 "prog_io_item.m"
            {
#line 1778 "prog_io_item.m"
              MR_Word base;
#line 1778 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 1778 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1778 "prog_io_item.m"
            }
#line 1760 "prog_io_item.m"
          }
#line 1756 "prog_io_item.m"
      }
#line 1755 "prog_io_item.m"
    else
#line 1786 "prog_io_item.m"
      {
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_27;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_28;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1786 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 1784 "prog_io_item.m"
        {
#line 1784 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_10));
#line 1784 "prog_io_item.m"
        }
#line 1784 "prog_io_item.m"
        {
#line 1784 "prog_io_item.m"
          parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[190])));
#line 1784 "prog_io_item.m"
        }
#line 1784 "prog_io_item.m"
        {
#line 1784 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[221])));
#line 1784 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_27, 1) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1784 "prog_io_item.m"
        }
#line 1788 "prog_io_item.m"
        {
#line 1788 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_27));
#line 1788 "prog_io_item.m"
        }
#line 1788 "prog_io_item.m"
        {
#line 1788 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1788 "prog_io_item.m"
        }
#line 1788 "prog_io_item.m"
        {
#line 1788 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1788 "prog_io_item.m"
        }
#line 1788 "prog_io_item.m"
        {
#line 1788 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 1788 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1788 "prog_io_item.m"
        }
#line 1787 "prog_io_item.m"
        {
#line 1787 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1787 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_28, 2) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 1787 "prog_io_item.m"
        }
#line 1789 "prog_io_item.m"
        {
#line 1789 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_28));
#line 1789 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1789 "prog_io_item.m"
        }
#line 1789 "prog_io_item.m"
        {
#line 1789 "prog_io_item.m"
          MR_Word base;
#line 1789 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1789 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 1789 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1789 "prog_io_item.m"
        }
#line 1786 "prog_io_item.m"
      }
#line 1755 "prog_io_item.m"
  }
#line 1749 "prog_io_item.m"
}

#line 462 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_11,
#line 462 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22,
#line 462 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23,
#line 462 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16)
#line 462 "prog_io_item.m"
{
#line 469 "prog_io_item.m"
  {
#line 469 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_11)) == (MR_mktag((MR_Integer) 0)));
#line 469 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__Functor_17;
#line 469 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgTerms_18;
#line 469 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__FunctorContext_19;
#line 469 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_24_24;

#line 469 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 469 "prog_io_item.m"
      {
#line 469 "prog_io_item.m"
        parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 0)));
#line 469 "prog_io_item.m"
        parse_tree__prog_io_item__ArgTerms_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 1)));
#line 469 "prog_io_item.m"
        parse_tree__prog_io_item__FunctorContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_11, (MR_Integer) 2)));
#line 469 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 469 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 469 "prog_io_item.m"
          parse_tree__prog_io_item__Functor_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_24_24, (MR_Integer) 0)));
#line 469 "prog_io_item.m"
      }
#line 469 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 470 "prog_io_item.m"
      {
#line 470 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeIOMPrime_20;
#line 311 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__slot_0;
#line 311 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__str_1;

#line 311 "prog_io_item.m"
        /* hashed string jump switch */
#line 311 "prog_io_item.m"
        /* compute the hash value of the input string */
#line 311 "prog_io_item.m"
        parse_tree__prog_io_item__slot_0 = ((MR_hash_string6(parse_tree__prog_io_item__Functor_17)) & (MR_Integer) 31);
#line 311 "prog_io_item.m"
        /* no collisions; no hash chain loop */
#line 311 "prog_io_item.m"
        /* lookup the string for this hash slot */
#line 311 "prog_io_item.m"
        parse_tree__prog_io_item__str_1 = ((&parse_tree__prog_io_item_vector_common_7[0 + parse_tree__prog_io_item__slot_0]))->parse_tree__prog_io_item__vector_common_type_7_0__vct_7_f_0;
#line 311 "prog_io_item.m"
        /* did we find a match? */
#line 311 "prog_io_item.m"
        if ((((parse_tree__prog_io_item__str_1 != NULL)) && ((strcmp(parse_tree__prog_io_item__str_1, parse_tree__prog_io_item__Functor_17) == 0))))
#line 311 "prog_io_item.m"
          {
#line 311 "prog_io_item.m"
            /* we found a match; dispatch to the corresponding code */
#line 311 "prog_io_item.m"
#line 311 "prog_io_item.m"
            switch (parse_tree__prog_io_item__slot_0) {
#line 311 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 311 "prog_io_item.m"
              case (MR_Integer) 2:
#line 335 "prog_io_item.m"
                {
#line 335 "prog_io_item.m"
                  /* case "semipure" */
#line 336 "prog_io_item.m"
                  {
#line 336 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_purity_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 335 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 335 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 4:
#line 335 "prog_io_item.m"
                {
#line 335 "prog_io_item.m"
                  /* case "impure" */
#line 336 "prog_io_item.m"
                  {
#line 336 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_purity_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 2, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 335 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 335 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 8:
#line 314 "prog_io_item.m"
                {
#line 314 "prog_io_item.m"
                  /* case "func" */
#line 314 "prog_io_item.m"
                  {
#line 314 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_47_47;
#line 314 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_48_48;

#line 317 "prog_io_item.m"
                    {
#line 317 "prog_io_item.m"
                      parse_tree__prog_io_item__V_47_47 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22);
                    }
#line 317 "prog_io_item.m"
                    {
#line 317 "prog_io_item.m"
                      parse_tree__prog_io_item__V_48_48 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23);
                    }
#line 315 "prog_io_item.m"
                    {
#line 315 "prog_io_item.m"
                      parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__V_47_47, parse_tree__prog_io_item__V_48_48, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                    }
#line 314 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 314 "prog_io_item.m"
                  }
#line 314 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 9:
#line 328 "prog_io_item.m"
                {
#line 328 "prog_io_item.m"
                  /* case "=>" */
#line 329 "prog_io_item.m"
                  {
#line 329 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_constraint_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 328 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 328 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 16:
#line 321 "prog_io_item.m"
                {
#line 321 "prog_io_item.m"
                  /* case "some" */
#line 322 "prog_io_item.m"
                  {
#line 322 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_quant_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 321 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 321 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 17:
#line 292 "prog_io_item.m"
                {
#line 292 "prog_io_item.m"
                  /* case "mode" */
#line 292 "prog_io_item.m"
                  {
#line 292 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__MaybeIOM0_39;
#line 292 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_50_50;

#line 295 "prog_io_item.m"
                    {
#line 295 "prog_io_item.m"
                      parse_tree__prog_io_item__V_50_50 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23);
                    }
#line 293 "prog_io_item.m"
                    {
#line 293 "prog_io_item.m"
                      parse_tree__prog_io_item__parse_mode_defn_or_decl_item_8_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__V_50_50, &parse_tree__prog_io_item__MaybeIOM0_39);
                    }
#line 296 "prog_io_item.m"
                    {
#line 296 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22);
                    }
#line 296 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 297 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeIOMPrime_20 = parse_tree__prog_io_item__MaybeIOM0_39;
#line 296 "prog_io_item.m"
                    else
#line 300 "prog_io_item.m"
                      {
#line 300 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_41;
#line 300 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_61_61;
#line 300 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_62_62;

#line 302 "prog_io_item.m"
                        {
#line 302 "prog_io_item.m"
                          parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctorContext_19));
#line 302 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[262])));
#line 302 "prog_io_item.m"
                        }
#line 302 "prog_io_item.m"
                        {
#line 302 "prog_io_item.m"
                          parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 302 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 302 "prog_io_item.m"
                        }
#line 301 "prog_io_item.m"
                        {
#line 301 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 301 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 301 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_41, 2) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 301 "prog_io_item.m"
                        }
#line 306 "prog_io_item.m"
                        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeIOM0_39)) == (MR_mktag((MR_Integer) 0))))
#line 307 "prog_io_item.m"
                          {
#line 307 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Specs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeIOM0_39, (MR_Integer) 0)));
#line 307 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_67_67;

#line 308 "prog_io_item.m"
                            {
#line 308 "prog_io_item.m"
                              parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 308 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__Specs0_43));
#line 308 "prog_io_item.m"
                            }
#line 308 "prog_io_item.m"
                            {
#line 308 "prog_io_item.m"
                              parse_tree__prog_io_item__MaybeIOMPrime_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 308 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeIOMPrime_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 308 "prog_io_item.m"
                            }
#line 307 "prog_io_item.m"
                          }
#line 306 "prog_io_item.m"
                        else
#line 304 "prog_io_item.m"
                          {
#line 304 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_68_68;

#line 305 "prog_io_item.m"
                            {
#line 305 "prog_io_item.m"
                              parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_41));
#line 305 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "prog_io_item.m"
                            }
#line 305 "prog_io_item.m"
                            {
#line 305 "prog_io_item.m"
                              parse_tree__prog_io_item__MaybeIOMPrime_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeIOMPrime_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 305 "prog_io_item.m"
                            }
#line 304 "prog_io_item.m"
                          }
#line 300 "prog_io_item.m"
                      }
#line 292 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 292 "prog_io_item.m"
                  }
#line 292 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 26:
#line 321 "prog_io_item.m"
                {
#line 321 "prog_io_item.m"
                  /* case "all" */
#line 322 "prog_io_item.m"
                  {
#line 322 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_quant_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 321 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 321 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 27:
#line 328 "prog_io_item.m"
                {
#line 328 "prog_io_item.m"
                  /* case "<=" */
#line 329 "prog_io_item.m"
                  {
#line 329 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_constraint_attr_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                  }
#line 328 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 328 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
              case (MR_Integer) 31:
#line 314 "prog_io_item.m"
                {
#line 314 "prog_io_item.m"
                  /* case "pred" */
#line 314 "prog_io_item.m"
                  {
#line 314 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_77_77;
#line 314 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;

#line 317 "prog_io_item.m"
                    {
#line 317 "prog_io_item.m"
                      parse_tree__prog_io_item__V_77_77 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_22);
                    }
#line 317 "prog_io_item.m"
                    {
#line 317 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_23);
                    }
#line 315 "prog_io_item.m"
                    {
#line 315 "prog_io_item.m"
                      parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Functor_17, parse_tree__prog_io_item__ArgTerms_18, parse_tree__prog_io_item__FunctorContext_19, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__V_77_77, parse_tree__prog_io_item__V_78_78, &parse_tree__prog_io_item__MaybeIOMPrime_20);
                    }
#line 314 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 314 "prog_io_item.m"
                  }
#line 314 "prog_io_item.m"
                }
#line 311 "prog_io_item.m"
                break;
#line 311 "prog_io_item.m"
            }
#line 311 "prog_io_item.m"
            /* jump out of search loop */
#line 311 "prog_io_item.m"
            goto label_0;
#line 311 "prog_io_item.m"
          }
#line 311 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 311 "prog_io_item.m"
      label_0:;
#line 470 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 475 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = parse_tree__prog_io_item__MaybeIOMPrime_20;
#line 470 "prog_io_item.m"
        else
#line 477 "prog_io_item.m"
          {
#line 477 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_21;
#line 477 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 477 "prog_io_item.m"
            {
#line 477 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_21 = parse_tree__prog_io_item__decl_functor_is_not_valid_2_f_0(parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__Functor_17);
            }
#line 478 "prog_io_item.m"
            {
#line 478 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_21));
#line 478 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "prog_io_item.m"
            }
#line 478 "prog_io_item.m"
            {
#line 478 "prog_io_item.m"
              MR_Word base;
#line 478 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 478 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 478 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 478 "prog_io_item.m"
            }
#line 477 "prog_io_item.m"
          }
#line 470 "prog_io_item.m"
      }
#line 469 "prog_io_item.m"
    else
#line 481 "prog_io_item.m"
      {
#line 481 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 481 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_29;

#line 481 "prog_io_item.m"
        {
#line 481 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_29 = parse_tree__prog_io_item__decl_is_not_an_atom_2_f_0(parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__Term_11);
        }
#line 482 "prog_io_item.m"
        {
#line 482 "prog_io_item.m"
          parse_tree__prog_io_item__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_27_27, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_29));
#line 482 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "prog_io_item.m"
        }
#line 482 "prog_io_item.m"
        {
#line 482 "prog_io_item.m"
          MR_Word base;
#line 482 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 482 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 482 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_27_27));
#line 482 "prog_io_item.m"
        }
#line 481 "prog_io_item.m"
      }
#line 469 "prog_io_item.m"
  }
#line 462 "prog_io_item.m"
}

#line 1617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1617__1_2_p_0(
#line 1617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_38,
#line 1617 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_39)
#line 1617 "prog_io_item.m"
{
#line 1617 "prog_io_item.m"
  {
#line 1617 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1617 "prog_io_item.m"
    {
#line 1617 "prog_io_item.m"
      mercury__term__coerce_var_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__HeadVar__1_38, parse_tree__prog_io_item__HeadVar__2_39);
    }
#line 1617 "prog_io_item.m"
  }
#line 1617 "prog_io_item.m"
}

#line 845 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__845__1_2_p_0(
#line 845 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_57,
#line 845 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_58)
#line 845 "prog_io_item.m"
{
#line 845 "prog_io_item.m"
  {
#line 845 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 845 "prog_io_item.m"
    {
#line 845 "prog_io_item.m"
      mercury__term__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__HeadVar__1_57, parse_tree__prog_io_item__HeadVar__2_58);
    }
#line 845 "prog_io_item.m"
  }
#line 845 "prog_io_item.m"
}

#line 390 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quantifier_type_0_0(
#line 390 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 390 "prog_io_item.m"
{
#line 390 "prog_io_item.m"
  {
#line 390 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 390 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 390 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 390 "prog_io_item.m"
    {
#line 390 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__Cast_HeadVar1_4, parse_tree__prog_io_item__Cast_HeadVar2_5);
    }
#line 390 "prog_io_item.m"
  }
#line 390 "prog_io_item.m"
}

#line 390 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quantifier_type_0_0(
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 390 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 390 "prog_io_item.m"
{
#line 4327 "parse_tree.prog_io_item.c"
  {
#line 4329 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__HeadVar__2_1 == parse_tree__prog_io_item__HeadVar__2_2);

#line 4332 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 4334 "parse_tree.prog_io_item.c"
  }
#line 390 "prog_io_item.m"
}

#line 394 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____quant_constr_attr_0_0(
#line 394 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 394 "prog_io_item.m"
{
#line 394 "prog_io_item.m"
  {
#line 394 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 394 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_22 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 394 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_23 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 394 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_22 == parse_tree__prog_io_item__CastY_23);
#line 394 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 4363 "parse_tree.prog_io_item.c"
      *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 0;
#line 394 "prog_io_item.m"
    else
#line 394 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 394 "prog_io_item.m"
      {
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 394 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 394 "prog_io_item.m"
          {
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_21_21;
#line 394 "prog_io_item.m"
            MR_Integer parse_tree__prog_io_item__V_32_32 = (MR_Integer) parse_tree__prog_io_item__V_29_29;
#line 394 "prog_io_item.m"
            MR_Integer parse_tree__prog_io_item__V_33_33 = (MR_Integer) parse_tree__prog_io_item__V_19_19;

#line 394 "prog_io_item.m"
            {
#line 394 "prog_io_item.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_item__V_21_21, parse_tree__prog_io_item__V_32_32, parse_tree__prog_io_item__V_33_33);
            }
#line 4396 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_21_21 == (MR_Integer) 0);
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 394 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_21_21;
#line 394 "prog_io_item.m"
            else
#line 394 "prog_io_item.m"
              {
#line 394 "prog_io_item.m"
                {
#line 394 "prog_io_item.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_28_28)), ((MR_Box) (parse_tree__prog_io_item__V_20_20)));
                }
#line 394 "prog_io_item.m"
              }
#line 394 "prog_io_item.m"
          }
#line 394 "prog_io_item.m"
        else
#line 4419 "parse_tree.prog_io_item.c"
          *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 2;
#line 394 "prog_io_item.m"
      }
#line 394 "prog_io_item.m"
    else
#line 394 "prog_io_item.m"
      {
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));

#line 394 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4434 "parse_tree.prog_io_item.c"
          *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 1;
#line 394 "prog_io_item.m"
        else
#line 394 "prog_io_item.m"
          {
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_8_8;
#line 394 "prog_io_item.m"
            MR_Integer parse_tree__prog_io_item__V_34_34 = (MR_Integer) parse_tree__prog_io_item__V_31_31;
#line 394 "prog_io_item.m"
            MR_Integer parse_tree__prog_io_item__V_35_35 = (MR_Integer) parse_tree__prog_io_item__V_6_6;

#line 394 "prog_io_item.m"
            {
#line 394 "prog_io_item.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&parse_tree__prog_io_item__V_8_8, parse_tree__prog_io_item__V_34_34, parse_tree__prog_io_item__V_35_35);
            }
#line 4456 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_8_8 == (MR_Integer) 0);
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = !(parse_tree__prog_io_item__succeeded);
#line 394 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__1_1 = parse_tree__prog_io_item__V_8_8;
#line 394 "prog_io_item.m"
            else
#line 394 "prog_io_item.m"
              {
#line 394 "prog_io_item.m"
                {
#line 394 "prog_io_item.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__HeadVar__1_1, ((MR_Box) (parse_tree__prog_io_item__V_30_30)), ((MR_Box) (parse_tree__prog_io_item__V_7_7)));
                }
#line 394 "prog_io_item.m"
              }
#line 394 "prog_io_item.m"
          }
#line 394 "prog_io_item.m"
      }
#line 394 "prog_io_item.m"
  }
#line 394 "prog_io_item.m"
}

#line 394 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____quant_constr_attr_0_0(
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 394 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 394 "prog_io_item.m"
{
#line 394 "prog_io_item.m"
  {
#line 394 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 394 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_11 = (MR_Integer) parse_tree__prog_io_item__HeadVar__1_1;
#line 394 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_12 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;

#line 394 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_11 == parse_tree__prog_io_item__CastY_12);
#line 394 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 394 "prog_io_item.m"
    else
#line 394 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 394 "prog_io_item.m"
      {
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_13_13;
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9;
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_10_10;

#line 394 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 394 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
          {
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 4535 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_7_7 == parse_tree__prog_io_item__V_9_9);
#line 394 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
              {
#line 4541 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_13_13 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 4543 "parse_tree.prog_io_item.c"
                {
#line 4545 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_13_13, ((MR_Box) (parse_tree__prog_io_item__V_8_8)), ((MR_Box) (parse_tree__prog_io_item__V_10_10)));
                }
#line 394 "prog_io_item.m"
              }
#line 394 "prog_io_item.m"
          }
#line 394 "prog_io_item.m"
      }
#line 394 "prog_io_item.m"
    else
#line 394 "prog_io_item.m"
      {
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeInfo_14_14;
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_5_5;
#line 394 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_6_6;

#line 394 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 394 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
          {
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 394 "prog_io_item.m"
            parse_tree__prog_io_item__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 4579 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_3_3 == parse_tree__prog_io_item__V_5_5);
#line 394 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 394 "prog_io_item.m"
              {
#line 4585 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeInfo_14_14 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[0];
#line 4587 "parse_tree.prog_io_item.c"
                {
#line 4589 "parse_tree.prog_io_item.c"
                  parse_tree__prog_io_item__succeeded = mercury__builtin__unify_2_p_0(parse_tree__prog_io_item__TypeInfo_14_14, ((MR_Box) (parse_tree__prog_io_item__V_4_4)), ((MR_Box) (parse_tree__prog_io_item__V_6_6)));
                }
#line 394 "prog_io_item.m"
              }
#line 394 "prog_io_item.m"
          }
#line 394 "prog_io_item.m"
      }
#line 394 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 394 "prog_io_item.m"
  }
#line 394 "prog_io_item.m"
}

#line 387 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____purity_attr_0_0(
#line 387 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 387 "prog_io_item.m"
{
#line 387 "prog_io_item.m"
  {
#line 387 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 387 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_6 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 387 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_7 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 387 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_6 == parse_tree__prog_io_item__CastY_7);
#line 387 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 4629 "parse_tree.prog_io_item.c"
      *parse_tree__prog_io_item__HeadVar__1_1 = (MR_Integer) 0;
#line 387 "prog_io_item.m"
    else
#line 387 "prog_io_item.m"
      {
#line 387 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_4_4 = (MR_Word) parse_tree__prog_io_item__HeadVar__2_2;
#line 387 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_5_5 = (MR_Word) parse_tree__prog_io_item__HeadVar__3_3;
#line 387 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_9_9 = (MR_Integer) parse_tree__prog_io_item__V_4_4;
#line 387 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_10_10 = (MR_Integer) parse_tree__prog_io_item__V_5_5;

#line 387 "prog_io_item.m"
        {
#line 387 "prog_io_item.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__V_9_9, parse_tree__prog_io_item__V_10_10);
        }
#line 387 "prog_io_item.m"
      }
#line 387 "prog_io_item.m"
  }
#line 387 "prog_io_item.m"
}

#line 387 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____purity_attr_0_0(
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 387 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 387 "prog_io_item.m"
{
#line 387 "prog_io_item.m"
  {
#line 387 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 387 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastX_5 = (MR_Integer) parse_tree__prog_io_item__HeadVar__1_1;
#line 387 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__CastY_6 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;

#line 387 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__CastX_5 == parse_tree__prog_io_item__CastY_6);
#line 387 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 387 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 387 "prog_io_item.m"
    else
#line 387 "prog_io_item.m"
      {
#line 387 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_3_3 = (MR_Word) parse_tree__prog_io_item__HeadVar__1_1;
#line 387 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_4_4 = (MR_Word) parse_tree__prog_io_item__HeadVar__2_2;

#line 4689 "parse_tree.prog_io_item.c"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_3_3 == parse_tree__prog_io_item__V_4_4);
#line 387 "prog_io_item.m"
      }
#line 387 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 387 "prog_io_item.m"
  }
#line 387 "prog_io_item.m"
}

#line 639 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____maybe_allow_mode_defn_0_0(
#line 639 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 639 "prog_io_item.m"
{
#line 639 "prog_io_item.m"
  {
#line 639 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 639 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 639 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 639 "prog_io_item.m"
    {
#line 639 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__Cast_HeadVar1_4, parse_tree__prog_io_item__Cast_HeadVar2_5);
    }
#line 639 "prog_io_item.m"
  }
#line 639 "prog_io_item.m"
}

#line 639 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____maybe_allow_mode_defn_0_0(
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 639 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 639 "prog_io_item.m"
{
#line 4739 "parse_tree.prog_io_item.c"
  {
#line 4741 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__HeadVar__2_1 == parse_tree__prog_io_item__HeadVar__2_2);

#line 4744 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 4746 "parse_tree.prog_io_item.c"
  }
#line 639 "prog_io_item.m"
}

#line 547 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item____Compare____incl_imp_use_0_0(
#line 547 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__1_1,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3)
#line 547 "prog_io_item.m"
{
#line 547 "prog_io_item.m"
  {
#line 547 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 547 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar1_4 = (MR_Integer) parse_tree__prog_io_item__HeadVar__2_2;
#line 547 "prog_io_item.m"
    MR_Integer parse_tree__prog_io_item__Cast_HeadVar2_5 = (MR_Integer) parse_tree__prog_io_item__HeadVar__3_3;

#line 547 "prog_io_item.m"
    {
#line 547 "prog_io_item.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__Cast_HeadVar1_4, parse_tree__prog_io_item__Cast_HeadVar2_5);
    }
#line 547 "prog_io_item.m"
  }
#line 547 "prog_io_item.m"
}

#line 547 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item____Unify____incl_imp_use_0_0(
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_1,
#line 547 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2)
#line 547 "prog_io_item.m"
{
#line 4790 "parse_tree.prog_io_item.c"
  {
#line 4792 "parse_tree.prog_io_item.c"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__HeadVar__2_1 == parse_tree__prog_io_item__HeadVar__2_2);

#line 4795 "parse_tree.prog_io_item.c"
    return parse_tree__prog_io_item__succeeded;
#line 4797 "parse_tree.prog_io_item.c"
  }
#line 547 "prog_io_item.m"
}

#line 1962 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__dummy_term_with_context_2_p_0(
#line 1962 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_3,
#line 1962 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Term_4)
#line 1962 "prog_io_item.m"
{
#line 1964 "prog_io_item.m"
  {
#line 1964 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1965 "prog_io_item.m"
    {
#line 1965 "prog_io_item.m"
      MR_Word base;
#line 1965 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1965 "prog_io_item.m"
      *parse_tree__prog_io_item__Term_4 = base;
#line 1965 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[31]));
#line 1965 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1965 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_3));
#line 1965 "prog_io_item.m"
    }
#line 1964 "prog_io_item.m"
  }
#line 1962 "prog_io_item.m"
}

#line 1948 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(
#line 1948 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1)
#line 1948 "prog_io_item.m"
{
#line 1950 "prog_io_item.m"
  {
#line 1950 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1950 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__HeadVar__2_2;

#line 1950 "prog_io_item.m"
#line 1950 "prog_io_item.m"
    switch (parse_tree__prog_io_item__HeadVar__1_1) {
#line 1950 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1950 "prog_io_item.m"
      case (MR_Integer) 1:
#line 1950 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[134]);
#line 1950 "prog_io_item.m"
        break;
#line 1950 "prog_io_item.m"
      case (MR_Integer) 0:
#line 1952 "prog_io_item.m"
        parse_tree__prog_io_item__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[208]);
#line 1950 "prog_io_item.m"
        break;
#line 1950 "prog_io_item.m"
    }
#line 1950 "prog_io_item.m"
    return parse_tree__prog_io_item__HeadVar__2_2;
#line 1950 "prog_io_item.m"
  }
#line 1948 "prog_io_item.m"
}

#line 1927 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__DefaultModuleName_5,
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1927 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 1927 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModule_8)
#line 1927 "prog_io_item.m"
{
#line 1933 "prog_io_item.m"
  {
#line 1933 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1933 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__Term_7)) == (MR_mktag((MR_Integer) 0))))
#line 1942 "prog_io_item.m"
      {
#line 1942 "prog_io_item.m"
        parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_4_p_0(parse_tree__prog_io_item__DefaultModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, parse_tree__prog_io_item__MaybeModule_8);
      }
#line 1933 "prog_io_item.m"
    else
#line 1933 "prog_io_item.m"
      {
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 1)));
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_12;
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1933 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Term_7, (MR_Integer) 0)));

#line 1938 "prog_io_item.m"
        {
#line 1938 "prog_io_item.m"
          parse_tree__prog_io_item__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1938 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 1938 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[261])));
#line 1938 "prog_io_item.m"
        }
#line 1938 "prog_io_item.m"
        {
#line 1938 "prog_io_item.m"
          parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (parse_tree__prog_io_item__V_30_30));
#line 1938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1938 "prog_io_item.m"
        }
#line 1937 "prog_io_item.m"
        {
#line 1937 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1937 "prog_io_item.m"
        }
#line 1939 "prog_io_item.m"
        {
#line 1939 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1939 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1939 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1939 "prog_io_item.m"
        }
#line 1939 "prog_io_item.m"
        {
#line 1939 "prog_io_item.m"
          MR_Word base;
#line 1939 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1939 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeModule_8 = base;
#line 1939 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1939 "prog_io_item.m"
        }
#line 1933 "prog_io_item.m"
      }
#line 1933 "prog_io_item.m"
  }
#line 1927 "prog_io_item.m"
}

#line 1916 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_name_3_p_0(
#line 1916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 1916 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1916 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeModuleName_6)
#line 1916 "prog_io_item.m"
{
#line 1920 "prog_io_item.m"
  {
#line 1920 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1920 "prog_io_item.m"
    {
#line 1920 "prog_io_item.m"
      parse_tree__prog_io_sym_name__parse_symbol_name_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__VarSet_4, parse_tree__prog_io_item__Term_5, parse_tree__prog_io_item__MaybeModuleName_6);
    }
#line 1920 "prog_io_item.m"
  }
#line 1916 "prog_io_item.m"
}

#line 1893 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__desugar_field_access_1_f_0(
#line 1893 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_3)
#line 1893 "prog_io_item.m"
{
#line 1896 "prog_io_item.m"
  {
#line 1896 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1896 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DesugaredTerm_4;
#line 1896 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__A_5;
#line 1896 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 1896 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Bs_9;
#line 1896 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1897 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__RHS_6;
#line 1897 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1897 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_17_17;
#line 1897 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1897 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1897 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_20_20;
#line 1898 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;
#line 1898 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__FieldName_8;

#line 1897 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
      {
#line 1897 "prog_io_item.m"
        parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1897 "prog_io_item.m"
        parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1897 "prog_io_item.m"
        parse_tree__prog_io_item__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1897 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 1897 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
          {
#line 1897 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1897 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_17_17, (MR_String) "^") == 0);
#line 1897 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
              {
#line 1897 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1897 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
                  {
#line 1897 "prog_io_item.m"
                    parse_tree__prog_io_item__A_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1897 "prog_io_item.m"
                    parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1897 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 1897 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
                      {
#line 1897 "prog_io_item.m"
                        parse_tree__prog_io_item__RHS_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1897 "prog_io_item.m"
                        parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, (MR_Integer) 1)));
#line 1897 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1897 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1897 "prog_io_item.m"
                          {
#line 1898 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_6)) == (MR_mktag((MR_Integer) 0)));
#line 1898 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1898 "prog_io_item.m"
                              {
#line 1898 "prog_io_item.m"
                                parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 0)));
#line 1898 "prog_io_item.m"
                                parse_tree__prog_io_item__Bs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 1)));
#line 1898 "prog_io_item.m"
                                parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_6, (MR_Integer) 2)));
#line 1898 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 1898 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1898 "prog_io_item.m"
                                  parse_tree__prog_io_item__FieldName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1898 "prog_io_item.m"
                              }
#line 1897 "prog_io_item.m"
                          }
#line 1897 "prog_io_item.m"
                      }
#line 1897 "prog_io_item.m"
                  }
#line 1897 "prog_io_item.m"
              }
#line 1897 "prog_io_item.m"
          }
#line 1897 "prog_io_item.m"
      }
#line 1896 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1900 "prog_io_item.m"
      {
#line 1900 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1900 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;

#line 1900 "prog_io_item.m"
        {
#line 1900 "prog_io_item.m"
          parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__A_5));
#line 1900 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1900 "prog_io_item.m"
        }
#line 1900 "prog_io_item.m"
        {
#line 1900 "prog_io_item.m"
          parse_tree__prog_io_item__V_23_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_9, parse_tree__prog_io_item__V_24_24);
        }
#line 1900 "prog_io_item.m"
        {
#line 1900 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1900 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 1900 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 1900 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 1900 "prog_io_item.m"
        }
#line 1900 "prog_io_item.m"
      }
#line 1896 "prog_io_item.m"
    else
#line 1901 "prog_io_item.m"
      {
#line 1901 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__X_12;
#line 1901 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__A_44;
#line 1901 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_46;
#line 1901 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FieldName_47;
#line 1901 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Bs_48;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__LHS_11;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 1902 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_27_27;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_29_29;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_30_30;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 1902 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_32_32;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RHS_43;
#line 1902 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_13_13;
#line 1904 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1902 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 1902 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
          {
#line 1902 "prog_io_item.m"
            parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 0)));
#line 1902 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 1)));
#line 1902 "prog_io_item.m"
            parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_3, (MR_Integer) 2)));
#line 1902 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 0)));
#line 1902 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
              {
#line 1902 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 1902 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_27_27, (MR_String) ":=") == 0);
#line 1902 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                  {
#line 1902 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 1902 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                      {
#line 1902 "prog_io_item.m"
                        parse_tree__prog_io_item__LHS_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 1902 "prog_io_item.m"
                        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 1902 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 1902 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                          {
#line 1902 "prog_io_item.m"
                            parse_tree__prog_io_item__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 1902 "prog_io_item.m"
                            parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 1902 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1902 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                              {
#line 1903 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__LHS_11)) == (MR_mktag((MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 1903 "prog_io_item.m"
                                  {
#line 1903 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 1)));
#line 1903 "prog_io_item.m"
                                    parse_tree__prog_io_item__Context_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__LHS_11, (MR_Integer) 2)));
#line 1903 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 1903 "prog_io_item.m"
                                      {
#line 1903 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                        parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_32_32, (MR_String) "^") == 0);
#line 1902 "prog_io_item.m"
                                        if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                                          {
#line 1903 "prog_io_item.m"
                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 1903 "prog_io_item.m"
                                            if (parse_tree__prog_io_item__succeeded)
#line 1903 "prog_io_item.m"
                                              {
#line 1903 "prog_io_item.m"
                                                parse_tree__prog_io_item__A_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                                parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, (MR_Integer) 1)));
#line 1903 "prog_io_item.m"
                                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 1903 "prog_io_item.m"
                                                if (parse_tree__prog_io_item__succeeded)
#line 1903 "prog_io_item.m"
                                                  {
#line 1903 "prog_io_item.m"
                                                    parse_tree__prog_io_item__RHS_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1903 "prog_io_item.m"
                                                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 1903 "prog_io_item.m"
                                                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1902 "prog_io_item.m"
                                                    if (parse_tree__prog_io_item__succeeded)
#line 1902 "prog_io_item.m"
                                                      {
#line 1904 "prog_io_item.m"
                                                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__RHS_43)) == (MR_mktag((MR_Integer) 0)));
#line 1904 "prog_io_item.m"
                                                        if (parse_tree__prog_io_item__succeeded)
#line 1904 "prog_io_item.m"
                                                          {
#line 1904 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 0)));
#line 1904 "prog_io_item.m"
                                                            parse_tree__prog_io_item__Bs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 1)));
#line 1904 "prog_io_item.m"
                                                            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__RHS_43, (MR_Integer) 2)));
#line 1904 "prog_io_item.m"
                                                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 1904 "prog_io_item.m"
                                                            if (parse_tree__prog_io_item__succeeded)
#line 1904 "prog_io_item.m"
                                                              parse_tree__prog_io_item__FieldName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1904 "prog_io_item.m"
                                                          }
#line 1902 "prog_io_item.m"
                                                      }
#line 1903 "prog_io_item.m"
                                                  }
#line 1903 "prog_io_item.m"
                                              }
#line 1902 "prog_io_item.m"
                                          }
#line 1903 "prog_io_item.m"
                                      }
#line 1903 "prog_io_item.m"
                                  }
#line 1902 "prog_io_item.m"
                              }
#line 1902 "prog_io_item.m"
                          }
#line 1902 "prog_io_item.m"
                      }
#line 1902 "prog_io_item.m"
                  }
#line 1902 "prog_io_item.m"
              }
#line 1902 "prog_io_item.m"
          }
#line 1901 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1906 "prog_io_item.m"
          {
#line 1906 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__FunctionName_15;
#line 1906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1906 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;

#line 1906 "prog_io_item.m"
            {
#line 1906 "prog_io_item.m"
              parse_tree__prog_io_item__FunctionName_15 = mercury__string__f_43_43_2_f_0(parse_tree__prog_io_item__FieldName_47, (MR_String) " :=");
            }
#line 1907 "prog_io_item.m"
            {
#line 1907 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__FunctionName_15));
#line 1907 "prog_io_item.m"
            }
#line 1907 "prog_io_item.m"
            {
#line 1907 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__X_12));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1907 "prog_io_item.m"
            }
#line 1907 "prog_io_item.m"
            {
#line 1907 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__A_44));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1907 "prog_io_item.m"
            }
#line 1907 "prog_io_item.m"
            {
#line 1907 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__Bs_48, parse_tree__prog_io_item__V_40_40);
            }
#line 1907 "prog_io_item.m"
            {
#line 1907 "prog_io_item.m"
              parse_tree__prog_io_item__DesugaredTerm_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 1) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1907 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DesugaredTerm_4, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_46));
#line 1907 "prog_io_item.m"
            }
#line 1906 "prog_io_item.m"
          }
#line 1901 "prog_io_item.m"
        else
#line 1909 "prog_io_item.m"
          parse_tree__prog_io_item__DesugaredTerm_4 = parse_tree__prog_io_item__Term_3;
#line 1901 "prog_io_item.m"
      }
#line 1896 "prog_io_item.m"
    return parse_tree__prog_io_item__DesugaredTerm_4;
#line 1896 "prog_io_item.m"
  }
#line 1893 "prog_io_item.m"
}

#line 1860 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(
#line 1860 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 1860 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithInstTerm_5,
#line 1860 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithInst_6)
#line 1860 "prog_io_item.m"
{
#line 1864 "prog_io_item.m"
  {
#line 1864 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 1864 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1864 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_8;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1865 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_9_9;

#line 1865 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
      {
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 0)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 1)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_4, (MR_Integer) 2)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1865 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
          {
#line 1865 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1865 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "with_inst") == 0);
#line 1865 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
              {
#line 1866 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1866 "prog_io_item.m"
                  {
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1866 "prog_io_item.m"
                      {
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1866 "prog_io_item.m"
                      }
#line 1866 "prog_io_item.m"
                  }
#line 1865 "prog_io_item.m"
              }
#line 1865 "prog_io_item.m"
          }
#line 1865 "prog_io_item.m"
      }
#line 1864 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1868 "prog_io_item.m"
      {
#line 1872 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_10;

#line 1868 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__BeforeWithInstTermPrime_7;
#line 1872 "prog_io_item.m"
        {
#line 1872 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_8, &parse_tree__prog_io_item__Inst_10);
        }
#line 1872 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1873 "prog_io_item.m"
          {
#line 1873 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_19_19;

#line 1873 "prog_io_item.m"
            {
#line 1873 "prog_io_item.m"
              parse_tree__prog_io_item__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_19_19, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_10));
#line 1873 "prog_io_item.m"
            }
#line 1873 "prog_io_item.m"
            {
#line 1873 "prog_io_item.m"
              MR_Word base;
#line 1873 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1873 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_19_19));
#line 1873 "prog_io_item.m"
            }
#line 1873 "prog_io_item.m"
          }
#line 1872 "prog_io_item.m"
        else
#line 1876 "prog_io_item.m"
          {
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_12;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;

#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_35_35 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_8);
            }
#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[249])));
#line 1878 "prog_io_item.m"
            }
#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1878 "prog_io_item.m"
            }
#line 1877 "prog_io_item.m"
            {
#line 1877 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_12, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1877 "prog_io_item.m"
            }
#line 1879 "prog_io_item.m"
            {
#line 1879 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_12));
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "prog_io_item.m"
            }
#line 1879 "prog_io_item.m"
            {
#line 1879 "prog_io_item.m"
              MR_Word base;
#line 1879 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1879 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithInst_6 = base;
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1879 "prog_io_item.m"
            }
#line 1876 "prog_io_item.m"
          }
#line 1868 "prog_io_item.m"
      }
#line 1864 "prog_io_item.m"
    else
#line 1882 "prog_io_item.m"
      {
#line 1882 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithInstTerm_5 = parse_tree__prog_io_item__Term_4;
#line 1883 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithInst_6 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 1882 "prog_io_item.m"
      }
#line 1864 "prog_io_item.m"
  }
#line 1860 "prog_io_item.m"
}

#line 1831 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(
#line 1831 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1831 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1831 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeWithTypeTerm_7,
#line 1831 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeWithType_8)
#line 1831 "prog_io_item.m"
{
#line 1835 "prog_io_item.m"
  {
#line 1835 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1835 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1835 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_11;
#line 1837 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeQualifier_9;
#line 1837 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1837 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_18_18;
#line 1837 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1837 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_35_35;
#line 1836 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;

#line 1836 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1836 "prog_io_item.m"
      {
#line 1836 "prog_io_item.m"
        parse_tree__prog_io_item__TypeQualifier_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1836 "prog_io_item.m"
        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1836 "prog_io_item.m"
        parse_tree__prog_io_item__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1837 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 1837 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1837 "prog_io_item.m"
          {
#line 1837 "prog_io_item.m"
            parse_tree__prog_io_item__BeforeWithTypeTermPrime_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 0)));
#line 1837 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_17_17, (MR_Integer) 1)));
#line 1837 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 1837 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1837 "prog_io_item.m"
              {
#line 1837 "prog_io_item.m"
                parse_tree__prog_io_item__TypeTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 0)));
#line 1837 "prog_io_item.m"
                parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_18_18, (MR_Integer) 1)));
#line 1837 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1837 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1837 "prog_io_item.m"
                  {
#line 1838 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__TypeQualifier_9)) == (MR_mktag((MR_Integer) 0)));
#line 1838 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1838 "prog_io_item.m"
                      {
#line 1838 "prog_io_item.m"
                        parse_tree__prog_io_item__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__TypeQualifier_9, (MR_Integer) 0)));
#line 1839 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_35_35, (MR_String) ":") == 0))
#line 1839 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1839 "prog_io_item.m"
                        else
#line 1839 "prog_io_item.m"
                        if ((strcmp(parse_tree__prog_io_item__V_35_35, (MR_String) "with_type") == 0))
#line 1838 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1839 "prog_io_item.m"
                        else
#line 1839 "prog_io_item.m"
                          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 1838 "prog_io_item.m"
                      }
#line 1837 "prog_io_item.m"
                  }
#line 1837 "prog_io_item.m"
              }
#line 1837 "prog_io_item.m"
          }
#line 1836 "prog_io_item.m"
      }
#line 1835 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1842 "prog_io_item.m"
      {
#line 1842 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_13;
#line 1842 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeType_14;

#line 1842 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__BeforeWithTypeTermPrime_10;
#line 1843 "prog_io_item.m"
        {
#line 1843 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_13 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[197]));
        }
#line 1845 "prog_io_item.m"
        {
#line 1845 "prog_io_item.m"
          parse_tree__prog_io_util__parse_type_4_p_0(parse_tree__prog_io_item__TypeTerm_11, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__ContextPieces_13, &parse_tree__prog_io_item__MaybeType_14);
        }
#line 1849 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeType_14)) == (MR_mktag((MR_Integer) 0))))
#line 1851 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) parse_tree__prog_io_item__MaybeType_14;
#line 1849 "prog_io_item.m"
        else
#line 1847 "prog_io_item.m"
          {
#line 1847 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeType_14, (MR_Integer) 0)));
#line 1847 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_32_32;

#line 1848 "prog_io_item.m"
            {
#line 1848 "prog_io_item.m"
              parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_15));
#line 1848 "prog_io_item.m"
            }
#line 1848 "prog_io_item.m"
            {
#line 1848 "prog_io_item.m"
              MR_Word base;
#line 1848 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeWithType_8 = base;
#line 1848 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1848 "prog_io_item.m"
            }
#line 1847 "prog_io_item.m"
          }
#line 1842 "prog_io_item.m"
      }
#line 1835 "prog_io_item.m"
    else
#line 1854 "prog_io_item.m"
      {
#line 1854 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeWithTypeTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1855 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeWithType_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[29]);
#line 1854 "prog_io_item.m"
      }
#line 1835 "prog_io_item.m"
  }
#line 1831 "prog_io_item.m"
}

#line 1802 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(
#line 1802 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_5,
#line 1802 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_6,
#line 1802 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__BeforeDetismTerm_7,
#line 1802 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeMaybeDetism_8)
#line 1802 "prog_io_item.m"
{
#line 1806 "prog_io_item.m"
  {
#line 1806 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_6)) == (MR_mktag((MR_Integer) 0)));
#line 1806 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1806 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DetismTerm_12;
#line 1807 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Args_9;
#line 1807 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_19_19;
#line 1807 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_20_20;
#line 1807 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 1807 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 1807 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_10_10;

#line 1807 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1807 "prog_io_item.m"
      {
#line 1807 "prog_io_item.m"
        parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 0)));
#line 1807 "prog_io_item.m"
        parse_tree__prog_io_item__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 1)));
#line 1807 "prog_io_item.m"
        parse_tree__prog_io_item__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_6, (MR_Integer) 2)));
#line 1807 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1807 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1807 "prog_io_item.m"
          {
#line 1807 "prog_io_item.m"
            parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1807 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "is") == 0);
#line 1807 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1807 "prog_io_item.m"
              {
#line 1808 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 1808 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1808 "prog_io_item.m"
                  {
#line 1808 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeDetismTermPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 0)));
#line 1808 "prog_io_item.m"
                    parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_9, (MR_Integer) 1)));
#line 1808 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1808 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1808 "prog_io_item.m"
                      {
#line 1808 "prog_io_item.m"
                        parse_tree__prog_io_item__DetismTerm_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1808 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1808 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1808 "prog_io_item.m"
                      }
#line 1808 "prog_io_item.m"
                  }
#line 1807 "prog_io_item.m"
              }
#line 1807 "prog_io_item.m"
          }
#line 1807 "prog_io_item.m"
      }
#line 1806 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1810 "prog_io_item.m"
      {
#line 1811 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Detism_15;
#line 1812 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__DetismFunctor_13;
#line 1812 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1812 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 1812 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_14_14;

#line 1810 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__BeforeDetismTermPrime_11;
#line 1812 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DetismTerm_12)) == (MR_mktag((MR_Integer) 0)));
#line 1812 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1812 "prog_io_item.m"
          {
#line 1812 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 0)));
#line 1812 "prog_io_item.m"
            parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 1)));
#line 1812 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DetismTerm_12, (MR_Integer) 2)));
#line 1812 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1812 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1812 "prog_io_item.m"
              {
#line 1812 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 1812 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1812 "prog_io_item.m"
                  {
#line 1812 "prog_io_item.m"
                    parse_tree__prog_io_item__DetismFunctor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_23_23, (MR_Integer) 0)));
#line 1813 "prog_io_item.m"
                    {
#line 1813 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__standard_det_2_p_0(parse_tree__prog_io_item__DetismFunctor_13, &parse_tree__prog_io_item__Detism_15);
                    }
#line 1812 "prog_io_item.m"
                  }
#line 1812 "prog_io_item.m"
              }
#line 1812 "prog_io_item.m"
          }
#line 1811 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1815 "prog_io_item.m"
          {
#line 1815 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;

#line 1815 "prog_io_item.m"
            {
#line 1815 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__Detism_15));
#line 1815 "prog_io_item.m"
            }
#line 1815 "prog_io_item.m"
            {
#line 1815 "prog_io_item.m"
              MR_Word base;
#line 1815 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1815 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1815 "prog_io_item.m"
            }
#line 1815 "prog_io_item.m"
          }
#line 1811 "prog_io_item.m"
        else
#line 1817 "prog_io_item.m"
          {
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_48_48 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1817 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_16;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_17;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_18;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_39_39;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1817 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 1817 "prog_io_item.m"
            {
#line 1817 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_16 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__VarSet_5, parse_tree__prog_io_item__Term_6);
            }
#line 1819 "prog_io_item.m"
            {
#line 1819 "prog_io_item.m"
              parse_tree__prog_io_item__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1819 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_29_29, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_16));
#line 1819 "prog_io_item.m"
            }
#line 1819 "prog_io_item.m"
            {
#line 1819 "prog_io_item.m"
              parse_tree__prog_io_item__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 0) = ((MR_Box) (parse_tree__prog_io_item__V_29_29));
#line 1819 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1819 "prog_io_item.m"
            }
#line 1818 "prog_io_item.m"
            {
#line 1818 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[260])));
#line 1818 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_28_28));
#line 1818 "prog_io_item.m"
            }
#line 1821 "prog_io_item.m"
            {
#line 1821 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_48_48, parse_tree__prog_io_item__DetismTerm_12);
            }
#line 1821 "prog_io_item.m"
            {
#line 1821 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_42_42, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_17));
#line 1821 "prog_io_item.m"
            }
#line 1821 "prog_io_item.m"
            {
#line 1821 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1821 "prog_io_item.m"
            }
#line 1821 "prog_io_item.m"
            {
#line 1821 "prog_io_item.m"
              parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1821 "prog_io_item.m"
            }
#line 1821 "prog_io_item.m"
            {
#line 1821 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 1821 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1821 "prog_io_item.m"
            }
#line 1820 "prog_io_item.m"
            {
#line 1820 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1820 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_18, 2) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1820 "prog_io_item.m"
            }
#line 1822 "prog_io_item.m"
            {
#line 1822 "prog_io_item.m"
              parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_18));
#line 1822 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1822 "prog_io_item.m"
            }
#line 1822 "prog_io_item.m"
            {
#line 1822 "prog_io_item.m"
              MR_Word base;
#line 1822 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1822 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeMaybeDetism_8 = base;
#line 1822 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 1822 "prog_io_item.m"
            }
#line 1817 "prog_io_item.m"
          }
#line 1810 "prog_io_item.m"
      }
#line 1806 "prog_io_item.m"
    else
#line 1825 "prog_io_item.m"
      {
#line 1825 "prog_io_item.m"
        *parse_tree__prog_io_item__BeforeDetismTerm_7 = parse_tree__prog_io_item__Term_6;
#line 1826 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeMaybeDetism_8 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[28]);
#line 1825 "prog_io_item.m"
      }
#line 1806 "prog_io_item.m"
  }
#line 1802 "prog_io_item.m"
}

#line 1709 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_promise_item_5_p_0(
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_7,
#line 1709 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_8,
#line 1709 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 1709 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10)
#line 1709 "prog_io_item.m"
{
#line 1713 "prog_io_item.m"
  {
#line 1713 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_7)) == (MR_mktag((MR_Integer) 1)));
#line 1713 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_11;
#line 1713 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;

#line 1713 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1713 "prog_io_item.m"
      {
#line 1713 "prog_io_item.m"
        parse_tree__prog_io_item__Term_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 0)));
#line 1713 "prog_io_item.m"
        parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_7, (MR_Integer) 1)));
#line 1713 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1713 "prog_io_item.m"
      }
#line 1713 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1714 "prog_io_item.m"
      {
#line 1714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ProgVarSet0_12;
#line 1714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_13;
#line 1714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeGoal0_14;
#line 1714 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ProgVarSet_15;

#line 1714 "prog_io_item.m"
        {
#line 1714 "prog_io_item.m"
          mercury__varset__coerce_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, parse_tree__prog_io_item__VarSet_6, &parse_tree__prog_io_item__ProgVarSet0_12);
        }
#line 1715 "prog_io_item.m"
        {
#line 1715 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_13 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0);
        }
#line 1716 "prog_io_item.m"
        {
#line 1716 "prog_io_item.m"
          parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__Term_11, parse_tree__prog_io_item__ContextPieces_13, &parse_tree__prog_io_item__MaybeGoal0_14, parse_tree__prog_io_item__ProgVarSet0_12, &parse_tree__prog_io_item__ProgVarSet_15);
        }
#line 1734 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeGoal0_14)) == (MR_mktag((MR_Integer) 0))))
#line 1736 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_10 = (MR_Word) parse_tree__prog_io_item__MaybeGoal0_14;
#line 1734 "prog_io_item.m"
        else
#line 1718 "prog_io_item.m"
          {
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeGoal0_14, (MR_Integer) 0)));
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__UnivVars_21;
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Goal_22;
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPromise_23;
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_24;
#line 1718 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;
#line 1720 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__UnivVars0_19;
#line 1720 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__AllGoal_20;
#line 1721 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29;
#line 1721 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_30_30;
#line 1721 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_18_18;

#line 1721 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__Goal0_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 1721 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1721 "prog_io_item.m"
              {
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 2)));
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__UnivVars0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 3)));
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__AllGoal_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Goal0_16, (MR_Integer) 4)));
#line 1721 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_29_29 == (MR_Integer) 1);
#line 1721 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1721 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == (MR_Integer) 0);
#line 1721 "prog_io_item.m"
              }
#line 1720 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1724 "prog_io_item.m"
              {
#line 1724 "prog_io_item.m"
                parse_tree__prog_io_item__UnivVars_21 = parse_tree__prog_io_item__UnivVars0_19;
#line 1725 "prog_io_item.m"
                parse_tree__prog_io_item__Goal_22 = parse_tree__prog_io_item__AllGoal_20;
#line 1724 "prog_io_item.m"
              }
#line 1720 "prog_io_item.m"
            else
#line 1727 "prog_io_item.m"
              {
#line 1727 "prog_io_item.m"
                parse_tree__prog_io_item__UnivVars_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1728 "prog_io_item.m"
                parse_tree__prog_io_item__Goal_22 = parse_tree__prog_io_item__Goal0_16;
#line 1727 "prog_io_item.m"
              }
#line 1730 "prog_io_item.m"
            {
#line 1730 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPromise_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 1) = ((MR_Box) (parse_tree__prog_io_item__Goal_22));
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_15));
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 3) = ((MR_Box) (parse_tree__prog_io_item__UnivVars_21));
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 4) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 1730 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPromise_23, 5) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_9));
#line 1730 "prog_io_item.m"
            }
#line 1732 "prog_io_item.m"
            {
#line 1732 "prog_io_item.m"
              parse_tree__prog_io_item__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1732 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1732 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_24, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPromise_23));
#line 1732 "prog_io_item.m"
            }
#line 1733 "prog_io_item.m"
            {
#line 1733 "prog_io_item.m"
              parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1733 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_24));
#line 1733 "prog_io_item.m"
            }
#line 1733 "prog_io_item.m"
            {
#line 1733 "prog_io_item.m"
              MR_Word base;
#line 1733 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1733 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 1733 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 1733 "prog_io_item.m"
            }
#line 1718 "prog_io_item.m"
          }
#line 1714 "prog_io_item.m"
      }
#line 1713 "prog_io_item.m"
    else
#line 1741 "prog_io_item.m"
      {
#line 1741 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_27;
#line 1741 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1741 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1741 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;

#line 1743 "prog_io_item.m"
        {
#line 1743 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 1743 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[259])));
#line 1743 "prog_io_item.m"
        }
#line 1743 "prog_io_item.m"
        {
#line 1743 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1743 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1743 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1743 "prog_io_item.m"
        }
#line 1742 "prog_io_item.m"
        {
#line 1742 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1742 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1742 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1742 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_27, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1742 "prog_io_item.m"
        }
#line 1744 "prog_io_item.m"
        {
#line 1744 "prog_io_item.m"
          parse_tree__prog_io_item__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1744 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_27));
#line 1744 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1744 "prog_io_item.m"
        }
#line 1744 "prog_io_item.m"
        {
#line 1744 "prog_io_item.m"
          MR_Word base;
#line 1744 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1744 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 1744 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_57_57));
#line 1744 "prog_io_item.m"
        }
#line 1741 "prog_io_item.m"
      }
#line 1713 "prog_io_item.m"
  }
#line 1709 "prog_io_item.m"
}

#line 1632 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_loop_18_p_0(
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__3_3,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__4_4,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_Specs_6,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_8,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_10,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_12,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_14,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__15_15,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__16_16,
#line 1632 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__17_17,
#line 1632 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__18_18)
#line 1632 "prog_io_item.m"
{
#line 1641 "prog_io_item.m"
  while (MR_TRUE)
#line 1641 "prog_io_item.m"
    {
#line 1641 "prog_io_item.m"
      /* tailcall optimized into a loop */
#line 1641 "prog_io_item.m"
      {
#line 1641 "prog_io_item.m"
        MR_bool parse_tree__prog_io_item__succeeded;

#line 1641 "prog_io_item.m"
        if ((parse_tree__prog_io_item__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1641 "prog_io_item.m"
          {
#line 1644 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__18_18 = parse_tree__prog_io_item__HeadVar__17_17;
#line 1644 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__16_16 = parse_tree__prog_io_item__HeadVar__15_15;
#line 1643 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_14 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13;
#line 1643 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_12 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11;
#line 1642 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_10 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9;
#line 1642 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_8 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7;
#line 1642 "prog_io_item.m"
            *parse_tree__prog_io_item__STATE_VARIABLE_Specs_6 = parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5;
#line 1641 "prog_io_item.m"
          }
#line 1641 "prog_io_item.m"
        else
#line 1649 "prog_io_item.m"
          {
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__QuantConstrAttr_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 0)));
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__QuantConstrAttrs_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__3_3, (MR_Integer) 1)));
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109;
#line 1649 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111;

#line 1677 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__QuantConstrAttr_45)) == (MR_mktag((MR_Integer) 1))))
#line 1678 "prog_io_item.m"
              {
#line 1678 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ConstraintsTerm_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__QuantConstrAttr_45, (MR_Integer) 1)));
#line 1678 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeConstraints_63;
#line 1678 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__QuantType_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__QuantConstrAttr_45, (MR_Integer) 0)));

#line 1679 "prog_io_item.m"
                {
#line 1679 "prog_io_item.m"
                  parse_tree__prog_io_typeclass__parse_class_and_inst_constraints_4_p_0(parse_tree__prog_io_item__HeadVar__1_1, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__ConstraintsTerm_62, &parse_tree__prog_io_item__MaybeConstraints_63);
                }
#line 1684 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_63)) == (MR_mktag((MR_Integer) 0))))
#line 1682 "prog_io_item.m"
                  {
#line 1682 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ConstraintSpecs_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_63, (MR_Integer) 0)));

#line 1683 "prog_io_item.m"
                    {
#line 1683 "prog_io_item.m"
                      parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__ConstraintSpecs_64, parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5);
                    }
#line 1682 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11;
#line 1682 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13;
#line 1682 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__prog_io_item__HeadVar__15_15;
#line 1682 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__prog_io_item__HeadVar__17_17;
#line 1682 "prog_io_item.m"
                  }
#line 1684 "prog_io_item.m"
                else
#line 1685 "prog_io_item.m"
                  {
#line 1685 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ClassConstraints_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_63, (MR_Integer) 0)));
#line 1685 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InstConstraint_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_63, (MR_Integer) 1)));

#line 1692 "prog_io_item.m"
#line 1692 "prog_io_item.m"
                    switch (parse_tree__prog_io_item__QuantType_119) {
#line 1692 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1692 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 1687 "prog_io_item.m"
                        {
#line 1687 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1687 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_85_85;

#line 1689 "prog_io_item.m"
                          {
#line 1689 "prog_io_item.m"
                            parse_tree__prog_io_item__V_85_85 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_126_126, parse_tree__prog_io_item__ClassConstraints_65);
                          }
#line 1688 "prog_io_item.m"
                          {
#line 1688 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_126_126, parse_tree__prog_io_item__HeadVar__15_15, parse_tree__prog_io_item__V_85_85);
                          }
#line 1690 "prog_io_item.m"
                          {
#line 1690 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__HeadVar__17_17, parse_tree__prog_io_item__InstConstraint_66);
                          }
#line 1687 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11;
#line 1687 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13;
#line 1687 "prog_io_item.m"
                        }
#line 1692 "prog_io_item.m"
                        break;
#line 1692 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 1693 "prog_io_item.m"
                        {
#line 1693 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeCtorInfo_129_129 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1693 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_82_82;

#line 1695 "prog_io_item.m"
                          {
#line 1695 "prog_io_item.m"
                            parse_tree__prog_io_item__V_82_82 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_129_129, parse_tree__prog_io_item__ClassConstraints_65);
                          }
#line 1694 "prog_io_item.m"
                          {
#line 1694 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_129_129, parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11, parse_tree__prog_io_item__V_82_82);
                          }
#line 1696 "prog_io_item.m"
                          {
#line 1696 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83 = mercury__map__old_merge_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13, parse_tree__prog_io_item__InstConstraint_66);
                          }
#line 1693 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__prog_io_item__HeadVar__15_15;
#line 1693 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__prog_io_item__HeadVar__17_17;
#line 1693 "prog_io_item.m"
                        }
#line 1692 "prog_io_item.m"
                        break;
#line 1692 "prog_io_item.m"
                    }
#line 1685 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111 = parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5;
#line 1685 "prog_io_item.m"
                  }
#line 1678 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7;
#line 1678 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9;
#line 1678 "prog_io_item.m"
              }
#line 1677 "prog_io_item.m"
            else
#line 1651 "prog_io_item.m"
              {
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_120_120;
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__QuantType_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__QuantConstrAttr_45, (MR_Integer) 0)));
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__VarsTerm_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__QuantConstrAttr_45, (MR_Integer) 1)));
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TailContextPieces_57;
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__VarsContextPieces_58;
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeVars_59;
#line 1651 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_106_106;

#line 1657 "prog_io_item.m"
#line 1657 "prog_io_item.m"
                switch (parse_tree__prog_io_item__QuantType_55) {
#line 1657 "prog_io_item.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1657 "prog_io_item.m"
                  case (MR_Integer) 0:
#line 1655 "prog_io_item.m"
                    parse_tree__prog_io_item__TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[183]);
#line 1657 "prog_io_item.m"
                    break;
#line 1657 "prog_io_item.m"
                  case (MR_Integer) 1:
#line 1659 "prog_io_item.m"
                    parse_tree__prog_io_item__TailContextPieces_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[186]);
#line 1657 "prog_io_item.m"
                    break;
#line 1657 "prog_io_item.m"
                }
#line 6695 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_120_120 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1662 "prog_io_item.m"
                {
#line 1662 "prog_io_item.m"
                  parse_tree__prog_io_item__V_106_106 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_120_120, parse_tree__prog_io_item__TailContextPieces_57);
                }
#line 1662 "prog_io_item.m"
                {
#line 1662 "prog_io_item.m"
                  parse_tree__prog_io_item__VarsContextPieces_58 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_120_120, parse_tree__prog_io_item__HeadVar__4_4, parse_tree__prog_io_item__V_106_106);
                }
#line 1663 "prog_io_item.m"
                {
#line 1663 "prog_io_item.m"
                  parse_tree__prog_io_util__parse_list_of_vars_4_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadVar__2_2, parse_tree__prog_io_item__VarsContextPieces_58, parse_tree__prog_io_item__VarsTerm_56, &parse_tree__prog_io_item__MaybeVars_59);
                }
#line 1667 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeVars_59)) == (MR_mktag((MR_Integer) 0))))
#line 1665 "prog_io_item.m"
                  {
#line 1665 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__VarsSpecs_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeVars_59, (MR_Integer) 0)));

#line 1666 "prog_io_item.m"
                    {
#line 1666 "prog_io_item.m"
                      parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__VarsSpecs_60, parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5);
                    }
#line 1665 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7;
#line 1665 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9;
#line 1665 "prog_io_item.m"
                  }
#line 1667 "prog_io_item.m"
                else
#line 1668 "prog_io_item.m"
                  {
#line 1668 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Vars_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeVars_59, (MR_Integer) 0)));

#line 1672 "prog_io_item.m"
#line 1672 "prog_io_item.m"
                    switch (parse_tree__prog_io_item__QuantType_55) {
#line 1672 "prog_io_item.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1672 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 1670 "prog_io_item.m"
                        {
#line 1670 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeInfo_123_123 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1670 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_110_110;

#line 1671 "prog_io_item.m"
                          {
#line 1671 "prog_io_item.m"
                            parse_tree__prog_io_item__V_110_110 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeInfo_123_123, parse_tree__prog_io_item__Vars_61);
                          }
#line 1671 "prog_io_item.m"
                          {
#line 1671 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_123_123, parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9, parse_tree__prog_io_item__V_110_110);
                          }
#line 1670 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7;
#line 1670 "prog_io_item.m"
                        }
#line 1672 "prog_io_item.m"
                        break;
#line 1672 "prog_io_item.m"
                      case (MR_Integer) 1:
#line 1673 "prog_io_item.m"
                        {
#line 1673 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__TypeInfo_124_124 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1673 "prog_io_item.m"
                          MR_Word parse_tree__prog_io_item__V_108_108;

#line 1674 "prog_io_item.m"
                          {
#line 1674 "prog_io_item.m"
                            parse_tree__prog_io_item__V_108_108 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeInfo_124_124, parse_tree__prog_io_item__Vars_61);
                          }
#line 1674 "prog_io_item.m"
                          {
#line 1674 "prog_io_item.m"
                            parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeInfo_124_124, parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7, parse_tree__prog_io_item__V_108_108);
                          }
#line 1673 "prog_io_item.m"
                          parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9;
#line 1673 "prog_io_item.m"
                        }
#line 1672 "prog_io_item.m"
                        break;
#line 1672 "prog_io_item.m"
                    }
#line 1668 "prog_io_item.m"
                    parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111 = parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5;
#line 1668 "prog_io_item.m"
                  }
#line 1651 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11;
#line 1651 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13;
#line 1651 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84 = parse_tree__prog_io_item__HeadVar__15_15;
#line 1651 "prog_io_item.m"
                parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86 = parse_tree__prog_io_item__HeadVar__17_17;
#line 1651 "prog_io_item.m"
              }
#line 1702 "prog_io_item.m"
            /* direct tailcall eliminated */
#line 1702 "prog_io_item.m"
            {
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadVar__3__tmp_copy_3 = parse_tree__prog_io_item__QuantConstrAttrs_46;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_Specs_0__tmp_copy_5 = parse_tree__prog_io_item__STATE_VARIABLE_Specs_111_111;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0__tmp_copy_7 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_107_107;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0__tmp_copy_9 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_109_109;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0__tmp_copy_11 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_81_81;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0__tmp_copy_13 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_83_83;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadVar__15__tmp_copy_15 = parse_tree__prog_io_item__STATE_VARIABLE_ExistClassConstraints_84_84;
#line 1702 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__HeadVar__17__tmp_copy_17 = parse_tree__prog_io_item__STATE_VARIABLE_ExistInstConstraints_86_86;

#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__HeadVar__17_17 = parse_tree__prog_io_item__HeadVar__17__tmp_copy_17;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__HeadVar__15_15 = parse_tree__prog_io_item__HeadVar__15__tmp_copy_15;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0_13 = parse_tree__prog_io_item__STATE_VARIABLE_UnivInstConstraints_0__tmp_copy_13;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0_11 = parse_tree__prog_io_item__STATE_VARIABLE_UnivClassConstraints_0__tmp_copy_11;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0_9 = parse_tree__prog_io_item__STATE_VARIABLE_ExistQVars_0__tmp_copy_9;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0_7 = parse_tree__prog_io_item__STATE_VARIABLE_UnivQVars_0__tmp_copy_7;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__STATE_VARIABLE_Specs_0_5 = parse_tree__prog_io_item__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 1702 "prog_io_item.m"
              parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__HeadVar__3__tmp_copy_3;
#line 1702 "prog_io_item.m"
            }
#line 1702 "prog_io_item.m"
            continue;
#line 1649 "prog_io_item.m"
          }
#line 1641 "prog_io_item.m"
      }
#line 1641 "prog_io_item.m"
      break;
#line 1641 "prog_io_item.m"
    }
#line 1632 "prog_io_item.m"
}

#line 1617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0_1(
#line 1617 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1617 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1617 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1617 "prog_io_item.m"
{
#line 1617 "prog_io_item.m"
  {
#line 1617 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1617 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_39;

#line 1617 "prog_io_item.m"
    {
#line 1617 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__get_class_context_and_inst_constraints_from_attrs__1617__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_39);
    }
#line 1617 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_39));
#line 1617 "prog_io_item.m"
  }
#line 1617 "prog_io_item.m"
}

#line 1572 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_8,
#line 1572 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ContextPieces_9,
#line 1572 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeExistClassInstContext_10)
#line 1572 "prog_io_item.m"
{
#line 1577 "prog_io_item.m"
  {
#line 1577 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_34_34 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[9];
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_35_35;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeInfo_36_36;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_37_37;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Specs_11;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVarsCord_13;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivClassConstraints_14;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__UnivInstConstraints_15;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistClassConstraints_16;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistInstConstraints_17;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars0_18;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_19;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_25_25;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;
#line 1577 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 1610 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___UnivQVarsCord_12;

#line 1612 "prog_io_item.m"
    {
#line 1612 "prog_io_item.m"
      parse_tree__prog_io_item__V_25_25 = mercury__cord__init_0_f_0(parse_tree__prog_io_item__TypeInfo_34_34);
    }
#line 1612 "prog_io_item.m"
    {
#line 1612 "prog_io_item.m"
      parse_tree__prog_io_item__V_26_26 = mercury__cord__init_0_f_0(parse_tree__prog_io_item__TypeInfo_34_34);
    }
#line 6958 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1613 "prog_io_item.m"
    {
#line 1613 "prog_io_item.m"
      parse_tree__prog_io_item__V_27_27 = mercury__cord__init_0_f_0(parse_tree__prog_io_item__TypeCtorInfo_35_35);
    }
#line 6965 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeInfo_36_36 = (MR_Word) &parse_tree__prog_io_item_scalar_common_1[7];
#line 6967 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0;
#line 1613 "prog_io_item.m"
    {
#line 1613 "prog_io_item.m"
      parse_tree__prog_io_item__V_28_28 = mercury__map__init_0_f_0(parse_tree__prog_io_item__TypeInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37);
    }
#line 1614 "prog_io_item.m"
    {
#line 1614 "prog_io_item.m"
      parse_tree__prog_io_item__V_29_29 = mercury__cord__init_0_f_0(parse_tree__prog_io_item__TypeCtorInfo_35_35);
    }
#line 1614 "prog_io_item.m"
    {
#line 1614 "prog_io_item.m"
      parse_tree__prog_io_item__V_30_30 = mercury__map__init_0_f_0(parse_tree__prog_io_item__TypeInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37);
    }
#line 1610 "prog_io_item.m"
    {
#line 1610 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_loop_18_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__QuantConstrAttrs_8, parse_tree__prog_io_item__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__prog_io_item__Specs_11, parse_tree__prog_io_item__V_25_25, &parse_tree__prog_io_item___UnivQVarsCord_12, parse_tree__prog_io_item__V_26_26, &parse_tree__prog_io_item__ExistQVarsCord_13, parse_tree__prog_io_item__V_27_27, &parse_tree__prog_io_item__UnivClassConstraints_14, parse_tree__prog_io_item__V_28_28, &parse_tree__prog_io_item__UnivInstConstraints_15, parse_tree__prog_io_item__V_29_29, &parse_tree__prog_io_item__ExistClassConstraints_16, parse_tree__prog_io_item__V_30_30, &parse_tree__prog_io_item__ExistInstConstraints_17);
    }
#line 1616 "prog_io_item.m"
    {
#line 1616 "prog_io_item.m"
      parse_tree__prog_io_item__ExistQVars0_18 = mercury__cord__list_1_f_0(parse_tree__prog_io_item__TypeInfo_34_34, parse_tree__prog_io_item__ExistQVarsCord_13);
    }
#line 1617 "prog_io_item.m"
    {
#line 1617 "prog_io_item.m"
      mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeInfo_34_34, (MR_Word) &parse_tree__prog_io_item_scalar_common_1[5], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[3], parse_tree__prog_io_item__ExistQVars0_18, &parse_tree__prog_io_item__ExistQVars_19);
    }
#line 1627 "prog_io_item.m"
    if ((parse_tree__prog_io_item__Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1619 "prog_io_item.m"
      {
#line 1619 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ClassConstraints_20;
#line 1619 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_21;
#line 1619 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;
#line 1619 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;

#line 1621 "prog_io_item.m"
        {
#line 1621 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = mercury__cord__list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_35_35, parse_tree__prog_io_item__UnivClassConstraints_14);
        }
#line 1622 "prog_io_item.m"
        {
#line 1622 "prog_io_item.m"
          parse_tree__prog_io_item__V_33_33 = mercury__cord__list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_35_35, parse_tree__prog_io_item__ExistClassConstraints_16);
        }
#line 1620 "prog_io_item.m"
        {
#line 1620 "prog_io_item.m"
          parse_tree__prog_io_item__ClassConstraints_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1620 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 1620 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassConstraints_20, 1) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 1620 "prog_io_item.m"
        }
#line 1623 "prog_io_item.m"
        {
#line 1623 "prog_io_item.m"
          parse_tree__prog_io_item__InstConstraints_21 = mercury__map__old_merge_2_f_0(parse_tree__prog_io_item__TypeInfo_36_36, parse_tree__prog_io_item__TypeCtorInfo_37_37, parse_tree__prog_io_item__UnivInstConstraints_15, parse_tree__prog_io_item__ExistInstConstraints_17);
        }
#line 1625 "prog_io_item.m"
        {
#line 1625 "prog_io_item.m"
          MR_Word base;
#line 1625 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1625 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1625 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_19));
#line 1625 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__ClassConstraints_20));
#line 1625 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_21));
#line 1625 "prog_io_item.m"
        }
#line 1619 "prog_io_item.m"
      }
#line 1627 "prog_io_item.m"
    else
#line 1629 "prog_io_item.m"
      {
#line 1629 "prog_io_item.m"
        MR_Word base;
#line 1629 "prog_io_item.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1629 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeExistClassInstContext_10 = base;
#line 1629 "prog_io_item.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_11));
#line 1629 "prog_io_item.m"
      }
#line 1577 "prog_io_item.m"
  }
#line 1572 "prog_io_item.m"
}

#line 1534 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__get_purity_from_attrs_3_p_0(
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__1_1,
#line 1534 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1534 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 1534 "prog_io_item.m"
{
#line 1537 "prog_io_item.m"
  {
#line 1537 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1537 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1537 "prog_io_item.m"
      {
#line 1537 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[25]);
#line 1537 "prog_io_item.m"
      }
#line 1537 "prog_io_item.m"
    else
#line 1538 "prog_io_item.m"
      {
#line 1538 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__PurityAttr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1538 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__PurityAttrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1538 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Purity_10 = (MR_Word) parse_tree__prog_io_item__PurityAttr_7;

#line 1543 "prog_io_item.m"
        if ((parse_tree__prog_io_item__PurityAttrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1542 "prog_io_item.m"
          {
#line 1542 "prog_io_item.m"
            MR_Word base;
#line 1542 "prog_io_item.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1542 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1542 "prog_io_item.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Purity_10));
#line 1542 "prog_io_item.m"
          }
#line 1543 "prog_io_item.m"
        else
#line 1544 "prog_io_item.m"
          {
#line 1544 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_14;
#line 1544 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_25_25;
#line 1544 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;
#line 1544 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_31_31;

#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadVar__1_1));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[258])));
#line 1548 "prog_io_item.m"
            }
#line 1548 "prog_io_item.m"
            {
#line 1548 "prog_io_item.m"
              parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__V_26_26));
#line 1548 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1548 "prog_io_item.m"
            }
#line 1547 "prog_io_item.m"
            {
#line 1547 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1547 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1547 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_14, 2) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 1547 "prog_io_item.m"
            }
#line 1549 "prog_io_item.m"
            {
#line 1549 "prog_io_item.m"
              parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1549 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_14));
#line 1549 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1549 "prog_io_item.m"
            }
#line 1549 "prog_io_item.m"
            {
#line 1549 "prog_io_item.m"
              MR_Word base;
#line 1549 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1549 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1549 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 1549 "prog_io_item.m"
            }
#line 1544 "prog_io_item.m"
          }
#line 1538 "prog_io_item.m"
      }
#line 1537 "prog_io_item.m"
  }
#line 1534 "prog_io_item.m"
}

#line 1480 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1(
#line 1480 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1480 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1480 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1480 "prog_io_item.m"
{
#line 1480 "prog_io_item.m"
  {
#line 1480 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1480 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1480 "prog_io_item.m"
    {
#line 1480 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1480 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1480 "prog_io_item.m"
  }
#line 1480 "prog_io_item.m"
}

#line 1463 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_13,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_15,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncMode_16,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__RetModeTerm_17,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FullTerm_18,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_21,
#line 1463 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_22,
#line 1463 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_23,
#line 1463 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_24)
#line 1463 "prog_io_item.m"
{
#line 1471 "prog_io_item.m"
  {
#line 1471 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1471 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_25;

#line 1472 "prog_io_item.m"
    {
#line 1472 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_14, &parse_tree__prog_io_item__ArgModes0_25);
    }
#line 1471 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1475 "prog_io_item.m"
      {
#line 1475 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_26;
#line 1475 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_27;

#line 1474 "prog_io_item.m"
        {
#line 1474 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_26 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[163]));
        }
#line 1476 "prog_io_item.m"
        {
#line 1476 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__prog_io_item__ModuleName_15, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__QuantConstrAttrs_23, parse_tree__prog_io_item__ContextPieces_26, &parse_tree__prog_io_item__MaybeConstraints_27);
        }
#line 1517 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_27)) == (MR_mktag((MR_Integer) 0))))
#line 1518 "prog_io_item.m"
          {
#line 1518 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));

#line 1519 "prog_io_item.m"
            {
#line 1519 "prog_io_item.m"
              MR_Word base;
#line 1519 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1519 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1519 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_41));
#line 1519 "prog_io_item.m"
            }
#line 1518 "prog_io_item.m"
          }
#line 1517 "prog_io_item.m"
        else
#line 1479 "prog_io_item.m"
          {
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_141_141;
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 2)));
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_31;
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_54_54;
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 0)));
#line 1479 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_27, (MR_Integer) 1)));
#line 1482 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__RetMode0_32;

#line 1480 "prog_io_item.m"
            {
#line 1480 "prog_io_item.m"
              parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1480 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_func_mode_decl_12_p_0_1));
#line 1480 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1480 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_54_54, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_30));
#line 1480 "prog_io_item.m"
            }
#line 7343 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_141_141 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1480 "prog_io_item.m"
            {
#line 1480 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_141_141, parse_tree__prog_io_item__TypeCtorInfo_141_141, parse_tree__prog_io_item__V_54_54, parse_tree__prog_io_item__ArgModes0_25, &parse_tree__prog_io_item__ArgModes_31);
            }
#line 1483 "prog_io_item.m"
            {
#line 1483 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__RetModeTerm_17, &parse_tree__prog_io_item__RetMode0_32);
            }
#line 1482 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1486 "prog_io_item.m"
              {
#line 1486 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__TypeCtorInfo_142_142;
#line 1486 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__RetMode_33;
#line 1486 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_34;
#line 1486 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgReturnModes_35;
#line 1486 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_56_56;

#line 1485 "prog_io_item.m"
                {
#line 1485 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__RetMode0_32, &parse_tree__prog_io_item__RetMode_33);
                }
#line 7375 "parse_tree.prog_io_item.c"
                parse_tree__prog_io_item__TypeCtorInfo_142_142 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1487 "prog_io_item.m"
                {
#line 1487 "prog_io_item.m"
                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_142_142, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__InstVarSet_34);
                }
#line 1488 "prog_io_item.m"
                {
#line 1488 "prog_io_item.m"
                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__RetMode_33));
#line 1488 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "prog_io_item.m"
                }
#line 1488 "prog_io_item.m"
                {
#line 1488 "prog_io_item.m"
                  parse_tree__prog_io_item__ArgReturnModes_35 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_141_141, parse_tree__prog_io_item__ArgModes_31, parse_tree__prog_io_item__V_56_56);
                }
#line 1490 "prog_io_item.m"
                {
#line 1490 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgReturnModes_35);
                }
#line 1489 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1495 "prog_io_item.m"
                  {
#line 1495 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ItemModeDecl_36;
#line 1495 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Item_37;
#line 1495 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_61_61;

#line 1493 "prog_io_item.m"
                    {
#line 1493 "prog_io_item.m"
                      parse_tree__prog_io_item__ItemModeDecl_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[23])));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgReturnModes_35));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_34));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_21));
#line 1493 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_36, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_22));
#line 1493 "prog_io_item.m"
                    }
#line 1496 "prog_io_item.m"
                    {
#line 1496 "prog_io_item.m"
                      parse_tree__prog_io_item__Item_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1496 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_37, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_36));
#line 1496 "prog_io_item.m"
                    }
#line 1497 "prog_io_item.m"
                    {
#line 1497 "prog_io_item.m"
                      parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_37));
#line 1497 "prog_io_item.m"
                    }
#line 1497 "prog_io_item.m"
                    {
#line 1497 "prog_io_item.m"
                      MR_Word base;
#line 1497 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1497 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 1497 "prog_io_item.m"
                    }
#line 1495 "prog_io_item.m"
                  }
#line 1489 "prog_io_item.m"
                else
#line 1499 "prog_io_item.m"
                  {
#line 1499 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FullTermStr_38;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Pieces_39;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_40;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_70_70;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_72_72;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_73_73;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_82_82;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_84_84;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_85_85;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_86_86;
#line 1499 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_89_89;

#line 1499 "prog_io_item.m"
                    {
#line 1499 "prog_io_item.m"
                      parse_tree__prog_io_item__FullTermStr_38 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_142_142, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1503 "prog_io_item.m"
                    {
#line 1503 "prog_io_item.m"
                      parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1503 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (parse_tree__prog_io_item__FullTermStr_38));
#line 1503 "prog_io_item.m"
                    }
#line 1503 "prog_io_item.m"
                    {
#line 1503 "prog_io_item.m"
                      parse_tree__prog_io_item__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 0) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1503 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1503 "prog_io_item.m"
                    }
#line 1502 "prog_io_item.m"
                    {
#line 1502 "prog_io_item.m"
                      parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1502 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (parse_tree__prog_io_item__V_72_72));
#line 1502 "prog_io_item.m"
                    }
#line 1502 "prog_io_item.m"
                    {
#line 1502 "prog_io_item.m"
                      parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[255])));
#line 1502 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1502 "prog_io_item.m"
                    }
#line 1501 "prog_io_item.m"
                    {
#line 1501 "prog_io_item.m"
                      parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[252])));
#line 1501 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 1501 "prog_io_item.m"
                    }
#line 1500 "prog_io_item.m"
                    {
#line 1500 "prog_io_item.m"
                      parse_tree__prog_io_item__Pieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[244])));
#line 1500 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_39, 1) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1500 "prog_io_item.m"
                    }
#line 1505 "prog_io_item.m"
                    {
#line 1505 "prog_io_item.m"
                      parse_tree__prog_io_item__V_84_84 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_142_142, parse_tree__prog_io_item__FullTerm_18);
                    }
#line 1506 "prog_io_item.m"
                    {
#line 1506 "prog_io_item.m"
                      parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1506 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_39));
#line 1506 "prog_io_item.m"
                    }
#line 1506 "prog_io_item.m"
                    {
#line 1506 "prog_io_item.m"
                      parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1506 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_item.m"
                    }
#line 1505 "prog_io_item.m"
                    {
#line 1505 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1505 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1505 "prog_io_item.m"
                    }
#line 1506 "prog_io_item.m"
                    {
#line 1506 "prog_io_item.m"
                      parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 1506 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1506 "prog_io_item.m"
                    }
#line 1504 "prog_io_item.m"
                    {
#line 1504 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1504 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1504 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 1504 "prog_io_item.m"
                    }
#line 1507 "prog_io_item.m"
                    {
#line 1507 "prog_io_item.m"
                      parse_tree__prog_io_item__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1507 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_40));
#line 1507 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1507 "prog_io_item.m"
                    }
#line 1507 "prog_io_item.m"
                    {
#line 1507 "prog_io_item.m"
                      MR_Word base;
#line 1507 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1507 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_89_89));
#line 1507 "prog_io_item.m"
                    }
#line 1499 "prog_io_item.m"
                  }
#line 1486 "prog_io_item.m"
              }
#line 1482 "prog_io_item.m"
            else
#line 1511 "prog_io_item.m"
              {
#line 1511 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_101_101;
#line 1511 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_102_102;
#line 1511 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_103_103;
#line 1511 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_108_108;
#line 1511 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_135;

#line 1513 "prog_io_item.m"
                {
#line 1513 "prog_io_item.m"
                  parse_tree__prog_io_item__V_103_103 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__RetModeTerm_17);
                }
#line 1513 "prog_io_item.m"
                {
#line 1513 "prog_io_item.m"
                  parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1513 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 1513 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[256])));
#line 1513 "prog_io_item.m"
                }
#line 1514 "prog_io_item.m"
                {
#line 1514 "prog_io_item.m"
                  parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1514 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1514 "prog_io_item.m"
                }
#line 1512 "prog_io_item.m"
                {
#line 1512 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1512 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1512 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 2) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 1512 "prog_io_item.m"
                }
#line 1515 "prog_io_item.m"
                {
#line 1515 "prog_io_item.m"
                  parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1515 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_135));
#line 1515 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1515 "prog_io_item.m"
                }
#line 1515 "prog_io_item.m"
                {
#line 1515 "prog_io_item.m"
                  MR_Word base;
#line 1515 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1515 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 1515 "prog_io_item.m"
                }
#line 1511 "prog_io_item.m"
              }
#line 1479 "prog_io_item.m"
          }
#line 1475 "prog_io_item.m"
      }
#line 1471 "prog_io_item.m"
    else
#line 1523 "prog_io_item.m"
      {
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_145_145 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1523 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__FuncModeStr_42;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_112_112;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_115_115;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_116_116;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_125_125;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_126_126;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_127_127;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_128_128;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_129_129;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_132_132;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_136;
#line 1523 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_137;

#line 1523 "prog_io_item.m"
        {
#line 1523 "prog_io_item.m"
          parse_tree__prog_io_item__FuncModeStr_42 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1526 "prog_io_item.m"
        {
#line 1526 "prog_io_item.m"
          parse_tree__prog_io_item__V_116_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_116_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1526 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_116_116, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncModeStr_42));
#line 1526 "prog_io_item.m"
        }
#line 1526 "prog_io_item.m"
        {
#line 1526 "prog_io_item.m"
          parse_tree__prog_io_item__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 0) = ((MR_Box) (parse_tree__prog_io_item__V_116_116));
#line 1526 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1526 "prog_io_item.m"
        }
#line 1525 "prog_io_item.m"
        {
#line 1525 "prog_io_item.m"
          parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[257])));
#line 1525 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__V_115_115));
#line 1525 "prog_io_item.m"
        }
#line 1524 "prog_io_item.m"
        {
#line 1524 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_136, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[237])));
#line 1524 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_136, 1) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 1524 "prog_io_item.m"
        }
#line 1528 "prog_io_item.m"
        {
#line 1528 "prog_io_item.m"
          parse_tree__prog_io_item__V_127_127 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_145_145, parse_tree__prog_io_item__FuncMode_16);
        }
#line 1528 "prog_io_item.m"
        {
#line 1528 "prog_io_item.m"
          parse_tree__prog_io_item__V_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_129_129, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_136));
#line 1528 "prog_io_item.m"
        }
#line 1528 "prog_io_item.m"
        {
#line 1528 "prog_io_item.m"
          parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__V_129_129));
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1528 "prog_io_item.m"
        }
#line 1528 "prog_io_item.m"
        {
#line 1528 "prog_io_item.m"
          parse_tree__prog_io_item__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_126_126, 0) = ((MR_Box) (parse_tree__prog_io_item__V_127_127));
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_126_126, 1) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 1528 "prog_io_item.m"
        }
#line 1528 "prog_io_item.m"
        {
#line 1528 "prog_io_item.m"
          parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__V_126_126));
#line 1528 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1528 "prog_io_item.m"
        }
#line 1527 "prog_io_item.m"
        {
#line 1527 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1527 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_137, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1527 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1527 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_137, 2) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 1527 "prog_io_item.m"
        }
#line 1529 "prog_io_item.m"
        {
#line 1529 "prog_io_item.m"
          parse_tree__prog_io_item__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_137));
#line 1529 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_132_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1529 "prog_io_item.m"
        }
#line 1529 "prog_io_item.m"
        {
#line 1529 "prog_io_item.m"
          MR_Word base;
#line 1529 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1529 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_132_132));
#line 1529 "prog_io_item.m"
        }
#line 1523 "prog_io_item.m"
      }
#line 1471 "prog_io_item.m"
  }
#line 1463 "prog_io_item.m"
}

#line 1419 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1(
#line 1419 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1419 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1419 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1419 "prog_io_item.m"
{
#line 1419 "prog_io_item.m"
  {
#line 1419 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1419 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__3_3;

#line 1419 "prog_io_item.m"
    {
#line 1419 "prog_io_item.m"
      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__3_3);
    }
#line 1419 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__3_3));
#line 1419 "prog_io_item.m"
  }
#line 1419 "prog_io_item.m"
}

#line 1403 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Functor_12,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_13,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredModeTerm_15,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_16,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_17,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_18,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_19,
#line 1403 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_20,
#line 1403 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_21,
#line 1403 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_22)
#line 1403 "prog_io_item.m"
{
#line 1410 "prog_io_item.m"
  {
#line 1410 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1410 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgModes0_23;

#line 1411 "prog_io_item.m"
    {
#line 1411 "prog_io_item.m"
      parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_list_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__ArgTerms_13, &parse_tree__prog_io_item__ArgModes0_23);
    }
#line 1410 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1414 "prog_io_item.m"
      {
#line 1414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ContextPieces_24;
#line 1414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeConstraints_25;

#line 1413 "prog_io_item.m"
        {
#line 1413 "prog_io_item.m"
          parse_tree__prog_io_item__ContextPieces_24 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[169]));
        }
#line 1415 "prog_io_item.m"
        {
#line 1415 "prog_io_item.m"
          parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__QuantConstrAttrs_21, parse_tree__prog_io_item__ContextPieces_24, &parse_tree__prog_io_item__MaybeConstraints_25);
        }
#line 1450 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeConstraints_25)) == (MR_mktag((MR_Integer) 0))))
#line 1451 "prog_io_item.m"
          {
#line 1451 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));

#line 1452 "prog_io_item.m"
            {
#line 1452 "prog_io_item.m"
              MR_Word base;
#line 1452 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_22 = base;
#line 1452 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_38));
#line 1452 "prog_io_item.m"
            }
#line 1451 "prog_io_item.m"
          }
#line 1450 "prog_io_item.m"
        else
#line 1418 "prog_io_item.m"
          {
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_115_115;
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_116_116;
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstConstraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 2)));
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgModes_29;
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_30;
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_50_50;
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 0)));
#line 1418 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeConstraints_25, (MR_Integer) 1)));

#line 1419 "prog_io_item.m"
            {
#line 1419 "prog_io_item.m"
              parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[1]));
#line 1419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0_1));
#line 1419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1419 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 3) = ((MR_Box) (parse_tree__prog_io_item__InstConstraints_28));
#line 1419 "prog_io_item.m"
            }
#line 8030 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1419 "prog_io_item.m"
            {
#line 1419 "prog_io_item.m"
              mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_115_115, parse_tree__prog_io_item__TypeCtorInfo_115_115, parse_tree__prog_io_item__V_50_50, parse_tree__prog_io_item__ArgModes0_23, &parse_tree__prog_io_item__ArgModes_29);
            }
#line 8037 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_116_116 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1421 "prog_io_item.m"
            {
#line 1421 "prog_io_item.m"
              mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_116_116, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_16, &parse_tree__prog_io_item__InstVarSet_30);
            }
#line 1423 "prog_io_item.m"
            {
#line 1423 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_are_self_consistent_in_modes_1_p_0(parse_tree__prog_io_item__ArgModes_29);
            }
#line 1422 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1433 "prog_io_item.m"
              {
#line 1433 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePredOrFunc_31;
#line 1433 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemModeDecl_33;
#line 1433 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_34;
#line 1433 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_52_52;

#line 1428 "prog_io_item.m"
                if ((parse_tree__prog_io_item__WithInst_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1426 "prog_io_item.m"
                  {
#line 1427 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[22]);
#line 1426 "prog_io_item.m"
                  }
#line 1428 "prog_io_item.m"
                else
#line 1432 "prog_io_item.m"
                  parse_tree__prog_io_item__MaybePredOrFunc_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "prog_io_item.m"
                {
#line 1434 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_12));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePredOrFunc_31));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_29));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_17));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_18));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_30));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_19));
#line 1434 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_20));
#line 1434 "prog_io_item.m"
                }
#line 1437 "prog_io_item.m"
                {
#line 1437 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1437 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_34, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemModeDecl_33));
#line 1437 "prog_io_item.m"
                }
#line 1438 "prog_io_item.m"
                {
#line 1438 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1438 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 1438 "prog_io_item.m"
                }
#line 1438 "prog_io_item.m"
                {
#line 1438 "prog_io_item.m"
                  MR_Word base;
#line 1438 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1438 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_22 = base;
#line 1438 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1438 "prog_io_item.m"
                }
#line 1433 "prog_io_item.m"
              }
#line 1422 "prog_io_item.m"
            else
#line 1440 "prog_io_item.m"
              {
#line 1440 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredModeTermStr_35;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_36;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_37;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_55_55;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_58_58;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_61_61;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_63_63;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_64_64;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_73_73;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_74_74;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_75_75;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_76_76;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_77_77;
#line 1440 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_80_80;

#line 1440 "prog_io_item.m"
                {
#line 1440 "prog_io_item.m"
                  parse_tree__prog_io_item__PredModeTermStr_35 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_116_116, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1444 "prog_io_item.m"
                {
#line 1444 "prog_io_item.m"
                  parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1444 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_64_64, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_35));
#line 1444 "prog_io_item.m"
                }
#line 1444 "prog_io_item.m"
                {
#line 1444 "prog_io_item.m"
                  parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 1444 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1444 "prog_io_item.m"
                }
#line 1443 "prog_io_item.m"
                {
#line 1443 "prog_io_item.m"
                  parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1443 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 1443 "prog_io_item.m"
                }
#line 1443 "prog_io_item.m"
                {
#line 1443 "prog_io_item.m"
                  parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[253])));
#line 1443 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 1443 "prog_io_item.m"
                }
#line 1442 "prog_io_item.m"
                {
#line 1442 "prog_io_item.m"
                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[252])));
#line 1442 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 1442 "prog_io_item.m"
                }
#line 1441 "prog_io_item.m"
                {
#line 1441 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[244])));
#line 1441 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_36, 1) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1441 "prog_io_item.m"
                }
#line 1446 "prog_io_item.m"
                {
#line 1446 "prog_io_item.m"
                  parse_tree__prog_io_item__V_75_75 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_116_116, parse_tree__prog_io_item__PredModeTerm_15);
                }
#line 1447 "prog_io_item.m"
                {
#line 1447 "prog_io_item.m"
                  parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1447 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_36));
#line 1447 "prog_io_item.m"
                }
#line 1447 "prog_io_item.m"
                {
#line 1447 "prog_io_item.m"
                  parse_tree__prog_io_item__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 0) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 1447 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "prog_io_item.m"
                }
#line 1446 "prog_io_item.m"
                {
#line 1446 "prog_io_item.m"
                  parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1446 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 1446 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (parse_tree__prog_io_item__V_76_76));
#line 1446 "prog_io_item.m"
                }
#line 1447 "prog_io_item.m"
                {
#line 1447 "prog_io_item.m"
                  parse_tree__prog_io_item__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_73_73, 0) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 1447 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1447 "prog_io_item.m"
                }
#line 1445 "prog_io_item.m"
                {
#line 1445 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1445 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1445 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_37, 2) = ((MR_Box) (parse_tree__prog_io_item__V_73_73));
#line 1445 "prog_io_item.m"
                }
#line 1448 "prog_io_item.m"
                {
#line 1448 "prog_io_item.m"
                  parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_37));
#line 1448 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1448 "prog_io_item.m"
                }
#line 1448 "prog_io_item.m"
                {
#line 1448 "prog_io_item.m"
                  MR_Word base;
#line 1448 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1448 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_22 = base;
#line 1448 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1448 "prog_io_item.m"
                }
#line 1440 "prog_io_item.m"
              }
#line 1418 "prog_io_item.m"
          }
#line 1414 "prog_io_item.m"
      }
#line 1410 "prog_io_item.m"
    else
#line 1455 "prog_io_item.m"
      {
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_118_118 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_84_84;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_87_87;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_100_100;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_101_101;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_102_102;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_103_103;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_104_104;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_107_107;
#line 1455 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__PredModeTermStr_109;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_110;
#line 1455 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_111;

#line 1455 "prog_io_item.m"
        {
#line 1455 "prog_io_item.m"
          parse_tree__prog_io_item__PredModeTermStr_109 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_118_118, parse_tree__prog_io_item__VarSet_16, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1457 "prog_io_item.m"
        {
#line 1457 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (parse_tree__prog_io_item__PredModeTermStr_109));
#line 1457 "prog_io_item.m"
        }
#line 1457 "prog_io_item.m"
        {
#line 1457 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1457 "prog_io_item.m"
        }
#line 1457 "prog_io_item.m"
        {
#line 1457 "prog_io_item.m"
          parse_tree__prog_io_item__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[239])));
#line 1457 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_87_87, 1) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1457 "prog_io_item.m"
        }
#line 1456 "prog_io_item.m"
        {
#line 1456 "prog_io_item.m"
          parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[254])));
#line 1456 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (parse_tree__prog_io_item__V_87_87));
#line 1456 "prog_io_item.m"
        }
#line 1456 "prog_io_item.m"
        {
#line 1456 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[234])));
#line 1456 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_110, 1) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1456 "prog_io_item.m"
        }
#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__V_102_102 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_118_118, parse_tree__prog_io_item__PredModeTerm_15);
        }
#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_110));
#line 1459 "prog_io_item.m"
        }
#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1459 "prog_io_item.m"
        }
#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 1459 "prog_io_item.m"
        }
#line 1459 "prog_io_item.m"
        {
#line 1459 "prog_io_item.m"
          parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 1459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1459 "prog_io_item.m"
        }
#line 1458 "prog_io_item.m"
        {
#line 1458 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_111, 2) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 1458 "prog_io_item.m"
        }
#line 1460 "prog_io_item.m"
        {
#line 1460 "prog_io_item.m"
          parse_tree__prog_io_item__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1460 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_111));
#line 1460 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1460 "prog_io_item.m"
        }
#line 1460 "prog_io_item.m"
        {
#line 1460 "prog_io_item.m"
          MR_Word base;
#line 1460 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1460 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_22 = base;
#line 1460 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_107_107));
#line 1460 "prog_io_item.m"
        }
#line 1455 "prog_io_item.m"
      }
#line 1410 "prog_io_item.m"
  }
#line 1403 "prog_io_item.m"
}

#line 1344 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_13,
#line 1344 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_14,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_15,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_16,
#line 1344 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_17,
#line 1344 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_18)
#line 1344 "prog_io_item.m"
{
#line 1350 "prog_io_item.m"
  {
#line 1350 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1350 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_19;
#line 1350 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnTypeTerm_20;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 1351 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_35_35;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 1351 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 1352 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;

#line 1351 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
      {
#line 1352 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1352 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
          {
#line 1352 "prog_io_item.m"
            parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1352 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1352 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 0)));
#line 1352 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1352 "prog_io_item.m"
              {
#line 1352 "prog_io_item.m"
                parse_tree__prog_io_item__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 1352 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_35_35, (MR_String) "=") == 0);
#line 1351 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1351 "prog_io_item.m"
                  {
#line 1353 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1353 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1353 "prog_io_item.m"
                      {
#line 1353 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 1353 "prog_io_item.m"
                        parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_36_36, (MR_Integer) 1)));
#line 1353 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 1353 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1353 "prog_io_item.m"
                          {
#line 1353 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTypeTerm_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 1353 "prog_io_item.m"
                            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 1)));
#line 1353 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "prog_io_item.m"
                          }
#line 1353 "prog_io_item.m"
                      }
#line 1351 "prog_io_item.m"
                  }
#line 1352 "prog_io_item.m"
              }
#line 1352 "prog_io_item.m"
          }
#line 1351 "prog_io_item.m"
      }
#line 1350 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1355 "prog_io_item.m"
      {
#line 1355 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_39_39;
#line 1355 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_40_40;
#line 1355 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1355 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 1355 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeSugaredFuncTerm_19)) == (MR_mktag((MR_Integer) 0)));
#line 1355 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1355 "prog_io_item.m"
          {
#line 1355 "prog_io_item.m"
            parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeSugaredFuncTerm_19, (MR_Integer) 0)));
#line 1355 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeSugaredFuncTerm_19, (MR_Integer) 1)));
#line 1355 "prog_io_item.m"
            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeSugaredFuncTerm_19, (MR_Integer) 2)));
#line 1355 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 0)));
#line 1355 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1355 "prog_io_item.m"
              {
#line 1355 "prog_io_item.m"
                parse_tree__prog_io_item__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 1355 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_40_40, (MR_String) "") == 0);
#line 1355 "prog_io_item.m"
              }
#line 1355 "prog_io_item.m"
          }
#line 1355 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1358 "prog_io_item.m"
          {
#line 1358 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 1358 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_51_51;
#line 1358 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_52_52;
#line 1358 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_53_53;
#line 1358 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_58_58;

#line 1360 "prog_io_item.m"
            {
#line 1360 "prog_io_item.m"
              parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
            }
#line 1360 "prog_io_item.m"
            {
#line 1360 "prog_io_item.m"
              parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1360 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[250])));
#line 1360 "prog_io_item.m"
            }
#line 1361 "prog_io_item.m"
            {
#line 1361 "prog_io_item.m"
              parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1361 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "prog_io_item.m"
            }
#line 1359 "prog_io_item.m"
            {
#line 1359 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1359 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1359 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1359 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1362 "prog_io_item.m"
            }
#line 1362 "prog_io_item.m"
            {
#line 1362 "prog_io_item.m"
              MR_Word base;
#line 1362 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1362 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 1362 "prog_io_item.m"
            }
#line 1358 "prog_io_item.m"
          }
#line 1355 "prog_io_item.m"
        else
#line 1364 "prog_io_item.m"
          {
#line 1364 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_26;
#line 1364 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ContextPieces_27;
#line 1364 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_28;

#line 1364 "prog_io_item.m"
            {
#line 1364 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_26 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_19);
            }
#line 1365 "prog_io_item.m"
            {
#line 1365 "prog_io_item.m"
              parse_tree__prog_io_item__ContextPieces_27 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[163]));
            }
#line 1367 "prog_io_item.m"
            {
#line 1367 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__ContextPieces_27, &parse_tree__prog_io_item__MaybeFunctorArgs_28);
            }
#line 1372 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_28)) == (MR_mktag((MR_Integer) 0))))
#line 1370 "prog_io_item.m"
              {
#line 1370 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_28, (MR_Integer) 0)));

#line 1371 "prog_io_item.m"
                {
#line 1371 "prog_io_item.m"
                  MR_Word base;
#line 1371 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1371 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1371 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_29));
#line 1371 "prog_io_item.m"
                }
#line 1370 "prog_io_item.m"
              }
#line 1372 "prog_io_item.m"
            else
#line 1373 "prog_io_item.m"
              {
#line 1373 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Functor_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_28, (MR_Integer) 0)));
#line 1373 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_28, (MR_Integer) 1)));

#line 1374 "prog_io_item.m"
                {
#line 1374 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_func_mode_decl_12_p_0(parse_tree__prog_io_item__Functor_30, parse_tree__prog_io_item__ArgTerms_31, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_26, parse_tree__prog_io_item__ReturnTypeTerm_20, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_16, parse_tree__prog_io_item__Context_13, parse_tree__prog_io_item__SeqNum_14, parse_tree__prog_io_item__QuantConstrAttrs_17, parse_tree__prog_io_item__MaybeIOM_18);
                }
#line 1373 "prog_io_item.m"
              }
#line 1364 "prog_io_item.m"
          }
#line 1355 "prog_io_item.m"
      }
#line 1350 "prog_io_item.m"
    else
#line 1380 "prog_io_item.m"
      {
#line 1380 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_70_70;
#line 1380 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_71_71;
#line 1380 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;
#line 1380 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;

#line 1380 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1380 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1380 "prog_io_item.m"
          {
#line 1380 "prog_io_item.m"
            parse_tree__prog_io_item__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1380 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1380 "prog_io_item.m"
            parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1380 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_70_70)) == (MR_mktag((MR_Integer) 0)));
#line 1380 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1380 "prog_io_item.m"
              {
#line 1380 "prog_io_item.m"
                parse_tree__prog_io_item__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_70_70, (MR_Integer) 0)));
#line 1380 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_71_71, (MR_String) "") == 0);
#line 1380 "prog_io_item.m"
              }
#line 1380 "prog_io_item.m"
          }
#line 1380 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1382 "prog_io_item.m"
          {
#line 1382 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_82_82;
#line 1382 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_83_83;
#line 1382 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1382 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_89_89;
#line 1382 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_102;

#line 1384 "prog_io_item.m"
            {
#line 1384 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_12);
            }
#line 1384 "prog_io_item.m"
            {
#line 1384 "prog_io_item.m"
              parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1384 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[251])));
#line 1384 "prog_io_item.m"
            }
#line 1384 "prog_io_item.m"
            {
#line 1384 "prog_io_item.m"
              parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 1384 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1384 "prog_io_item.m"
            }
#line 1383 "prog_io_item.m"
            {
#line 1383 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_102, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1383 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1383 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_102, 2) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 1383 "prog_io_item.m"
            }
#line 1385 "prog_io_item.m"
            {
#line 1385 "prog_io_item.m"
              parse_tree__prog_io_item__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1385 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_102));
#line 1385 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1385 "prog_io_item.m"
            }
#line 1385 "prog_io_item.m"
            {
#line 1385 "prog_io_item.m"
              MR_Word base;
#line 1385 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1385 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1385 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_89_89));
#line 1385 "prog_io_item.m"
            }
#line 1382 "prog_io_item.m"
          }
#line 1380 "prog_io_item.m"
        else
#line 1388 "prog_io_item.m"
          {
#line 1388 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ContextPieces_109;
#line 1388 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFunctorArgs_110;

#line 1387 "prog_io_item.m"
            {
#line 1387 "prog_io_item.m"
              parse_tree__prog_io_item__ContextPieces_109 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[167]));
            }
#line 1389 "prog_io_item.m"
            {
#line 1389 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__ContextPieces_109, &parse_tree__prog_io_item__MaybeFunctorArgs_110);
            }
#line 1394 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctorArgs_110)) == (MR_mktag((MR_Integer) 0))))
#line 1392 "prog_io_item.m"
              {
#line 1392 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctorArgs_110, (MR_Integer) 0)));

#line 1393 "prog_io_item.m"
                {
#line 1393 "prog_io_item.m"
                  MR_Word base;
#line 1393 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1393 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_103));
#line 1393 "prog_io_item.m"
                }
#line 1392 "prog_io_item.m"
              }
#line 1394 "prog_io_item.m"
            else
#line 1395 "prog_io_item.m"
              {
#line 1395 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Functor_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_110, (MR_Integer) 0)));
#line 1395 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctorArgs_110, (MR_Integer) 1)));

#line 1396 "prog_io_item.m"
                {
#line 1396 "prog_io_item.m"
                  parse_tree__prog_io_item__parse_pred_mode_decl_11_p_0(parse_tree__prog_io_item__Functor_104, parse_tree__prog_io_item__ArgTerms_105, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__WithInst_15, parse_tree__prog_io_item__MaybeDet_16, parse_tree__prog_io_item__Context_13, parse_tree__prog_io_item__SeqNum_14, parse_tree__prog_io_item__QuantConstrAttrs_17, parse_tree__prog_io_item__MaybeIOM_18);
                }
#line 1395 "prog_io_item.m"
              }
#line 1388 "prog_io_item.m"
          }
#line 1380 "prog_io_item.m"
      }
#line 1350 "prog_io_item.m"
  }
#line 1344 "prog_io_item.m"
}

#line 1311 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_decl_7_p_0(
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_10,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_11,
#line 1311 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_12,
#line 1311 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_13,
#line 1311 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 1311 "prog_io_item.m"
{
#line 1316 "prog_io_item.m"
  {
#line 1316 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1316 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1316 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_16;
#line 1316 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeWithInst_18;
#line 1316 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BaseTerm_19;
#line 1864 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1864 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstTerm_59;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_64_64;
#line 1865 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_65_65;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_66_66;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_67_67;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1865 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeDetism_20;
#line 1321 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithInst_21;

#line 1317 "prog_io_item.m"
    {
#line 1317 "prog_io_item.m"
      parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Term_10, &parse_tree__prog_io_item__BeforeDetismTerm_15, &parse_tree__prog_io_item__MaybeMaybeDetism_16);
    }
#line 1865 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__BeforeDetismTerm_15)) == (MR_mktag((MR_Integer) 0)));
#line 1865 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
      {
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 0)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 1)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BeforeDetismTerm_15, (MR_Integer) 2)));
#line 1865 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_64_64)) == (MR_mktag((MR_Integer) 0)));
#line 1865 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
          {
#line 1865 "prog_io_item.m"
            parse_tree__prog_io_item__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, (MR_Integer) 0)));
#line 1865 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_65_65, (MR_String) "with_inst") == 0);
#line 1865 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1865 "prog_io_item.m"
              {
#line 1866 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1866 "prog_io_item.m"
                  {
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__BeforeWithInstTermPrime_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 0)));
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_66_66, (MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1866 "prog_io_item.m"
                      {
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__InstTerm_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 0)));
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, (MR_Integer) 1)));
#line 1866 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1866 "prog_io_item.m"
                      }
#line 1866 "prog_io_item.m"
                  }
#line 1865 "prog_io_item.m"
              }
#line 1865 "prog_io_item.m"
          }
#line 1865 "prog_io_item.m"
      }
#line 1864 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1868 "prog_io_item.m"
      {
#line 1872 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Inst_61;

#line 1868 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeWithInstTermPrime_58;
#line 1872 "prog_io_item.m"
        {
#line 1872 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_inst_3_p_0((MR_Integer) 0, parse_tree__prog_io_item__InstTerm_59, &parse_tree__prog_io_item__Inst_61);
        }
#line 1872 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1873 "prog_io_item.m"
          {
#line 1873 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_70_70;

#line 1873 "prog_io_item.m"
            {
#line 1873 "prog_io_item.m"
              parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__Inst_61));
#line 1873 "prog_io_item.m"
            }
#line 1873 "prog_io_item.m"
            {
#line 1873 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1873 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1873 "prog_io_item.m"
            }
#line 1873 "prog_io_item.m"
          }
#line 1872 "prog_io_item.m"
        else
#line 1876 "prog_io_item.m"
          {
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_63;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_84_84;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_85_85;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 1876 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_91_91;

#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__InstTerm_59);
            }
#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[249])));
#line 1878 "prog_io_item.m"
            }
#line 1878 "prog_io_item.m"
            {
#line 1878 "prog_io_item.m"
              parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1878 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1878 "prog_io_item.m"
            }
#line 1877 "prog_io_item.m"
            {
#line 1877 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1877 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_63, 2) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 1877 "prog_io_item.m"
            }
#line 1879 "prog_io_item.m"
            {
#line 1879 "prog_io_item.m"
              parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_63));
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1879 "prog_io_item.m"
            }
#line 1879 "prog_io_item.m"
            {
#line 1879 "prog_io_item.m"
              parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1879 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeWithInst_18, 0) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 1879 "prog_io_item.m"
            }
#line 1876 "prog_io_item.m"
          }
#line 1868 "prog_io_item.m"
      }
#line 1864 "prog_io_item.m"
    else
#line 1882 "prog_io_item.m"
      {
#line 1882 "prog_io_item.m"
        parse_tree__prog_io_item__BaseTerm_19 = parse_tree__prog_io_item__BeforeDetismTerm_15;
#line 1883 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeWithInst_18 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[19]);
#line 1882 "prog_io_item.m"
      }
#line 1322 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_16)) == (MR_mktag((MR_Integer) 1)));
#line 1322 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1322 "prog_io_item.m"
      {
#line 1322 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeDetism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_16, (MR_Integer) 0)));
#line 1323 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 1323 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1323 "prog_io_item.m"
          parse_tree__prog_io_item__WithInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_18, (MR_Integer) 0)));
#line 1322 "prog_io_item.m"
      }
#line 1321 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1325 "prog_io_item.m"
      {
#line 1326 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1327 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;

#line 1326 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_20)) == (MR_mktag((MR_Integer) 1)));
#line 1326 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1326 "prog_io_item.m"
          {
#line 1326 "prog_io_item.m"
            parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_20, (MR_Integer) 0)));
#line 1327 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_21)) == (MR_mktag((MR_Integer) 1)));
#line 1327 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1327 "prog_io_item.m"
              parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_21, (MR_Integer) 0)));
#line 1326 "prog_io_item.m"
          }
#line 1325 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1330 "prog_io_item.m"
          {
#line 1330 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_25;
#line 1330 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_40_40;
#line 1330 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 1330 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_42_42;
#line 1330 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 1332 "prog_io_item.m"
            {
#line 1332 "prog_io_item.m"
              parse_tree__prog_io_item__V_42_42 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_10);
            }
#line 1332 "prog_io_item.m"
            {
#line 1332 "prog_io_item.m"
              parse_tree__prog_io_item__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1332 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 0) = ((MR_Box) (parse_tree__prog_io_item__V_42_42));
#line 1332 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[224])));
#line 1332 "prog_io_item.m"
            }
#line 1332 "prog_io_item.m"
            {
#line 1332 "prog_io_item.m"
              parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1332 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__V_41_41));
#line 1332 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1332 "prog_io_item.m"
            }
#line 1331 "prog_io_item.m"
            {
#line 1331 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1331 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1331 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 1331 "prog_io_item.m"
            }
#line 1333 "prog_io_item.m"
            {
#line 1333 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 1333 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1333 "prog_io_item.m"
            }
#line 1333 "prog_io_item.m"
            {
#line 1333 "prog_io_item.m"
              MR_Word base;
#line 1333 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 1333 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1333 "prog_io_item.m"
            }
#line 1330 "prog_io_item.m"
          }
#line 1325 "prog_io_item.m"
        else
#line 1335 "prog_io_item.m"
          {
#line 1335 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__BaseTerm_19, parse_tree__prog_io_item__Context_11, parse_tree__prog_io_item__SeqNum_12, parse_tree__prog_io_item__WithInst_21, parse_tree__prog_io_item__MaybeDetism_20, parse_tree__prog_io_item__QuantConstrAttrs_13, parse_tree__prog_io_item__MaybeIOM_14);
          }
#line 1325 "prog_io_item.m"
      }
#line 1321 "prog_io_item.m"
    else
#line 1340 "prog_io_item.m"
      {
#line 1340 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_26;
#line 1340 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 1340 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 1339 "prog_io_item.m"
        {
#line 1339 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_16);
        }
#line 1340 "prog_io_item.m"
        {
#line 1340 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_18);
        }
#line 1340 "prog_io_item.m"
        {
#line 1340 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_49_49, parse_tree__prog_io_item__V_50_50);
        }
#line 1341 "prog_io_item.m"
        {
#line 1341 "prog_io_item.m"
          MR_Word base;
#line 1341 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 1341 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_26));
#line 1341 "prog_io_item.m"
        }
#line 1340 "prog_io_item.m"
      }
#line 1316 "prog_io_item.m"
  }
#line 1311 "prog_io_item.m"
}

#line 1302 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__wrap_nth_2_p_0(
#line 1302 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__N_3,
#line 1302 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__2_2)
#line 1302 "prog_io_item.m"
{
#line 1304 "prog_io_item.m"
  {
#line 1304 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1304 "prog_io_item.m"
    {
#line 1304 "prog_io_item.m"
      MR_Word base;
#line 1304 "prog_io_item.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "prog_io_item.m"
      *parse_tree__prog_io_item__HeadVar__2_2 = base;
#line 1304 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1304 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__prog_io_item__N_3));
#line 1304 "prog_io_item.m"
    }
#line 1304 "prog_io_item.m"
  }
#line 1302 "prog_io_item.m"
}

#line 1284 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(
#line 1284 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__ArgNum_1,
#line 1284 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1284 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3,
#line 1284 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__4_4)
#line 1284 "prog_io_item.m"
{
#line 1287 "prog_io_item.m"
  {
#line 1287 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1287 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "prog_io_item.m"
      {
#line 1287 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1287 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1287 "prog_io_item.m"
      }
#line 1287 "prog_io_item.m"
    else
#line 1289 "prog_io_item.m"
      {
#line 1289 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1289 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1289 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1289 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1289 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_16_16 = (parse_tree__prog_io_item__ArgNum_1 + (MR_Integer) 1);

#line 1290 "prog_io_item.m"
        {
#line 1290 "prog_io_item.m"
          parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0(parse_tree__prog_io_item__V_16_16, parse_tree__prog_io_item__Tail_8, &parse_tree__prog_io_item__WithModeArgNums0_11, &parse_tree__prog_io_item__WithoutModeArgNums0_12);
        }
#line 1296 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__Head_7)) == (MR_mktag((MR_Integer) 1))))
#line 1297 "prog_io_item.m"
          {
#line 1298 "prog_io_item.m"
            {
#line 1298 "prog_io_item.m"
              MR_Word base;
#line 1298 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1298 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1298 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithModeArgNums0_11));
#line 1298 "prog_io_item.m"
            }
#line 1299 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__4_4 = parse_tree__prog_io_item__WithoutModeArgNums0_12;
#line 1297 "prog_io_item.m"
          }
#line 1296 "prog_io_item.m"
        else
#line 1293 "prog_io_item.m"
          {
#line 1294 "prog_io_item.m"
            *parse_tree__prog_io_item__HeadVar__3_3 = parse_tree__prog_io_item__WithModeArgNums0_11;
#line 1295 "prog_io_item.m"
            {
#line 1295 "prog_io_item.m"
              MR_Word base;
#line 1295 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "prog_io_item.m"
              *parse_tree__prog_io_item__HeadVar__4_4 = base;
#line 1295 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgNum_1));
#line 1295 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutModeArgNums0_12));
#line 1295 "prog_io_item.m"
            }
#line 1293 "prog_io_item.m"
          }
#line 1289 "prog_io_item.m"
      }
#line 1287 "prog_io_item.m"
  }
#line 1284 "prog_io_item.m"
}

#line 1271 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0_1(
#line 1271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 1271 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 1271 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 1271 "prog_io_item.m"
{
#line 1271 "prog_io_item.m"
  {
#line 1271 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 1271 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_2;

#line 1271 "prog_io_item.m"
    {
#line 1271 "prog_io_item.m"
      parse_tree__prog_io_item__wrap_nth_2_p_0(((MR_Integer) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_2);
    }
#line 1271 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_2));
#line 1271 "prog_io_item.m"
  }
#line 1271 "prog_io_item.m"
}

#line 1240 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(
#line 1240 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__TypesAndModes_4,
#line 1240 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ErrorTerm_5,
#line 1240 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeSpec_6)
#line 1240 "prog_io_item.m"
{
#line 1243 "prog_io_item.m"
  {
#line 1243 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1243 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithModeArgNums_7;
#line 1243 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__WithoutModeArgNums_8;

#line 1244 "prog_io_item.m"
    {
#line 1244 "prog_io_item.m"
      parse_tree__prog_io_item__classify_type_and_mode_list_4_p_0((MR_Integer) 1, parse_tree__prog_io_item__TypesAndModes_4, &parse_tree__prog_io_item__WithModeArgNums_7, &parse_tree__prog_io_item__WithoutModeArgNums_8);
    }
#line 1251 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithModeArgNums_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "prog_io_item.m"
      if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1247 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1251 "prog_io_item.m"
      else
#line 1255 "prog_io_item.m"
        *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1251 "prog_io_item.m"
    else
#line 1251 "prog_io_item.m"
    if ((parse_tree__prog_io_item__WithoutModeArgNums_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1260 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeSpec_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1251 "prog_io_item.m"
    else
#line 1262 "prog_io_item.m"
      {
#line 1262 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__FirstWithout_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 0)));
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__RestWithout_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithoutModeArgNums_8, (MR_Integer) 1)));
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IdPieces_17;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_22;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_23;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_53_53;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 1262 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 1269 "prog_io_item.m"
        if ((parse_tree__prog_io_item__RestWithout_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1266 "prog_io_item.m"
          {
#line 1266 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_37_37;
#line 1266 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 1268 "prog_io_item.m"
            {
#line 1268 "prog_io_item.m"
              parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1268 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__FirstWithout_15));
#line 1268 "prog_io_item.m"
            }
#line 1268 "prog_io_item.m"
            {
#line 1268 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 1268 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1268 "prog_io_item.m"
            }
#line 1267 "prog_io_item.m"
            {
#line 1267 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1267 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[246])));
#line 1267 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IdPieces_17, 1) = ((MR_Box) (parse_tree__prog_io_item__V_37_37));
#line 1267 "prog_io_item.m"
            }
#line 1266 "prog_io_item.m"
          }
#line 1269 "prog_io_item.m"
        else
#line 1270 "prog_io_item.m"
          {
#line 1270 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1270 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumPieces_20;
#line 1270 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithoutArgNumsPieces_21;
#line 1270 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_26_26;

#line 1271 "prog_io_item.m"
            {
#line 1271 "prog_io_item.m"
              mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, parse_tree__prog_io_item__TypeCtorInfo_61_61, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[2], parse_tree__prog_io_item__WithoutModeArgNums_8, &parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1272 "prog_io_item.m"
            {
#line 1272 "prog_io_item.m"
              parse_tree__prog_io_item__WithoutArgNumsPieces_21 = parse_tree__error_util__component_list_to_pieces_1_f_0(parse_tree__prog_io_item__WithoutArgNumPieces_20);
            }
#line 1274 "prog_io_item.m"
            {
#line 1274 "prog_io_item.m"
              parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[247])));
#line 1274 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, 1) = ((MR_Box) (parse_tree__prog_io_item__WithoutArgNumsPieces_21));
#line 1274 "prog_io_item.m"
            }
#line 1275 "prog_io_item.m"
            {
#line 1275 "prog_io_item.m"
              parse_tree__prog_io_item__IdPieces_17 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_61_61, parse_tree__prog_io_item__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76]));
            }
#line 1270 "prog_io_item.m"
          }
#line 1278 "prog_io_item.m"
        {
#line 1278 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1278 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__IdPieces_17));
#line 1278 "prog_io_item.m"
        }
#line 1277 "prog_io_item.m"
        {
#line 1277 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[248])));
#line 1277 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 1277 "prog_io_item.m"
        }
#line 1280 "prog_io_item.m"
        {
#line 1280 "prog_io_item.m"
          parse_tree__prog_io_item__V_53_53 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ErrorTerm_5);
        }
#line 1280 "prog_io_item.m"
        {
#line 1280 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_22));
#line 1280 "prog_io_item.m"
        }
#line 1280 "prog_io_item.m"
        {
#line 1280 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "prog_io_item.m"
        }
#line 1280 "prog_io_item.m"
        {
#line 1280 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 1280 "prog_io_item.m"
        }
#line 1280 "prog_io_item.m"
        {
#line 1280 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 1280 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1280 "prog_io_item.m"
        }
#line 1279 "prog_io_item.m"
        {
#line 1279 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1279 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1279 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1279 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 1279 "prog_io_item.m"
        }
#line 1281 "prog_io_item.m"
        {
#line 1281 "prog_io_item.m"
          MR_Word base;
#line 1281 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeSpec_6 = base;
#line 1281 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 1281 "prog_io_item.m"
        }
#line 1262 "prog_io_item.m"
      }
#line 1243 "prog_io_item.m"
  }
#line 1240 "prog_io_item.m"
}

#line 1217 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_3_p_0(
#line 1217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_4,
#line 1217 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5,
#line 1217 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeTypeAndMode_6)
#line 1217 "prog_io_item.m"
{
#line 1221 "prog_io_item.m"
  {
#line 1221 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 1221 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeTerm_7;
#line 1221 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModeTerm_8;
#line 1222 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 1222 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_14_14;
#line 1222 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_15_15;
#line 1222 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_16_16;
#line 1222 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_17_17;
#line 1222 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___Context_9;

#line 1222 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
      {
#line 1222 "prog_io_item.m"
        parse_tree__prog_io_item__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
        parse_tree__prog_io_item__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
        parse_tree__prog_io_item___Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_5, (MR_Integer) 2)));
#line 1222 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 1222 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
          {
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_13_13, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_14_14, (MR_String) "::") == 0);
#line 1222 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
              {
#line 1222 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
                  {
#line 1222 "prog_io_item.m"
                    parse_tree__prog_io_item__TypeTerm_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
                    parse_tree__prog_io_item__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_15_15, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
                      {
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__ModeTerm_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_16_16, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "prog_io_item.m"
                      }
#line 1222 "prog_io_item.m"
                  }
#line 1222 "prog_io_item.m"
              }
#line 1222 "prog_io_item.m"
          }
#line 1222 "prog_io_item.m"
      }
#line 1221 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
      {
#line 1224 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_10;
#line 1224 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode0_11;
#line 1224 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Mode_12;
#line 1224 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_18_18;

#line 1224 "prog_io_item.m"
        {
#line 1224 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_7, &parse_tree__prog_io_item__Type_10);
        }
#line 1224 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
          {
#line 1225 "prog_io_item.m"
            parse_tree__prog_io_item__V_18_18 = (MR_Integer) 0;
#line 1225 "prog_io_item.m"
            {
#line 1225 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_18_18, parse_tree__prog_io_item__ModeTerm_8, &parse_tree__prog_io_item__Mode0_11);
            }
#line 1224 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
              {
#line 1226 "prog_io_item.m"
                {
#line 1226 "prog_io_item.m"
                  parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_4, parse_tree__prog_io_item__Mode0_11, &parse_tree__prog_io_item__Mode_12);
                }
#line 1227 "prog_io_item.m"
                {
#line 1227 "prog_io_item.m"
                  MR_Word base;
#line 1227 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_10));
#line 1227 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_12));
#line 1227 "prog_io_item.m"
                }
#line 1227 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1224 "prog_io_item.m"
              }
#line 1224 "prog_io_item.m"
          }
#line 1224 "prog_io_item.m"
      }
#line 1221 "prog_io_item.m"
    else
#line 1229 "prog_io_item.m"
      {
#line 1229 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Type_19;

#line 1229 "prog_io_item.m"
        {
#line 1229 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__Term_5, &parse_tree__prog_io_item__Type_19);
        }
#line 1229 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1229 "prog_io_item.m"
          {
#line 1230 "prog_io_item.m"
            {
#line 1230 "prog_io_item.m"
              MR_Word base;
#line 1230 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeTypeAndMode_6 = base;
#line 1230 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_19));
#line 1230 "prog_io_item.m"
            }
#line 1230 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1229 "prog_io_item.m"
          }
#line 1229 "prog_io_item.m"
      }
#line 1221 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1221 "prog_io_item.m"
  }
#line 1217 "prog_io_item.m"
}

#line 1209 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(
#line 1209 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__InstConstraints_1,
#line 1209 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadVar__2_2,
#line 1209 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__HeadVar__3_3)
#line 1209 "prog_io_item.m"
{
#line 1212 "prog_io_item.m"
  {
#line 1212 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 1212 "prog_io_item.m"
    if ((parse_tree__prog_io_item__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "prog_io_item.m"
      {
#line 1212 "prog_io_item.m"
        *parse_tree__prog_io_item__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1212 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1212 "prog_io_item.m"
      }
#line 1212 "prog_io_item.m"
    else
#line 1213 "prog_io_item.m"
      {
#line 1213 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 0)));
#line 1213 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__HeadVar__2_2, (MR_Integer) 1)));
#line 1213 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__H_8;
#line 1213 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__T_9;
#line 1221 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeTerm_13;
#line 1221 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ModeTerm_14;
#line 1222 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_19_19;
#line 1222 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_20_20;
#line 1222 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 1222 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_22_22;
#line 1222 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_23_23;
#line 1222 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item___Context_15;

#line 1222 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__H0_6)) == (MR_mktag((MR_Integer) 0)));
#line 1222 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
          {
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H0_6, (MR_Integer) 2)));
#line 1222 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_19_19)) == (MR_mktag((MR_Integer) 0)));
#line 1222 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
              {
#line 1222 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_19_19, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_20_20, (MR_String) "::") == 0);
#line 1222 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
                  {
#line 1222 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
                      {
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__TypeTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_22_22)) == (MR_mktag((MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1222 "prog_io_item.m"
                          {
#line 1222 "prog_io_item.m"
                            parse_tree__prog_io_item__ModeTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 0)));
#line 1222 "prog_io_item.m"
                            parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_22_22, (MR_Integer) 1)));
#line 1222 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1222 "prog_io_item.m"
                          }
#line 1222 "prog_io_item.m"
                      }
#line 1222 "prog_io_item.m"
                  }
#line 1222 "prog_io_item.m"
              }
#line 1222 "prog_io_item.m"
          }
#line 1221 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
          {
#line 1224 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_16;
#line 1224 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode0_17;
#line 1224 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Mode_18;
#line 1224 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_24_24;

#line 1224 "prog_io_item.m"
            {
#line 1224 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__TypeTerm_13, &parse_tree__prog_io_item__Type_16);
            }
#line 1224 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
              {
#line 1225 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = (MR_Integer) 0;
#line 1225 "prog_io_item.m"
                {
#line 1225 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__convert_mode_3_p_0(parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__ModeTerm_14, &parse_tree__prog_io_item__Mode0_17);
                }
#line 1224 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1224 "prog_io_item.m"
                  {
#line 1226 "prog_io_item.m"
                    {
#line 1226 "prog_io_item.m"
                      parse_tree__prog_mode__constrain_inst_vars_in_mode_sub_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__Mode0_17, &parse_tree__prog_io_item__Mode_18);
                    }
#line 1227 "prog_io_item.m"
                    {
#line 1227 "prog_io_item.m"
                      parse_tree__prog_io_item__H_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_16));
#line 1227 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__H_8, 1) = ((MR_Box) (parse_tree__prog_io_item__Mode_18));
#line 1227 "prog_io_item.m"
                    }
#line 1227 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1224 "prog_io_item.m"
                  }
#line 1224 "prog_io_item.m"
              }
#line 1224 "prog_io_item.m"
          }
#line 1221 "prog_io_item.m"
        else
#line 1229 "prog_io_item.m"
          {
#line 1229 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Type_25;

#line 1229 "prog_io_item.m"
            {
#line 1229 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_util__maybe_parse_type_2_p_0(parse_tree__prog_io_item__H0_6, &parse_tree__prog_io_item__Type_25);
            }
#line 1229 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1229 "prog_io_item.m"
              {
#line 1230 "prog_io_item.m"
                {
#line 1230 "prog_io_item.m"
                  parse_tree__prog_io_item__H_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__H_8, 0) = ((MR_Box) (parse_tree__prog_io_item__Type_25));
#line 1230 "prog_io_item.m"
                }
#line 1230 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1229 "prog_io_item.m"
              }
#line 1229 "prog_io_item.m"
          }
#line 1213 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1213 "prog_io_item.m"
          {
#line 1215 "prog_io_item.m"
            {
#line 1215 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_1, parse_tree__prog_io_item__T0_7, &parse_tree__prog_io_item__T_9);
            }
#line 1213 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1213 "prog_io_item.m"
              {
#line 1213 "prog_io_item.m"
                {
#line 1213 "prog_io_item.m"
                  MR_Word base;
#line 1213 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "prog_io_item.m"
                  *parse_tree__prog_io_item__HeadVar__3_3 = base;
#line 1213 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__H_8));
#line 1213 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__prog_io_item__T_9));
#line 1213 "prog_io_item.m"
                }
#line 1213 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 1213 "prog_io_item.m"
              }
#line 1213 "prog_io_item.m"
          }
#line 1213 "prog_io_item.m"
      }
#line 1212 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 1212 "prog_io_item.m"
  }
#line 1209 "prog_io_item.m"
}

#line 1133 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncName_14,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Args_15,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ReturnArg_16,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__FuncTerm_17,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_18,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_19,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDetism_20,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ExistQVars_21,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Constraints_22,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_23,
#line 1133 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_24,
#line 1133 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_25,
#line 1133 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_26)
#line 1133 "prog_io_item.m"
{
#line 1140 "prog_io_item.m"
  {
#line 1140 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_132_132;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InconsistentArgsSpecs_28;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ArgsOnlySpecs_36;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ReturnOnlySpecs_43;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConsistencySpecs_44;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybePurity_45;
#line 1140 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_96_96;
#line 1151 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_58_58;
#line 1152 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_33_33;
#line 1151 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_32_32;
#line 1151 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 1151 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_31_31;
#line 1164 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_77_77;
#line 1165 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 1165 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 1164 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;
#line 1164 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 1179 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity_46;

#line 1141 "prog_io_item.m"
    {
#line 1141 "prog_io_item.m"
      parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__FuncTerm_17, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27);
    }
#line 1146 "prog_io_item.m"
    if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "prog_io_item.m"
      parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "prog_io_item.m"
    else
#line 1147 "prog_io_item.m"
      {
#line 1147 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_27, (MR_Integer) 0)));

#line 1148 "prog_io_item.m"
        {
#line 1148 "prog_io_item.m"
          parse_tree__prog_io_item__InconsistentArgsSpecs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_29));
#line 1148 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__InconsistentArgsSpecs_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "prog_io_item.m"
        }
#line 1147 "prog_io_item.m"
      }
#line 1152 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 0)));
#line 1152 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1152 "prog_io_item.m"
      {
#line 1152 "prog_io_item.m"
        parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 1151 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 1151 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1151 "prog_io_item.m"
          {
#line 1151 "prog_io_item.m"
            parse_tree__prog_io_item__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 1151 "prog_io_item.m"
            parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 1151 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 1151 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1151 "prog_io_item.m"
              {
#line 1151 "prog_io_item.m"
                parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, (MR_Integer) 0)));
#line 1151 "prog_io_item.m"
                parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, (MR_Integer) 1)));
#line 1151 "prog_io_item.m"
              }
#line 1151 "prog_io_item.m"
          }
#line 1152 "prog_io_item.m"
      }
#line 1150 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1155 "prog_io_item.m"
      {
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgsOnlySpec_35;
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_69_69;
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_70_70;
#line 1155 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_71_71;

#line 1157 "prog_io_item.m"
        {
#line 1157 "prog_io_item.m"
          parse_tree__prog_io_item__V_71_71 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 1157 "prog_io_item.m"
        {
#line 1157 "prog_io_item.m"
          parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 1157 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[242])));
#line 1157 "prog_io_item.m"
        }
#line 1158 "prog_io_item.m"
        {
#line 1158 "prog_io_item.m"
          parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 1158 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1158 "prog_io_item.m"
        }
#line 1156 "prog_io_item.m"
        {
#line 1156 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1156 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsOnlySpec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 1156 "prog_io_item.m"
        }
#line 1159 "prog_io_item.m"
        {
#line 1159 "prog_io_item.m"
          parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsOnlySpec_35));
#line 1159 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsOnlySpecs_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1159 "prog_io_item.m"
        }
#line 1155 "prog_io_item.m"
      }
#line 1150 "prog_io_item.m"
    else
#line 1161 "prog_io_item.m"
      parse_tree__prog_io_item__ArgsOnlySpecs_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1165 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ReturnArg_16)) == (MR_mktag((MR_Integer) 1)));
#line 1165 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1165 "prog_io_item.m"
      {
#line 1165 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 0)));
#line 1165 "prog_io_item.m"
        parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnArg_16, (MR_Integer) 1)));
#line 1164 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_15)) == (MR_mktag((MR_Integer) 1)));
#line 1164 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1164 "prog_io_item.m"
          {
#line 1164 "prog_io_item.m"
            parse_tree__prog_io_item__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 0)));
#line 1164 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_15, (MR_Integer) 1)));
#line 1164 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_77_77)) == (MR_mktag((MR_Integer) 0)));
#line 1164 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1164 "prog_io_item.m"
              parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_77_77, (MR_Integer) 0)));
#line 1164 "prog_io_item.m"
          }
#line 1165 "prog_io_item.m"
      }
#line 1163 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1168 "prog_io_item.m"
      {
#line 1168 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnOnlySpec_42;
#line 1168 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_88_88;
#line 1168 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;
#line 1168 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;

#line 1170 "prog_io_item.m"
        {
#line 1170 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__FuncTerm_17);
        }
#line 1170 "prog_io_item.m"
        {
#line 1170 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 1170 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[243])));
#line 1170 "prog_io_item.m"
        }
#line 1171 "prog_io_item.m"
        {
#line 1171 "prog_io_item.m"
          parse_tree__prog_io_item__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_88_88, 0) = ((MR_Box) (parse_tree__prog_io_item__V_89_89));
#line 1171 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1171 "prog_io_item.m"
        }
#line 1169 "prog_io_item.m"
        {
#line 1169 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpec_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1169 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1169 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnOnlySpec_42, 2) = ((MR_Box) (parse_tree__prog_io_item__V_88_88));
#line 1169 "prog_io_item.m"
        }
#line 1172 "prog_io_item.m"
        {
#line 1172 "prog_io_item.m"
          parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnOnlySpec_42));
#line 1172 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ReturnOnlySpecs_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1172 "prog_io_item.m"
        }
#line 1168 "prog_io_item.m"
      }
#line 1163 "prog_io_item.m"
    else
#line 1174 "prog_io_item.m"
      parse_tree__prog_io_item__ReturnOnlySpecs_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10493 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_132_132 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 1177 "prog_io_item.m"
    {
#line 1177 "prog_io_item.m"
      parse_tree__prog_io_item__V_96_96 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ArgsOnlySpecs_36, parse_tree__prog_io_item__ReturnOnlySpecs_43);
    }
#line 1177 "prog_io_item.m"
    {
#line 1177 "prog_io_item.m"
      parse_tree__prog_io_item__ConsistencySpecs_44 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__InconsistentArgsSpecs_28, parse_tree__prog_io_item__V_96_96);
    }
#line 1178 "prog_io_item.m"
    {
#line 1178 "prog_io_item.m"
      parse_tree__prog_io_item__get_purity_from_attrs_3_p_0(parse_tree__prog_io_item__Context_23, parse_tree__prog_io_item__PurityAttrs_25, &parse_tree__prog_io_item__MaybePurity_45);
    }
#line 1180 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__ConsistencySpecs_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1180 "prog_io_item.m"
      {
#line 1181 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePurity_45)) == (MR_mktag((MR_Integer) 1)));
#line 1181 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1181 "prog_io_item.m"
          parse_tree__prog_io_item__Purity_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePurity_45, (MR_Integer) 0)));
#line 1180 "prog_io_item.m"
      }
#line 1179 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 1183 "prog_io_item.m"
      {
#line 1183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_133_133 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TVarSet_47;
#line 1183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IVarSet_48;
#line 1183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__AllArgs_49;
#line 1183 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;

#line 1184 "prog_io_item.m"
        {
#line 1184 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__TVarSet_47);
        }
#line 1185 "prog_io_item.m"
        {
#line 1185 "prog_io_item.m"
          mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_19, &parse_tree__prog_io_item__IVarSet_48);
        }
#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArg_16));
#line 1186 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "prog_io_item.m"
        }
#line 1186 "prog_io_item.m"
        {
#line 1186 "prog_io_item.m"
          parse_tree__prog_io_item__AllArgs_49 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__Args_15, parse_tree__prog_io_item__V_97_97);
        }
#line 1188 "prog_io_item.m"
        {
#line 1188 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__AllArgs_49);
        }
#line 1187 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1189 "prog_io_item.m"
          {
#line 1189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemPredDecl_51;
#line 1189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_52;
#line 1189 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_102_102;

#line 1190 "prog_io_item.m"
            {
#line 1190 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncName_14));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 2) = ((MR_Box) (parse_tree__prog_io_item__AllArgs_49));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_20));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_47));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_48));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_21));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_46));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_22));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_23));
#line 1190 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_24));
#line 1190 "prog_io_item.m"
            }
#line 1193 "prog_io_item.m"
            {
#line 1193 "prog_io_item.m"
              parse_tree__prog_io_item__Item_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1193 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_52, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_51));
#line 1193 "prog_io_item.m"
            }
#line 1194 "prog_io_item.m"
            {
#line 1194 "prog_io_item.m"
              parse_tree__prog_io_item__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_52));
#line 1194 "prog_io_item.m"
            }
#line 1194 "prog_io_item.m"
            {
#line 1194 "prog_io_item.m"
              MR_Word base;
#line 1194 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_26 = base;
#line 1194 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1194 "prog_io_item.m"
            }
#line 1189 "prog_io_item.m"
          }
#line 1187 "prog_io_item.m"
        else
#line 1196 "prog_io_item.m"
          {
#line 1196 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__TermStr_53;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Pieces_54;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_55;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_105_105;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_108_108;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_110_110;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_111_111;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_120_120;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_121_121;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_122_122;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_123_123;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_124_124;
#line 1196 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_127_127;

#line 1196 "prog_io_item.m"
            {
#line 1196 "prog_io_item.m"
              parse_tree__prog_io_item__TermStr_53 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__Term_18);
            }
#line 1199 "prog_io_item.m"
            {
#line 1199 "prog_io_item.m"
              parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1199 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_53));
#line 1199 "prog_io_item.m"
            }
#line 1199 "prog_io_item.m"
            {
#line 1199 "prog_io_item.m"
              parse_tree__prog_io_item__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 1199 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1199 "prog_io_item.m"
            }
#line 1198 "prog_io_item.m"
            {
#line 1198 "prog_io_item.m"
              parse_tree__prog_io_item__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1198 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_108_108, 1) = ((MR_Box) (parse_tree__prog_io_item__V_110_110));
#line 1198 "prog_io_item.m"
            }
#line 1198 "prog_io_item.m"
            {
#line 1198 "prog_io_item.m"
              parse_tree__prog_io_item__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[245])));
#line 1198 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_105_105, 1) = ((MR_Box) (parse_tree__prog_io_item__V_108_108));
#line 1198 "prog_io_item.m"
            }
#line 1197 "prog_io_item.m"
            {
#line 1197 "prog_io_item.m"
              parse_tree__prog_io_item__Pieces_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[244])));
#line 1197 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_54, 1) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1197 "prog_io_item.m"
            }
#line 1201 "prog_io_item.m"
            {
#line 1201 "prog_io_item.m"
              parse_tree__prog_io_item__V_122_122 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_133_133, parse_tree__prog_io_item__Term_18);
            }
#line 1201 "prog_io_item.m"
            {
#line 1201 "prog_io_item.m"
              parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_54));
#line 1201 "prog_io_item.m"
            }
#line 1201 "prog_io_item.m"
            {
#line 1201 "prog_io_item.m"
              parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "prog_io_item.m"
            }
#line 1201 "prog_io_item.m"
            {
#line 1201 "prog_io_item.m"
              parse_tree__prog_io_item__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_121_121, 0) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_121_121, 1) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 1201 "prog_io_item.m"
            }
#line 1201 "prog_io_item.m"
            {
#line 1201 "prog_io_item.m"
              parse_tree__prog_io_item__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 0) = ((MR_Box) (parse_tree__prog_io_item__V_121_121));
#line 1201 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "prog_io_item.m"
            }
#line 1200 "prog_io_item.m"
            {
#line 1200 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1200 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1200 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_55, 2) = ((MR_Box) (parse_tree__prog_io_item__V_120_120));
#line 1200 "prog_io_item.m"
            }
#line 1202 "prog_io_item.m"
            {
#line 1202 "prog_io_item.m"
              parse_tree__prog_io_item__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_55));
#line 1202 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "prog_io_item.m"
            }
#line 1202 "prog_io_item.m"
            {
#line 1202 "prog_io_item.m"
              MR_Word base;
#line 1202 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_26 = base;
#line 1202 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_127_127));
#line 1202 "prog_io_item.m"
            }
#line 1196 "prog_io_item.m"
          }
#line 1183 "prog_io_item.m"
      }
#line 1179 "prog_io_item.m"
    else
#line 1205 "prog_io_item.m"
      {
#line 1205 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_56;
#line 1205 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_129_129;

#line 1205 "prog_io_item.m"
        {
#line 1205 "prog_io_item.m"
          parse_tree__prog_io_item__V_129_129 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, parse_tree__prog_io_item__MaybePurity_45);
        }
#line 1205 "prog_io_item.m"
        {
#line 1205 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_56 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_132_132, parse_tree__prog_io_item__ConsistencySpecs_44, parse_tree__prog_io_item__V_129_129);
        }
#line 1206 "prog_io_item.m"
        {
#line 1206 "prog_io_item.m"
          MR_Word base;
#line 1206 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1206 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_26 = base;
#line 1206 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_56));
#line 1206 "prog_io_item.m"
        }
#line 1205 "prog_io_item.m"
      }
#line 1140 "prog_io_item.m"
  }
#line 1133 "prog_io_item.m"
}

#line 1049 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_func_decl_base_9_p_0(
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_10,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_11,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_12,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_13,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_14,
#line 1049 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_15,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_16,
#line 1049 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_17,
#line 1049 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_18)
#line 1049 "prog_io_item.m"
{
#line 1055 "prog_io_item.m"
  {
#line 1055 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 1055 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_19;
#line 1055 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeContext_20;

#line 1056 "prog_io_item.m"
    {
#line 1056 "prog_io_item.m"
      parse_tree__prog_io_item__ContextPieces_19 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[136]));
    }
#line 1058 "prog_io_item.m"
    {
#line 1058 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__QuantConstrAttrs_17, parse_tree__prog_io_item__ContextPieces_19, &parse_tree__prog_io_item__MaybeContext_20);
    }
#line 1063 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeContext_20)) == (MR_mktag((MR_Integer) 0))))
#line 1061 "prog_io_item.m"
      {
#line 1061 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 0)));

#line 1062 "prog_io_item.m"
        {
#line 1062 "prog_io_item.m"
          MR_Word base;
#line 1062 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1062 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1062 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_21));
#line 1062 "prog_io_item.m"
        }
#line 1061 "prog_io_item.m"
      }
#line 1063 "prog_io_item.m"
    else
#line 1064 "prog_io_item.m"
      {
#line 1064 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 0)));
#line 1064 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Constraints_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 1)));
#line 1064 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__InstConstraints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeContext_20, (MR_Integer) 2)));
#line 1065 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSugaredFuncTerm_25;
#line 1065 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ReturnTerm_26;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;
#line 1066 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_56_56;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_57_57;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_58_58;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_59_59;
#line 1066 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;

#line 1066 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_12)) == (MR_mktag((MR_Integer) 0)));
#line 1066 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1066 "prog_io_item.m"
          {
#line 1066 "prog_io_item.m"
            parse_tree__prog_io_item__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 0)));
#line 1066 "prog_io_item.m"
            parse_tree__prog_io_item__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 1)));
#line 1066 "prog_io_item.m"
            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_12, (MR_Integer) 2)));
#line 1066 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_55_55)) == (MR_mktag((MR_Integer) 0)));
#line 1066 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 1066 "prog_io_item.m"
              {
#line 1066 "prog_io_item.m"
                parse_tree__prog_io_item__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, (MR_Integer) 0)));
#line 1066 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_56_56, (MR_String) "=") == 0);
#line 1066 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1066 "prog_io_item.m"
                  {
#line 1067 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1067 "prog_io_item.m"
                      {
#line 1067 "prog_io_item.m"
                        parse_tree__prog_io_item__MaybeSugaredFuncTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, (MR_Integer) 0)));
#line 1067 "prog_io_item.m"
                        parse_tree__prog_io_item__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_57_57, (MR_Integer) 1)));
#line 1067 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_58_58)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 1067 "prog_io_item.m"
                          {
#line 1067 "prog_io_item.m"
                            parse_tree__prog_io_item__ReturnTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, (MR_Integer) 0)));
#line 1067 "prog_io_item.m"
                            parse_tree__prog_io_item__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, (MR_Integer) 1)));
#line 1067 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "prog_io_item.m"
                          }
#line 1067 "prog_io_item.m"
                      }
#line 1066 "prog_io_item.m"
                  }
#line 1066 "prog_io_item.m"
              }
#line 1066 "prog_io_item.m"
          }
#line 1065 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 1069 "prog_io_item.m"
          {
#line 1069 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_151_151;
#line 1069 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncTerm_28;
#line 1069 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeFuncNameAndArgs_29;

#line 1069 "prog_io_item.m"
            {
#line 1069 "prog_io_item.m"
              parse_tree__prog_io_item__FuncTerm_28 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__MaybeSugaredFuncTerm_25);
            }
#line 11015 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_151_151 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 1070 "prog_io_item.m"
            {
#line 1070 "prog_io_item.m"
              parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__ModuleName_10, parse_tree__prog_io_item__FuncTerm_28, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__ContextPieces_19, &parse_tree__prog_io_item__MaybeFuncNameAndArgs_29);
            }
#line 1075 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFuncNameAndArgs_29)) == (MR_mktag((MR_Integer) 0))))
#line 1073 "prog_io_item.m"
              {
#line 1073 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Specs_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFuncNameAndArgs_29, (MR_Integer) 0)));

#line 1074 "prog_io_item.m"
                {
#line 1074 "prog_io_item.m"
                  MR_Word base;
#line 1074 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1074 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1074 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_142));
#line 1074 "prog_io_item.m"
                }
#line 1073 "prog_io_item.m"
              }
#line 1075 "prog_io_item.m"
            else
#line 1076 "prog_io_item.m"
              {
#line 1076 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__FuncName_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_29, (MR_Integer) 0)));
#line 1076 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgTerms_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncNameAndArgs_29, (MR_Integer) 1)));
#line 1076 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeArgs_33;
#line 1076 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeReturnArg_38;
#line 1077 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgsPrime_32;
#line 1093 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArgPrime_37;
#line 1108 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Args_41;
#line 1108 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ReturnArg_42;

#line 1078 "prog_io_item.m"
                {
#line 1078 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_24, parse_tree__prog_io_item__ArgTerms_31, &parse_tree__prog_io_item__ArgsPrime_32);
                }
#line 1077 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1081 "prog_io_item.m"
                  {
#line 1081 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeArgs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1081 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_33, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPrime_32));
#line 1081 "prog_io_item.m"
                  }
#line 1077 "prog_io_item.m"
                else
#line 1083 "prog_io_item.m"
                  {
#line 1083 "prog_io_item.m"
                    MR_String parse_tree__prog_io_item__FuncTermStr_34;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsPieces_35;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ArgsSpec_36;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_62_62;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_65_65;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_68_68;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_69_69;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_78_78;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_79_79;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_80_80;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_81_81;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_82_82;
#line 1083 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_85_85;

#line 1083 "prog_io_item.m"
                    {
#line 1083 "prog_io_item.m"
                      parse_tree__prog_io_item__FuncTermStr_34 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__FuncTerm_28);
                    }
#line 1086 "prog_io_item.m"
                    {
#line 1086 "prog_io_item.m"
                      parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__FuncTermStr_34));
#line 1086 "prog_io_item.m"
                    }
#line 1086 "prog_io_item.m"
                    {
#line 1086 "prog_io_item.m"
                      parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 1086 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1086 "prog_io_item.m"
                    }
#line 1085 "prog_io_item.m"
                    {
#line 1085 "prog_io_item.m"
                      parse_tree__prog_io_item__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[239])));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_65_65, 1) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 1085 "prog_io_item.m"
                    }
#line 1085 "prog_io_item.m"
                    {
#line 1085 "prog_io_item.m"
                      parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[238])));
#line 1085 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_item__V_65_65));
#line 1085 "prog_io_item.m"
                    }
#line 1084 "prog_io_item.m"
                    {
#line 1084 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[237])));
#line 1084 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgsPieces_35, 1) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 1084 "prog_io_item.m"
                    }
#line 1089 "prog_io_item.m"
                    {
#line 1089 "prog_io_item.m"
                      parse_tree__prog_io_item__V_80_80 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__FuncTerm_28);
                    }
#line 1090 "prog_io_item.m"
                    {
#line 1090 "prog_io_item.m"
                      parse_tree__prog_io_item__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_82_82, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsPieces_35));
#line 1090 "prog_io_item.m"
                    }
#line 1090 "prog_io_item.m"
                    {
#line 1090 "prog_io_item.m"
                      parse_tree__prog_io_item__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 0) = ((MR_Box) (parse_tree__prog_io_item__V_82_82));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "prog_io_item.m"
                    }
#line 1089 "prog_io_item.m"
                    {
#line 1089 "prog_io_item.m"
                      parse_tree__prog_io_item__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 1089 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_79_79, 1) = ((MR_Box) (parse_tree__prog_io_item__V_81_81));
#line 1089 "prog_io_item.m"
                    }
#line 1090 "prog_io_item.m"
                    {
#line 1090 "prog_io_item.m"
                      parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 1090 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1090 "prog_io_item.m"
                    }
#line 1087 "prog_io_item.m"
                    {
#line 1087 "prog_io_item.m"
                      parse_tree__prog_io_item__ArgsSpec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1087 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ArgsSpec_36, 2) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 1087 "prog_io_item.m"
                    }
#line 1091 "prog_io_item.m"
                    {
#line 1091 "prog_io_item.m"
                      parse_tree__prog_io_item__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 0) = ((MR_Box) (parse_tree__prog_io_item__ArgsSpec_36));
#line 1091 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1091 "prog_io_item.m"
                    }
#line 1091 "prog_io_item.m"
                    {
#line 1091 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeArgs_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeArgs_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 1091 "prog_io_item.m"
                    }
#line 1083 "prog_io_item.m"
                  }
#line 1094 "prog_io_item.m"
                {
#line 1094 "prog_io_item.m"
                  parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_3_p_0(parse_tree__prog_io_item__InstConstraints_24, parse_tree__prog_io_item__ReturnTerm_26, &parse_tree__prog_io_item__ReturnArgPrime_37);
                }
#line 1093 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1097 "prog_io_item.m"
                  {
#line 1097 "prog_io_item.m"
                    parse_tree__prog_io_item__MaybeReturnArg_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1097 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_38, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnArgPrime_37));
#line 1097 "prog_io_item.m"
                  }
#line 1093 "prog_io_item.m"
                else
#line 1101 "prog_io_item.m"
                  {
#line 1101 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__ReturnSpec_40;
#line 1101 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_103_103;
#line 1101 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_104_104;
#line 1101 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_105_105;
#line 1101 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_110_110;

#line 1104 "prog_io_item.m"
                    {
#line 1104 "prog_io_item.m"
                      parse_tree__prog_io_item__V_105_105 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_151_151, parse_tree__prog_io_item__ReturnTerm_26);
                    }
#line 1104 "prog_io_item.m"
                    {
#line 1104 "prog_io_item.m"
                      parse_tree__prog_io_item__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1104 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_104_104, 0) = ((MR_Box) (parse_tree__prog_io_item__V_105_105));
#line 1104 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[240])));
#line 1104 "prog_io_item.m"
                    }
#line 1105 "prog_io_item.m"
                    {
#line 1105 "prog_io_item.m"
                      parse_tree__prog_io_item__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 0) = ((MR_Box) (parse_tree__prog_io_item__V_104_104));
#line 1105 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1105 "prog_io_item.m"
                    }
#line 1102 "prog_io_item.m"
                    {
#line 1102 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1102 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1102 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ReturnSpec_40, 2) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 1102 "prog_io_item.m"
                    }
#line 1106 "prog_io_item.m"
                    {
#line 1106 "prog_io_item.m"
                      parse_tree__prog_io_item__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 0) = ((MR_Box) (parse_tree__prog_io_item__ReturnSpec_40));
#line 1106 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_110_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1106 "prog_io_item.m"
                    }
#line 1106 "prog_io_item.m"
                    {
#line 1106 "prog_io_item.m"
                      parse_tree__prog_io_item__MaybeReturnArg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1106 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeReturnArg_38, 0) = ((MR_Box) (parse_tree__prog_io_item__V_110_110));
#line 1106 "prog_io_item.m"
                    }
#line 1101 "prog_io_item.m"
                  }
#line 1109 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeArgs_33)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1109 "prog_io_item.m"
                  {
#line 1109 "prog_io_item.m"
                    parse_tree__prog_io_item__Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeArgs_33, (MR_Integer) 0)));
#line 1110 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeReturnArg_38)) == (MR_mktag((MR_Integer) 1)));
#line 1110 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 1110 "prog_io_item.m"
                      parse_tree__prog_io_item__ReturnArg_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeReturnArg_38, (MR_Integer) 0)));
#line 1109 "prog_io_item.m"
                  }
#line 1108 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 1114 "prog_io_item.m"
                  {
#line 1114 "prog_io_item.m"
                    parse_tree__prog_io_item__parse_func_decl_base_2_13_p_0(parse_tree__prog_io_item__FuncName_30, parse_tree__prog_io_item__Args_41, parse_tree__prog_io_item__ReturnArg_42, parse_tree__prog_io_item__FuncTerm_28, parse_tree__prog_io_item__Term_12, parse_tree__prog_io_item__VarSet_11, parse_tree__prog_io_item__MaybeDet_13, parse_tree__prog_io_item__ExistQVars_22, parse_tree__prog_io_item__Constraints_23, parse_tree__prog_io_item__Context_14, parse_tree__prog_io_item__SeqNum_15, parse_tree__prog_io_item__PurityAttrs_16, parse_tree__prog_io_item__MaybeIOM_18);
                  }
#line 1108 "prog_io_item.m"
                else
#line 1120 "prog_io_item.m"
                  {
#line 1120 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_112_112;
#line 1120 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_113_113;
#line 1120 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Specs_143;

#line 1119 "prog_io_item.m"
                    {
#line 1119 "prog_io_item.m"
                      parse_tree__prog_io_item__V_112_112 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[8], parse_tree__prog_io_item__MaybeArgs_33);
                    }
#line 1120 "prog_io_item.m"
                    {
#line 1120 "prog_io_item.m"
                      parse_tree__prog_io_item__V_113_113 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__prog_io_item__MaybeReturnArg_38);
                    }
#line 1119 "prog_io_item.m"
                    {
#line 1119 "prog_io_item.m"
                      parse_tree__prog_io_item__Specs_143 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_112_112, parse_tree__prog_io_item__V_113_113);
                    }
#line 1121 "prog_io_item.m"
                    {
#line 1121 "prog_io_item.m"
                      MR_Word base;
#line 1121 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1121 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_143));
#line 1121 "prog_io_item.m"
                    }
#line 1120 "prog_io_item.m"
                  }
#line 1076 "prog_io_item.m"
              }
#line 1069 "prog_io_item.m"
          }
#line 1065 "prog_io_item.m"
        else
#line 1126 "prog_io_item.m"
          {
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_44;
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_133_133;
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_134_134;
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_135_135;
#line 1126 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_140_140;

#line 1128 "prog_io_item.m"
            {
#line 1128 "prog_io_item.m"
              parse_tree__prog_io_item__V_135_135 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_12);
            }
#line 1128 "prog_io_item.m"
            {
#line 1128 "prog_io_item.m"
              parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 1128 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[241])));
#line 1128 "prog_io_item.m"
            }
#line 1128 "prog_io_item.m"
            {
#line 1128 "prog_io_item.m"
              parse_tree__prog_io_item__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_133_133, 0) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 1128 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "prog_io_item.m"
            }
#line 1127 "prog_io_item.m"
            {
#line 1127 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1127 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1127 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_44, 2) = ((MR_Box) (parse_tree__prog_io_item__V_133_133));
#line 1127 "prog_io_item.m"
            }
#line 1129 "prog_io_item.m"
            {
#line 1129 "prog_io_item.m"
              parse_tree__prog_io_item__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_44));
#line 1129 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1129 "prog_io_item.m"
            }
#line 1129 "prog_io_item.m"
            {
#line 1129 "prog_io_item.m"
              MR_Word base;
#line 1129 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_18 = base;
#line 1129 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_140_140));
#line 1129 "prog_io_item.m"
            }
#line 1126 "prog_io_item.m"
          }
#line 1064 "prog_io_item.m"
      }
#line 1055 "prog_io_item.m"
  }
#line 1049 "prog_io_item.m"
}

#line 945 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_13,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_14,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_15,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredTypeTerm_16,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithType_17,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__WithInst_18,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__MaybeDet_19,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_20,
#line 945 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_21,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_22,
#line 945 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_23,
#line 945 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_24)
#line 945 "prog_io_item.m"
{
#line 953 "prog_io_item.m"
  {
#line 953 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_187_187 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ContextPieces_25;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeExistClassInstContext_26;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybePurity_27;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_54_54;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_57_57;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_58_58;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_59_59;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_60_60;
#line 953 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_61_61;
#line 960 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ExistQVars_28;
#line 960 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Constraints_29;
#line 960 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__InstConstraints_30;
#line 960 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Purity_31;

#line 954 "prog_io_item.m"
    {
#line 954 "prog_io_item.m"
      parse_tree__prog_io_item__V_54_54 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[230]))));
    }
#line 955 "prog_io_item.m"
    {
#line 955 "prog_io_item.m"
      parse_tree__prog_io_item__V_59_59 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
    }
#line 955 "prog_io_item.m"
    {
#line 955 "prog_io_item.m"
      parse_tree__prog_io_item__V_58_58 = mercury__cord__from_list_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_59_59);
    }
#line 956 "prog_io_item.m"
    parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[231]);
#line 956 "prog_io_item.m"
    {
#line 956 "prog_io_item.m"
      parse_tree__prog_io_item__V_60_60 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, ((MR_Box) (parse_tree__prog_io_item__V_61_61)));
    }
#line 955 "prog_io_item.m"
    {
#line 955 "prog_io_item.m"
      parse_tree__prog_io_item__V_57_57 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_58_58, parse_tree__prog_io_item__V_60_60);
    }
#line 954 "prog_io_item.m"
    {
#line 954 "prog_io_item.m"
      parse_tree__prog_io_item__ContextPieces_25 = mercury__cord__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_54_54, parse_tree__prog_io_item__V_57_57);
    }
#line 957 "prog_io_item.m"
    {
#line 957 "prog_io_item.m"
      parse_tree__prog_io_item__get_class_context_and_inst_constraints_from_attrs_5_p_0(parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__QuantConstrAttrs_23, parse_tree__prog_io_item__ContextPieces_25, &parse_tree__prog_io_item__MaybeExistClassInstContext_26);
    }
#line 959 "prog_io_item.m"
    {
#line 959 "prog_io_item.m"
      parse_tree__prog_io_item__get_purity_from_attrs_3_p_0(parse_tree__prog_io_item__Context_20, parse_tree__prog_io_item__PurityAttrs_22, &parse_tree__prog_io_item__MaybePurity_27);
    }
#line 961 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeExistClassInstContext_26)) == (MR_mktag((MR_Integer) 1)));
#line 961 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 961 "prog_io_item.m"
      {
#line 961 "prog_io_item.m"
        parse_tree__prog_io_item__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 0)));
#line 961 "prog_io_item.m"
        parse_tree__prog_io_item__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 1)));
#line 961 "prog_io_item.m"
        parse_tree__prog_io_item__InstConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeExistClassInstContext_26, (MR_Integer) 2)));
#line 963 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePurity_27)) == (MR_mktag((MR_Integer) 1)));
#line 963 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 963 "prog_io_item.m"
          parse_tree__prog_io_item__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePurity_27, (MR_Integer) 0)));
#line 961 "prog_io_item.m"
      }
#line 960 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 966 "prog_io_item.m"
      {
#line 966 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_188_188 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 966 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybePredNameAndArgs_32;

#line 965 "prog_io_item.m"
        {
#line 965 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__ModuleName_14, parse_tree__prog_io_item__PredTypeTerm_16, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__ContextPieces_25, &parse_tree__prog_io_item__MaybePredNameAndArgs_32);
        }
#line 970 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybePredNameAndArgs_32)) == (MR_mktag((MR_Integer) 0))))
#line 968 "prog_io_item.m"
          {
#line 968 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));

#line 969 "prog_io_item.m"
            {
#line 969 "prog_io_item.m"
              MR_Word base;
#line 969 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 969 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 969 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_33));
#line 969 "prog_io_item.m"
            }
#line 968 "prog_io_item.m"
          }
#line 970 "prog_io_item.m"
        else
#line 971 "prog_io_item.m"
          {
#line 971 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Functor_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 0)));
#line 971 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgTerms_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybePredNameAndArgs_32, (MR_Integer) 1)));
#line 972 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Args_36;

#line 972 "prog_io_item.m"
            {
#line 972 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_type_and_mode_list_3_p_0(parse_tree__prog_io_item__InstConstraints_30, parse_tree__prog_io_item__ArgTerms_35, &parse_tree__prog_io_item__Args_36);
            }
#line 972 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 974 "prog_io_item.m"
              {
#line 974 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeInconsistentArgsSpec_37;

#line 973 "prog_io_item.m"
                {
#line 973 "prog_io_item.m"
                  parse_tree__prog_io_item__check_type_and_mode_list_is_consistent_3_p_0(parse_tree__prog_io_item__Args_36, parse_tree__prog_io_item__PredTypeTerm_16, &parse_tree__prog_io_item__MaybeInconsistentArgsSpec_37);
                }
#line 978 "prog_io_item.m"
                if ((parse_tree__prog_io_item__MaybeInconsistentArgsSpec_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "prog_io_item.m"
                  {
#line 981 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_63_63;
#line 981 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_39_39;
#line 982 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_41_41;
#line 982 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_40_40;

#line 981 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_18)) == (MR_mktag((MR_Integer) 1)));
#line 981 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 981 "prog_io_item.m"
                      {
#line 981 "prog_io_item.m"
                        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_18, (MR_Integer) 0)));
#line 982 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_36)) == (MR_mktag((MR_Integer) 1)));
#line 982 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 982 "prog_io_item.m"
                          {
#line 982 "prog_io_item.m"
                            parse_tree__prog_io_item__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_36, (MR_Integer) 0)));
#line 982 "prog_io_item.m"
                            parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_36, (MR_Integer) 1)));
#line 982 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_63_63)) == (MR_mktag((MR_Integer) 0)));
#line 982 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 982 "prog_io_item.m"
                              parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_63_63, (MR_Integer) 0)));
#line 982 "prog_io_item.m"
                          }
#line 981 "prog_io_item.m"
                      }
#line 980 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 985 "prog_io_item.m"
                      {
#line 985 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__Spec_43;
#line 985 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_77_77;
#line 985 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_78_78;
#line 985 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_79_79;
#line 985 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_84_84;

#line 988 "prog_io_item.m"
                        {
#line 988 "prog_io_item.m"
                          parse_tree__prog_io_item__V_79_79 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_16);
                        }
#line 988 "prog_io_item.m"
                        {
#line 988 "prog_io_item.m"
                          parse_tree__prog_io_item__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 988 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 0) = ((MR_Box) (parse_tree__prog_io_item__V_79_79));
#line 988 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[232])));
#line 988 "prog_io_item.m"
                        }
#line 989 "prog_io_item.m"
                        {
#line 989 "prog_io_item.m"
                          parse_tree__prog_io_item__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 0) = ((MR_Box) (parse_tree__prog_io_item__V_78_78));
#line 989 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_77_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 989 "prog_io_item.m"
                        }
#line 986 "prog_io_item.m"
                        {
#line 986 "prog_io_item.m"
                          parse_tree__prog_io_item__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 986 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 986 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 986 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_43, 2) = ((MR_Box) (parse_tree__prog_io_item__V_77_77));
#line 986 "prog_io_item.m"
                        }
#line 990 "prog_io_item.m"
                        {
#line 990 "prog_io_item.m"
                          parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 990 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_43));
#line 990 "prog_io_item.m"
                          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 990 "prog_io_item.m"
                        }
#line 990 "prog_io_item.m"
                        {
#line 990 "prog_io_item.m"
                          MR_Word base;
#line 990 "prog_io_item.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 990 "prog_io_item.m"
                          *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 990 "prog_io_item.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 990 "prog_io_item.m"
                        }
#line 985 "prog_io_item.m"
                      }
#line 980 "prog_io_item.m"
                    else
#line 991 "prog_io_item.m"
                      {
#line 992 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_86_86;
#line 993 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_44_44;
#line 994 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_47_47;
#line 994 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_45_45;
#line 994 "prog_io_item.m"
                        MR_Word parse_tree__prog_io_item__V_46_46;

#line 992 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithInst_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 992 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 992 "prog_io_item.m"
                          {
#line 993 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithType_17)) == (MR_mktag((MR_Integer) 1)));
#line 993 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 993 "prog_io_item.m"
                              {
#line 993 "prog_io_item.m"
                                parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithType_17, (MR_Integer) 0)));
#line 994 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Args_36)) == (MR_mktag((MR_Integer) 1)));
#line 994 "prog_io_item.m"
                                if (parse_tree__prog_io_item__succeeded)
#line 994 "prog_io_item.m"
                                  {
#line 994 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_36, (MR_Integer) 0)));
#line 994 "prog_io_item.m"
                                    parse_tree__prog_io_item__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Args_36, (MR_Integer) 1)));
#line 994 "prog_io_item.m"
                                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_86_86)) == (MR_mktag((MR_Integer) 1)));
#line 994 "prog_io_item.m"
                                    if (parse_tree__prog_io_item__succeeded)
#line 994 "prog_io_item.m"
                                      {
#line 994 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 0)));
#line 994 "prog_io_item.m"
                                        parse_tree__prog_io_item__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, (MR_Integer) 1)));
#line 994 "prog_io_item.m"
                                      }
#line 994 "prog_io_item.m"
                                  }
#line 993 "prog_io_item.m"
                              }
#line 992 "prog_io_item.m"
                          }
#line 991 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 997 "prog_io_item.m"
                          {
#line 997 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_100_100;
#line 997 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_101_101;
#line 997 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_102_102;
#line 997 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__V_107_107;
#line 997 "prog_io_item.m"
                            MR_Word parse_tree__prog_io_item__Spec_176;

#line 1000 "prog_io_item.m"
                            {
#line 1000 "prog_io_item.m"
                              parse_tree__prog_io_item__V_102_102 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_16);
                            }
#line 1000 "prog_io_item.m"
                            {
#line 1000 "prog_io_item.m"
                              parse_tree__prog_io_item__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_101_101, 0) = ((MR_Box) (parse_tree__prog_io_item__V_102_102));
#line 1000 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[233])));
#line 1000 "prog_io_item.m"
                            }
#line 1001 "prog_io_item.m"
                            {
#line 1001 "prog_io_item.m"
                              parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (parse_tree__prog_io_item__V_101_101));
#line 1001 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1001 "prog_io_item.m"
                            }
#line 998 "prog_io_item.m"
                            {
#line 998 "prog_io_item.m"
                              parse_tree__prog_io_item__Spec_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 998 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 998 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 998 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_176, 2) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 998 "prog_io_item.m"
                            }
#line 1002 "prog_io_item.m"
                            {
#line 1002 "prog_io_item.m"
                              parse_tree__prog_io_item__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_176));
#line 1002 "prog_io_item.m"
                              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "prog_io_item.m"
                            }
#line 1002 "prog_io_item.m"
                            {
#line 1002 "prog_io_item.m"
                              MR_Word base;
#line 1002 "prog_io_item.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "prog_io_item.m"
                              *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1002 "prog_io_item.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_107_107));
#line 1002 "prog_io_item.m"
                            }
#line 997 "prog_io_item.m"
                          }
#line 991 "prog_io_item.m"
                        else
#line 1003 "prog_io_item.m"
                          {
#line 1004 "prog_io_item.m"
                            {
#line 1004 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = parse_tree__prog_mode__inst_var_constraints_types_modes_self_consistent_1_p_0(parse_tree__prog_io_item__Args_36);
                            }
#line 1003 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 1006 "prog_io_item.m"
                              {
#line 1006 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__TVarSet_48;
#line 1006 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__IVarSet_49;
#line 1006 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__ItemPredDecl_51;
#line 1006 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Item_52;
#line 1006 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_109_109;

#line 1006 "prog_io_item.m"
                                {
#line 1006 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, parse_tree__prog_io_item__VarSet_15, &parse_tree__prog_io_item__TVarSet_48);
                                }
#line 1007 "prog_io_item.m"
                                {
#line 1007 "prog_io_item.m"
                                  mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, parse_tree__prog_io_item__VarSet_15, &parse_tree__prog_io_item__IVarSet_49);
                                }
#line 1009 "prog_io_item.m"
                                {
#line 1009 "prog_io_item.m"
                                  parse_tree__prog_io_item__ItemPredDecl_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 0) = ((MR_Box) (parse_tree__prog_io_item__Functor_34));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_13));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 2) = ((MR_Box) (parse_tree__prog_io_item__Args_36));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_17));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_18));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDet_19));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 7) = ((MR_Box) (parse_tree__prog_io_item__TVarSet_48));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 8) = ((MR_Box) (parse_tree__prog_io_item__IVarSet_49));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 9) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_28));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 10) = ((MR_Box) (parse_tree__prog_io_item__Purity_31));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 11) = ((MR_Box) (parse_tree__prog_io_item__Constraints_29));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 12) = ((MR_Box) (parse_tree__prog_io_item__Context_20));
#line 1009 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_51, 13) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_21));
#line 1009 "prog_io_item.m"
                                }
#line 1013 "prog_io_item.m"
                                {
#line 1013 "prog_io_item.m"
                                  parse_tree__prog_io_item__Item_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1013 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1013 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_52, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPredDecl_51));
#line 1013 "prog_io_item.m"
                                }
#line 1014 "prog_io_item.m"
                                {
#line 1014 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_52));
#line 1014 "prog_io_item.m"
                                }
#line 1014 "prog_io_item.m"
                                {
#line 1014 "prog_io_item.m"
                                  MR_Word base;
#line 1014 "prog_io_item.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1014 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 1014 "prog_io_item.m"
                                }
#line 1006 "prog_io_item.m"
                              }
#line 1003 "prog_io_item.m"
                            else
#line 1017 "prog_io_item.m"
                              {
#line 1017 "prog_io_item.m"
                                MR_String parse_tree__prog_io_item__PredTypeTermStr_53;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_117_117;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_118_118;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_119_119;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_122_122;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_124_124;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_125_125;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_134_134;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_135_135;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_136_136;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_137_137;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_138_138;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__V_141_141;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Pieces_177;
#line 1017 "prog_io_item.m"
                                MR_Word parse_tree__prog_io_item__Spec_178;

#line 1016 "prog_io_item.m"
                                {
#line 1016 "prog_io_item.m"
                                  parse_tree__prog_io_item__PredTypeTermStr_53 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__PredTypeTerm_16);
                                }
#line 1020 "prog_io_item.m"
                                {
#line 1020 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_118_118 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
                                }
#line 1022 "prog_io_item.m"
                                {
#line 1022 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1022 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_125_125, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_53));
#line 1022 "prog_io_item.m"
                                }
#line 1022 "prog_io_item.m"
                                {
#line 1022 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 1022 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1022 "prog_io_item.m"
                                }
#line 1021 "prog_io_item.m"
                                {
#line 1021 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1021 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 1021 "prog_io_item.m"
                                }
#line 1021 "prog_io_item.m"
                                {
#line 1021 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 0) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 1021 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_119_119, 1) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 1021 "prog_io_item.m"
                                }
#line 1020 "prog_io_item.m"
                                {
#line 1020 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_117_117 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_118_118, parse_tree__prog_io_item__V_119_119);
                                }
#line 1019 "prog_io_item.m"
                                {
#line 1019 "prog_io_item.m"
                                  parse_tree__prog_io_item__Pieces_177 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[131]), parse_tree__prog_io_item__V_117_117);
                                }
#line 1025 "prog_io_item.m"
                                {
#line 1025 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_136_136 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_16);
                                }
#line 1026 "prog_io_item.m"
                                {
#line 1026 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_138_138, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_177));
#line 1026 "prog_io_item.m"
                                }
#line 1026 "prog_io_item.m"
                                {
#line 1026 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 0) = ((MR_Box) (parse_tree__prog_io_item__V_138_138));
#line 1026 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "prog_io_item.m"
                                }
#line 1025 "prog_io_item.m"
                                {
#line 1025 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 0) = ((MR_Box) (parse_tree__prog_io_item__V_136_136));
#line 1025 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_135_135, 1) = ((MR_Box) (parse_tree__prog_io_item__V_137_137));
#line 1025 "prog_io_item.m"
                                }
#line 1026 "prog_io_item.m"
                                {
#line 1026 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 0) = ((MR_Box) (parse_tree__prog_io_item__V_135_135));
#line 1026 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "prog_io_item.m"
                                }
#line 1023 "prog_io_item.m"
                                {
#line 1023 "prog_io_item.m"
                                  parse_tree__prog_io_item__Spec_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1023 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1023 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_178, 2) = ((MR_Box) (parse_tree__prog_io_item__V_134_134));
#line 1023 "prog_io_item.m"
                                }
#line 1027 "prog_io_item.m"
                                {
#line 1027 "prog_io_item.m"
                                  parse_tree__prog_io_item__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_178));
#line 1027 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_141_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "prog_io_item.m"
                                }
#line 1027 "prog_io_item.m"
                                {
#line 1027 "prog_io_item.m"
                                  MR_Word base;
#line 1027 "prog_io_item.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "prog_io_item.m"
                                  *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1027 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_141_141));
#line 1027 "prog_io_item.m"
                                }
#line 1017 "prog_io_item.m"
                              }
#line 1003 "prog_io_item.m"
                          }
#line 991 "prog_io_item.m"
                      }
#line 980 "prog_io_item.m"
                  }
#line 978 "prog_io_item.m"
                else
#line 976 "prog_io_item.m"
                  {
#line 976 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__InconsistentArgsSpec_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeInconsistentArgsSpec_37, (MR_Integer) 0)));
#line 976 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_143_143;

#line 977 "prog_io_item.m"
                    {
#line 977 "prog_io_item.m"
                      parse_tree__prog_io_item__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 0) = ((MR_Box) (parse_tree__prog_io_item__InconsistentArgsSpec_38));
#line 977 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 977 "prog_io_item.m"
                    }
#line 977 "prog_io_item.m"
                    {
#line 977 "prog_io_item.m"
                      MR_Word base;
#line 977 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 977 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 977 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_143_143));
#line 977 "prog_io_item.m"
                    }
#line 976 "prog_io_item.m"
                  }
#line 974 "prog_io_item.m"
              }
#line 972 "prog_io_item.m"
            else
#line 1031 "prog_io_item.m"
              {
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_149_149;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_150_150;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_151_151;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_154_154;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_155_155;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_164_164;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_165_165;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_166_166;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_167_167;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_168_168;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_171_171;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_183;
#line 1031 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_184;
#line 1031 "prog_io_item.m"
                MR_String parse_tree__prog_io_item__PredTypeTermStr_185;

#line 1031 "prog_io_item.m"
                {
#line 1031 "prog_io_item.m"
                  parse_tree__prog_io_item__PredTypeTermStr_185 = parse_tree__parse_tree_out_term__describe_error_term_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__VarSet_15, parse_tree__prog_io_item__PredTypeTerm_16);
                }
#line 1033 "prog_io_item.m"
                {
#line 1033 "prog_io_item.m"
                  parse_tree__prog_io_item__V_150_150 = parse_tree__prog_io_item__pred_or_func_decl_pieces_1_f_0(parse_tree__prog_io_item__PredOrFunc_13);
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_155_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_155_155, 1) = ((MR_Box) (parse_tree__prog_io_item__PredTypeTermStr_185));
#line 1034 "prog_io_item.m"
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 0) = ((MR_Box) (parse_tree__prog_io_item__V_155_155));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 1034 "prog_io_item.m"
                }
#line 1034 "prog_io_item.m"
                {
#line 1034 "prog_io_item.m"
                  parse_tree__prog_io_item__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[236])));
#line 1034 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_151_151, 1) = ((MR_Box) (parse_tree__prog_io_item__V_154_154));
#line 1034 "prog_io_item.m"
                }
#line 1033 "prog_io_item.m"
                {
#line 1033 "prog_io_item.m"
                  parse_tree__prog_io_item__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, parse_tree__prog_io_item__V_150_150, parse_tree__prog_io_item__V_151_151);
                }
#line 1032 "prog_io_item.m"
                {
#line 1032 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_183 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_187_187, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[235]), parse_tree__prog_io_item__V_149_149);
                }
#line 1036 "prog_io_item.m"
                {
#line 1036 "prog_io_item.m"
                  parse_tree__prog_io_item__V_166_166 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_188_188, parse_tree__prog_io_item__PredTypeTerm_16);
                }
#line 1037 "prog_io_item.m"
                {
#line 1037 "prog_io_item.m"
                  parse_tree__prog_io_item__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_168_168, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_183));
#line 1037 "prog_io_item.m"
                }
#line 1037 "prog_io_item.m"
                {
#line 1037 "prog_io_item.m"
                  parse_tree__prog_io_item__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 0) = ((MR_Box) (parse_tree__prog_io_item__V_168_168));
#line 1037 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_167_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_item.m"
                }
#line 1036 "prog_io_item.m"
                {
#line 1036 "prog_io_item.m"
                  parse_tree__prog_io_item__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 0) = ((MR_Box) (parse_tree__prog_io_item__V_166_166));
#line 1036 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_165_165, 1) = ((MR_Box) (parse_tree__prog_io_item__V_167_167));
#line 1036 "prog_io_item.m"
                }
#line 1037 "prog_io_item.m"
                {
#line 1037 "prog_io_item.m"
                  parse_tree__prog_io_item__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 0) = ((MR_Box) (parse_tree__prog_io_item__V_165_165));
#line 1037 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "prog_io_item.m"
                }
#line 1035 "prog_io_item.m"
                {
#line 1035 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1035 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_184, 2) = ((MR_Box) (parse_tree__prog_io_item__V_164_164));
#line 1035 "prog_io_item.m"
                }
#line 1038 "prog_io_item.m"
                {
#line 1038 "prog_io_item.m"
                  parse_tree__prog_io_item__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_184));
#line 1038 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_171_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "prog_io_item.m"
                }
#line 1038 "prog_io_item.m"
                {
#line 1038 "prog_io_item.m"
                  MR_Word base;
#line 1038 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1038 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_171_171));
#line 1038 "prog_io_item.m"
                }
#line 1031 "prog_io_item.m"
              }
#line 971 "prog_io_item.m"
          }
#line 966 "prog_io_item.m"
      }
#line 960 "prog_io_item.m"
    else
#line 1043 "prog_io_item.m"
      {
#line 1043 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_173_173;
#line 1043 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_174_174;
#line 1043 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_186;

#line 1042 "prog_io_item.m"
        {
#line 1042 "prog_io_item.m"
          parse_tree__prog_io_item__V_173_173 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_purity_0, parse_tree__prog_io_item__MaybePurity_27);
        }
#line 1043 "prog_io_item.m"
        {
#line 1043 "prog_io_item.m"
          parse_tree__prog_io_item__V_174_174 = parse_tree__maybe_error__get_any_errors3_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[6], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0, (MR_Word) &parse_tree__prog_io_item_scalar_common_2[0], parse_tree__prog_io_item__MaybeExistClassInstContext_26);
        }
#line 1042 "prog_io_item.m"
        {
#line 1042 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_186 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__V_173_173, parse_tree__prog_io_item__V_174_174);
        }
#line 1044 "prog_io_item.m"
        {
#line 1044 "prog_io_item.m"
          MR_Word base;
#line 1044 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_24 = base;
#line 1044 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_186));
#line 1044 "prog_io_item.m"
        }
#line 1043 "prog_io_item.m"
      }
#line 953 "prog_io_item.m"
  }
#line 945 "prog_io_item.m"
}

#line 863 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 863 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 863 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PredOrFunc_17,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__PurityAttrs_18,
#line 863 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_19,
#line 863 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20)
#line 863 "prog_io_item.m"
{
#line 871 "prog_io_item.m"
  {
#line 871 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 871 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Term_21;
#line 871 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_38_38;

#line 871 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 871 "prog_io_item.m"
      {
#line 871 "prog_io_item.m"
        parse_tree__prog_io_item__Term_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 871 "prog_io_item.m"
        parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 871 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "prog_io_item.m"
      }
#line 871 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 873 "prog_io_item.m"
      {
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BeforeDetismTerm_22;
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeMaybeDetism_23;
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BeforeWithInstTerm_24;
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeWithInst_25;
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeWithType_27;
#line 873 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BaseTerm_28;
#line 879 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeDetism_29;
#line 879 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithInst_30;
#line 879 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__WithType_31;

#line 872 "prog_io_item.m"
        {
#line 872 "prog_io_item.m"
          parse_tree__prog_io_item__parse_determinism_suffix_4_p_0(parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__Term_21, &parse_tree__prog_io_item__BeforeDetismTerm_22, &parse_tree__prog_io_item__MaybeMaybeDetism_23);
        }
#line 874 "prog_io_item.m"
        {
#line 874 "prog_io_item.m"
          parse_tree__prog_io_item__parse_with_inst_suffix_3_p_0(parse_tree__prog_io_item__BeforeDetismTerm_22, &parse_tree__prog_io_item__BeforeWithInstTerm_24, &parse_tree__prog_io_item__MaybeWithInst_25);
        }
#line 876 "prog_io_item.m"
        {
#line 876 "prog_io_item.m"
          parse_tree__prog_io_item__parse_with_type_suffix_4_p_0(parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__BeforeWithInstTerm_24, &parse_tree__prog_io_item__BaseTerm_28, &parse_tree__prog_io_item__MaybeWithType_27);
        }
#line 880 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeMaybeDetism_23)) == (MR_mktag((MR_Integer) 1)));
#line 880 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 880 "prog_io_item.m"
          {
#line 880 "prog_io_item.m"
            parse_tree__prog_io_item__MaybeDetism_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeMaybeDetism_23, (MR_Integer) 0)));
#line 881 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithInst_25)) == (MR_mktag((MR_Integer) 1)));
#line 881 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 881 "prog_io_item.m"
              {
#line 881 "prog_io_item.m"
                parse_tree__prog_io_item__WithInst_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithInst_25, (MR_Integer) 0)));
#line 882 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeWithType_27)) == (MR_mktag((MR_Integer) 1)));
#line 882 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 882 "prog_io_item.m"
                  parse_tree__prog_io_item__WithType_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeWithType_27, (MR_Integer) 0)));
#line 881 "prog_io_item.m"
              }
#line 880 "prog_io_item.m"
          }
#line 879 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 884 "prog_io_item.m"
          {
#line 885 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_32_32;
#line 886 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_33_33;

#line 885 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_30)) == (MR_mktag((MR_Integer) 1)));
#line 885 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 885 "prog_io_item.m"
              {
#line 885 "prog_io_item.m"
                parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_30, (MR_Integer) 0)));
#line 886 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeDetism_29)) == (MR_mktag((MR_Integer) 1)));
#line 886 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 886 "prog_io_item.m"
                  parse_tree__prog_io_item__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeDetism_29, (MR_Integer) 0)));
#line 885 "prog_io_item.m"
              }
#line 884 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 889 "prog_io_item.m"
              {
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_35;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_52_52;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 889 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_59_59;

#line 891 "prog_io_item.m"
                {
#line 891 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_28);
                }
#line 891 "prog_io_item.m"
                {
#line 891 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 891 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 891 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[224])));
#line 891 "prog_io_item.m"
                }
#line 892 "prog_io_item.m"
                {
#line 892 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 892 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 892 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 892 "prog_io_item.m"
                }
#line 890 "prog_io_item.m"
                {
#line 890 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 890 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 890 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_35, 2) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 890 "prog_io_item.m"
                }
#line 893 "prog_io_item.m"
                {
#line 893 "prog_io_item.m"
                  parse_tree__prog_io_item__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 893 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_35));
#line 893 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 893 "prog_io_item.m"
                }
#line 893 "prog_io_item.m"
                {
#line 893 "prog_io_item.m"
                  MR_Word base;
#line 893 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 893 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 893 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_59_59));
#line 893 "prog_io_item.m"
                }
#line 889 "prog_io_item.m"
              }
#line 884 "prog_io_item.m"
            else
#line 894 "prog_io_item.m"
              {
#line 895 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_36_36;

#line 895 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__WithInst_30)) == (MR_mktag((MR_Integer) 1)));
#line 895 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 895 "prog_io_item.m"
                  {
#line 895 "prog_io_item.m"
                    parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__WithInst_30, (MR_Integer) 0)));
#line 896 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "prog_io_item.m"
                  }
#line 894 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 900 "prog_io_item.m"
                  {
#line 900 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_83_83;
#line 900 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_84_84;
#line 900 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_85_85;
#line 900 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__V_90_90;
#line 900 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__Spec_131;

#line 902 "prog_io_item.m"
                    {
#line 902 "prog_io_item.m"
                      parse_tree__prog_io_item__V_85_85 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__BaseTerm_28);
                    }
#line 902 "prog_io_item.m"
                    {
#line 902 "prog_io_item.m"
                      parse_tree__prog_io_item__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 902 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_84_84, 0) = ((MR_Box) (parse_tree__prog_io_item__V_85_85));
#line 902 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[225])));
#line 902 "prog_io_item.m"
                    }
#line 903 "prog_io_item.m"
                    {
#line 903 "prog_io_item.m"
                      parse_tree__prog_io_item__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 0) = ((MR_Box) (parse_tree__prog_io_item__V_84_84));
#line 903 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "prog_io_item.m"
                    }
#line 901 "prog_io_item.m"
                    {
#line 901 "prog_io_item.m"
                      parse_tree__prog_io_item__Spec_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 901 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_131, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 901 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_131, 2) = ((MR_Box) (parse_tree__prog_io_item__V_83_83));
#line 901 "prog_io_item.m"
                    }
#line 904 "prog_io_item.m"
                    {
#line 904 "prog_io_item.m"
                      parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_131));
#line 904 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "prog_io_item.m"
                    }
#line 904 "prog_io_item.m"
                    {
#line 904 "prog_io_item.m"
                      MR_Word base;
#line 904 "prog_io_item.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 904 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 904 "prog_io_item.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 904 "prog_io_item.m"
                    }
#line 900 "prog_io_item.m"
                  }
#line 894 "prog_io_item.m"
                else
#line 906 "prog_io_item.m"
                  {
#line 909 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__PredOrFunc_17 == (MR_Integer) 1);
#line 909 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 910 "prog_io_item.m"
                      parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__WithType_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 912 "prog_io_item.m"
                      {
#line 912 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_func_decl_base_9_p_0(parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__BaseTerm_28, parse_tree__prog_io_item__MaybeDetism_29, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_16, parse_tree__prog_io_item__PurityAttrs_18, parse_tree__prog_io_item__QuantConstrAttrs_19, parse_tree__prog_io_item__MaybeIOM_20);
                      }
#line 906 "prog_io_item.m"
                    else
#line 917 "prog_io_item.m"
                      {
#line 917 "prog_io_item.m"
                        parse_tree__prog_io_item__parse_pred_decl_base_12_p_0(parse_tree__prog_io_item__PredOrFunc_17, parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__BaseTerm_28, parse_tree__prog_io_item__WithType_31, parse_tree__prog_io_item__WithInst_30, parse_tree__prog_io_item__MaybeDetism_29, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_16, parse_tree__prog_io_item__PurityAttrs_18, parse_tree__prog_io_item__QuantConstrAttrs_19, parse_tree__prog_io_item__MaybeIOM_20);
                      }
#line 906 "prog_io_item.m"
                  }
#line 894 "prog_io_item.m"
              }
#line 884 "prog_io_item.m"
          }
#line 879 "prog_io_item.m"
        else
#line 926 "prog_io_item.m"
          {
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Specs_37;
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_92_92;
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_93_93;
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_94_94;
#line 926 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_95_95;

#line 924 "prog_io_item.m"
            {
#line 924 "prog_io_item.m"
              parse_tree__prog_io_item__V_92_92 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[2], parse_tree__prog_io_item__MaybeMaybeDetism_23);
            }
#line 925 "prog_io_item.m"
            {
#line 925 "prog_io_item.m"
              parse_tree__prog_io_item__V_94_94 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[3], parse_tree__prog_io_item__MaybeWithInst_25);
            }
#line 926 "prog_io_item.m"
            {
#line 926 "prog_io_item.m"
              parse_tree__prog_io_item__V_95_95 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[4], parse_tree__prog_io_item__MaybeWithType_27);
            }
#line 926 "prog_io_item.m"
            {
#line 926 "prog_io_item.m"
              parse_tree__prog_io_item__V_93_93 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_138_138, parse_tree__prog_io_item__V_94_94, parse_tree__prog_io_item__V_95_95);
            }
#line 925 "prog_io_item.m"
            {
#line 925 "prog_io_item.m"
              parse_tree__prog_io_item__Specs_37 = mercury__list__f_43_43_2_f_0(parse_tree__prog_io_item__TypeCtorInfo_138_138, parse_tree__prog_io_item__V_92_92, parse_tree__prog_io_item__V_93_93);
            }
#line 927 "prog_io_item.m"
            {
#line 927 "prog_io_item.m"
              MR_Word base;
#line 927 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 927 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 927 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_37));
#line 927 "prog_io_item.m"
            }
#line 926 "prog_io_item.m"
          }
#line 873 "prog_io_item.m"
      }
#line 871 "prog_io_item.m"
    else
#line 936 "prog_io_item.m"
      {
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_98_98;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_99_99;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_100_100;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_103_103;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_106_106;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_109_109;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_112_112;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_113_113;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_122_122;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_123_123;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_124_124;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_125_125;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_128_128;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_134;
#line 936 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_135;

#line 933 "prog_io_item.m"
        {
#line 933 "prog_io_item.m"
          parse_tree__prog_io_item__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_99_99, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 933 "prog_io_item.m"
        }
#line 936 "prog_io_item.m"
        {
#line 936 "prog_io_item.m"
          parse_tree__prog_io_item__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_113_113, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 936 "prog_io_item.m"
        }
#line 936 "prog_io_item.m"
        {
#line 936 "prog_io_item.m"
          parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_item__V_113_113));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[76])));
#line 936 "prog_io_item.m"
        }
#line 936 "prog_io_item.m"
        {
#line 936 "prog_io_item.m"
          parse_tree__prog_io_item__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[229])));
#line 936 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_109_109, 1) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 936 "prog_io_item.m"
        }
#line 935 "prog_io_item.m"
        {
#line 935 "prog_io_item.m"
          parse_tree__prog_io_item__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[228])));
#line 935 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_106_106, 1) = ((MR_Box) (parse_tree__prog_io_item__V_109_109));
#line 935 "prog_io_item.m"
        }
#line 934 "prog_io_item.m"
        {
#line 934 "prog_io_item.m"
          parse_tree__prog_io_item__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 934 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[227])));
#line 934 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_103_103, 1) = ((MR_Box) (parse_tree__prog_io_item__V_106_106));
#line 934 "prog_io_item.m"
        }
#line 933 "prog_io_item.m"
        {
#line 933 "prog_io_item.m"
          parse_tree__prog_io_item__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[226])));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_100_100, 1) = ((MR_Box) (parse_tree__prog_io_item__V_103_103));
#line 933 "prog_io_item.m"
        }
#line 933 "prog_io_item.m"
        {
#line 933 "prog_io_item.m"
          parse_tree__prog_io_item__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 0) = ((MR_Box) (parse_tree__prog_io_item__V_99_99));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_98_98, 1) = ((MR_Box) (parse_tree__prog_io_item__V_100_100));
#line 933 "prog_io_item.m"
        }
#line 933 "prog_io_item.m"
        {
#line 933 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[221])));
#line 933 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_134, 1) = ((MR_Box) (parse_tree__prog_io_item__V_98_98));
#line 933 "prog_io_item.m"
        }
#line 938 "prog_io_item.m"
        {
#line 938 "prog_io_item.m"
          parse_tree__prog_io_item__V_125_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_125_125, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_134));
#line 938 "prog_io_item.m"
        }
#line 938 "prog_io_item.m"
        {
#line 938 "prog_io_item.m"
          parse_tree__prog_io_item__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 0) = ((MR_Box) (parse_tree__prog_io_item__V_125_125));
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "prog_io_item.m"
        }
#line 938 "prog_io_item.m"
        {
#line 938 "prog_io_item.m"
          parse_tree__prog_io_item__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_123_123, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_123_123, 1) = ((MR_Box) (parse_tree__prog_io_item__V_124_124));
#line 938 "prog_io_item.m"
        }
#line 938 "prog_io_item.m"
        {
#line 938 "prog_io_item.m"
          parse_tree__prog_io_item__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 0) = ((MR_Box) (parse_tree__prog_io_item__V_123_123));
#line 938 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_122_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 938 "prog_io_item.m"
        }
#line 937 "prog_io_item.m"
        {
#line 937 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 937 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_135, 2) = ((MR_Box) (parse_tree__prog_io_item__V_122_122));
#line 937 "prog_io_item.m"
        }
#line 939 "prog_io_item.m"
        {
#line 939 "prog_io_item.m"
          parse_tree__prog_io_item__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_135));
#line 939 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "prog_io_item.m"
        }
#line 939 "prog_io_item.m"
        {
#line 939 "prog_io_item.m"
          MR_Word base;
#line 939 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 939 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 939 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_128_128));
#line 939 "prog_io_item.m"
        }
#line 936 "prog_io_item.m"
      }
#line 871 "prog_io_item.m"
  }
#line 863 "prog_io_item.m"
}

#line 845 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0_1(
#line 845 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 845 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 845 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 845 "prog_io_item.m"
{
#line 845 "prog_io_item.m"
  {
#line 845 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 845 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_HeadVar__2_58;

#line 845 "prog_io_item.m"
    {
#line 845 "prog_io_item.m"
      parse_tree__prog_io_item__IntroducedFrom__pred__parse_clause__845__1_2_p_0(((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_HeadVar__2_58);
    }
#line 845 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_HeadVar__2_58));
#line 845 "prog_io_item.m"
  }
#line 845 "prog_io_item.m"
}

#line 808 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_clause_7_p_0(
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet0_9,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__HeadTerm_10,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__BodyTerm0_11,
#line 808 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 808 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 808 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 808 "prog_io_item.m"
{
#line 812 "prog_io_item.m"
  {
#line 812 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_55_55;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet0_15;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__GoalContextPieces_16;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBodyGoal_17;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ProgVarSet_18;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VarSet_19;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeFuncResultTerm_24;
#line 812 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeFunctor_26;
#line 818 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__FuncResultTerm0_21;
#line 818 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__FuncHeadTerm_23;
#line 820 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__FuncHeadTerm0_20;
#line 820 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_37_37;
#line 820 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_38_38;
#line 820 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_39_39;
#line 820 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_40_40;
#line 820 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_41_41;
#line 819 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;

#line 813 "prog_io_item.m"
    {
#line 813 "prog_io_item.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_53_53, parse_tree__prog_io_item__TypeCtorInfo_54_54, parse_tree__prog_io_item__VarSet0_9, &parse_tree__prog_io_item__ProgVarSet0_15);
    }
#line 13135 "parse_tree.prog_io_item.c"
    parse_tree__prog_io_item__TypeCtorInfo_55_55 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 814 "prog_io_item.m"
    {
#line 814 "prog_io_item.m"
      parse_tree__prog_io_item__GoalContextPieces_16 = mercury__cord__init_0_f_0(parse_tree__prog_io_item__TypeCtorInfo_55_55);
    }
#line 815 "prog_io_item.m"
    {
#line 815 "prog_io_item.m"
      parse_tree__prog_io_goal__parse_goal_5_p_0(parse_tree__prog_io_item__BodyTerm0_11, parse_tree__prog_io_item__GoalContextPieces_16, &parse_tree__prog_io_item__MaybeBodyGoal_17, parse_tree__prog_io_item__ProgVarSet0_15, &parse_tree__prog_io_item__ProgVarSet_18);
    }
#line 817 "prog_io_item.m"
    {
#line 817 "prog_io_item.m"
      mercury__varset__coerce_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_54_54, parse_tree__prog_io_item__TypeCtorInfo_53_53, parse_tree__prog_io_item__ProgVarSet_18, &parse_tree__prog_io_item__VarSet_19);
    }
#line 819 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__HeadTerm_10)) == (MR_mktag((MR_Integer) 0)));
#line 819 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 819 "prog_io_item.m"
      {
#line 819 "prog_io_item.m"
        parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_10, (MR_Integer) 0)));
#line 819 "prog_io_item.m"
        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_10, (MR_Integer) 1)));
#line 819 "prog_io_item.m"
        parse_tree__prog_io_item__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadTerm_10, (MR_Integer) 2)));
#line 819 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 0)));
#line 819 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 819 "prog_io_item.m"
          {
#line 819 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 819 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_38_38, (MR_String) "=") == 0);
#line 820 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 820 "prog_io_item.m"
              {
#line 820 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 820 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 820 "prog_io_item.m"
                  {
#line 820 "prog_io_item.m"
                    parse_tree__prog_io_item__FuncHeadTerm0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 820 "prog_io_item.m"
                    parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 1)));
#line 820 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 820 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 820 "prog_io_item.m"
                      {
#line 820 "prog_io_item.m"
                        parse_tree__prog_io_item__FuncResultTerm0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, (MR_Integer) 0)));
#line 820 "prog_io_item.m"
                        parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, (MR_Integer) 1)));
#line 820 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 820 "prog_io_item.m"
                          {
#line 821 "prog_io_item.m"
                            {
#line 821 "prog_io_item.m"
                              parse_tree__prog_io_item__FuncHeadTerm_23 = parse_tree__prog_io_item__desugar_field_access_1_f_0(parse_tree__prog_io_item__FuncHeadTerm0_20);
                            }
#line 821 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 820 "prog_io_item.m"
                          }
#line 820 "prog_io_item.m"
                      }
#line 820 "prog_io_item.m"
                  }
#line 820 "prog_io_item.m"
              }
#line 819 "prog_io_item.m"
          }
#line 819 "prog_io_item.m"
      }
#line 818 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 823 "prog_io_item.m"
      {
#line 823 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadContextPieces_25;

#line 823 "prog_io_item.m"
        {
#line 823 "prog_io_item.m"
          parse_tree__prog_io_item__MaybeFuncResultTerm_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 823 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncResultTerm_24, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncResultTerm0_21));
#line 823 "prog_io_item.m"
        }
#line 824 "prog_io_item.m"
        {
#line 824 "prog_io_item.m"
          parse_tree__prog_io_item__HeadContextPieces_25 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_55_55, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[222]))));
        }
#line 825 "prog_io_item.m"
        {
#line 825 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_53_53, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__FuncHeadTerm_23, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__HeadContextPieces_25, &parse_tree__prog_io_item__MaybeFunctor_26);
        }
#line 823 "prog_io_item.m"
      }
#line 818 "prog_io_item.m"
    else
#line 828 "prog_io_item.m"
      {
#line 828 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadContextPieces_52;

#line 828 "prog_io_item.m"
        parse_tree__prog_io_item__MaybeFuncResultTerm_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "prog_io_item.m"
        {
#line 829 "prog_io_item.m"
          parse_tree__prog_io_item__HeadContextPieces_52 = mercury__cord__singleton_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_55_55, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[223]))));
        }
#line 830 "prog_io_item.m"
        {
#line 830 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_sym_name_and_args_5_p_0(parse_tree__prog_io_item__TypeCtorInfo_53_53, parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__HeadTerm_10, parse_tree__prog_io_item__VarSet_19, parse_tree__prog_io_item__HeadContextPieces_52, &parse_tree__prog_io_item__MaybeFunctor_26);
        }
#line 828 "prog_io_item.m"
      }
#line 850 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeFunctor_26)) == (MR_mktag((MR_Integer) 0))))
#line 851 "prog_io_item.m"
      {
#line 851 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__FunctorSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__MaybeFunctor_26, (MR_Integer) 0)));
#line 851 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Specs_36;
#line 851 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;

#line 852 "prog_io_item.m"
        {
#line 852 "prog_io_item.m"
          parse_tree__prog_io_item__V_46_46 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, parse_tree__prog_io_item__MaybeBodyGoal_17);
        }
#line 852 "prog_io_item.m"
        {
#line 852 "prog_io_item.m"
          parse_tree__prog_io_item__Specs_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__prog_io_item__FunctorSpecs_35, parse_tree__prog_io_item__V_46_46);
        }
#line 853 "prog_io_item.m"
        {
#line 853 "prog_io_item.m"
          MR_Word base;
#line 853 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 853 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Specs_36));
#line 853 "prog_io_item.m"
        }
#line 851 "prog_io_item.m"
      }
#line 850 "prog_io_item.m"
    else
#line 835 "prog_io_item.m"
      {
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Name_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_26, (MR_Integer) 0)));
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFunctor_26, (MR_Integer) 1)));
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__PredOrFunc_30;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms_31;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ProgArgTerms_32;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemClause_33;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Item_34;
#line 835 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;

#line 840 "prog_io_item.m"
        if ((parse_tree__prog_io_item__MaybeFuncResultTerm_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 841 "prog_io_item.m"
          {
#line 842 "prog_io_item.m"
            parse_tree__prog_io_item__PredOrFunc_30 = (MR_Integer) 0;
#line 843 "prog_io_item.m"
            parse_tree__prog_io_item__ArgTerms_31 = parse_tree__prog_io_item__ArgTerms0_28;
#line 841 "prog_io_item.m"
          }
#line 840 "prog_io_item.m"
        else
#line 837 "prog_io_item.m"
          {
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__FuncResultTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeFuncResultTerm_24, (MR_Integer) 0)));
#line 837 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_47_47;

#line 838 "prog_io_item.m"
            parse_tree__prog_io_item__PredOrFunc_30 = (MR_Integer) 1;
#line 839 "prog_io_item.m"
            {
#line 839 "prog_io_item.m"
              parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__FuncResultTerm_29));
#line 839 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "prog_io_item.m"
            }
#line 839 "prog_io_item.m"
            {
#line 839 "prog_io_item.m"
              parse_tree__prog_io_item__ArgTerms_31 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], parse_tree__prog_io_item__ArgTerms0_28, parse_tree__prog_io_item__V_47_47);
            }
#line 837 "prog_io_item.m"
          }
#line 845 "prog_io_item.m"
        {
#line 845 "prog_io_item.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_io_item_scalar_common_1[0], (MR_Word) &parse_tree__prog_io_item_scalar_common_1[1], (MR_Word) &parse_tree__prog_io_item_scalar_common_2[1], parse_tree__prog_io_item__ArgTerms_31, &parse_tree__prog_io_item__ProgArgTerms_32);
        }
#line 846 "prog_io_item.m"
        {
#line 846 "prog_io_item.m"
          parse_tree__prog_io_item__ItemClause_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_27));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 1) = ((MR_Box) (parse_tree__prog_io_item__PredOrFunc_30));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 2) = ((MR_Box) (parse_tree__prog_io_item__ProgArgTerms_32));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 4) = ((MR_Box) (parse_tree__prog_io_item__ProgVarSet_18));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeBodyGoal_17));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 846 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemClause_33, 7) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_13));
#line 846 "prog_io_item.m"
        }
#line 848 "prog_io_item.m"
        parse_tree__prog_io_item__Item_34 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__ItemClause_33);
#line 849 "prog_io_item.m"
        {
#line 849 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 849 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_34));
#line 849 "prog_io_item.m"
        }
#line 849 "prog_io_item.m"
        {
#line 849 "prog_io_item.m"
          MR_Word base;
#line 849 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 849 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_14 = base;
#line 849 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 849 "prog_io_item.m"
        }
#line 835 "prog_io_item.m"
      }
#line 812 "prog_io_item.m"
  }
#line 808 "prog_io_item.m"
}

#line 740 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_version_numbers_marker_6_p_0(
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 740 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_8,
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 740 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 740 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 740 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12)
#line 740 "prog_io_item.m"
{
#line 746 "prog_io_item.m"
  {
#line 746 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 746 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumberTerm_13;
#line 746 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_14;
#line 746 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VersionNumbersTerm_15;
#line 747 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;
#line 747 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_35_35;
#line 747 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;

#line 747 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 747 "prog_io_item.m"
      {
#line 747 "prog_io_item.m"
        parse_tree__prog_io_item__VersionNumberTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
        parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 1)));
#line 747 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 747 "prog_io_item.m"
          {
#line 747 "prog_io_item.m"
            parse_tree__prog_io_item__ModuleNameTerm_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
            parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, (MR_Integer) 1)));
#line 747 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 747 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 747 "prog_io_item.m"
              {
#line 747 "prog_io_item.m"
                parse_tree__prog_io_item__VersionNumbersTerm_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 747 "prog_io_item.m"
                parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, (MR_Integer) 1)));
#line 747 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "prog_io_item.m"
              }
#line 747 "prog_io_item.m"
          }
#line 747 "prog_io_item.m"
      }
#line 746 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 749 "prog_io_item.m"
      {
#line 751 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__VersionNumber_16;
#line 751 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;
#line 751 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_38_38;
#line 751 "prog_io_item.m"
        MR_Integer parse_tree__prog_io_item__V_129_129;
#line 751 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_17_17;

#line 751 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0)));
#line 751 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 751 "prog_io_item.m"
          {
#line 751 "prog_io_item.m"
            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 0)));
#line 751 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 1)));
#line 751 "prog_io_item.m"
            parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 2)));
#line 751 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 751 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 751 "prog_io_item.m"
              {
#line 751 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 751 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 751 "prog_io_item.m"
                  {
#line 751 "prog_io_item.m"
                    parse_tree__prog_io_item__VersionNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)));
#line 752 "prog_io_item.m"
                    {
#line 752 "prog_io_item.m"
                      parse_tree__prog_io_item__V_129_129 = recompilation__version__version_numbers_version_number_0_f_0();
                    }
#line 752 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__VersionNumber_16 == parse_tree__prog_io_item__V_129_129);
#line 751 "prog_io_item.m"
                  }
#line 751 "prog_io_item.m"
              }
#line 751 "prog_io_item.m"
          }
#line 749 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 754 "prog_io_item.m"
          {
#line 754 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_130_130;

#line 754 "prog_io_item.m"
            {
#line 754 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_14, &parse_tree__prog_io_item__V_130_130);
            }
#line 754 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 754 "prog_io_item.m"
              {
#line 754 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__V_130_130);
              }
#line 754 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 756 "prog_io_item.m"
              {
#line 756 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeVersionNumbers_18;

#line 755 "prog_io_item.m"
                {
#line 755 "prog_io_item.m"
                  recompilation__version__parse_version_numbers_2_p_0(parse_tree__prog_io_item__VersionNumbersTerm_15, &parse_tree__prog_io_item__MaybeVersionNumbers_18);
                }
#line 761 "prog_io_item.m"
                if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_18)) == (MR_mktag((MR_Integer) 0))))
#line 763 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_item__MaybeVersionNumbers_18;
#line 761 "prog_io_item.m"
                else
#line 758 "prog_io_item.m"
                  {
#line 758 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__VersionNumbers_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeVersionNumbers_18, (MR_Integer) 0)));
#line 758 "prog_io_item.m"
                    MR_Word parse_tree__prog_io_item__IOM_20;

#line 759 "prog_io_item.m"
                    {
#line 759 "prog_io_item.m"
                      parse_tree__prog_io_item__IOM_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__IOM_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 759 "prog_io_item.m"
                      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__IOM_20, 1) = ((MR_Box) (parse_tree__prog_io_item__VersionNumbers_19));
#line 759 "prog_io_item.m"
                    }
#line 760 "prog_io_item.m"
                    {
#line 760 "prog_io_item.m"
                      MR_Word base;
#line 760 "prog_io_item.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 760 "prog_io_item.m"
                      *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 760 "prog_io_item.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__IOM_20));
#line 760 "prog_io_item.m"
                    }
#line 758 "prog_io_item.m"
                  }
#line 756 "prog_io_item.m"
              }
#line 754 "prog_io_item.m"
            else
#line 767 "prog_io_item.m"
              {
#line 767 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_23;
#line 767 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_52_52;
#line 767 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_53_53;
#line 767 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_54_54;
#line 767 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_59_59;

#line 769 "prog_io_item.m"
                {
#line 769 "prog_io_item.m"
                  parse_tree__prog_io_item__V_54_54 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__ModuleNameTerm_14);
                }
#line 769 "prog_io_item.m"
                {
#line 769 "prog_io_item.m"
                  parse_tree__prog_io_item__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_53_53, 0) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 769 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[219])));
#line 769 "prog_io_item.m"
                }
#line 770 "prog_io_item.m"
                {
#line 770 "prog_io_item.m"
                  parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__V_53_53));
#line 770 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "prog_io_item.m"
                }
#line 768 "prog_io_item.m"
                {
#line 768 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 768 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 768 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_23, 2) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 768 "prog_io_item.m"
                }
#line 771 "prog_io_item.m"
                {
#line 771 "prog_io_item.m"
                  parse_tree__prog_io_item__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_23));
#line 771 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "prog_io_item.m"
                }
#line 771 "prog_io_item.m"
                {
#line 771 "prog_io_item.m"
                  MR_Word base;
#line 771 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 771 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 771 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_59_59));
#line 771 "prog_io_item.m"
                }
#line 767 "prog_io_item.m"
              }
#line 754 "prog_io_item.m"
          }
#line 749 "prog_io_item.m"
        else
#line 785 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__VersionNumberTerm_13)) == (MR_mktag((MR_Integer) 0))))
#line 775 "prog_io_item.m"
          {
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__DummyTerm_28;
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Warning_29;
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemNothing_30;
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Item_31;
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_86_86;
#line 775 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__IOM_119;

#line 778 "prog_io_item.m"
            {
#line 778 "prog_io_item.m"
              parse_tree__prog_io_item__dummy_term_with_context_2_p_0(parse_tree__prog_io_item__Context_10, &parse_tree__prog_io_item__DummyTerm_28);
            }
#line 779 "prog_io_item.m"
            {
#line 779 "prog_io_item.m"
              parse_tree__prog_io_item__Warning_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 779 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_3[8])));
#line 779 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_29, 1) = ((MR_Box) ((MR_String) "interface file needs to be recreated, the version numbers are out of date"));
#line 779 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Warning_29, 2) = ((MR_Box) (parse_tree__prog_io_item__DummyTerm_28));
#line 779 "prog_io_item.m"
            }
#line 781 "prog_io_item.m"
            {
#line 781 "prog_io_item.m"
              parse_tree__prog_io_item__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 781 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_86_86, 0) = ((MR_Box) (parse_tree__prog_io_item__Warning_29));
#line 781 "prog_io_item.m"
            }
#line 781 "prog_io_item.m"
            {
#line 781 "prog_io_item.m"
              parse_tree__prog_io_item__ItemNothing_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 781 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_30, 0) = ((MR_Box) (parse_tree__prog_io_item__V_86_86));
#line 781 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_30, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 781 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemNothing_30, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_11));
#line 781 "prog_io_item.m"
            }
#line 782 "prog_io_item.m"
            {
#line 782 "prog_io_item.m"
              parse_tree__prog_io_item__Item_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 782 "prog_io_item.m"
              MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_31, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemNothing_30));
#line 782 "prog_io_item.m"
            }
#line 783 "prog_io_item.m"
            {
#line 783 "prog_io_item.m"
              parse_tree__prog_io_item__IOM_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 783 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__IOM_119, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_31));
#line 783 "prog_io_item.m"
            }
#line 784 "prog_io_item.m"
            {
#line 784 "prog_io_item.m"
              MR_Word base;
#line 784 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 784 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 784 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__IOM_119));
#line 784 "prog_io_item.m"
            }
#line 775 "prog_io_item.m"
          }
#line 785 "prog_io_item.m"
        else
#line 786 "prog_io_item.m"
          {
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__VersionNumberContext_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 1)));
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_74_74;
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_75_75;
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_80_80;
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_121;
#line 786 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__VersionNumberTerm_13, (MR_Integer) 0)));

#line 790 "prog_io_item.m"
            {
#line 790 "prog_io_item.m"
              parse_tree__prog_io_item__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_75_75, 0) = ((MR_Box) (parse_tree__prog_io_item__VersionNumberContext_33));
#line 790 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[220])));
#line 790 "prog_io_item.m"
            }
#line 790 "prog_io_item.m"
            {
#line 790 "prog_io_item.m"
              parse_tree__prog_io_item__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 0) = ((MR_Box) (parse_tree__prog_io_item__V_75_75));
#line 790 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "prog_io_item.m"
            }
#line 789 "prog_io_item.m"
            {
#line 789 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 789 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 789 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_121, 2) = ((MR_Box) (parse_tree__prog_io_item__V_74_74));
#line 789 "prog_io_item.m"
            }
#line 791 "prog_io_item.m"
            {
#line 791 "prog_io_item.m"
              parse_tree__prog_io_item__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_121));
#line 791 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "prog_io_item.m"
            }
#line 791 "prog_io_item.m"
            {
#line 791 "prog_io_item.m"
              MR_Word base;
#line 791 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 791 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 791 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_80_80));
#line 791 "prog_io_item.m"
            }
#line 786 "prog_io_item.m"
          }
#line 749 "prog_io_item.m"
      }
#line 746 "prog_io_item.m"
    else
#line 799 "prog_io_item.m"
      {
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_89_89;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_90_90;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_111_111;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_112_112;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_113_113;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_114_114;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_117_117;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_125;
#line 799 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_126;

#line 795 "prog_io_item.m"
        {
#line 795 "prog_io_item.m"
          parse_tree__prog_io_item__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_90_90, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_8));
#line 795 "prog_io_item.m"
        }
#line 795 "prog_io_item.m"
        {
#line 795 "prog_io_item.m"
          parse_tree__prog_io_item__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 0) = ((MR_Box) (parse_tree__prog_io_item__V_90_90));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[105])));
#line 795 "prog_io_item.m"
        }
#line 795 "prog_io_item.m"
        {
#line 795 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[221])));
#line 795 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_125, 1) = ((MR_Box) (parse_tree__prog_io_item__V_89_89));
#line 795 "prog_io_item.m"
        }
#line 801 "prog_io_item.m"
        {
#line 801 "prog_io_item.m"
          parse_tree__prog_io_item__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_114_114, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_125));
#line 801 "prog_io_item.m"
        }
#line 801 "prog_io_item.m"
        {
#line 801 "prog_io_item.m"
          parse_tree__prog_io_item__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 0) = ((MR_Box) (parse_tree__prog_io_item__V_114_114));
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_io_item.m"
        }
#line 801 "prog_io_item.m"
        {
#line 801 "prog_io_item.m"
          parse_tree__prog_io_item__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_112_112, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_112_112, 1) = ((MR_Box) (parse_tree__prog_io_item__V_113_113));
#line 801 "prog_io_item.m"
        }
#line 801 "prog_io_item.m"
        {
#line 801 "prog_io_item.m"
          parse_tree__prog_io_item__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 0) = ((MR_Box) (parse_tree__prog_io_item__V_112_112));
#line 801 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "prog_io_item.m"
        }
#line 800 "prog_io_item.m"
        {
#line 800 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 800 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 800 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_126, 2) = ((MR_Box) (parse_tree__prog_io_item__V_111_111));
#line 800 "prog_io_item.m"
        }
#line 802 "prog_io_item.m"
        {
#line 802 "prog_io_item.m"
          parse_tree__prog_io_item__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_126));
#line 802 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "prog_io_item.m"
        }
#line 802 "prog_io_item.m"
        {
#line 802 "prog_io_item.m"
          MR_Word base;
#line 802 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 802 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 802 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_117_117));
#line 802 "prog_io_item.m"
        }
#line 799 "prog_io_item.m"
      }
#line 746 "prog_io_item.m"
  }
#line 740 "prog_io_item.m"
}

#line 678 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_external_item_6_p_0(
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_8,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_9,
#line 678 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_10,
#line 678 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_11,
#line 678 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12)
#line 678 "prog_io_item.m"
{
#line 683 "prog_io_item.m"
  {
#line 683 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_9)) == (MR_mktag((MR_Integer) 1)));
#line 683 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__PredSpecTerm_13;
#line 683 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeBackEnd_14;
#line 687 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_101_101;
#line 687 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_102_102;

#line 685 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 685 "prog_io_item.m"
      {
#line 685 "prog_io_item.m"
        parse_tree__prog_io_item__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 0)));
#line 685 "prog_io_item.m"
        parse_tree__prog_io_item__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_9, (MR_Integer) 1)));
#line 687 "prog_io_item.m"
        if ((parse_tree__prog_io_item__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "prog_io_item.m"
          {
#line 685 "prog_io_item.m"
            parse_tree__prog_io_item__PredSpecTerm_13 = parse_tree__prog_io_item__V_102_102;
#line 686 "prog_io_item.m"
            parse_tree__prog_io_item__MaybeBackEnd_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 685 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 685 "prog_io_item.m"
          }
#line 687 "prog_io_item.m"
        else
#line 688 "prog_io_item.m"
          {
#line 688 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__BackEndFunctor_16;
#line 688 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BackEnd_18;
#line 688 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 688 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_35_35;
#line 688 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_36_36;
#line 689 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_17_17;

#line 688 "prog_io_item.m"
            parse_tree__prog_io_item__PredSpecTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, (MR_Integer) 0)));
#line 688 "prog_io_item.m"
            parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_101_101, (MR_Integer) 1)));
#line 688 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 688 "prog_io_item.m"
              {
#line 689 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_102_102)) == (MR_mktag((MR_Integer) 0)));
#line 689 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 689 "prog_io_item.m"
                  {
#line 689 "prog_io_item.m"
                    parse_tree__prog_io_item__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, (MR_Integer) 0)));
#line 689 "prog_io_item.m"
                    parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, (MR_Integer) 1)));
#line 689 "prog_io_item.m"
                    parse_tree__prog_io_item__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_102_102, (MR_Integer) 2)));
#line 689 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 688 "prog_io_item.m"
                      {
#line 689 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_35_35)) == (MR_mktag((MR_Integer) 0)));
#line 689 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 689 "prog_io_item.m"
                          {
#line 689 "prog_io_item.m"
                            parse_tree__prog_io_item__BackEndFunctor_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, (MR_Integer) 0)));
#line 693 "prog_io_item.m"
                            if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_16, (MR_String) "low_level_backend") == 0))
#line 694 "prog_io_item.m"
                              {
#line 694 "prog_io_item.m"
                                parse_tree__prog_io_item__BackEnd_18 = (MR_Integer) 1;
#line 694 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 694 "prog_io_item.m"
                              }
#line 693 "prog_io_item.m"
                            else
#line 693 "prog_io_item.m"
                            if ((strcmp(parse_tree__prog_io_item__BackEndFunctor_16, (MR_String) "high_level_backend") == 0))
#line 691 "prog_io_item.m"
                              {
#line 691 "prog_io_item.m"
                                parse_tree__prog_io_item__BackEnd_18 = (MR_Integer) 0;
#line 691 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 691 "prog_io_item.m"
                              }
#line 693 "prog_io_item.m"
                            else
#line 693 "prog_io_item.m"
                              parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 688 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 688 "prog_io_item.m"
                              {
#line 697 "prog_io_item.m"
                                {
#line 697 "prog_io_item.m"
                                  parse_tree__prog_io_item__MaybeBackEnd_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "prog_io_item.m"
                                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeBackEnd_14, 0) = ((MR_Box) (parse_tree__prog_io_item__BackEnd_18));
#line 697 "prog_io_item.m"
                                }
#line 697 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 688 "prog_io_item.m"
                              }
#line 689 "prog_io_item.m"
                          }
#line 688 "prog_io_item.m"
                      }
#line 689 "prog_io_item.m"
                  }
#line 688 "prog_io_item.m"
              }
#line 688 "prog_io_item.m"
          }
#line 685 "prog_io_item.m"
      }
#line 683 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 701 "prog_io_item.m"
      {
#line 701 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeSymSpec_19;

#line 700 "prog_io_item.m"
        {
#line 700 "prog_io_item.m"
          parse_tree__prog_io_sym_name__parse_implicitly_qualified_symbol_name_specifier_4_p_0(parse_tree__prog_io_item__ModuleName_7, parse_tree__prog_io_item__VarSet_8, parse_tree__prog_io_item__PredSpecTerm_13, &parse_tree__prog_io_item__MaybeSymSpec_19);
        }
#line 705 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeSymSpec_19)) == (MR_mktag((MR_Integer) 0))))
#line 704 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_12 = (MR_Word) parse_tree__prog_io_item__MaybeSymSpec_19;
#line 705 "prog_io_item.m"
        else
#line 706 "prog_io_item.m"
          {
#line 706 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__SymSpec_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeSymSpec_19, (MR_Integer) 0)));

#line 715 "prog_io_item.m"
            if (((MR_tag((MR_Word) parse_tree__prog_io_item__SymSpec_21)) == (MR_mktag((MR_Integer) 0))))
#line 708 "prog_io_item.m"
              {
#line 708 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Msg_24;
#line 708 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_25;
#line 708 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_56_56;
#line 708 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_58_58;

#line 711 "prog_io_item.m"
                {
#line 711 "prog_io_item.m"
                  parse_tree__prog_io_item__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 711 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_24, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 711 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Msg_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[217])));
#line 711 "prog_io_item.m"
                }
#line 713 "prog_io_item.m"
                {
#line 713 "prog_io_item.m"
                  parse_tree__prog_io_item__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 0) = ((MR_Box) (parse_tree__prog_io_item__Msg_24));
#line 713 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "prog_io_item.m"
                }
#line 712 "prog_io_item.m"
                {
#line 712 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 712 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 712 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_56_56));
#line 712 "prog_io_item.m"
                }
#line 714 "prog_io_item.m"
                {
#line 714 "prog_io_item.m"
                  parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 714 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "prog_io_item.m"
                }
#line 714 "prog_io_item.m"
                {
#line 714 "prog_io_item.m"
                  MR_Word base;
#line 714 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 714 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 714 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 714 "prog_io_item.m"
                }
#line 708 "prog_io_item.m"
              }
#line 715 "prog_io_item.m"
            else
#line 716 "prog_io_item.m"
              {
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_21, (MR_Integer) 0)));
#line 716 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__SymSpec_21, (MR_Integer) 1)));
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ExternalInfo_29;
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pragma_30;
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ItemPragma_31;
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Item_32;
#line 716 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_39_39;

#line 718 "prog_io_item.m"
                {
#line 718 "prog_io_item.m"
                  parse_tree__prog_io_item__ExternalInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 718 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_29, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_26));
#line 718 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_29, 1) = ((MR_Box) (parse_tree__prog_io_item__Arity_27));
#line 718 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_29, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 718 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ExternalInfo_29, 3) = ((MR_Box) (parse_tree__prog_io_item__MaybeBackEnd_14));
#line 718 "prog_io_item.m"
                }
#line 720 "prog_io_item.m"
                {
#line 720 "prog_io_item.m"
                  parse_tree__prog_io_item__Pragma_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 720 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Pragma_30, 1) = ((MR_Box) (parse_tree__prog_io_item__ExternalInfo_29));
#line 720 "prog_io_item.m"
                }
#line 721 "prog_io_item.m"
                {
#line 721 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemPragma_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 721 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_31, 0) = ((MR_Box) (parse_tree__prog_io_item__Pragma_30));
#line 721 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_31, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 721 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPragma_31, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_11));
#line 721 "prog_io_item.m"
                }
#line 723 "prog_io_item.m"
                {
#line 723 "prog_io_item.m"
                  parse_tree__prog_io_item__Item_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 723 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Item_32, 1) = ((MR_Box) (parse_tree__prog_io_item__ItemPragma_31));
#line 723 "prog_io_item.m"
                }
#line 724 "prog_io_item.m"
                {
#line 724 "prog_io_item.m"
                  parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__Item_32));
#line 724 "prog_io_item.m"
                }
#line 724 "prog_io_item.m"
                {
#line 724 "prog_io_item.m"
                  MR_Word base;
#line 724 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 724 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 724 "prog_io_item.m"
                }
#line 716 "prog_io_item.m"
              }
#line 706 "prog_io_item.m"
          }
#line 701 "prog_io_item.m"
      }
#line 683 "prog_io_item.m"
    else
#line 732 "prog_io_item.m"
      {
#line 732 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_91_91;
#line 732 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_92_92;
#line 732 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_97_97;
#line 732 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_100;

#line 734 "prog_io_item.m"
        {
#line 734 "prog_io_item.m"
          parse_tree__prog_io_item__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 734 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_10));
#line 734 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[218])));
#line 734 "prog_io_item.m"
        }
#line 734 "prog_io_item.m"
        {
#line 734 "prog_io_item.m"
          parse_tree__prog_io_item__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 734 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 0) = ((MR_Box) (parse_tree__prog_io_item__V_92_92));
#line 734 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "prog_io_item.m"
        }
#line 733 "prog_io_item.m"
        {
#line 733 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 733 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 733 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_100, 2) = ((MR_Box) (parse_tree__prog_io_item__V_91_91));
#line 733 "prog_io_item.m"
        }
#line 735 "prog_io_item.m"
        {
#line 735 "prog_io_item.m"
          parse_tree__prog_io_item__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_100));
#line 735 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "prog_io_item.m"
        }
#line 735 "prog_io_item.m"
        {
#line 735 "prog_io_item.m"
          MR_Word base;
#line 735 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 735 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 735 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_97_97));
#line 735 "prog_io_item.m"
        }
#line 732 "prog_io_item.m"
      }
#line 683 "prog_io_item.m"
  }
#line 678 "prog_io_item.m"
}

#line 643 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_mode_defn_or_decl_item_8_p_0(
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 643 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__AllowModeDefn_14,
#line 643 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantConstrAttrs_15,
#line 643 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16)
#line 643 "prog_io_item.m"
{
#line 649 "prog_io_item.m"
  {
#line 649 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_11)) == (MR_mktag((MR_Integer) 1)));
#line 649 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SubTerm_17;
#line 649 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;

#line 649 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 649 "prog_io_item.m"
      {
#line 649 "prog_io_item.m"
        parse_tree__prog_io_item__SubTerm_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 0)));
#line 649 "prog_io_item.m"
        parse_tree__prog_io_item__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_11, (MR_Integer) 1)));
#line 649 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "prog_io_item.m"
      }
#line 649 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 650 "prog_io_item.m"
      {
#line 650 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__HeadTerm_18;
#line 650 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__BodyTerm_19;
#line 651 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_24_24;
#line 651 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_25_25;
#line 651 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_26_26;
#line 651 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_27_27;
#line 651 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_28_28;
#line 651 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_20_20;

#line 655 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__AllowModeDefn_14 == (MR_Integer) 0);
#line 651 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
          {
#line 651 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__SubTerm_17)) == (MR_mktag((MR_Integer) 0)));
#line 651 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
              {
#line 651 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_17, (MR_Integer) 0)));
#line 651 "prog_io_item.m"
                parse_tree__prog_io_item__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_17, (MR_Integer) 1)));
#line 651 "prog_io_item.m"
                parse_tree__prog_io_item__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__SubTerm_17, (MR_Integer) 2)));
#line 651 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_24_24)) == (MR_mktag((MR_Integer) 0)));
#line 651 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
                  {
#line 651 "prog_io_item.m"
                    parse_tree__prog_io_item__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_24_24, (MR_Integer) 0)));
#line 651 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_25_25, (MR_String) "==") == 0);
#line 651 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
                      {
#line 651 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_26_26)) == (MR_mktag((MR_Integer) 1)));
#line 651 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
                          {
#line 651 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, (MR_Integer) 0)));
#line 651 "prog_io_item.m"
                            parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_26_26, (MR_Integer) 1)));
#line 651 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 651 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 651 "prog_io_item.m"
                              {
#line 651 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 651 "prog_io_item.m"
                                parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_27_27, (MR_Integer) 1)));
#line 651 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "prog_io_item.m"
                              }
#line 651 "prog_io_item.m"
                          }
#line 651 "prog_io_item.m"
                      }
#line 651 "prog_io_item.m"
                  }
#line 651 "prog_io_item.m"
              }
#line 651 "prog_io_item.m"
          }
#line 650 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 658 "prog_io_item.m"
          {
#line 658 "prog_io_item.m"
            parse_tree__prog_io_mode_defn__parse_mode_defn_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__HeadTerm_18, parse_tree__prog_io_item__BodyTerm_19, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_16);
          }
#line 650 "prog_io_item.m"
        else
#line 662 "prog_io_item.m"
          {
#line 662 "prog_io_item.m"
            parse_tree__prog_io_item__parse_mode_decl_7_p_0(parse_tree__prog_io_item__ModuleName_9, parse_tree__prog_io_item__VarSet_10, parse_tree__prog_io_item__SubTerm_17, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__QuantConstrAttrs_15, parse_tree__prog_io_item__MaybeIOM_16);
          }
#line 650 "prog_io_item.m"
      }
#line 649 "prog_io_item.m"
    else
#line 670 "prog_io_item.m"
      {
#line 670 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_22;
#line 670 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_54_54;
#line 670 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;
#line 670 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_60_60;

#line 672 "prog_io_item.m"
        {
#line 672 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 672 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_12));
#line 672 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[216])));
#line 672 "prog_io_item.m"
        }
#line 672 "prog_io_item.m"
        {
#line 672 "prog_io_item.m"
          parse_tree__prog_io_item__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 672 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 672 "prog_io_item.m"
        }
#line 671 "prog_io_item.m"
        {
#line 671 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 671 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 671 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_22, 2) = ((MR_Box) (parse_tree__prog_io_item__V_54_54));
#line 671 "prog_io_item.m"
        }
#line 673 "prog_io_item.m"
        {
#line 673 "prog_io_item.m"
          parse_tree__prog_io_item__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_22));
#line 673 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "prog_io_item.m"
        }
#line 673 "prog_io_item.m"
        {
#line 673 "prog_io_item.m"
          MR_Word base;
#line 673 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 673 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 673 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_60_60));
#line 673 "prog_io_item.m"
        }
#line 670 "prog_io_item.m"
      }
#line 649 "prog_io_item.m"
  }
#line 643 "prog_io_item.m"
}

#line 630 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_use_4_p_0(
#line 630 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 630 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 630 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 630 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8)
#line 630 "prog_io_item.m"
{
#line 633 "prog_io_item.m"
  {
#line 633 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 633 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__AvailUseInfo_9;

#line 634 "prog_io_item.m"
    {
#line 634 "prog_io_item.m"
      parse_tree__prog_io_item__AvailUseInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 634 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 634 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_9, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 634 "prog_io_item.m"
    }
#line 635 "prog_io_item.m"
    *parse_tree__prog_io_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__AvailUseInfo_9);
#line 633 "prog_io_item.m"
  }
#line 630 "prog_io_item.m"
}

#line 623 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_avail_import_4_p_0(
#line 623 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 623 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 623 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 623 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Avail_8)
#line 623 "prog_io_item.m"
{
#line 626 "prog_io_item.m"
  {
#line 626 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 626 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__AvailImportInfo_9;

#line 627 "prog_io_item.m"
    {
#line 627 "prog_io_item.m"
      parse_tree__prog_io_item__AvailImportInfo_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 627 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 627 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_9, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 627 "prog_io_item.m"
    }
#line 628 "prog_io_item.m"
    *parse_tree__prog_io_item__Avail_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__AvailImportInfo_9);
#line 626 "prog_io_item.m"
  }
#line 623 "prog_io_item.m"
}

#line 617 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__make_item_include_4_p_0(
#line 617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_5,
#line 617 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_6,
#line 617 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_7,
#line 617 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__Incl_8)
#line 617 "prog_io_item.m"
{
#line 621 "prog_io_item.m"
  {
#line 621 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 621 "prog_io_item.m"
    {
#line 621 "prog_io_item.m"
      MR_Word base;
#line 621 "prog_io_item.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_io_item.m"
      *parse_tree__prog_io_item__Incl_8 = base;
#line 621 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_7));
#line 621 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_5));
#line 621 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_6));
#line 621 "prog_io_item.m"
    }
#line 621 "prog_io_item.m"
  }
#line 617 "prog_io_item.m"
}

#line 590 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_5(
#line 590 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 590 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 590 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 590 "prog_io_item.m"
{
#line 590 "prog_io_item.m"
  {
#line 590 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 590 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv4_Avail_8;

#line 590 "prog_io_item.m"
    {
#line 590 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_avail_use_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv4_Avail_8);
    }
#line 590 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv4_Avail_8));
#line 590 "prog_io_item.m"
  }
#line 590 "prog_io_item.m"
}

#line 576 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_4(
#line 576 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 576 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 576 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 576 "prog_io_item.m"
{
#line 576 "prog_io_item.m"
  {
#line 576 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 576 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv3_Incl_8;

#line 576 "prog_io_item.m"
    {
#line 576 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_include_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv3_Incl_8);
    }
#line 576 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv3_Incl_8));
#line 576 "prog_io_item.m"
  }
#line 576 "prog_io_item.m"
}

#line 583 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_3(
#line 583 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 583 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 583 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 583 "prog_io_item.m"
{
#line 583 "prog_io_item.m"
  {
#line 583 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 583 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv2_Avail_8;

#line 583 "prog_io_item.m"
    {
#line 583 "prog_io_item.m"
      parse_tree__prog_io_item__make_item_avail_import_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv2_Avail_8);
    }
#line 583 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv2_Avail_8));
#line 583 "prog_io_item.m"
  }
#line 583 "prog_io_item.m"
}

#line 560 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_2(
#line 560 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 560 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 560 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 560 "prog_io_item.m"
{
#line 560 "prog_io_item.m"
  {
#line 560 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 560 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv1_MaybeModule_8;

#line 560 "prog_io_item.m"
    {
#line 560 "prog_io_item.m"
      parse_tree__prog_io_item__parse_implicitly_qualified_module_name_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv1_MaybeModule_8);
    }
#line 560 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv1_MaybeModule_8));
#line 560 "prog_io_item.m"
  }
#line 560 "prog_io_item.m"
}

#line 565 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_1(
#line 565 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__closure_arg,
#line 565 "prog_io_item.m"
  MR_Box parse_tree__prog_io_item__wrapper_arg_1,
#line 565 "prog_io_item.m"
  MR_Box * parse_tree__prog_io_item__wrapper_arg_2)
#line 565 "prog_io_item.m"
{
#line 565 "prog_io_item.m"
  {
#line 565 "prog_io_item.m"
    MR_Box parse_tree__prog_io_item__closure = parse_tree__prog_io_item__closure_arg;
#line 565 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__conv0_MaybeModuleName_6;

#line 565 "prog_io_item.m"
    {
#line 565 "prog_io_item.m"
      parse_tree__prog_io_item__parse_module_name_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__prog_io_item__wrapper_arg_1), &parse_tree__prog_io_item__conv0_MaybeModuleName_6);
    }
#line 565 "prog_io_item.m"
    *parse_tree__prog_io_item__wrapper_arg_2 = ((MR_Box) (parse_tree__prog_io_item__conv0_MaybeModuleName_6));
#line 565 "prog_io_item.m"
  }
#line 565 "prog_io_item.m"
}

#line 552 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0(
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_9,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_10,
#line 552 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_11,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_12,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_13,
#line 552 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_14,
#line 552 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__IIU_15,
#line 552 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_16)
#line 552 "prog_io_item.m"
{
#line 557 "prog_io_item.m"
  {
#line 557 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 557 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Parser_17;
#line 567 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNamesTerm_18;
#line 567 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_34_34;

#line 561 "prog_io_item.m"
#line 561 "prog_io_item.m"
    switch (parse_tree__prog_io_item__IIU_15) {
#line 561 "prog_io_item.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 561 "prog_io_item.m"
      case (MR_Integer) 1:
#line 561 "prog_io_item.m"
      case (MR_Integer) 2:
#line 565 "prog_io_item.m"
        {
#line 565 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 565 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_4[0]));
#line 565 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_1));
#line 565 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 565 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 3) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 565 "prog_io_item.m"
        }
#line 561 "prog_io_item.m"
        break;
#line 561 "prog_io_item.m"
      case (MR_Integer) 0:
#line 560 "prog_io_item.m"
        {
#line 560 "prog_io_item.m"
          parse_tree__prog_io_item__Parser_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 560 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[0]));
#line 560 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_2));
#line 560 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 560 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 3) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_9));
#line 560 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Parser_17, 4) = ((MR_Box) (parse_tree__prog_io_item__VarSet_10));
#line 560 "prog_io_item.m"
        }
#line 561 "prog_io_item.m"
        break;
#line 561 "prog_io_item.m"
    }
#line 567 "prog_io_item.m"
    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_12)) == (MR_mktag((MR_Integer) 1)));
#line 567 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 567 "prog_io_item.m"
      {
#line 567 "prog_io_item.m"
        parse_tree__prog_io_item__ModuleNamesTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 0)));
#line 567 "prog_io_item.m"
        parse_tree__prog_io_item__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_12, (MR_Integer) 1)));
#line 567 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "prog_io_item.m"
      }
#line 567 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 568 "prog_io_item.m"
      {
#line 568 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__TypeCtorInfo_73_73 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 568 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__MaybeModuleNames_19;

#line 568 "prog_io_item.m"
        {
#line 568 "prog_io_item.m"
          parse_tree__prog_io_util__parse_one_or_more_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_73_73, parse_tree__prog_io_item__Parser_17, parse_tree__prog_io_item__ModuleNamesTerm_18, &parse_tree__prog_io_item__MaybeModuleNames_19);
        }
#line 595 "prog_io_item.m"
        if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeModuleNames_19)) == (MR_mktag((MR_Integer) 0))))
#line 597 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = (MR_Word) parse_tree__prog_io_item__MaybeModuleNames_19;
#line 595 "prog_io_item.m"
        else
#line 570 "prog_io_item.m"
          {
#line 570 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ModuleNames_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeModuleNames_19, (MR_Integer) 0)));
#line 570 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleNames_20, (MR_Integer) 0)));
#line 570 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TailModuleNames_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ModuleNames_20, (MR_Integer) 1)));
#line 570 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__IOM_25;

#line 579 "prog_io_item.m"
#line 579 "prog_io_item.m"
            switch (parse_tree__prog_io_item__IIU_15) {
#line 579 "prog_io_item.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 579 "prog_io_item.m"
              case (MR_Integer) 1:
#line 580 "prog_io_item.m"
                {
#line 580 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadImport_26;
#line 580 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__TailImports_27;
#line 580 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_37_37;
#line 580 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_38_38;
#line 580 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__AvailImportInfo_87;

#line 627 "prog_io_item.m"
                  {
#line 627 "prog_io_item.m"
                    parse_tree__prog_io_item__AvailImportInfo_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 627 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_87, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_21));
#line 627 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_87, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 627 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailImportInfo_87, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 627 "prog_io_item.m"
                  }
#line 628 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadImport_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) parse_tree__prog_io_item__AvailImportInfo_87);
#line 583 "prog_io_item.m"
                  {
#line 583 "prog_io_item.m"
                    parse_tree__prog_io_item__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 583 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 583 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_3));
#line 583 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 583 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 583 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_37_37, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 583 "prog_io_item.m"
                  }
#line 583 "prog_io_item.m"
                  {
#line 583 "prog_io_item.m"
                    mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io_item__V_37_37, parse_tree__prog_io_item__TailModuleNames_22, &parse_tree__prog_io_item__TailImports_27);
                  }
#line 585 "prog_io_item.m"
                  {
#line 585 "prog_io_item.m"
                    parse_tree__prog_io_item__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadImport_26));
#line 585 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_38_38, 1) = ((MR_Box) (parse_tree__prog_io_item__TailImports_27));
#line 585 "prog_io_item.m"
                  }
#line 585 "prog_io_item.m"
                  {
#line 585 "prog_io_item.m"
                    parse_tree__prog_io_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "prog_io_item.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__IOM_25, 0) = ((MR_Box) (parse_tree__prog_io_item__V_38_38));
#line 585 "prog_io_item.m"
                  }
#line 580 "prog_io_item.m"
                }
#line 579 "prog_io_item.m"
                break;
#line 579 "prog_io_item.m"
              case (MR_Integer) 0:
#line 573 "prog_io_item.m"
                {
#line 573 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadIncl_23;
#line 573 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__TailIncls_24;
#line 573 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_39_39;
#line 573 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_40_40;

#line 621 "prog_io_item.m"
                  {
#line 621 "prog_io_item.m"
                    parse_tree__prog_io_item__HeadIncl_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_23, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_21));
#line 621 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_23, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 621 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__HeadIncl_23, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 621 "prog_io_item.m"
                  }
#line 576 "prog_io_item.m"
                  {
#line 576 "prog_io_item.m"
                    parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 576 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[2]));
#line 576 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_4));
#line 576 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 576 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 576 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_39_39, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 576 "prog_io_item.m"
                  }
#line 576 "prog_io_item.m"
                  {
#line 576 "prog_io_item.m"
                    mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_include_0, parse_tree__prog_io_item__V_39_39, parse_tree__prog_io_item__TailModuleNames_22, &parse_tree__prog_io_item__TailIncls_24);
                  }
#line 578 "prog_io_item.m"
                  {
#line 578 "prog_io_item.m"
                    parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadIncl_23));
#line 578 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (parse_tree__prog_io_item__TailIncls_24));
#line 578 "prog_io_item.m"
                  }
#line 578 "prog_io_item.m"
                  {
#line 578 "prog_io_item.m"
                    parse_tree__prog_io_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 578 "prog_io_item.m"
                    MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__IOM_25, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 578 "prog_io_item.m"
                  }
#line 573 "prog_io_item.m"
                }
#line 579 "prog_io_item.m"
                break;
#line 579 "prog_io_item.m"
              case (MR_Integer) 2:
#line 587 "prog_io_item.m"
                {
#line 587 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__HeadUse_28;
#line 587 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__TailUses_29;
#line 587 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_35_35;
#line 587 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__V_36_36;
#line 587 "prog_io_item.m"
                  MR_Word parse_tree__prog_io_item__AvailUseInfo_96;

#line 634 "prog_io_item.m"
                  {
#line 634 "prog_io_item.m"
                    parse_tree__prog_io_item__AvailUseInfo_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 634 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_96, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadModuleName_21));
#line 634 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_96, 1) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 634 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__AvailUseInfo_96, 2) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 634 "prog_io_item.m"
                  }
#line 635 "prog_io_item.m"
                  parse_tree__prog_io_item__HeadUse_28 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__prog_io_item__AvailUseInfo_96);
#line 590 "prog_io_item.m"
                  {
#line 590 "prog_io_item.m"
                    parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 590 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_5[1]));
#line 590 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0_5));
#line 590 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 590 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 3) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 590 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 4) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_14));
#line 590 "prog_io_item.m"
                  }
#line 590 "prog_io_item.m"
                  {
#line 590 "prog_io_item.m"
                    mercury__list__map_3_p_0(parse_tree__prog_io_item__TypeCtorInfo_73_73, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__TailModuleNames_22, &parse_tree__prog_io_item__TailUses_29);
                  }
#line 592 "prog_io_item.m"
                  {
#line 592 "prog_io_item.m"
                    parse_tree__prog_io_item__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 592 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_item__HeadUse_28));
#line 592 "prog_io_item.m"
                    MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 1) = ((MR_Box) (parse_tree__prog_io_item__TailUses_29));
#line 592 "prog_io_item.m"
                  }
#line 592 "prog_io_item.m"
                  {
#line 592 "prog_io_item.m"
                    parse_tree__prog_io_item__IOM_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 592 "prog_io_item.m"
                    MR_hl_field(MR_mktag(2), parse_tree__prog_io_item__IOM_25, 0) = ((MR_Box) (parse_tree__prog_io_item__V_36_36));
#line 592 "prog_io_item.m"
                  }
#line 587 "prog_io_item.m"
                }
#line 579 "prog_io_item.m"
                break;
#line 579 "prog_io_item.m"
            }
#line 594 "prog_io_item.m"
            {
#line 594 "prog_io_item.m"
              MR_Word base;
#line 594 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 594 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 594 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__IOM_25));
#line 594 "prog_io_item.m"
            }
#line 570 "prog_io_item.m"
          }
#line 568 "prog_io_item.m"
      }
#line 567 "prog_io_item.m"
    else
#line 608 "prog_io_item.m"
      {
#line 608 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Article_31;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_32;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_33;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_43_43;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_45_45;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_61_61;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_62_62;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_63_63;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_64_64;
#line 608 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_67_67;

#line 605 "prog_io_item.m"
#line 605 "prog_io_item.m"
        switch (parse_tree__prog_io_item__IIU_15) {
#line 605 "prog_io_item.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 605 "prog_io_item.m"
          case (MR_Integer) 1:
#line 605 "prog_io_item.m"
          case (MR_Integer) 0:
#line 604 "prog_io_item.m"
            parse_tree__prog_io_item__Article_31 = (MR_String) "an";
#line 605 "prog_io_item.m"
            break;
#line 605 "prog_io_item.m"
          case (MR_Integer) 2:
#line 607 "prog_io_item.m"
            parse_tree__prog_io_item__Article_31 = (MR_String) "a";
#line 605 "prog_io_item.m"
            break;
#line 605 "prog_io_item.m"
        }
#line 609 "prog_io_item.m"
        {
#line 609 "prog_io_item.m"
          parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_44_44, 1) = ((MR_Box) (parse_tree__prog_io_item__Article_31));
#line 609 "prog_io_item.m"
        }
#line 609 "prog_io_item.m"
        {
#line 609 "prog_io_item.m"
          parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_11));
#line 609 "prog_io_item.m"
        }
#line 609 "prog_io_item.m"
        {
#line 609 "prog_io_item.m"
          parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[57])));
#line 609 "prog_io_item.m"
        }
#line 609 "prog_io_item.m"
        {
#line 609 "prog_io_item.m"
          parse_tree__prog_io_item__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 0) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, 1) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 609 "prog_io_item.m"
        }
#line 609 "prog_io_item.m"
        {
#line 609 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[209])));
#line 609 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_32, 1) = ((MR_Box) (parse_tree__prog_io_item__V_43_43));
#line 609 "prog_io_item.m"
        }
#line 613 "prog_io_item.m"
        {
#line 613 "prog_io_item.m"
          parse_tree__prog_io_item__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_64_64, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_32));
#line 613 "prog_io_item.m"
        }
#line 613 "prog_io_item.m"
        {
#line 613 "prog_io_item.m"
          parse_tree__prog_io_item__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 0) = ((MR_Box) (parse_tree__prog_io_item__V_64_64));
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "prog_io_item.m"
        }
#line 613 "prog_io_item.m"
        {
#line 613 "prog_io_item.m"
          parse_tree__prog_io_item__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_13));
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_62_62, 1) = ((MR_Box) (parse_tree__prog_io_item__V_63_63));
#line 613 "prog_io_item.m"
        }
#line 613 "prog_io_item.m"
        {
#line 613 "prog_io_item.m"
          parse_tree__prog_io_item__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 0) = ((MR_Box) (parse_tree__prog_io_item__V_62_62));
#line 613 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 613 "prog_io_item.m"
        }
#line 612 "prog_io_item.m"
        {
#line 612 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 612 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 612 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 612 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 2) = ((MR_Box) (parse_tree__prog_io_item__V_61_61));
#line 612 "prog_io_item.m"
        }
#line 614 "prog_io_item.m"
        {
#line 614 "prog_io_item.m"
          parse_tree__prog_io_item__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_33));
#line 614 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "prog_io_item.m"
        }
#line 614 "prog_io_item.m"
        {
#line 614 "prog_io_item.m"
          MR_Word base;
#line 614 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 614 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_16 = base;
#line 614 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_67_67));
#line 614 "prog_io_item.m"
        }
#line 608 "prog_io_item.m"
      }
#line 557 "prog_io_item.m"
  }
#line 552 "prog_io_item.m"
}

#line 527 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_section_marker_6_p_0(
#line 527 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_7,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_8,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_9,
#line 527 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_10,
#line 527 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Section_11,
#line 527 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_12)
#line 527 "prog_io_item.m"
{
#line 533 "prog_io_item.m"
  {
#line 533 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 533 "prog_io_item.m"
    if ((parse_tree__prog_io_item__ArgTerms_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "prog_io_item.m"
      {
#line 533 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Marker_13;

#line 534 "prog_io_item.m"
        {
#line 534 "prog_io_item.m"
          parse_tree__prog_io_item__Marker_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 534 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 534 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 1) = ((MR_Box) (parse_tree__prog_io_item__Section_11));
#line 534 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_9));
#line 534 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_13, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_10));
#line 534 "prog_io_item.m"
        }
#line 535 "prog_io_item.m"
        {
#line 535 "prog_io_item.m"
          MR_Word base;
#line 535 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 535 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 535 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_13));
#line 535 "prog_io_item.m"
        }
#line 533 "prog_io_item.m"
      }
#line 533 "prog_io_item.m"
    else
#line 537 "prog_io_item.m"
      {
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_16;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_17;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_20_20;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_21_21;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 537 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_39_39;

#line 538 "prog_io_item.m"
        {
#line 538 "prog_io_item.m"
          parse_tree__prog_io_item__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_21_21, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_7));
#line 538 "prog_io_item.m"
        }
#line 538 "prog_io_item.m"
        {
#line 538 "prog_io_item.m"
          parse_tree__prog_io_item__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_20_20, 0) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[53])));
#line 538 "prog_io_item.m"
        }
#line 538 "prog_io_item.m"
        {
#line 538 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[215])));
#line 538 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_16, 1) = ((MR_Box) (parse_tree__prog_io_item__V_20_20));
#line 538 "prog_io_item.m"
        }
#line 541 "prog_io_item.m"
        {
#line 541 "prog_io_item.m"
          parse_tree__prog_io_item__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_16));
#line 541 "prog_io_item.m"
        }
#line 541 "prog_io_item.m"
        {
#line 541 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__V_36_36));
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
        }
#line 541 "prog_io_item.m"
        {
#line 541 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_9));
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 541 "prog_io_item.m"
        }
#line 541 "prog_io_item.m"
        {
#line 541 "prog_io_item.m"
          parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 541 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "prog_io_item.m"
        }
#line 540 "prog_io_item.m"
        {
#line 540 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 540 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 540 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 540 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 540 "prog_io_item.m"
        }
#line 542 "prog_io_item.m"
        {
#line 542 "prog_io_item.m"
          parse_tree__prog_io_item__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_17));
#line 542 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 542 "prog_io_item.m"
        }
#line 542 "prog_io_item.m"
        {
#line 542 "prog_io_item.m"
          MR_Word base;
#line 542 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 542 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_12 = base;
#line 542 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_39_39));
#line 542 "prog_io_item.m"
        }
#line 537 "prog_io_item.m"
      }
#line 533 "prog_io_item.m"
  }
#line 527 "prog_io_item.m"
}

#line 506 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_end_module_marker_4_p_0(
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 506 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_6,
#line 506 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_7,
#line 506 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_8)
#line 506 "prog_io_item.m"
{
#line 510 "prog_io_item.m"
  {
#line 510 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
#line 510 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleName_10;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_42_42;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_9;
#line 511 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_14_14;

#line 511 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 511 "prog_io_item.m"
      {
#line 511 "prog_io_item.m"
        parse_tree__prog_io_item__ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 0)));
#line 511 "prog_io_item.m"
        parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 1)));
#line 511 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 511 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 511 "prog_io_item.m"
          {
#line 15657 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 512 "prog_io_item.m"
            {
#line 512 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_42_42, parse_tree__prog_io_item__ModuleNameTerm_9, &parse_tree__prog_io_item__ModuleName_10);
            }
#line 511 "prog_io_item.m"
          }
#line 511 "prog_io_item.m"
      }
#line 510 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 514 "prog_io_item.m"
      {
#line 514 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Marker_11;

#line 514 "prog_io_item.m"
        {
#line 514 "prog_io_item.m"
          parse_tree__prog_io_item__Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 514 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 514 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_10));
#line 514 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_6));
#line 514 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_7));
#line 514 "prog_io_item.m"
        }
#line 515 "prog_io_item.m"
        {
#line 515 "prog_io_item.m"
          MR_Word base;
#line 515 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_8 = base;
#line 515 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_11));
#line 515 "prog_io_item.m"
        }
#line 514 "prog_io_item.m"
      }
#line 510 "prog_io_item.m"
    else
#line 519 "prog_io_item.m"
      {
#line 519 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_13;
#line 519 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 519 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 519 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_40_40;

#line 521 "prog_io_item.m"
        {
#line 521 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_6));
#line 521 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[214])));
#line 521 "prog_io_item.m"
        }
#line 521 "prog_io_item.m"
        {
#line 521 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 521 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 521 "prog_io_item.m"
        }
#line 520 "prog_io_item.m"
        {
#line 520 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 520 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 520 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 520 "prog_io_item.m"
        }
#line 522 "prog_io_item.m"
        {
#line 522 "prog_io_item.m"
          parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_13));
#line 522 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "prog_io_item.m"
        }
#line 522 "prog_io_item.m"
        {
#line 522 "prog_io_item.m"
          MR_Word base;
#line 522 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 522 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_8 = base;
#line 522 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 522 "prog_io_item.m"
        }
#line 519 "prog_io_item.m"
      }
#line 510 "prog_io_item.m"
  }
#line 506 "prog_io_item.m"
}

#line 487 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_module_marker_4_p_0(
#line 487 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_5,
#line 487 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_6,
#line 487 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_7,
#line 487 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_8)
#line 487 "prog_io_item.m"
{
#line 491 "prog_io_item.m"
  {
#line 491 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_5)) == (MR_mktag((MR_Integer) 1)));
#line 491 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleName_10;
#line 492 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_42_42;
#line 492 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ModuleNameTerm_9;
#line 492 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_14_14;

#line 492 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 492 "prog_io_item.m"
      {
#line 492 "prog_io_item.m"
        parse_tree__prog_io_item__ModuleNameTerm_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 0)));
#line 492 "prog_io_item.m"
        parse_tree__prog_io_item__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_5, (MR_Integer) 1)));
#line 492 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 492 "prog_io_item.m"
          {
#line 15817 "parse_tree.prog_io_item.c"
            parse_tree__prog_io_item__TypeCtorInfo_42_42 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 493 "prog_io_item.m"
            {
#line 493 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_sym_name__try_parse_symbol_name_2_p_0(parse_tree__prog_io_item__TypeCtorInfo_42_42, parse_tree__prog_io_item__ModuleNameTerm_9, &parse_tree__prog_io_item__ModuleName_10);
            }
#line 492 "prog_io_item.m"
          }
#line 492 "prog_io_item.m"
      }
#line 491 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 495 "prog_io_item.m"
      {
#line 495 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Marker_11;

#line 495 "prog_io_item.m"
        {
#line 495 "prog_io_item.m"
          parse_tree__prog_io_item__Marker_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 1) = ((MR_Box) (parse_tree__prog_io_item__ModuleName_10));
#line 495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 2) = ((MR_Box) (parse_tree__prog_io_item__Context_6));
#line 495 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__Marker_11, 3) = ((MR_Box) (parse_tree__prog_io_item__SeqNum_7));
#line 495 "prog_io_item.m"
        }
#line 496 "prog_io_item.m"
        {
#line 496 "prog_io_item.m"
          MR_Word base;
#line 496 "prog_io_item.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 496 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_8 = base;
#line 496 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__Marker_11));
#line 496 "prog_io_item.m"
        }
#line 495 "prog_io_item.m"
      }
#line 491 "prog_io_item.m"
    else
#line 500 "prog_io_item.m"
      {
#line 500 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_13;
#line 500 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 500 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_35_35;
#line 500 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_40_40;

#line 502 "prog_io_item.m"
        {
#line 502 "prog_io_item.m"
          parse_tree__prog_io_item__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 502 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_6));
#line 502 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[213])));
#line 502 "prog_io_item.m"
        }
#line 502 "prog_io_item.m"
        {
#line 502 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__V_35_35));
#line 502 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 502 "prog_io_item.m"
        }
#line 501 "prog_io_item.m"
        {
#line 501 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 501 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 501 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 501 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_13, 2) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 501 "prog_io_item.m"
        }
#line 503 "prog_io_item.m"
        {
#line 503 "prog_io_item.m"
          parse_tree__prog_io_item__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_13));
#line 503 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 503 "prog_io_item.m"
        }
#line 503 "prog_io_item.m"
        {
#line 503 "prog_io_item.m"
          MR_Word base;
#line 503 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 503 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_8 = base;
#line 503 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_40_40));
#line 503 "prog_io_item.m"
        }
#line 500 "prog_io_item.m"
      }
#line 491 "prog_io_item.m"
  }
#line 487 "prog_io_item.m"
}

#line 441 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_purity_attr_10_p_0(
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 441 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 441 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Purity_17,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_25,
#line 441 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_26,
#line 441 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20)
#line 441 "prog_io_item.m"
{
#line 448 "prog_io_item.m"
  {
#line 448 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 448 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SubTerm_21;
#line 448 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;

#line 448 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 448 "prog_io_item.m"
      {
#line 448 "prog_io_item.m"
        parse_tree__prog_io_item__SubTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 448 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 448 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "prog_io_item.m"
      }
#line 448 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 449 "prog_io_item.m"
      {
#line 449 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__PurityAttr_22 = (MR_Word) parse_tree__prog_io_item__Purity_17;
#line 449 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_28_28;

#line 450 "prog_io_item.m"
        {
#line 450 "prog_io_item.m"
          parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_28_28 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_25, ((MR_Box) (parse_tree__prog_io_item__PurityAttr_22)));
        }
#line 451 "prog_io_item.m"
        {
#line 451 "prog_io_item.m"
          parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__SubTerm_21, parse_tree__prog_io_item__SeqNum_16, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_28_28, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_26, parse_tree__prog_io_item__MaybeIOM_20);
        }
#line 449 "prog_io_item.m"
      }
#line 448 "prog_io_item.m"
    else
#line 456 "prog_io_item.m"
      {
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_23;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_24;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_32_32;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_44_44;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_45_45;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 456 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;

#line 454 "prog_io_item.m"
        {
#line 454 "prog_io_item.m"
          parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 454 "prog_io_item.m"
        }
#line 454 "prog_io_item.m"
        {
#line 454 "prog_io_item.m"
          parse_tree__prog_io_item__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[36])));
#line 454 "prog_io_item.m"
        }
#line 454 "prog_io_item.m"
        {
#line 454 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[212])));
#line 454 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_23, 1) = ((MR_Box) (parse_tree__prog_io_item__V_31_31));
#line 454 "prog_io_item.m"
        }
#line 458 "prog_io_item.m"
        {
#line 458 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_23));
#line 458 "prog_io_item.m"
        }
#line 458 "prog_io_item.m"
        {
#line 458 "prog_io_item.m"
          parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "prog_io_item.m"
        }
#line 458 "prog_io_item.m"
        {
#line 458 "prog_io_item.m"
          parse_tree__prog_io_item__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_45_45, 1) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 458 "prog_io_item.m"
        }
#line 458 "prog_io_item.m"
        {
#line 458 "prog_io_item.m"
          parse_tree__prog_io_item__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_44_44, 0) = ((MR_Box) (parse_tree__prog_io_item__V_45_45));
#line 458 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 458 "prog_io_item.m"
        }
#line 457 "prog_io_item.m"
        {
#line 457 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 457 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 457 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 457 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_24, 2) = ((MR_Box) (parse_tree__prog_io_item__V_44_44));
#line 457 "prog_io_item.m"
        }
#line 459 "prog_io_item.m"
        {
#line 459 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_24));
#line 459 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "prog_io_item.m"
        }
#line 459 "prog_io_item.m"
        {
#line 459 "prog_io_item.m"
          MR_Word base;
#line 459 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 459 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 459 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 459 "prog_io_item.m"
        }
#line 456 "prog_io_item.m"
      }
#line 448 "prog_io_item.m"
  }
#line 441 "prog_io_item.m"
}

#line 420 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_constraint_attr_10_p_0(
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 420 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 420 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_17,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26,
#line 420 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27,
#line 420 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20)
#line 420 "prog_io_item.m"
{
#line 427 "prog_io_item.m"
  {
#line 427 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 427 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SubTerm_21;
#line 427 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__ConstraintsTerm_22;
#line 427 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 427 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;

#line 427 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 427 "prog_io_item.m"
      {
#line 427 "prog_io_item.m"
        parse_tree__prog_io_item__SubTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 427 "prog_io_item.m"
        parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 427 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 427 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 427 "prog_io_item.m"
          {
#line 427 "prog_io_item.m"
            parse_tree__prog_io_item__ConstraintsTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 427 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 427 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "prog_io_item.m"
          }
#line 427 "prog_io_item.m"
      }
#line 427 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 428 "prog_io_item.m"
      {
#line 428 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ConstrAttr_23;
#line 428 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30;

#line 428 "prog_io_item.m"
        {
#line 428 "prog_io_item.m"
          parse_tree__prog_io_item__ConstrAttr_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConstrAttr_23, 0) = ((MR_Box) (parse_tree__prog_io_item__QuantType_17));
#line 428 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ConstrAttr_23, 1) = ((MR_Box) (parse_tree__prog_io_item__ConstraintsTerm_22));
#line 428 "prog_io_item.m"
        }
#line 429 "prog_io_item.m"
        {
#line 429 "prog_io_item.m"
          parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27, ((MR_Box) (parse_tree__prog_io_item__ConstrAttr_23)));
        }
#line 430 "prog_io_item.m"
        {
#line 430 "prog_io_item.m"
          parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__SubTerm_21, parse_tree__prog_io_item__SeqNum_16, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30, parse_tree__prog_io_item__MaybeIOM_20);
        }
#line 428 "prog_io_item.m"
      }
#line 427 "prog_io_item.m"
    else
#line 435 "prog_io_item.m"
      {
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_24;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_25;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_46_46;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_47_47;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_48_48;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 435 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;

#line 433 "prog_io_item.m"
        {
#line 433 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 433 "prog_io_item.m"
        }
#line 433 "prog_io_item.m"
        {
#line 433 "prog_io_item.m"
          parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[32])));
#line 433 "prog_io_item.m"
        }
#line 433 "prog_io_item.m"
        {
#line 433 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[212])));
#line 433 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_24, 1) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 433 "prog_io_item.m"
        }
#line 437 "prog_io_item.m"
        {
#line 437 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_24));
#line 437 "prog_io_item.m"
        }
#line 437 "prog_io_item.m"
        {
#line 437 "prog_io_item.m"
          parse_tree__prog_io_item__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 0) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_item.m"
        }
#line 437 "prog_io_item.m"
        {
#line 437 "prog_io_item.m"
          parse_tree__prog_io_item__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_47_47, 1) = ((MR_Box) (parse_tree__prog_io_item__V_48_48));
#line 437 "prog_io_item.m"
        }
#line 437 "prog_io_item.m"
        {
#line 437 "prog_io_item.m"
          parse_tree__prog_io_item__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 0) = ((MR_Box) (parse_tree__prog_io_item__V_47_47));
#line 437 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "prog_io_item.m"
        }
#line 436 "prog_io_item.m"
        {
#line 436 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 436 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 436 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 436 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_46_46));
#line 436 "prog_io_item.m"
        }
#line 438 "prog_io_item.m"
        {
#line 438 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 438 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "prog_io_item.m"
        }
#line 438 "prog_io_item.m"
        {
#line 438 "prog_io_item.m"
          MR_Word base;
#line 438 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 438 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 438 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 438 "prog_io_item.m"
        }
#line 435 "prog_io_item.m"
      }
#line 427 "prog_io_item.m"
  }
#line 420 "prog_io_item.m"
}

#line 398 "prog_io_item.m"
static void MR_CALL 
parse_tree__prog_io_item__parse_quant_attr_10_p_0(
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_11,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_12,
#line 398 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_13,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_14,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_15,
#line 398 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_16,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__QuantType_17,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26,
#line 398 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27,
#line 398 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_20)
#line 398 "prog_io_item.m"
{
#line 405 "prog_io_item.m"
  {
#line 405 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__ArgTerms_14)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__VarsTerm_21;
#line 405 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__SubTerm_22;
#line 405 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_28_28;
#line 405 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;

#line 405 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 405 "prog_io_item.m"
      {
#line 405 "prog_io_item.m"
        parse_tree__prog_io_item__VarsTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 0)));
#line 405 "prog_io_item.m"
        parse_tree__prog_io_item__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ArgTerms_14, (MR_Integer) 1)));
#line 405 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 405 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 405 "prog_io_item.m"
          {
#line 405 "prog_io_item.m"
            parse_tree__prog_io_item__SubTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 0)));
#line 405 "prog_io_item.m"
            parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_28_28, (MR_Integer) 1)));
#line 405 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "prog_io_item.m"
          }
#line 405 "prog_io_item.m"
      }
#line 405 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 406 "prog_io_item.m"
      {
#line 406 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__QuantAttr_23;
#line 406 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30;

#line 406 "prog_io_item.m"
        {
#line 406 "prog_io_item.m"
          parse_tree__prog_io_item__QuantAttr_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__QuantAttr_23, 0) = ((MR_Box) (parse_tree__prog_io_item__QuantType_17));
#line 406 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__QuantAttr_23, 1) = ((MR_Box) (parse_tree__prog_io_item__VarsTerm_21));
#line 406 "prog_io_item.m"
        }
#line 407 "prog_io_item.m"
        {
#line 407 "prog_io_item.m"
          parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_0_27, ((MR_Box) (parse_tree__prog_io_item__QuantAttr_23)));
        }
#line 408 "prog_io_item.m"
        {
#line 408 "prog_io_item.m"
          parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(parse_tree__prog_io_item__ModuleName_11, parse_tree__prog_io_item__VarSet_12, parse_tree__prog_io_item__SubTerm_22, parse_tree__prog_io_item__SeqNum_16, parse_tree__prog_io_item__STATE_VARIABLE_PurityAttrs_0_26, parse_tree__prog_io_item__STATE_VARIABLE_QuantConstrAttrs_30_30, parse_tree__prog_io_item__MaybeIOM_20);
        }
#line 406 "prog_io_item.m"
      }
#line 405 "prog_io_item.m"
    else
#line 414 "prog_io_item.m"
      {
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Pieces_24;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Spec_25;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_33_33;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_34_34;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_49_49;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_50_50;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_51_51;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_52_52;
#line 414 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_55_55;

#line 411 "prog_io_item.m"
        {
#line 411 "prog_io_item.m"
          parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 411 "prog_io_item.m"
        }
#line 411 "prog_io_item.m"
        {
#line 411 "prog_io_item.m"
          parse_tree__prog_io_item__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[28])));
#line 411 "prog_io_item.m"
        }
#line 411 "prog_io_item.m"
        {
#line 411 "prog_io_item.m"
          parse_tree__prog_io_item__Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[211])));
#line 411 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_24, 1) = ((MR_Box) (parse_tree__prog_io_item__V_33_33));
#line 411 "prog_io_item.m"
        }
#line 416 "prog_io_item.m"
        {
#line 416 "prog_io_item.m"
          parse_tree__prog_io_item__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_52_52, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_24));
#line 416 "prog_io_item.m"
        }
#line 416 "prog_io_item.m"
        {
#line 416 "prog_io_item.m"
          parse_tree__prog_io_item__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 0) = ((MR_Box) (parse_tree__prog_io_item__V_52_52));
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "prog_io_item.m"
        }
#line 416 "prog_io_item.m"
        {
#line 416 "prog_io_item.m"
          parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_15));
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (parse_tree__prog_io_item__V_51_51));
#line 416 "prog_io_item.m"
        }
#line 416 "prog_io_item.m"
        {
#line 416 "prog_io_item.m"
          parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 416 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "prog_io_item.m"
        }
#line 415 "prog_io_item.m"
        {
#line 415 "prog_io_item.m"
          parse_tree__prog_io_item__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 415 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 415 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_25, 2) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 415 "prog_io_item.m"
        }
#line 417 "prog_io_item.m"
        {
#line 417 "prog_io_item.m"
          parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_25));
#line 417 "prog_io_item.m"
          MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "prog_io_item.m"
        }
#line 417 "prog_io_item.m"
        {
#line 417 "prog_io_item.m"
          MR_Word base;
#line 417 "prog_io_item.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 417 "prog_io_item.m"
          *parse_tree__prog_io_item__MaybeIOM_20 = base;
#line 417 "prog_io_item.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 417 "prog_io_item.m"
        }
#line 414 "prog_io_item.m"
      }
#line 405 "prog_io_item.m"
  }
#line 398 "prog_io_item.m"
}

#line 158 "prog_io_item.m"
static MR_bool MR_CALL 
parse_tree__prog_io_item__parse_decl_item_or_marker_7_p_0(
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_8,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_9,
#line 158 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_10,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ArgTerms_11,
#line 158 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Context_12,
#line 158 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_13,
#line 158 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_14)
#line 158 "prog_io_item.m"
{
#line 168 "prog_io_item.m"
  {
#line 168 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;

#line 168 "prog_io_item.m"
    {
#line 168 "prog_io_item.m"
      MR_Integer parse_tree__prog_io_item__case_num_0 = (MR_Integer) -1;

#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
      switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 0)) {
#line 168 "prog_io_item.m"
        case (MR_Integer) 60:
#line 168 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_10, (MR_String) "<="))
#line 168 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 0;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 61:
#line 168 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_10, (MR_String) "=>"))
#line 168 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 1;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 97:
#line 168 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_10, (MR_String) "all"))
#line 168 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 2;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 101:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) {
#line 168 "prog_io_item.m"
            case (MR_Integer) 110:
#line 168 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_10, (MR_String) "end_module"))
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 3;
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
            case (MR_Integer) 120:
#line 168 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_10, (MR_String) "external"))
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 4;
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 102:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) {
#line 168 "prog_io_item.m"
            case (MR_Integer) 105:
#line 168 "prog_io_item.m"
              if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 5)) == (MR_Integer) 105))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 6)) {
#line 168 "prog_io_item.m"
                  case (MR_Integer) 115:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_10, (MR_String) "finalise"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                  case (MR_Integer) 122:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(7, parse_tree__prog_io_item__Functor_10, (MR_String) "finalize"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 5;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                }
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
            case (MR_Integer) 117:
#line 168 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_10, (MR_String) "func"))
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 6;
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 105:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) {
#line 168 "prog_io_item.m"
            case (MR_Integer) 109:
#line 168 "prog_io_item.m"
              if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) == (MR_Integer) 112))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) {
#line 168 "prog_io_item.m"
                  case (MR_Integer) 108:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_10, (MR_String) "implementation"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 7;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                  case (MR_Integer) 111:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_10, (MR_String) "import_module"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 8;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                  case (MR_Integer) 117:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_10, (MR_String) "impure"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 9;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                }
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
            case (MR_Integer) 110:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) {
#line 168 "prog_io_item.m"
                case (MR_Integer) 99:
#line 168 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "include_module"))
#line 168 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 10;
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
                case (MR_Integer) 105:
#line 168 "prog_io_item.m"
                  if (((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 7)) == (MR_Integer) 105))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                    switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 8)) {
#line 168 "prog_io_item.m"
                      case (MR_Integer) 115:
#line 168 "prog_io_item.m"
                        if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_10, (MR_String) "initialise"))
#line 168 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 168 "prog_io_item.m"
                        break;
#line 168 "prog_io_item.m"
                      case (MR_Integer) 122:
#line 168 "prog_io_item.m"
                        if (MR_offset_streq(9, parse_tree__prog_io_item__Functor_10, (MR_String) "initialize"))
#line 168 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 11;
#line 168 "prog_io_item.m"
                        break;
#line 168 "prog_io_item.m"
                    }
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
                case (MR_Integer) 115:
#line 168 "prog_io_item.m"
                  if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) == (MR_Integer) 116))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                    switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 4)) {
#line 168 "prog_io_item.m"
                      case (MR_Integer) 0:
#line 168 "prog_io_item.m"
                        parse_tree__prog_io_item__case_num_0 = (MR_Integer) 12;
#line 168 "prog_io_item.m"
                        break;
#line 168 "prog_io_item.m"
                      case (MR_Integer) 97:
#line 168 "prog_io_item.m"
                        if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_10, (MR_String) "instance"))
#line 168 "prog_io_item.m"
                          parse_tree__prog_io_item__case_num_0 = (MR_Integer) 13;
#line 168 "prog_io_item.m"
                        break;
#line 168 "prog_io_item.m"
                    }
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
                case (MR_Integer) 116:
#line 168 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "interface"))
#line 168 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 14;
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
              }
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 109:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) {
#line 168 "prog_io_item.m"
            case (MR_Integer) 111:
#line 168 "prog_io_item.m"
              if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) == (MR_Integer) 100))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) {
#line 168 "prog_io_item.m"
                  case (MR_Integer) 101:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_10, (MR_String) "mode"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 15;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                  case (MR_Integer) 117:
#line 168 "prog_io_item.m"
                    if (MR_offset_streq(4, parse_tree__prog_io_item__Functor_10, (MR_String) "module"))
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 16;
#line 168 "prog_io_item.m"
                    break;
#line 168 "prog_io_item.m"
                }
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
            case (MR_Integer) 117:
#line 168 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_10, (MR_String) "mutable"))
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 17;
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 112:
#line 168 "prog_io_item.m"
          if (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) == (MR_Integer) 114))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) {
#line 168 "prog_io_item.m"
              case (MR_Integer) 97:
#line 168 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "pragma"))
#line 168 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 18;
#line 168 "prog_io_item.m"
                break;
#line 168 "prog_io_item.m"
              case (MR_Integer) 101:
#line 168 "prog_io_item.m"
                if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "pred"))
#line 168 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 19;
#line 168 "prog_io_item.m"
                break;
#line 168 "prog_io_item.m"
              case (MR_Integer) 111:
#line 168 "prog_io_item.m"
                if (((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 6)) == (MR_Integer) 101))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                  switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 7)) {
#line 168 "prog_io_item.m"
                    case (MR_Integer) 0:
#line 168 "prog_io_item.m"
                      parse_tree__prog_io_item__case_num_0 = (MR_Integer) 20;
#line 168 "prog_io_item.m"
                      break;
#line 168 "prog_io_item.m"
                    case (MR_Integer) 95:
#line 168 "prog_io_item.m"
                      if (((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 9)) == (MR_Integer) 120))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                        switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 10)) {
#line 168 "prog_io_item.m"
                          case (MR_Integer) 99:
#line 168 "prog_io_item.m"
                            if (((((((((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 16)) == (MR_Integer) 101))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
                              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 17)) {
#line 168 "prog_io_item.m"
                                case (MR_Integer) 0:
#line 168 "prog_io_item.m"
                                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 21;
#line 168 "prog_io_item.m"
                                  break;
#line 168 "prog_io_item.m"
                                case (MR_Integer) 95:
#line 168 "prog_io_item.m"
                                  if (MR_offset_streq(18, parse_tree__prog_io_item__Functor_10, (MR_String) "promise_exclusive_exhaustive"))
#line 168 "prog_io_item.m"
                                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 22;
#line 168 "prog_io_item.m"
                                  break;
#line 168 "prog_io_item.m"
                              }
#line 168 "prog_io_item.m"
                            break;
#line 168 "prog_io_item.m"
                          case (MR_Integer) 104:
#line 168 "prog_io_item.m"
                            if (MR_offset_streq(11, parse_tree__prog_io_item__Functor_10, (MR_String) "promise_exhaustive"))
#line 168 "prog_io_item.m"
                              parse_tree__prog_io_item__case_num_0 = (MR_Integer) 23;
#line 168 "prog_io_item.m"
                            break;
#line 168 "prog_io_item.m"
                        }
#line 168 "prog_io_item.m"
                      break;
#line 168 "prog_io_item.m"
                  }
#line 168 "prog_io_item.m"
                break;
#line 168 "prog_io_item.m"
            }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 115:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
          switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) {
#line 168 "prog_io_item.m"
            case (MR_Integer) 101:
#line 168 "prog_io_item.m"
              if (MR_offset_streq(2, parse_tree__prog_io_item__Functor_10, (MR_String) "semipure"))
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 24;
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
            case (MR_Integer) 111:
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
              switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) {
#line 168 "prog_io_item.m"
                case (MR_Integer) 108:
#line 168 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "solver"))
#line 168 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 25;
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
                case (MR_Integer) 109:
#line 168 "prog_io_item.m"
                  if (MR_offset_streq(3, parse_tree__prog_io_item__Functor_10, (MR_String) "some"))
#line 168 "prog_io_item.m"
                    parse_tree__prog_io_item__case_num_0 = (MR_Integer) 26;
#line 168 "prog_io_item.m"
                  break;
#line 168 "prog_io_item.m"
              }
#line 168 "prog_io_item.m"
              break;
#line 168 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 116:
#line 168 "prog_io_item.m"
          if (((((((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 1)) == (MR_Integer) 121)) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 2)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 3)) == (MR_Integer) 101))))
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
            switch (MR_nth_code_unit(parse_tree__prog_io_item__Functor_10, 4)) {
#line 168 "prog_io_item.m"
              case (MR_Integer) 0:
#line 168 "prog_io_item.m"
                parse_tree__prog_io_item__case_num_0 = (MR_Integer) 27;
#line 168 "prog_io_item.m"
                break;
#line 168 "prog_io_item.m"
              case (MR_Integer) 99:
#line 168 "prog_io_item.m"
                if (MR_offset_streq(5, parse_tree__prog_io_item__Functor_10, (MR_String) "typeclass"))
#line 168 "prog_io_item.m"
                  parse_tree__prog_io_item__case_num_0 = (MR_Integer) 28;
#line 168 "prog_io_item.m"
                break;
#line 168 "prog_io_item.m"
            }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 117:
#line 168 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_10, (MR_String) "use_module"))
#line 168 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 29;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 118:
#line 168 "prog_io_item.m"
          if (MR_offset_streq(1, parse_tree__prog_io_item__Functor_10, (MR_String) "version_numbers"))
#line 168 "prog_io_item.m"
            parse_tree__prog_io_item__case_num_0 = (MR_Integer) 30;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
      }
#line 168 "prog_io_item.m"
#line 168 "prog_io_item.m"
      switch (parse_tree__prog_io_item__case_num_0) {
#line 168 "prog_io_item.m"
        default:
#line 168 "prog_io_item.m"
          parse_tree__prog_io_item__succeeded = MR_FALSE;
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 0:
#line 219 "prog_io_item.m"
          {
#line 219 "prog_io_item.m"
            /* case "<=" */
#line 219 "prog_io_item.m"
            {
#line 219 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_24_24;
#line 219 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_25_25;

#line 221 "prog_io_item.m"
              {
#line 221 "prog_io_item.m"
                parse_tree__prog_io_item__V_24_24 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 221 "prog_io_item.m"
              {
#line 221 "prog_io_item.m"
                parse_tree__prog_io_item__V_25_25 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 220 "prog_io_item.m"
              {
#line 220 "prog_io_item.m"
                parse_tree__prog_io_item__parse_constraint_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__V_24_24, parse_tree__prog_io_item__V_25_25, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 219 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 219 "prog_io_item.m"
            }
#line 219 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 1:
#line 219 "prog_io_item.m"
          {
#line 219 "prog_io_item.m"
            /* case "=>" */
#line 219 "prog_io_item.m"
            {
#line 219 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_40_40;
#line 219 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_41_41;

#line 221 "prog_io_item.m"
              {
#line 221 "prog_io_item.m"
                parse_tree__prog_io_item__V_40_40 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 221 "prog_io_item.m"
              {
#line 221 "prog_io_item.m"
                parse_tree__prog_io_item__V_41_41 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 220 "prog_io_item.m"
              {
#line 220 "prog_io_item.m"
                parse_tree__prog_io_item__parse_constraint_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__V_40_40, parse_tree__prog_io_item__V_41_41, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 219 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 219 "prog_io_item.m"
            }
#line 219 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 2:
#line 213 "prog_io_item.m"
          {
#line 213 "prog_io_item.m"
            /* case "all" */
#line 213 "prog_io_item.m"
            {
#line 213 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_26_26;
#line 213 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_27_27;

#line 215 "prog_io_item.m"
              {
#line 215 "prog_io_item.m"
                parse_tree__prog_io_item__V_26_26 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 215 "prog_io_item.m"
              {
#line 215 "prog_io_item.m"
                parse_tree__prog_io_item__V_27_27 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 214 "prog_io_item.m"
              {
#line 214 "prog_io_item.m"
                parse_tree__prog_io_item__parse_quant_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__V_26_26, parse_tree__prog_io_item__V_27_27, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 213 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 213 "prog_io_item.m"
            }
#line 213 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 3:
#line 170 "prog_io_item.m"
          {
#line 170 "prog_io_item.m"
            /* case "end_module" */
#line 170 "prog_io_item.m"
            {
#line 170 "prog_io_item.m"
              parse_tree__prog_io_item__parse_end_module_marker_4_p_0(parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 170 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 170 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 4:
#line 230 "prog_io_item.m"
          {
#line 230 "prog_io_item.m"
            /* case "external" */
#line 230 "prog_io_item.m"
            {
#line 230 "prog_io_item.m"
              parse_tree__prog_io_item__parse_external_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 230 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 230 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 5:
#line 262 "prog_io_item.m"
          {
#line 262 "prog_io_item.m"
            /* case "finalise", "finalize" */
#line 262 "prog_io_item.m"
            {
#line 262 "prog_io_item.m"
              parse_tree__prog_io_mutable__parse_finalise_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 262 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 262 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 6:
#line 207 "prog_io_item.m"
          {
#line 207 "prog_io_item.m"
            /* case "func" */
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 207 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 207 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 7:
#line 174 "prog_io_item.m"
          {
#line 174 "prog_io_item.m"
            /* case "implementation" */
#line 175 "prog_io_item.m"
            {
#line 175 "prog_io_item.m"
              parse_tree__prog_io_item__parse_section_marker_6_p_0(parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 174 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 174 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 8:
#line 181 "prog_io_item.m"
          {
#line 181 "prog_io_item.m"
            /* case "import_module" */
#line 182 "prog_io_item.m"
            {
#line 182 "prog_io_item.m"
              parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 181 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 9:
#line 225 "prog_io_item.m"
          {
#line 225 "prog_io_item.m"
            /* case "impure" */
#line 225 "prog_io_item.m"
            {
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_22_22;
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_23_23;

#line 227 "prog_io_item.m"
              {
#line 227 "prog_io_item.m"
                parse_tree__prog_io_item__V_22_22 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 227 "prog_io_item.m"
              {
#line 227 "prog_io_item.m"
                parse_tree__prog_io_item__V_23_23 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 226 "prog_io_item.m"
              {
#line 226 "prog_io_item.m"
                parse_tree__prog_io_item__parse_purity_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 2, parse_tree__prog_io_item__V_22_22, parse_tree__prog_io_item__V_23_23, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 225 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 225 "prog_io_item.m"
            }
#line 225 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 10:
#line 181 "prog_io_item.m"
          {
#line 181 "prog_io_item.m"
            /* case "include_module" */
#line 182 "prog_io_item.m"
            {
#line 182 "prog_io_item.m"
              parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 181 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 11:
#line 256 "prog_io_item.m"
          {
#line 256 "prog_io_item.m"
            /* case "initialise", "initialize" */
#line 256 "prog_io_item.m"
            {
#line 256 "prog_io_item.m"
              parse_tree__prog_io_mutable__parse_initialise_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 256 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 256 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 12:
#line 198 "prog_io_item.m"
          {
#line 198 "prog_io_item.m"
            /* case "inst" */
#line 198 "prog_io_item.m"
            {
#line 198 "prog_io_item.m"
              parse_tree__prog_io_mode_defn__parse_inst_defn_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 198 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 198 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 13:
#line 250 "prog_io_item.m"
          {
#line 250 "prog_io_item.m"
            /* case "instance" */
#line 250 "prog_io_item.m"
            {
#line 250 "prog_io_item.m"
              parse_tree__prog_io_typeclass__parse_instance_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 250 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 250 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 14:
#line 174 "prog_io_item.m"
          {
#line 174 "prog_io_item.m"
            /* case "interface" */
#line 175 "prog_io_item.m"
            {
#line 175 "prog_io_item.m"
              parse_tree__prog_io_item__parse_section_marker_6_p_0(parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 174 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 174 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 15:
#line 201 "prog_io_item.m"
          {
#line 201 "prog_io_item.m"
            /* case "mode" */
#line 202 "prog_io_item.m"
            {
#line 202 "prog_io_item.m"
              parse_tree__prog_io_item__parse_mode_defn_or_decl_item_8_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 201 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 201 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 16:
#line 167 "prog_io_item.m"
          {
#line 167 "prog_io_item.m"
            /* case "module" */
#line 167 "prog_io_item.m"
            {
#line 167 "prog_io_item.m"
              parse_tree__prog_io_item__parse_module_marker_4_p_0(parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 167 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 167 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 17:
#line 266 "prog_io_item.m"
          {
#line 266 "prog_io_item.m"
            /* case "mutable" */
#line 266 "prog_io_item.m"
            {
#line 266 "prog_io_item.m"
              parse_tree__prog_io_mutable__parse_mutable_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 266 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 266 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 18:
#line 270 "prog_io_item.m"
          {
#line 270 "prog_io_item.m"
            /* case "pragma" */
#line 270 "prog_io_item.m"
            {
#line 270 "prog_io_item.m"
              parse_tree__prog_io_pragma__parse_pragma_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 270 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 270 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 19:
#line 207 "prog_io_item.m"
          {
#line 207 "prog_io_item.m"
            /* case "pred" */
#line 208 "prog_io_item.m"
            {
#line 208 "prog_io_item.m"
              parse_tree__prog_io_item__parse_pred_or_func_decl_item_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 207 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 207 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 20:
#line 234 "prog_io_item.m"
          {
#line 234 "prog_io_item.m"
            /* case "promise" */
#line 234 "prog_io_item.m"
            {
#line 234 "prog_io_item.m"
              parse_tree__prog_io_item__parse_promise_item_5_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 234 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 234 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 21:
#line 240 "prog_io_item.m"
          {
#line 240 "prog_io_item.m"
            /* case "promise_exclusive" */
#line 242 "prog_io_item.m"
            {
#line 242 "prog_io_item.m"
              parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 240 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 22:
#line 240 "prog_io_item.m"
          {
#line 240 "prog_io_item.m"
            /* case "promise_exclusive_exhaustive" */
#line 242 "prog_io_item.m"
            {
#line 242 "prog_io_item.m"
              parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 2, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 240 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 23:
#line 240 "prog_io_item.m"
          {
#line 240 "prog_io_item.m"
            /* case "promise_exhaustive" */
#line 242 "prog_io_item.m"
            {
#line 242 "prog_io_item.m"
              parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_112_114_111_109_105_115_101_95_101_120_95_105_116_101_109_95_95_91_55_93_95_48_8_p_0(parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 240 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 240 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 24:
#line 225 "prog_io_item.m"
          {
#line 225 "prog_io_item.m"
            /* case "semipure" */
#line 225 "prog_io_item.m"
            {
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_55_55;
#line 225 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_56_56;

#line 227 "prog_io_item.m"
              {
#line 227 "prog_io_item.m"
                parse_tree__prog_io_item__V_55_55 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 227 "prog_io_item.m"
              {
#line 227 "prog_io_item.m"
                parse_tree__prog_io_item__V_56_56 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 226 "prog_io_item.m"
              {
#line 226 "prog_io_item.m"
                parse_tree__prog_io_item__parse_purity_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 1, parse_tree__prog_io_item__V_55_55, parse_tree__prog_io_item__V_56_56, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 225 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 225 "prog_io_item.m"
            }
#line 225 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 25:
#line 194 "prog_io_item.m"
          {
#line 194 "prog_io_item.m"
            /* case "solver" */
#line 194 "prog_io_item.m"
            {
#line 194 "prog_io_item.m"
              parse_tree__prog_io_type_defn__parse_solver_type_defn_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 194 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 194 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 26:
#line 213 "prog_io_item.m"
          {
#line 213 "prog_io_item.m"
            /* case "some" */
#line 213 "prog_io_item.m"
            {
#line 213 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_60_60;
#line 213 "prog_io_item.m"
              MR_Word parse_tree__prog_io_item__V_61_61;

#line 215 "prog_io_item.m"
              {
#line 215 "prog_io_item.m"
                parse_tree__prog_io_item__V_60_60 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
              }
#line 215 "prog_io_item.m"
              {
#line 215 "prog_io_item.m"
                parse_tree__prog_io_item__V_61_61 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
              }
#line 214 "prog_io_item.m"
              {
#line 214 "prog_io_item.m"
                parse_tree__prog_io_item__parse_quant_attr_10_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__V_60_60, parse_tree__prog_io_item__V_61_61, parse_tree__prog_io_item__MaybeIOM_14);
              }
#line 213 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 213 "prog_io_item.m"
            }
#line 213 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 27:
#line 189 "prog_io_item.m"
          {
#line 189 "prog_io_item.m"
            /* case "type" */
#line 190 "prog_io_item.m"
            {
#line 190 "prog_io_item.m"
              parse_tree__prog_io_type_defn__parse_type_defn_item_7_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 0, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 189 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 189 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 28:
#line 246 "prog_io_item.m"
          {
#line 246 "prog_io_item.m"
            /* case "typeclass" */
#line 246 "prog_io_item.m"
            {
#line 246 "prog_io_item.m"
              parse_tree__prog_io_typeclass__parse_typeclass_item_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 246 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 246 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 29:
#line 181 "prog_io_item.m"
          {
#line 181 "prog_io_item.m"
            /* case "use_module" */
#line 182 "prog_io_item.m"
            {
#line 182 "prog_io_item.m"
              parse_tree__prog_io_item__parse_incl_imp_use_items_8_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__VarSet_9, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, (MR_Integer) 2, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 181 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 181 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
        case (MR_Integer) 30:
#line 186 "prog_io_item.m"
          {
#line 186 "prog_io_item.m"
            /* case "version_numbers" */
#line 186 "prog_io_item.m"
            {
#line 186 "prog_io_item.m"
              parse_tree__prog_io_item__parse_version_numbers_marker_6_p_0(parse_tree__prog_io_item__ModuleName_8, parse_tree__prog_io_item__Functor_10, parse_tree__prog_io_item__ArgTerms_11, parse_tree__prog_io_item__Context_12, parse_tree__prog_io_item__SeqNum_13, parse_tree__prog_io_item__MaybeIOM_14);
            }
#line 186 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = MR_TRUE;
#line 186 "prog_io_item.m"
          }
#line 168 "prog_io_item.m"
          break;
#line 168 "prog_io_item.m"
      }
#line 168 "prog_io_item.m"
    }
#line 168 "prog_io_item.m"
    return parse_tree__prog_io_item__succeeded;
#line 168 "prog_io_item.m"
  }
#line 158 "prog_io_item.m"
}

#line 147 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__decl_functor_is_not_valid_2_f_0(
#line 147 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_4,
#line 147 "prog_io_item.m"
  MR_String parse_tree__prog_io_item__Functor_5)
#line 147 "prog_io_item.m"
{
#line 149 "prog_io_item.m"
  {
#line 149 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Spec_6;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_7;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Pieces_8;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_11_11;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_12_12;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_21_21;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_22_22;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;
#line 149 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_24_24;

#line 150 "prog_io_item.m"
    {
#line 150 "prog_io_item.m"
      parse_tree__prog_io_item__Context_7 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_4);
    }
#line 151 "prog_io_item.m"
    {
#line 151 "prog_io_item.m"
      parse_tree__prog_io_item__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_12_12, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_5));
#line 151 "prog_io_item.m"
    }
#line 151 "prog_io_item.m"
    {
#line 151 "prog_io_item.m"
      parse_tree__prog_io_item__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_11_11, 0) = ((MR_Box) (parse_tree__prog_io_item__V_12_12));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_11_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[18])));
#line 151 "prog_io_item.m"
    }
#line 151 "prog_io_item.m"
    {
#line 151 "prog_io_item.m"
      parse_tree__prog_io_item__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[209])));
#line 151 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_8, 1) = ((MR_Box) (parse_tree__prog_io_item__V_11_11));
#line 151 "prog_io_item.m"
    }
#line 154 "prog_io_item.m"
    {
#line 154 "prog_io_item.m"
      parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_8));
#line 154 "prog_io_item.m"
    }
#line 154 "prog_io_item.m"
    {
#line 154 "prog_io_item.m"
      parse_tree__prog_io_item__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_item__V_24_24));
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_item.m"
    }
#line 154 "prog_io_item.m"
    {
#line 154 "prog_io_item.m"
      parse_tree__prog_io_item__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_22_22, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_7));
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_22_22, 1) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 154 "prog_io_item.m"
    }
#line 154 "prog_io_item.m"
    {
#line 154 "prog_io_item.m"
      parse_tree__prog_io_item__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, 0) = ((MR_Box) (parse_tree__prog_io_item__V_22_22));
#line 154 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_item.m"
    }
#line 153 "prog_io_item.m"
    {
#line 153 "prog_io_item.m"
      parse_tree__prog_io_item__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 153 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 153 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_item__V_21_21));
#line 153 "prog_io_item.m"
    }
#line 149 "prog_io_item.m"
    return parse_tree__prog_io_item__Spec_6;
#line 149 "prog_io_item.m"
  }
#line 147 "prog_io_item.m"
}

#line 137 "prog_io_item.m"
static MR_Word MR_CALL 
parse_tree__prog_io_item__decl_is_not_an_atom_2_f_0(
#line 137 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_4,
#line 137 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_5)
#line 137 "prog_io_item.m"
{
#line 139 "prog_io_item.m"
  {
#line 139 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Spec_6;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TypeCtorInfo_29_29 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 139 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__TermStr_7;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Context_8;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__Pieces_9;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_13_13;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_14_14;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_23_23;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_24_24;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_25_25;
#line 139 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_26_26;

#line 140 "prog_io_item.m"
    {
#line 140 "prog_io_item.m"
      parse_tree__prog_io_item__TermStr_7 = parse_tree__parse_tree_out_term__mercury_term_to_string_3_f_0(parse_tree__prog_io_item__TypeCtorInfo_29_29, parse_tree__prog_io_item__VarSet_4, (MR_Integer) 0, parse_tree__prog_io_item__Term_5);
    }
#line 141 "prog_io_item.m"
    {
#line 141 "prog_io_item.m"
      parse_tree__prog_io_item__Context_8 = mercury__term__get_term_context_1_f_0(parse_tree__prog_io_item__TypeCtorInfo_29_29, parse_tree__prog_io_item__Term_5);
    }
#line 142 "prog_io_item.m"
    {
#line 142 "prog_io_item.m"
      parse_tree__prog_io_item__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_14_14, 1) = ((MR_Box) (parse_tree__prog_io_item__TermStr_7));
#line 142 "prog_io_item.m"
    }
#line 142 "prog_io_item.m"
    {
#line 142 "prog_io_item.m"
      parse_tree__prog_io_item__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_13_13, 0) = ((MR_Box) (parse_tree__prog_io_item__V_14_14));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[16])));
#line 142 "prog_io_item.m"
    }
#line 142 "prog_io_item.m"
    {
#line 142 "prog_io_item.m"
      parse_tree__prog_io_item__Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[209])));
#line 142 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_9, 1) = ((MR_Box) (parse_tree__prog_io_item__V_13_13));
#line 142 "prog_io_item.m"
    }
#line 145 "prog_io_item.m"
    {
#line 145 "prog_io_item.m"
      parse_tree__prog_io_item__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_26_26, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_9));
#line 145 "prog_io_item.m"
    }
#line 145 "prog_io_item.m"
    {
#line 145 "prog_io_item.m"
      parse_tree__prog_io_item__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 0) = ((MR_Box) (parse_tree__prog_io_item__V_26_26));
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "prog_io_item.m"
    }
#line 145 "prog_io_item.m"
    {
#line 145 "prog_io_item.m"
      parse_tree__prog_io_item__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_24_24, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_8));
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_24_24, 1) = ((MR_Box) (parse_tree__prog_io_item__V_25_25));
#line 145 "prog_io_item.m"
    }
#line 145 "prog_io_item.m"
    {
#line 145 "prog_io_item.m"
      parse_tree__prog_io_item__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_23_23, 0) = ((MR_Box) (parse_tree__prog_io_item__V_24_24));
#line 145 "prog_io_item.m"
      MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "prog_io_item.m"
    }
#line 144 "prog_io_item.m"
    {
#line 144 "prog_io_item.m"
      parse_tree__prog_io_item__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 144 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 144 "prog_io_item.m"
      MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_6, 2) = ((MR_Box) (parse_tree__prog_io_item__V_23_23));
#line 144 "prog_io_item.m"
    }
#line 139 "prog_io_item.m"
    return parse_tree__prog_io_item__Spec_6;
#line 139 "prog_io_item.m"
  }
#line 137 "prog_io_item.m"
}

#line 55 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_class_method_decl_4_p_0(
#line 55 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_5,
#line 55 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_6,
#line 55 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_7,
#line 55 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeClassMethod_8)
#line 55 "prog_io_item.m"
{
#line 352 "prog_io_item.m"
  {
#line 352 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded;
#line 352 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__TermContext_9;
#line 352 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__MaybeIOM_10;
#line 352 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_35_35;
#line 352 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_36_36;

#line 353 "prog_io_item.m"
    {
#line 353 "prog_io_item.m"
      parse_tree__prog_io_item__TermContext_9 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_7);
    }
#line 355 "prog_io_item.m"
    {
#line 355 "prog_io_item.m"
      parse_tree__prog_io_item__V_35_35 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
    }
#line 355 "prog_io_item.m"
    {
#line 355 "prog_io_item.m"
      parse_tree__prog_io_item__V_36_36 = mercury__cord__init_0_f_0((MR_Word) &parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
    }
#line 354 "prog_io_item.m"
    {
#line 354 "prog_io_item.m"
      parse_tree__prog_io_item__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_97_114_115_101_95_97_116_116_114_105_98_117_116_101_100_95_100_101_99_108_95_95_91_52_93_95_48_8_p_0(parse_tree__prog_io_item__ModuleName_5, parse_tree__prog_io_item__VarSet_6, parse_tree__prog_io_item__Term_7, (MR_Integer) -1, parse_tree__prog_io_item__V_35_35, parse_tree__prog_io_item__V_36_36, &parse_tree__prog_io_item__MaybeIOM_10);
    }
#line 359 "prog_io_item.m"
    if (((MR_tag((MR_Word) parse_tree__prog_io_item__MaybeIOM_10)) == (MR_mktag((MR_Integer) 0))))
#line 358 "prog_io_item.m"
      *parse_tree__prog_io_item__MaybeClassMethod_8 = (MR_Word) parse_tree__prog_io_item__MaybeIOM_10;
#line 359 "prog_io_item.m"
    else
#line 360 "prog_io_item.m"
      {
#line 360 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__IOM_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__MaybeIOM_10, (MR_Integer) 0)));
#line 361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ItemPredDecl_13;
#line 361 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_37_37;

#line 361 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__IOM_12)) == (MR_mktag((MR_Integer) 0)));
#line 361 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 361 "prog_io_item.m"
          {
#line 361 "prog_io_item.m"
            parse_tree__prog_io_item__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__IOM_12, (MR_Integer) 0)));
#line 361 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_37_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_37_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 361 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 361 "prog_io_item.m"
              parse_tree__prog_io_item__ItemPredDecl_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_37_37, (MR_Integer) 1)));
#line 361 "prog_io_item.m"
          }
#line 361 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 365 "prog_io_item.m"
          {
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 0)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__PorF_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 1)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ArgDecls_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 2)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 3)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__WithInst_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 4)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeDetism_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 5)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TypeVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 7)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__InstVarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 8)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ExistQVars_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 9)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Purity_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 10)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Constraints_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 11)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 12)));
#line 365 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClassMethod_28;
#line 362 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item___Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 6)));
#line 362 "prog_io_item.m"
            MR_Integer parse_tree__prog_io_item___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemPredDecl_13, (MR_Integer) 13)));

#line 366 "prog_io_item.m"
            {
#line 366 "prog_io_item.m"
              parse_tree__prog_io_item__ClassMethod_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_14));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 1) = ((MR_Box) (parse_tree__prog_io_item__PorF_15));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgDecls_16));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 3) = ((MR_Box) (parse_tree__prog_io_item__WithType_17));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 4) = ((MR_Box) (parse_tree__prog_io_item__WithInst_18));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 5) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_19));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 6) = ((MR_Box) (parse_tree__prog_io_item__TypeVarSet_21));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 7) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_22));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 8) = ((MR_Box) (parse_tree__prog_io_item__ExistQVars_23));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 9) = ((MR_Box) (parse_tree__prog_io_item__Purity_24));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 10) = ((MR_Box) (parse_tree__prog_io_item__Constraints_25));
#line 366 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ClassMethod_28, 11) = ((MR_Box) (parse_tree__prog_io_item__Context_26));
#line 366 "prog_io_item.m"
            }
#line 369 "prog_io_item.m"
            {
#line 369 "prog_io_item.m"
              MR_Word base;
#line 369 "prog_io_item.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 369 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeClassMethod_8 = base;
#line 369 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassMethod_28));
#line 369 "prog_io_item.m"
            }
#line 365 "prog_io_item.m"
          }
#line 361 "prog_io_item.m"
        else
#line 370 "prog_io_item.m"
          {
#line 370 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ItemModeDecl_29;
#line 370 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_38_38;

#line 370 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__IOM_12)) == (MR_mktag((MR_Integer) 0)));
#line 370 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 370 "prog_io_item.m"
              {
#line 370 "prog_io_item.m"
                parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__IOM_12, (MR_Integer) 0)));
#line 370 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 370 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 370 "prog_io_item.m"
                  parse_tree__prog_io_item__ItemModeDecl_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_38_38, (MR_Integer) 1)));
#line 370 "prog_io_item.m"
              }
#line 370 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 372 "prog_io_item.m"
              {
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybePorF_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 1)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ArgModes_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 2)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Name_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 0)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__WithInst_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 3)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__MaybeDetism_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 4)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__InstVarSet_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 5)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Context_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 6)));
#line 372 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__ClassMethod_64;
#line 371 "prog_io_item.m"
                MR_Integer parse_tree__prog_io_item___SeqNum_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__ItemModeDecl_29, (MR_Integer) 7)));

#line 373 "prog_io_item.m"
                {
#line 373 "prog_io_item.m"
                  parse_tree__prog_io_item__ClassMethod_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 0) = ((MR_Box) (parse_tree__prog_io_item__Name_58));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 1) = ((MR_Box) (parse_tree__prog_io_item__MaybePorF_30));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 2) = ((MR_Box) (parse_tree__prog_io_item__ArgModes_31));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 3) = ((MR_Box) (parse_tree__prog_io_item__WithInst_59));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 4) = ((MR_Box) (parse_tree__prog_io_item__MaybeDetism_60));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 5) = ((MR_Box) (parse_tree__prog_io_item__InstVarSet_61));
#line 373 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__ClassMethod_64, 6) = ((MR_Box) (parse_tree__prog_io_item__Context_62));
#line 373 "prog_io_item.m"
                }
#line 375 "prog_io_item.m"
                {
#line 375 "prog_io_item.m"
                  MR_Word base;
#line 375 "prog_io_item.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 375 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeClassMethod_8 = base;
#line 375 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__prog_io_item__ClassMethod_64));
#line 375 "prog_io_item.m"
                }
#line 372 "prog_io_item.m"
              }
#line 370 "prog_io_item.m"
            else
#line 378 "prog_io_item.m"
              {
#line 378 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_33;
#line 378 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_49_49;
#line 378 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_50_50;
#line 378 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_55_55;

#line 380 "prog_io_item.m"
                {
#line 380 "prog_io_item.m"
                  parse_tree__prog_io_item__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 0) = ((MR_Box) (parse_tree__prog_io_item__TermContext_9));
#line 380 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[210])));
#line 380 "prog_io_item.m"
                }
#line 380 "prog_io_item.m"
                {
#line 380 "prog_io_item.m"
                  parse_tree__prog_io_item__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 0) = ((MR_Box) (parse_tree__prog_io_item__V_50_50));
#line 380 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "prog_io_item.m"
                }
#line 379 "prog_io_item.m"
                {
#line 379 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 379 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 379 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 379 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_33, 2) = ((MR_Box) (parse_tree__prog_io_item__V_49_49));
#line 379 "prog_io_item.m"
                }
#line 381 "prog_io_item.m"
                {
#line 381 "prog_io_item.m"
                  parse_tree__prog_io_item__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_33));
#line 381 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "prog_io_item.m"
                }
#line 381 "prog_io_item.m"
                {
#line 381 "prog_io_item.m"
                  MR_Word base;
#line 381 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 381 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeClassMethod_8 = base;
#line 381 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_55_55));
#line 381 "prog_io_item.m"
                }
#line 378 "prog_io_item.m"
              }
#line 370 "prog_io_item.m"
          }
#line 360 "prog_io_item.m"
      }
#line 352 "prog_io_item.m"
  }
#line 55 "prog_io_item.m"
}

#line 42 "prog_io_item.m"
void MR_CALL 
parse_tree__prog_io_item__parse_item_or_marker_5_p_0(
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__ModuleName_6,
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__VarSet_7,
#line 42 "prog_io_item.m"
  MR_Word parse_tree__prog_io_item__Term_8,
#line 42 "prog_io_item.m"
  MR_Integer parse_tree__prog_io_item__SeqNum_9,
#line 42 "prog_io_item.m"
  MR_Word * parse_tree__prog_io_item__MaybeIOM_10)
#line 42 "prog_io_item.m"
{
#line 91 "prog_io_item.m"
  {
#line 91 "prog_io_item.m"
    MR_bool parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 91 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__DeclTerm_11;
#line 92 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_27_27;
#line 92 "prog_io_item.m"
    MR_String parse_tree__prog_io_item__V_28_28;
#line 92 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_29_29;
#line 92 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item__V_30_30;
#line 92 "prog_io_item.m"
    MR_Word parse_tree__prog_io_item___DeclContext_12;

#line 92 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 92 "prog_io_item.m"
      {
#line 92 "prog_io_item.m"
        parse_tree__prog_io_item__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 92 "prog_io_item.m"
        parse_tree__prog_io_item__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 92 "prog_io_item.m"
        parse_tree__prog_io_item___DeclContext_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 92 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_27_27)) == (MR_mktag((MR_Integer) 0)));
#line 92 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 92 "prog_io_item.m"
          {
#line 92 "prog_io_item.m"
            parse_tree__prog_io_item__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_27_27, (MR_Integer) 0)));
#line 92 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_28_28, (MR_String) ":-") == 0);
#line 92 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 92 "prog_io_item.m"
              {
#line 92 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 92 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 92 "prog_io_item.m"
                  {
#line 92 "prog_io_item.m"
                    parse_tree__prog_io_item__DeclTerm_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 0)));
#line 92 "prog_io_item.m"
                    parse_tree__prog_io_item__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_29_29, (MR_Integer) 1)));
#line 92 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 92 "prog_io_item.m"
                  }
#line 92 "prog_io_item.m"
              }
#line 92 "prog_io_item.m"
          }
#line 92 "prog_io_item.m"
      }
#line 91 "prog_io_item.m"
    if (parse_tree__prog_io_item__succeeded)
#line 94 "prog_io_item.m"
      {
#line 94 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__Functor_13;
#line 94 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__ArgTerms_14;
#line 94 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__Context_15;
#line 95 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_31_31;

#line 95 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__DeclTerm_11)) == (MR_mktag((MR_Integer) 0)));
#line 95 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
          {
#line 95 "prog_io_item.m"
            parse_tree__prog_io_item__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
            parse_tree__prog_io_item__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 1)));
#line 95 "prog_io_item.m"
            parse_tree__prog_io_item__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__DeclTerm_11, (MR_Integer) 2)));
#line 95 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_31_31)) == (MR_mktag((MR_Integer) 0)));
#line 95 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 95 "prog_io_item.m"
              parse_tree__prog_io_item__Functor_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_31_31, (MR_Integer) 0)));
#line 95 "prog_io_item.m"
          }
#line 94 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 97 "prog_io_item.m"
          {
#line 97 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__MaybeIOMPrime_16;

#line 98 "prog_io_item.m"
            {
#line 98 "prog_io_item.m"
              parse_tree__prog_io_item__succeeded = parse_tree__prog_io_item__parse_decl_item_or_marker_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Functor_13, parse_tree__prog_io_item__ArgTerms_14, parse_tree__prog_io_item__Context_15, parse_tree__prog_io_item__SeqNum_9, &parse_tree__prog_io_item__MaybeIOMPrime_16);
            }
#line 97 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 101 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = parse_tree__prog_io_item__MaybeIOMPrime_16;
#line 97 "prog_io_item.m"
            else
#line 103 "prog_io_item.m"
              {
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Spec_17;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_32_32;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Context_54;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__Pieces_55;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_58_58;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_59_59;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_68_68;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_69_69;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_70_70;
#line 103 "prog_io_item.m"
                MR_Word parse_tree__prog_io_item__V_71_71;

#line 150 "prog_io_item.m"
                {
#line 150 "prog_io_item.m"
                  parse_tree__prog_io_item__Context_54 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__Term_8);
                }
#line 151 "prog_io_item.m"
                {
#line 151 "prog_io_item.m"
                  parse_tree__prog_io_item__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(3), parse_tree__prog_io_item__V_59_59, 1) = ((MR_Box) (parse_tree__prog_io_item__Functor_13));
#line 151 "prog_io_item.m"
                }
#line 151 "prog_io_item.m"
                {
#line 151 "prog_io_item.m"
                  parse_tree__prog_io_item__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 0) = ((MR_Box) (parse_tree__prog_io_item__V_59_59));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__prog_io_item_scalar_common_1[18])));
#line 151 "prog_io_item.m"
                }
#line 151 "prog_io_item.m"
                {
#line 151 "prog_io_item.m"
                  parse_tree__prog_io_item__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__prog_io_item_scalar_common_1[209])));
#line 151 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__Pieces_55, 1) = ((MR_Box) (parse_tree__prog_io_item__V_58_58));
#line 151 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  parse_tree__prog_io_item__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_71_71, 0) = ((MR_Box) (parse_tree__prog_io_item__Pieces_55));
#line 154 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  parse_tree__prog_io_item__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 0) = ((MR_Box) (parse_tree__prog_io_item__V_71_71));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  parse_tree__prog_io_item__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 0) = ((MR_Box) (parse_tree__prog_io_item__Context_54));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_69_69, 1) = ((MR_Box) (parse_tree__prog_io_item__V_70_70));
#line 154 "prog_io_item.m"
                }
#line 154 "prog_io_item.m"
                {
#line 154 "prog_io_item.m"
                  parse_tree__prog_io_item__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 0) = ((MR_Box) (parse_tree__prog_io_item__V_69_69));
#line 154 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "prog_io_item.m"
                }
#line 153 "prog_io_item.m"
                {
#line 153 "prog_io_item.m"
                  parse_tree__prog_io_item__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 153 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Spec_17, 2) = ((MR_Box) (parse_tree__prog_io_item__V_68_68));
#line 153 "prog_io_item.m"
                }
#line 104 "prog_io_item.m"
                {
#line 104 "prog_io_item.m"
                  parse_tree__prog_io_item__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_32_32, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_17));
#line 104 "prog_io_item.m"
                  MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "prog_io_item.m"
                }
#line 104 "prog_io_item.m"
                {
#line 104 "prog_io_item.m"
                  MR_Word base;
#line 104 "prog_io_item.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 104 "prog_io_item.m"
                  *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 104 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_32_32));
#line 104 "prog_io_item.m"
                }
#line 103 "prog_io_item.m"
              }
#line 97 "prog_io_item.m"
          }
#line 94 "prog_io_item.m"
        else
#line 107 "prog_io_item.m"
          {
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_34_34;
#line 107 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__Spec_49;

#line 107 "prog_io_item.m"
            {
#line 107 "prog_io_item.m"
              parse_tree__prog_io_item__Spec_49 = parse_tree__prog_io_item__decl_is_not_an_atom_2_f_0(parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__Term_8);
            }
#line 108 "prog_io_item.m"
            {
#line 108 "prog_io_item.m"
              parse_tree__prog_io_item__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 0) = ((MR_Box) (parse_tree__prog_io_item__Spec_49));
#line 108 "prog_io_item.m"
              MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "prog_io_item.m"
            }
#line 108 "prog_io_item.m"
            {
#line 108 "prog_io_item.m"
              MR_Word base;
#line 108 "prog_io_item.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 108 "prog_io_item.m"
              *parse_tree__prog_io_item__MaybeIOM_10 = base;
#line 108 "prog_io_item.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__prog_io_item__V_34_34));
#line 108 "prog_io_item.m"
            }
#line 107 "prog_io_item.m"
          }
#line 94 "prog_io_item.m"
      }
#line 91 "prog_io_item.m"
    else
#line 110 "prog_io_item.m"
      {
#line 110 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGHeadTerm_18;
#line 110 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGBodyTerm_19;
#line 110 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__DCGContext_20;
#line 111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_36_36;
#line 111 "prog_io_item.m"
        MR_String parse_tree__prog_io_item__V_37_37;
#line 111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_38_38;
#line 111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_39_39;
#line 111 "prog_io_item.m"
        MR_Word parse_tree__prog_io_item__V_40_40;

#line 111 "prog_io_item.m"
        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 111 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 111 "prog_io_item.m"
          {
#line 111 "prog_io_item.m"
            parse_tree__prog_io_item__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 111 "prog_io_item.m"
            parse_tree__prog_io_item__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 111 "prog_io_item.m"
            parse_tree__prog_io_item__DCGContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 111 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_36_36)) == (MR_mktag((MR_Integer) 0)));
#line 111 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 111 "prog_io_item.m"
              {
#line 111 "prog_io_item.m"
                parse_tree__prog_io_item__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_36_36, (MR_Integer) 0)));
#line 111 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_37_37, (MR_String) "-->") == 0);
#line 111 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 111 "prog_io_item.m"
                  {
#line 111 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 111 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 111 "prog_io_item.m"
                      {
#line 111 "prog_io_item.m"
                        parse_tree__prog_io_item__DCGHeadTerm_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 0)));
#line 111 "prog_io_item.m"
                        parse_tree__prog_io_item__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_38_38, (MR_Integer) 1)));
#line 111 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 111 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 111 "prog_io_item.m"
                          {
#line 111 "prog_io_item.m"
                            parse_tree__prog_io_item__DCGBodyTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 0)));
#line 111 "prog_io_item.m"
                            parse_tree__prog_io_item__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_39_39, (MR_Integer) 1)));
#line 111 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_40_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "prog_io_item.m"
                          }
#line 111 "prog_io_item.m"
                      }
#line 111 "prog_io_item.m"
                  }
#line 111 "prog_io_item.m"
              }
#line 111 "prog_io_item.m"
          }
#line 110 "prog_io_item.m"
        if (parse_tree__prog_io_item__succeeded)
#line 115 "prog_io_item.m"
          {
#line 115 "prog_io_item.m"
            parse_tree__prog_io_dcg__parse_dcg_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__DCGHeadTerm_18, parse_tree__prog_io_item__DCGBodyTerm_19, parse_tree__prog_io_item__DCGContext_20, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeIOM_10);
          }
#line 110 "prog_io_item.m"
        else
#line 132 "prog_io_item.m"
          {
#line 132 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTerm_24;
#line 132 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTerm_25;
#line 132 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__ClauseContext_26;
#line 119 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__HeadTermPrime_21;
#line 119 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__BodyTermPrime_22;
#line 119 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__TermContext_23;
#line 120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_41_41;
#line 120 "prog_io_item.m"
            MR_String parse_tree__prog_io_item__V_42_42;
#line 120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_43_43;
#line 120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_44_44;
#line 120 "prog_io_item.m"
            MR_Word parse_tree__prog_io_item__V_45_45;

#line 120 "prog_io_item.m"
            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__Term_8)) == (MR_mktag((MR_Integer) 0)));
#line 120 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 120 "prog_io_item.m"
              {
#line 120 "prog_io_item.m"
                parse_tree__prog_io_item__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 0)));
#line 120 "prog_io_item.m"
                parse_tree__prog_io_item__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 1)));
#line 120 "prog_io_item.m"
                parse_tree__prog_io_item__TermContext_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__Term_8, (MR_Integer) 2)));
#line 120 "prog_io_item.m"
                parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_41_41)) == (MR_mktag((MR_Integer) 0)));
#line 120 "prog_io_item.m"
                if (parse_tree__prog_io_item__succeeded)
#line 120 "prog_io_item.m"
                  {
#line 120 "prog_io_item.m"
                    parse_tree__prog_io_item__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__V_41_41, (MR_Integer) 0)));
#line 120 "prog_io_item.m"
                    parse_tree__prog_io_item__succeeded = (strcmp(parse_tree__prog_io_item__V_42_42, (MR_String) ":-") == 0);
#line 120 "prog_io_item.m"
                    if (parse_tree__prog_io_item__succeeded)
#line 120 "prog_io_item.m"
                      {
#line 121 "prog_io_item.m"
                        parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_item.m"
                        if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
                          {
#line 121 "prog_io_item.m"
                            parse_tree__prog_io_item__HeadTermPrime_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
                            parse_tree__prog_io_item__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_43_43, (MR_Integer) 1)));
#line 121 "prog_io_item.m"
                            parse_tree__prog_io_item__succeeded = ((MR_tag((MR_Word) parse_tree__prog_io_item__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 121 "prog_io_item.m"
                            if (parse_tree__prog_io_item__succeeded)
#line 121 "prog_io_item.m"
                              {
#line 121 "prog_io_item.m"
                                parse_tree__prog_io_item__BodyTermPrime_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_44_44, (MR_Integer) 0)));
#line 121 "prog_io_item.m"
                                parse_tree__prog_io_item__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__prog_io_item__V_44_44, (MR_Integer) 1)));
#line 121 "prog_io_item.m"
                                parse_tree__prog_io_item__succeeded = (parse_tree__prog_io_item__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 121 "prog_io_item.m"
                              }
#line 121 "prog_io_item.m"
                          }
#line 120 "prog_io_item.m"
                      }
#line 120 "prog_io_item.m"
                  }
#line 120 "prog_io_item.m"
              }
#line 119 "prog_io_item.m"
            if (parse_tree__prog_io_item__succeeded)
#line 124 "prog_io_item.m"
              {
#line 124 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_24 = parse_tree__prog_io_item__HeadTermPrime_21;
#line 125 "prog_io_item.m"
                parse_tree__prog_io_item__BodyTerm_25 = parse_tree__prog_io_item__BodyTermPrime_22;
#line 126 "prog_io_item.m"
                parse_tree__prog_io_item__ClauseContext_26 = parse_tree__prog_io_item__TermContext_23;
#line 124 "prog_io_item.m"
              }
#line 119 "prog_io_item.m"
            else
#line 129 "prog_io_item.m"
              {
#line 129 "prog_io_item.m"
                parse_tree__prog_io_item__HeadTerm_24 = parse_tree__prog_io_item__Term_8;
#line 130 "prog_io_item.m"
                {
#line 130 "prog_io_item.m"
                  parse_tree__prog_io_item__ClauseContext_26 = mercury__term__get_term_context_1_f_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, parse_tree__prog_io_item__HeadTerm_24);
                }
#line 131 "prog_io_item.m"
                {
#line 131 "prog_io_item.m"
                  parse_tree__prog_io_item__BodyTerm_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 131 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_25, 0) = ((MR_Box) (&parse_tree__prog_io_item_scalar_common_3[0]));
#line 131 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "prog_io_item.m"
                  MR_hl_field(MR_mktag(0), parse_tree__prog_io_item__BodyTerm_25, 2) = ((MR_Box) (parse_tree__prog_io_item__ClauseContext_26));
#line 131 "prog_io_item.m"
                }
#line 129 "prog_io_item.m"
              }
#line 133 "prog_io_item.m"
            {
#line 133 "prog_io_item.m"
              parse_tree__prog_io_item__parse_clause_7_p_0(parse_tree__prog_io_item__ModuleName_6, parse_tree__prog_io_item__VarSet_7, parse_tree__prog_io_item__HeadTerm_24, parse_tree__prog_io_item__BodyTerm_25, parse_tree__prog_io_item__ClauseContext_26, parse_tree__prog_io_item__SeqNum_9, parse_tree__prog_io_item__MaybeIOM_10);
            }
#line 132 "prog_io_item.m"
          }
#line 110 "prog_io_item.m"
      }
#line 91 "prog_io_item.m"
  }
#line 42 "prog_io_item.m"
}

void mercury__parse_tree__prog_io_item__init(void)
{
}

void mercury__parse_tree__prog_io_item__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_incl_imp_use_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_maybe_allow_mode_defn_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_purity_attr_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quant_constr_attr_0);
	MR_register_type_ctor_info(&parse_tree__prog_io_item__parse_tree__prog_io_item__type_ctor_info_quantifier_type_0);
}

void mercury__parse_tree__prog_io_item__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.prog_io_item. */
