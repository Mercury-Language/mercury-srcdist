/*
** Automatically generated from `equiv_type.m'
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


/* :- module parse_tree.equiv_type. */
/* :- implementation. */

/*
INIT mercury__parse_tree__equiv_type__init
ENDINIT
*/

#include "parse_tree.equiv_type.mih"


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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 100 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 103 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 106 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0;

#line 109 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 112 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 115 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 118 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 121 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 124 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 127 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 130 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

#line 133 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

#line 136 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

#line 139 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

#line 142 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

#line 145 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

#line 148 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 151 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 157 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

#line 160 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

#line 163 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

#line 166 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

#line 169 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

#line 172 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

#line 175 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 178 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0;

#line 181 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1];

#line 184 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1;

#line 187 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1];

#line 190 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1];

#line 193 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2];

#line 196 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2];

#line 199 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2];

#line 202 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 205 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 208 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 211 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 214 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 217 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0;

#line 220 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 223 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 226 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 228 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 231 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 234 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 236 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 238 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 241 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 244 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 246 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 249 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 252 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 254 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 256 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 259 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 262 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 264 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 267 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 270 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 272 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 274 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 277 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 280 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 282 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 285 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 288 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 290 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 292 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 295 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 298 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 300 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 303 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 306 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 308 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 310 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 313 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 316 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 318 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 320 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 323 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 326 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 328 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 330 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 332 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4);

#line 335 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 338 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 340 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 343 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 346 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 348 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 350 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 245 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1393 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1393 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1255 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 729 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 698 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 562 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 528 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 458 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 194 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 194 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 194 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 1356 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1356__1_1_f_0(
#line 1356 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1349 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1349__1_1_f_0(
#line 1349 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 1067 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1067__1_2_p_0(
#line 1067 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1067 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44);

#line 245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 245 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 190 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 190 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 241 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 241 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 241 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 188 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 181 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 181 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 181 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1538 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1534 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1513 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1491 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1474 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1471 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1464 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1356 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1356 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1356 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1349 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1349 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1349 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1289 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);

#line 1095 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1082 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1067 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1067 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg);

#line 1044 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1001 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 990 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 980 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32);

#line 957 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 950 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 930 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 885 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 875 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 861 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 840 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 826 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 805 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 764 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 680 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 495 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 428 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 391 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 324 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 300 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 205 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 957 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[37][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][1];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[37][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[5]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[4]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type after \140with_type\140."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotations are incompatible."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[2])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0)),
    ((MR_Box) (&parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0)),
    ((MR_Box) (&parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2269 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2278 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2286 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 2294 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2303 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2311 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2320 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2329 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2337 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2345 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2353 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2360 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0 = {
  (MR_String) "eqv_inst_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 2375 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2380 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2389 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2394 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2399 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_inst_body",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0
};

#line 2416 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2424 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2432 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2440 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2447 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0 = {
  (MR_String) "eqv_type_body",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0,
  NULL,
  NULL,
  NULL
};

#line 2462 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2467 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2476 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2481 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2486 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_body",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0
};

#line 2503 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2512 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "inst_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2529 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0 = {
  (MR_String) "dont_record_sym_name_use",
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

#line 2544 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_visibility_0
};

#line 2549 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1 = {
  (MR_String) "record_sym_name_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1,
  NULL,
  NULL,
  NULL
};

#line 2564 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0
};

#line 2569 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2574 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1
  }
};

#line 2588 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2594 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2600 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "maybe_record_sym_name_use",
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0
};

#line 2617 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2623 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2629 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2635 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2641 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2647 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "pred_or_func_decl_type",
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0
};

#line 2664 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0
  }
};

#line 2674 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_section_maybe_record_sym_name_use_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "section_maybe_record_sym_name_use",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2691 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2700 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_type_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "type_eqv_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2717 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2720 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2722 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2724 "parse_tree.equiv_type.c"
{
#line 2726 "parse_tree.equiv_type.c"
  {
#line 2728 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2731 "parse_tree.equiv_type.c"
    {
#line 2733 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2736 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2738 "parse_tree.equiv_type.c"
  }
#line 2740 "parse_tree.equiv_type.c"
}

#line 2743 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2746 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2748 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2750 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2752 "parse_tree.equiv_type.c"
{
#line 2754 "parse_tree.equiv_type.c"
  {
#line 2756 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2759 "parse_tree.equiv_type.c"
    {
#line 2761 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2764 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2766 "parse_tree.equiv_type.c"
  }
#line 2768 "parse_tree.equiv_type.c"
}

#line 2771 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2774 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2776 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2778 "parse_tree.equiv_type.c"
{
#line 2780 "parse_tree.equiv_type.c"
  {
#line 2782 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2785 "parse_tree.equiv_type.c"
    {
#line 2787 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2790 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2792 "parse_tree.equiv_type.c"
  }
#line 2794 "parse_tree.equiv_type.c"
}

#line 2797 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2800 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2802 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2804 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2806 "parse_tree.equiv_type.c"
{
#line 2808 "parse_tree.equiv_type.c"
  {
#line 2810 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2813 "parse_tree.equiv_type.c"
    {
#line 2815 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2818 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2820 "parse_tree.equiv_type.c"
  }
#line 2822 "parse_tree.equiv_type.c"
}

#line 2825 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 2828 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2830 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2832 "parse_tree.equiv_type.c"
{
#line 2834 "parse_tree.equiv_type.c"
  {
#line 2836 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2839 "parse_tree.equiv_type.c"
    {
#line 2841 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2844 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2846 "parse_tree.equiv_type.c"
  }
#line 2848 "parse_tree.equiv_type.c"
}

#line 2851 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 2854 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2856 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2858 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2860 "parse_tree.equiv_type.c"
{
#line 2862 "parse_tree.equiv_type.c"
  {
#line 2864 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2867 "parse_tree.equiv_type.c"
    {
#line 2869 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2872 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2874 "parse_tree.equiv_type.c"
  }
#line 2876 "parse_tree.equiv_type.c"
}

#line 2879 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 2882 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2884 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2886 "parse_tree.equiv_type.c"
{
#line 2888 "parse_tree.equiv_type.c"
  {
#line 2890 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2893 "parse_tree.equiv_type.c"
    {
#line 2895 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2898 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2900 "parse_tree.equiv_type.c"
  }
#line 2902 "parse_tree.equiv_type.c"
}

#line 2905 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 2908 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2910 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2912 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2914 "parse_tree.equiv_type.c"
{
#line 2916 "parse_tree.equiv_type.c"
  {
#line 2918 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2921 "parse_tree.equiv_type.c"
    {
#line 2923 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2926 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2928 "parse_tree.equiv_type.c"
  }
#line 2930 "parse_tree.equiv_type.c"
}

#line 2933 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 2936 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2938 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2940 "parse_tree.equiv_type.c"
{
#line 2942 "parse_tree.equiv_type.c"
  {
#line 2944 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2947 "parse_tree.equiv_type.c"
    {
#line 2949 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2952 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2954 "parse_tree.equiv_type.c"
  }
#line 2956 "parse_tree.equiv_type.c"
}

#line 2959 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 2962 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2964 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2966 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2968 "parse_tree.equiv_type.c"
{
#line 2970 "parse_tree.equiv_type.c"
  {
#line 2972 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2975 "parse_tree.equiv_type.c"
    {
#line 2977 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2980 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2982 "parse_tree.equiv_type.c"
  }
#line 2984 "parse_tree.equiv_type.c"
}

#line 2987 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 2990 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2992 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2994 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2996 "parse_tree.equiv_type.c"
{
#line 2998 "parse_tree.equiv_type.c"
  {
#line 3000 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3003 "parse_tree.equiv_type.c"
    {
#line 3005 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3008 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3010 "parse_tree.equiv_type.c"
  }
#line 3012 "parse_tree.equiv_type.c"
}

#line 3015 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 3018 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3020 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 3022 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 3024 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4)
#line 3026 "parse_tree.equiv_type.c"
{
#line 3028 "parse_tree.equiv_type.c"
  {
#line 3030 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3033 "parse_tree.equiv_type.c"
    {
#line 3035 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), ((MR_Word) parse_tree__equiv_type__wrapper_arg_4));
    }
#line 3038 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3040 "parse_tree.equiv_type.c"
  }
#line 3042 "parse_tree.equiv_type.c"
}

#line 3045 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 3048 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3050 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3052 "parse_tree.equiv_type.c"
{
#line 3054 "parse_tree.equiv_type.c"
  {
#line 3056 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3059 "parse_tree.equiv_type.c"
    {
#line 3061 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3064 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3066 "parse_tree.equiv_type.c"
  }
#line 3068 "parse_tree.equiv_type.c"
}

#line 3071 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 3074 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3076 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3078 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3080 "parse_tree.equiv_type.c"
{
#line 3082 "parse_tree.equiv_type.c"
  {
#line 3084 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3087 "parse_tree.equiv_type.c"
    {
#line 3089 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____type_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3092 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3094 "parse_tree.equiv_type.c"
  }
#line 3096 "parse_tree.equiv_type.c"
}

#line 245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 245 "equiv_type.m"
{
#line 245 "equiv_type.m"
  {
#line 245 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 245 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 245 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 245 "equiv_type.m"
    {
#line 245 "equiv_type.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__equiv_type__HeadVar__1_1, (MR_Word) parse_tree__equiv_type__Cast_HeadVar1_4, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_5);
#line 245 "equiv_type.m"
      return;
    }
#line 245 "equiv_type.m"
  }
#line 245 "equiv_type.m"
}

#line 245 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 245 "equiv_type.m"
{
#line 245 "equiv_type.m"
  {
#line 245 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 245 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 245 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 245 "equiv_type.m"
    {
#line 245 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__equiv_type__Cast_HeadVar1_3, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_4);
    }
#line 245 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 245 "equiv_type.m"
  }
#line 245 "equiv_type.m"
}

#line 1393 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1393 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1393 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1393 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1393 "equiv_type.m"
{
#line 1407 "equiv_type.m"
  {
#line 1407 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1407 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1457 "equiv_type.m"
      {
#line 1458 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1459 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1460 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1461 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1457 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1457 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1457 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1457 "equiv_type.m"
      }
#line 1407 "equiv_type.m"
    else
#line 1407 "equiv_type.m"
      {
#line 1407 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1407 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1407 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1411 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1411 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1411 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1413 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1408 "equiv_type.m"
        {
#line 1408 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__InstEqvMap_20, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1411 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1411 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1411 "equiv_type.m"
          {
#line 1411 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1411 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1412 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1412 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1412 "equiv_type.m"
              {
#line 1412 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1415 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1414 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1415 "equiv_type.m"
                else
#line 1415 "equiv_type.m"
                  {
#line 1415 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1415 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1415 "equiv_type.m"
                  }
#line 1412 "equiv_type.m"
              }
#line 1411 "equiv_type.m"
          }
#line 1432 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1418 "equiv_type.m"
          {
#line 1418 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1418 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1418 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1418 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1418 "equiv_type.m"
            {
#line 1418 "equiv_type.m"
              MR_Word base;
#line 1418 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = base;
#line 1418 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1418 "equiv_type.m"
            }
#line 1419 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1420 "equiv_type.m"
            {
#line 1420 "equiv_type.m"
              MR_Word base;
#line 1420 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1420 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1420 "equiv_type.m"
            }
#line 1421 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1425 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1425 "equiv_type.m"
            else
#line 1426 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1428 "equiv_type.m"
            {
#line 1428 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1429 "equiv_type.m"
            {
#line 1429 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1429 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1429 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_22));
#line 1429 "equiv_type.m"
            }
#line 1428 "equiv_type.m"
            {
#line 1428 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1428 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1428 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1428 "equiv_type.m"
            }
#line 1430 "equiv_type.m"
            {
#line 1430 "equiv_type.m"
              recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1431 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1418 "equiv_type.m"
          }
#line 1432 "equiv_type.m"
        else
#line 1433 "equiv_type.m"
          {
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1433 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1433 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1433 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1434 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1437 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1439 "equiv_type.m"
#line 1439 "equiv_type.m"
            switch (parse_tree__equiv_type__DeclType_24) {
#line 1439 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1439 "equiv_type.m"
              case (MR_Integer) 1:
#line 1439 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1439 "equiv_type.m"
                break;
#line 1439 "equiv_type.m"
              case (MR_Integer) 0:
#line 1438 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1439 "equiv_type.m"
                break;
#line 1439 "equiv_type.m"
            }
#line 1444 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1443 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1444 "equiv_type.m"
            else
#line 1445 "equiv_type.m"
              {
#line 1445 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1445 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1446 "equiv_type.m"
                {
#line 1446 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1446 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1446 "equiv_type.m"
                }
#line 1446 "equiv_type.m"
                {
#line 1446 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1446 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1446 "equiv_type.m"
                }
#line 1445 "equiv_type.m"
              }
#line 3482 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1448 "equiv_type.m"
            {
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1448 "equiv_type.m"
            }
#line 1448 "equiv_type.m"
            {
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[36])));
#line 1448 "equiv_type.m"
            }
#line 1448 "equiv_type.m"
            {
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[34])));
#line 1448 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1448 "equiv_type.m"
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1449 "equiv_type.m"
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1449 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[27])));
#line 1449 "equiv_type.m"
            }
#line 1450 "equiv_type.m"
            {
#line 1450 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[29]));
            }
#line 1450 "equiv_type.m"
            {
#line 1450 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1449 "equiv_type.m"
            {
#line 1449 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1448 "equiv_type.m"
            {
#line 1448 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1452 "equiv_type.m"
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1452 "equiv_type.m"
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1452 "equiv_type.m"
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "equiv_type.m"
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1453 "equiv_type.m"
            }
#line 1454 "equiv_type.m"
            {
#line 1454 "equiv_type.m"
              MR_Word base;
#line 1454 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1454 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "equiv_type.m"
            }
#line 1433 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1433 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1433 "equiv_type.m"
          }
#line 1407 "equiv_type.m"
      }
#line 1407 "equiv_type.m"
  }
#line 1393 "equiv_type.m"
}

#line 1255 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1255 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1255 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1255 "equiv_type.m"
{
#line 1283 "equiv_type.m"
  while (MR_TRUE)
#line 1283 "equiv_type.m"
    {
#line 1283 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1283 "equiv_type.m"
      {
#line 1283 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1283 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1283 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1263 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1263 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1263 "equiv_type.m"
          {
#line 1263 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1263 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1263 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1263 "equiv_type.m"
              {
#line 1263 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1263 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1263 "equiv_type.m"
              }
#line 1263 "equiv_type.m"
          }
#line 1283 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1264 "equiv_type.m"
          {
#line 1264 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1264 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1264 "equiv_type.m"
            {
#line 1264 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1264 "equiv_type.m"
            {
#line 1264 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1264 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1264 "equiv_type.m"
            }
#line 1266 "equiv_type.m"
            {
#line 1266 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1269 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1268 "equiv_type.m"
              {
#line 1268 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1268 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1268 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1268 "equiv_type.m"
              }
#line 1269 "equiv_type.m"
            else
#line 1280 "equiv_type.m"
              {
#line 1280 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1280 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1270 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1270 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1271 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1270 "equiv_type.m"
                {
#line 1270 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__InstEqvMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1270 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1270 "equiv_type.m"
                  {
#line 1270 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1270 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1270 "equiv_type.m"
                  }
#line 1270 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1270 "equiv_type.m"
                  {
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1271 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1270 "equiv_type.m"
                  }
#line 1280 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1273 "equiv_type.m"
                  {
#line 1273 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1273 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1273 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1273 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1273 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;

#line 1273 "equiv_type.m"
                    {
#line 1273 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1274 "equiv_type.m"
                    {
#line 1274 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1275 "equiv_type.m"
                    {
#line 1275 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1275 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1275 "equiv_type.m"
                    }
#line 1275 "equiv_type.m"
                    {
#line 1275 "equiv_type.m"
                      recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1278 "equiv_type.m"
                    {
#line 1278 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1277 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1277 "equiv_type.m"
                    {
#line 1277 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1277 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1277 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1277 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1277 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1277 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1277 "equiv_type.m"
                    }
#line 1277 "equiv_type.m"
                    continue;
#line 1273 "equiv_type.m"
                  }
#line 1280 "equiv_type.m"
                else
#line 1281 "equiv_type.m"
                  {
#line 1281 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1281 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1281 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1281 "equiv_type.m"
                  }
#line 1280 "equiv_type.m"
              }
#line 1264 "equiv_type.m"
          }
#line 1283 "equiv_type.m"
        else
#line 1284 "equiv_type.m"
          {
#line 1284 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1284 "equiv_type.m"
          }
#line 1283 "equiv_type.m"
      }
#line 1283 "equiv_type.m"
      break;
#line 1283 "equiv_type.m"
    }
#line 1255 "equiv_type.m"
}

#line 1245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1245 "equiv_type.m"
{
#line 1251 "equiv_type.m"
  {
#line 1251 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1251 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1252 "equiv_type.m"
    {
#line 1252 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1252 "equiv_type.m"
    {
#line 1252 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__InstEqvMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1252 "equiv_type.m"
      return;
    }
#line 1251 "equiv_type.m"
  }
#line 1245 "equiv_type.m"
}

#line 729 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 729 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 729 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 729 "equiv_type.m"
{
#line 736 "equiv_type.m"
  {
#line 736 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 736 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "equiv_type.m"
      {
#line 736 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 737 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 737 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 737 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 736 "equiv_type.m"
      }
#line 736 "equiv_type.m"
    else
#line 739 "equiv_type.m"
      {
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 739 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 739 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 739 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 757 "equiv_type.m"
        {
#line 757 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1089 "equiv_type.m"
        {
#line 1089 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 761 "equiv_type.m"
        {
#line 761 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 761 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 761 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 761 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 761 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 761 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 761 "equiv_type.m"
        }
#line 742 "equiv_type.m"
        {
#line 742 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 738 "equiv_type.m"
        {
#line 738 "equiv_type.m"
          MR_Word base;
#line 738 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 738 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 738 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 738 "equiv_type.m"
        }
#line 739 "equiv_type.m"
      }
#line 736 "equiv_type.m"
  }
#line 729 "equiv_type.m"
}

#line 698 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 698 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 698 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 698 "equiv_type.m"
{
#line 705 "equiv_type.m"
  {
#line 705 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 705 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "equiv_type.m"
      {
#line 705 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 705 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 705 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 705 "equiv_type.m"
      }
#line 705 "equiv_type.m"
    else
#line 708 "equiv_type.m"
      {
#line 708 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 708 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 708 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 708 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 708 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 707 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 707 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 722 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 722 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 722 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 722 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 722 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 724 "equiv_type.m"
        {
#line 724 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 726 "equiv_type.m"
        {
#line 726 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 726 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 726 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 726 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 726 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 726 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 726 "equiv_type.m"
        }
#line 707 "equiv_type.m"
        {
#line 707 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 707 "equiv_type.m"
        }
#line 711 "equiv_type.m"
        {
#line 711 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 707 "equiv_type.m"
        {
#line 707 "equiv_type.m"
          MR_Word base;
#line 707 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 707 "equiv_type.m"
        }
#line 708 "equiv_type.m"
      }
#line 705 "equiv_type.m"
  }
#line 698 "equiv_type.m"
}

#line 562 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 562 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 562 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 562 "equiv_type.m"
{
#line 569 "equiv_type.m"
  {
#line 569 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_20;
#line 569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21;
#line 569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 569 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 569 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 569 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 570 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 570 "equiv_type.m"
    parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 570 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 570 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 595 "equiv_type.m"
#line 595 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_20)) {
#line 595 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 595 "equiv_type.m"
      case (MR_Integer) 0:
#line 595 "equiv_type.m"
      case (MR_Integer) 1:
#line 658 "equiv_type.m"
        {
#line 659 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 658 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 658 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 658 "equiv_type.m"
        }
#line 595 "equiv_type.m"
        break;
#line 595 "equiv_type.m"
      case (MR_Integer) 2:
#line 596 "equiv_type.m"
        {
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs_62;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemId_63;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo_64;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 596 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_108_108;
#line 596 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_109_109;
#line 615 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Sharing0_52;
#line 615 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Types0_54;
#line 615 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 604 "equiv_type.m"
          MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 604 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_101_101;

#line 600 "equiv_type.m"
          {
#line 600 "equiv_type.m"
            recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
          }
#line 602 "equiv_type.m"
          {
#line 602 "equiv_type.m"
            parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
          }
#line 604 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 604 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 604 "equiv_type.m"
            {
#line 604 "equiv_type.m"
              parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 604 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 605 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 605 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 605 "equiv_type.m"
                {
#line 605 "equiv_type.m"
                  parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 605 "equiv_type.m"
                  parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 605 "equiv_type.m"
                  parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 605 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 605 "equiv_type.m"
                }
#line 604 "equiv_type.m"
            }
#line 615 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 609 "equiv_type.m"
            {
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Types_56;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TVarSet_58;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Sharing_59;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__UserSharing_61;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 609 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_106_106;
#line 607 "equiv_type.m"
              MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 607 "equiv_type.m"
              {
#line 607 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
              }
#line 610 "equiv_type.m"
              {
#line 610 "equiv_type.m"
                parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 612 "equiv_type.m"
              {
#line 612 "equiv_type.m"
                parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 612 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 612 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 612 "equiv_type.m"
              }
#line 612 "equiv_type.m"
              {
#line 612 "equiv_type.m"
                parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 612 "equiv_type.m"
              }
#line 613 "equiv_type.m"
              {
#line 613 "equiv_type.m"
                parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 613 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 613 "equiv_type.m"
              }
#line 614 "equiv_type.m"
              {
#line 614 "equiv_type.m"
                parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
              }
#line 609 "equiv_type.m"
            }
#line 615 "equiv_type.m"
          else
#line 616 "equiv_type.m"
            {
#line 616 "equiv_type.m"
              parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 616 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 616 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 616 "equiv_type.m"
            }
#line 619 "equiv_type.m"
          {
#line 619 "equiv_type.m"
            parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
          }
#line 618 "equiv_type.m"
          {
#line 618 "equiv_type.m"
            parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 618 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 618 "equiv_type.m"
          }
#line 618 "equiv_type.m"
          {
#line 618 "equiv_type.m"
            parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 618 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 618 "equiv_type.m"
          }
#line 620 "equiv_type.m"
          {
#line 620 "equiv_type.m"
            recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
          }
#line 623 "equiv_type.m"
          {
#line 623 "equiv_type.m"
            parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 623 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 623 "equiv_type.m"
          }
#line 625 "equiv_type.m"
          {
#line 625 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 625 "equiv_type.m"
            MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 625 "equiv_type.m"
          }
#line 596 "equiv_type.m"
        }
#line 595 "equiv_type.m"
        break;
#line 595 "equiv_type.m"
      case (MR_Integer) 3:
#line 595 "equiv_type.m"
#line 595 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)))) {
#line 595 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 595 "equiv_type.m"
          case (MR_Integer) 0:
#line 595 "equiv_type.m"
          case (MR_Integer) 1:
#line 595 "equiv_type.m"
          case (MR_Integer) 2:
#line 595 "equiv_type.m"
          case (MR_Integer) 3:
#line 595 "equiv_type.m"
          case (MR_Integer) 5:
#line 595 "equiv_type.m"
          case (MR_Integer) 6:
#line 595 "equiv_type.m"
          case (MR_Integer) 7:
#line 595 "equiv_type.m"
          case (MR_Integer) 8:
#line 595 "equiv_type.m"
          case (MR_Integer) 9:
#line 595 "equiv_type.m"
          case (MR_Integer) 10:
#line 595 "equiv_type.m"
          case (MR_Integer) 11:
#line 595 "equiv_type.m"
          case (MR_Integer) 12:
#line 595 "equiv_type.m"
          case (MR_Integer) 13:
#line 595 "equiv_type.m"
          case (MR_Integer) 14:
#line 595 "equiv_type.m"
          case (MR_Integer) 15:
#line 595 "equiv_type.m"
          case (MR_Integer) 16:
#line 595 "equiv_type.m"
          case (MR_Integer) 17:
#line 595 "equiv_type.m"
          case (MR_Integer) 18:
#line 595 "equiv_type.m"
          case (MR_Integer) 19:
#line 595 "equiv_type.m"
          case (MR_Integer) 20:
#line 595 "equiv_type.m"
          case (MR_Integer) 21:
#line 595 "equiv_type.m"
          case (MR_Integer) 22:
#line 595 "equiv_type.m"
          case (MR_Integer) 23:
#line 595 "equiv_type.m"
          case (MR_Integer) 24:
#line 595 "equiv_type.m"
          case (MR_Integer) 25:
#line 595 "equiv_type.m"
          case (MR_Integer) 26:
#line 595 "equiv_type.m"
          case (MR_Integer) 27:
#line 595 "equiv_type.m"
          case (MR_Integer) 28:
#line 595 "equiv_type.m"
          case (MR_Integer) 29:
#line 658 "equiv_type.m"
            {
#line 659 "equiv_type.m"
              parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 658 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 658 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 658 "equiv_type.m"
            }
#line 595 "equiv_type.m"
            break;
#line 595 "equiv_type.m"
          case (MR_Integer) 4:
#line 572 "equiv_type.m"
            {
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 1)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 572 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst_35;
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet_36;
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds_38;
#line 572 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 576 "equiv_type.m"
              parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 577 "equiv_type.m"
              if (!(parse_tree__equiv_type__succeeded))
#line 577 "equiv_type.m"
                {
#line 577 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_115_115;
#line 577 "equiv_type.m"
                  MR_String parse_tree__equiv_type__V_33_33;

#line 577 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 577 "equiv_type.m"
                  if (parse_tree__equiv_type__succeeded)
#line 577 "equiv_type.m"
                    {
#line 577 "equiv_type.m"
                      parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 577 "equiv_type.m"
                      parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 577 "equiv_type.m"
                      {
#line 577 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                      }
#line 577 "equiv_type.m"
                    }
#line 577 "equiv_type.m"
                }
#line 581 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 580 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "equiv_type.m"
              else
#line 582 "equiv_type.m"
                {
#line 582 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_111_111;

#line 582 "equiv_type.m"
                  {
#line 582 "equiv_type.m"
                    parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 582 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 582 "equiv_type.m"
                  }
#line 582 "equiv_type.m"
                  {
#line 582 "equiv_type.m"
                    parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 582 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 582 "equiv_type.m"
                  }
#line 582 "equiv_type.m"
                }
#line 584 "equiv_type.m"
              {
#line 584 "equiv_type.m"
                parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 589 "equiv_type.m"
              if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "equiv_type.m"
                parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 589 "equiv_type.m"
              else
#line 590 "equiv_type.m"
                {
#line 590 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 590 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 590 "equiv_type.m"
                  parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 590 "equiv_type.m"
                }
#line 592 "equiv_type.m"
              {
#line 592 "equiv_type.m"
                parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 592 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 592 "equiv_type.m"
              }
#line 594 "equiv_type.m"
              {
#line 594 "equiv_type.m"
                parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 594 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 594 "equiv_type.m"
              }
#line 572 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 572 "equiv_type.m"
            }
#line 595 "equiv_type.m"
            break;
#line 595 "equiv_type.m"
        }
#line 595 "equiv_type.m"
        break;
#line 595 "equiv_type.m"
    }
#line 661 "equiv_type.m"
    {
#line 661 "equiv_type.m"
      MR_Word base;
#line 661 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 661 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 661 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 661 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 661 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 661 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 661 "equiv_type.m"
    }
#line 569 "equiv_type.m"
  }
#line 562 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 528 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 528 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 528 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 528 "equiv_type.m"
{
#line 535 "equiv_type.m"
  {
#line 535 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_20;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_21;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_22;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 535 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 535 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 551 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 551 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 535 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 0)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__Types0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 1)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 2)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 3)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 4)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 5)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 6)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 7)));
#line 536 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 8)));
#line 540 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 541 "equiv_type.m"
      {
#line 541 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 545 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 544 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 545 "equiv_type.m"
    else
#line 546 "equiv_type.m"
      {
#line 546 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 546 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 546 "equiv_type.m"
        {
#line 546 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 546 "equiv_type.m"
        {
#line 546 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 546 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 546 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 546 "equiv_type.m"
        }
#line 546 "equiv_type.m"
        {
#line 546 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 546 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 546 "equiv_type.m"
        }
#line 546 "equiv_type.m"
      }
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 848 "equiv_type.m"
    }
#line 4984 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 847 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 551 "equiv_type.m"
    {
#line 551 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 555 "equiv_type.m"
    {
#line 555 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Arity_38);
    }
#line 556 "equiv_type.m"
    {
#line 556 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 556 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 556 "equiv_type.m"
    }
#line 556 "equiv_type.m"
    {
#line 556 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 556 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 556 "equiv_type.m"
    }
#line 557 "equiv_type.m"
    {
#line 557 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 558 "equiv_type.m"
    {
#line 558 "equiv_type.m"
      MR_Word base;
#line 558 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 558 "equiv_type.m"
      *parse_tree__equiv_type__InstanceInfo_17 = base;
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_22));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 558 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 558 "equiv_type.m"
    }
#line 535 "equiv_type.m"
  }
#line 528 "equiv_type.m"
}

#line 458 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 458 "equiv_type.m"
{
#line 465 "equiv_type.m"
  {
#line 465 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 465 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_33;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 465 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 465 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 468 "equiv_type.m"
    {
#line 468 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 5132 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 471 "equiv_type.m"
    {
#line 471 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23);
    }
#line 470 "equiv_type.m"
    {
#line 470 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 478 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_23;
#line 478 "equiv_type.m"
    else
#line 480 "equiv_type.m"
      {
#line 480 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23, parse_tree__equiv_type__ExtraModes_30);
      }
#line 489 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 489 "equiv_type.m"
    else
#line 483 "equiv_type.m"
      {
#line 483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 483 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 483 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 484 "equiv_type.m"
        {
#line 484 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 485 "equiv_type.m"
        {
#line 485 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 486 "equiv_type.m"
        {
#line 486 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 487 "equiv_type.m"
        {
#line 487 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 487 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 487 "equiv_type.m"
        }
#line 487 "equiv_type.m"
        {
#line 487 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 487 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 487 "equiv_type.m"
        }
#line 488 "equiv_type.m"
        {
#line 488 "equiv_type.m"
          recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 483 "equiv_type.m"
      }
#line 492 "equiv_type.m"
    {
#line 492 "equiv_type.m"
      MR_Word base;
#line 492 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 492 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_33));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_26));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 492 "equiv_type.m"
    }
#line 465 "equiv_type.m"
  }
#line 458 "equiv_type.m"
}

#line 194 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 194 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 194 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 194 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 194 "equiv_type.m"
{
#line 198 "equiv_type.m"
  while (MR_TRUE)
#line 198 "equiv_type.m"
    {
#line 198 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 198 "equiv_type.m"
      {
#line 198 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 198 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "equiv_type.m"
          {
#line 198 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 198 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 198 "equiv_type.m"
          }
#line 198 "equiv_type.m"
        else
#line 200 "equiv_type.m"
          {
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 4)));
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25;
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26;
#line 201 "equiv_type.m"
            MR_Box parse_tree__equiv_type___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 0));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 1)));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 2)));
#line 201 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 3)));

#line 202 "equiv_type.m"
            {
#line 202 "equiv_type.m"
              parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(parse_tree__equiv_type__Items_20, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26);
            }
#line 203 "equiv_type.m"
            /* direct tailcall eliminated */
#line 203 "equiv_type.m"
            {
#line 203 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__ItemBlocks_13;
#line 203 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_25_25;
#line 203 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_26_26;

#line 203 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 203 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 203 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 203 "equiv_type.m"
            }
#line 203 "equiv_type.m"
            continue;
#line 200 "equiv_type.m"
          }
#line 198 "equiv_type.m"
      }
#line 198 "equiv_type.m"
      break;
#line 198 "equiv_type.m"
    }
#line 194 "equiv_type.m"
}

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 275 "equiv_type.m"
{
#line 283 "equiv_type.m"
  while (MR_TRUE)
#line 283 "equiv_type.m"
    {
#line 283 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 283 "equiv_type.m"
      {
#line 283 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 283 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "equiv_type.m"
          {
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 283 "equiv_type.m"
          }
#line 283 "equiv_type.m"
        else
#line 287 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeRecord_45;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 257 "equiv_type.m"
#line 257 "equiv_type.m"
            switch (parse_tree__equiv_type__Section_40) {
#line 257 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 257 "equiv_type.m"
              case (MR_Integer) 2:
#line 261 "equiv_type.m"
                {
#line 262 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 261 "equiv_type.m"
                }
#line 257 "equiv_type.m"
                break;
#line 257 "equiv_type.m"
              case (MR_Integer) 1:
#line 259 "equiv_type.m"
                {
#line 260 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 259 "equiv_type.m"
                }
#line 257 "equiv_type.m"
                break;
#line 257 "equiv_type.m"
              case (MR_Integer) 0:
#line 257 "equiv_type.m"
                {
#line 258 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[1]);
#line 257 "equiv_type.m"
                }
#line 257 "equiv_type.m"
                break;
#line 257 "equiv_type.m"
            }
#line 290 "equiv_type.m"
            {
#line 290 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_45, parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 292 "equiv_type.m"
            {
#line 292 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 293 "equiv_type.m"
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 295 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            /* direct tailcall eliminated */
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 296 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            continue;
#line 287 "equiv_type.m"
          }
#line 283 "equiv_type.m"
      }
#line 283 "equiv_type.m"
      break;
#line 283 "equiv_type.m"
    }
#line 275 "equiv_type.m"
}

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 275 "equiv_type.m"
{
#line 283 "equiv_type.m"
  while (MR_TRUE)
#line 283 "equiv_type.m"
    {
#line 283 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 283 "equiv_type.m"
      {
#line 283 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 283 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "equiv_type.m"
          {
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 283 "equiv_type.m"
          }
#line 283 "equiv_type.m"
        else
#line 287 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 290 "equiv_type.m"
            {
#line 290 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 292 "equiv_type.m"
            {
#line 292 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 293 "equiv_type.m"
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 295 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            /* direct tailcall eliminated */
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 296 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            continue;
#line 287 "equiv_type.m"
          }
#line 283 "equiv_type.m"
      }
#line 283 "equiv_type.m"
      break;
#line 283 "equiv_type.m"
    }
#line 275 "equiv_type.m"
}

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 275 "equiv_type.m"
{
#line 283 "equiv_type.m"
  while (MR_TRUE)
#line 283 "equiv_type.m"
    {
#line 283 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 283 "equiv_type.m"
      {
#line 283 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 283 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "equiv_type.m"
          {
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 283 "equiv_type.m"
          }
#line 283 "equiv_type.m"
        else
#line 287 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 290 "equiv_type.m"
            {
#line 290 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 292 "equiv_type.m"
            {
#line 292 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 293 "equiv_type.m"
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 295 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            /* direct tailcall eliminated */
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 296 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            continue;
#line 287 "equiv_type.m"
          }
#line 283 "equiv_type.m"
      }
#line 283 "equiv_type.m"
      break;
#line 283 "equiv_type.m"
    }
#line 275 "equiv_type.m"
}

#line 275 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 275 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 275 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 275 "equiv_type.m"
{
#line 283 "equiv_type.m"
  while (MR_TRUE)
#line 283 "equiv_type.m"
    {
#line 283 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 283 "equiv_type.m"
      {
#line 283 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 283 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 283 "equiv_type.m"
          {
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 284 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 283 "equiv_type.m"
          }
#line 283 "equiv_type.m"
        else
#line 287 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Incls_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Avails_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 3)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 4)));
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_46;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_47;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_48;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;
#line 287 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;

#line 290 "equiv_type.m"
            {
#line 290 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_44, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_46, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60);
            }
#line 292 "equiv_type.m"
            {
#line 292 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_46, &parse_tree__equiv_type__ReplItems_47);
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 2) = ((MR_Box) (parse_tree__equiv_type__Incls_42));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 3) = ((MR_Box) (parse_tree__equiv_type__Avails_43));
#line 293 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_48, 4) = ((MR_Box) (parse_tree__equiv_type__ReplItems_47));
#line 293 "equiv_type.m"
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_48));
#line 295 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 295 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            /* direct tailcall eliminated */
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_61_61;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_58_58;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_59_59;
#line 296 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_60_60;

#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 296 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 296 "equiv_type.m"
            }
#line 296 "equiv_type.m"
            continue;
#line 287 "equiv_type.m"
          }
#line 283 "equiv_type.m"
      }
#line 283 "equiv_type.m"
      break;
#line 283 "equiv_type.m"
    }
#line 275 "equiv_type.m"
}

#line 1356 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1356__1_1_f_0(
#line 1356 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1356 "equiv_type.m"
{
#line 1356 "equiv_type.m"
  {
#line 1356 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1356 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1356 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1356 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1357 "equiv_type.m"
    {
#line 1357 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1357 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1357 "equiv_type.m"
    }
#line 1356 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1356 "equiv_type.m"
  }
#line 1356 "equiv_type.m"
}

#line 1349 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1349__1_1_f_0(
#line 1349 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1349 "equiv_type.m"
{
#line 1349 "equiv_type.m"
  {
#line 1349 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1349 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1349 "equiv_type.m"
    {
#line 1349 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1349 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1349 "equiv_type.m"
    }
#line 1349 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1349 "equiv_type.m"
  }
#line 1349 "equiv_type.m"
}

#line 1067 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1067__1_2_p_0(
#line 1067 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1067 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44)
#line 1067 "equiv_type.m"
{
#line 1067 "equiv_type.m"
  {
#line 1067 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1067 "equiv_type.m"
    {
#line 1067 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
    }
#line 1067 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1067 "equiv_type.m"
  }
#line 1067 "equiv_type.m"
}

#line 89 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0(
#line 89 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 89 "equiv_type.m"
{
#line 89 "equiv_type.m"
  {
#line 89 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 89 "equiv_type.m"
    {
#line 89 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 89 "equiv_type.m"
      return;
    }
#line 89 "equiv_type.m"
  }
#line 89 "equiv_type.m"
}

#line 89 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0(
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 89 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 89 "equiv_type.m"
{
#line 89 "equiv_type.m"
  {
#line 89 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 89 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 89 "equiv_type.m"
    {
#line 89 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 89 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 89 "equiv_type.m"
  }
#line 89 "equiv_type.m"
}

#line 245 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 245 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 245 "equiv_type.m"
{
#line 245 "equiv_type.m"
  {
#line 245 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 245 "equiv_type.m"
    {
#line 245 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3);
#line 245 "equiv_type.m"
      return;
    }
#line 245 "equiv_type.m"
  }
#line 245 "equiv_type.m"
}

#line 245 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 245 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 245 "equiv_type.m"
{
#line 245 "equiv_type.m"
  {
#line 245 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 245 "equiv_type.m"
    {
#line 245 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2);
    }
#line 245 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 245 "equiv_type.m"
  }
#line 245 "equiv_type.m"
}

#line 190 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 190 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 190 "equiv_type.m"
{
#line 190 "equiv_type.m"
  {
#line 190 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 190 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 190 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 190 "equiv_type.m"
    {
#line 190 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 190 "equiv_type.m"
      return;
    }
#line 190 "equiv_type.m"
  }
#line 190 "equiv_type.m"
}

#line 190 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 190 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 190 "equiv_type.m"
{
#line 6287 "parse_tree.equiv_type.c"
  {
#line 6289 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 6292 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 6294 "parse_tree.equiv_type.c"
  }
#line 190 "equiv_type.m"
}

#line 241 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 241 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 241 "equiv_type.m"
{
#line 241 "equiv_type.m"
  {
#line 241 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 241 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 241 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 241 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_8 == parse_tree__equiv_type__CastY_9);
#line 241 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6323 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "equiv_type.m"
    else
#line 241 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "equiv_type.m"
      else
#line 6335 "parse_tree.equiv_type.c"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 1;
#line 241 "equiv_type.m"
    else
#line 241 "equiv_type.m"
      {
#line 241 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 241 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6346 "parse_tree.equiv_type.c"
          *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 2;
#line 241 "equiv_type.m"
        else
#line 241 "equiv_type.m"
          {
#line 241 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 241 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_12_12 = (MR_Integer) parse_tree__equiv_type__V_11_11;
#line 241 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_13_13 = (MR_Integer) parse_tree__equiv_type__V_7_7;

#line 241 "equiv_type.m"
            {
#line 241 "equiv_type.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_12_12, parse_tree__equiv_type__V_13_13);
#line 241 "equiv_type.m"
              return;
            }
#line 241 "equiv_type.m"
          }
#line 241 "equiv_type.m"
      }
#line 241 "equiv_type.m"
  }
#line 241 "equiv_type.m"
}

#line 241 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 241 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 241 "equiv_type.m"
{
#line 241 "equiv_type.m"
  {
#line 241 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 241 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_7 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 241 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 241 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_7 == parse_tree__equiv_type__CastY_8);
#line 241 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 241 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 241 "equiv_type.m"
    else
#line 241 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "equiv_type.m"
      {
#line 241 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastX_3 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 241 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastY_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 241 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastY_4 == parse_tree__equiv_type__CastX_3);
#line 241 "equiv_type.m"
      }
#line 241 "equiv_type.m"
    else
#line 241 "equiv_type.m"
      {
#line 241 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6;

#line 241 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 241 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 241 "equiv_type.m"
          {
#line 241 "equiv_type.m"
            parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 6431 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_5_5 == parse_tree__equiv_type__V_6_6);
#line 241 "equiv_type.m"
          }
#line 241 "equiv_type.m"
      }
#line 241 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 241 "equiv_type.m"
  }
#line 241 "equiv_type.m"
}

#line 188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 188 "equiv_type.m"
{
#line 188 "equiv_type.m"
  {
#line 188 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 188 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 188 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 188 "equiv_type.m"
    {
#line 188 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 188 "equiv_type.m"
      return;
    }
#line 188 "equiv_type.m"
  }
#line 188 "equiv_type.m"
}

#line 188 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 188 "equiv_type.m"
{
#line 188 "equiv_type.m"
  {
#line 188 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 188 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 188 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 188 "equiv_type.m"
    {
#line 188 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 188 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 188 "equiv_type.m"
  }
#line 188 "equiv_type.m"
}

#line 82 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
#line 82 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 82 "equiv_type.m"
{
#line 82 "equiv_type.m"
  {
#line 82 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 82 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 82 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6530 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "equiv_type.m"
    else
#line 82 "equiv_type.m"
      {
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 82 "equiv_type.m"
        {
#line 82 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 6556 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 82 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 82 "equiv_type.m"
        else
#line 82 "equiv_type.m"
          {
#line 82 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 82 "equiv_type.m"
            {
#line 82 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[11], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 6576 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 82 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 82 "equiv_type.m"
            else
#line 82 "equiv_type.m"
              {
#line 82 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 82 "equiv_type.m"
                return;
              }
#line 82 "equiv_type.m"
          }
#line 82 "equiv_type.m"
      }
#line 82 "equiv_type.m"
  }
#line 82 "equiv_type.m"
}

#line 82 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 82 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 82 "equiv_type.m"
{
#line 82 "equiv_type.m"
  {
#line 82 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 82 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 82 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 82 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 82 "equiv_type.m"
    else
#line 82 "equiv_type.m"
      {
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 6645 "parse_tree.equiv_type.c"
        {
#line 6647 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 6654 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[11];
#line 6656 "parse_tree.equiv_type.c"
            {
#line 6658 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6663 "parse_tree.equiv_type.c"
              {
#line 6665 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 82 "equiv_type.m"
          }
#line 82 "equiv_type.m"
      }
#line 82 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 82 "equiv_type.m"
  }
#line 82 "equiv_type.m"
}

#line 181 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 181 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 181 "equiv_type.m"
{
#line 181 "equiv_type.m"
  {
#line 181 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 181 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 181 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 181 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 181 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6703 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "equiv_type.m"
    else
#line 181 "equiv_type.m"
      {
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 181 "equiv_type.m"
        {
#line 181 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 6729 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 181 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 181 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 181 "equiv_type.m"
        else
#line 181 "equiv_type.m"
          {
#line 181 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 181 "equiv_type.m"
            {
#line 181 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[10], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 6749 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 181 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 181 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 181 "equiv_type.m"
            else
#line 181 "equiv_type.m"
              {
#line 181 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 181 "equiv_type.m"
                return;
              }
#line 181 "equiv_type.m"
          }
#line 181 "equiv_type.m"
      }
#line 181 "equiv_type.m"
  }
#line 181 "equiv_type.m"
}

#line 181 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 181 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 181 "equiv_type.m"
{
#line 181 "equiv_type.m"
  {
#line 181 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 181 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 181 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 181 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 181 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 181 "equiv_type.m"
    else
#line 181 "equiv_type.m"
      {
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 6818 "parse_tree.equiv_type.c"
        {
#line 6820 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 181 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
          {
#line 6827 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[10];
#line 6829 "parse_tree.equiv_type.c"
            {
#line 6831 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 181 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6836 "parse_tree.equiv_type.c"
              {
#line 6838 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 181 "equiv_type.m"
          }
#line 181 "equiv_type.m"
      }
#line 181 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 181 "equiv_type.m"
  }
#line 181 "equiv_type.m"
}

#line 1538 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1538 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1538 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1538 "equiv_type.m"
{
#line 1546 "equiv_type.m"
  {
#line 1546 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1546 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1546 "equiv_type.m"
      {
#line 1547 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1546 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1546 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1546 "equiv_type.m"
      }
#line 1546 "equiv_type.m"
    else
#line 1549 "equiv_type.m"
      {
#line 1549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1089 "equiv_type.m"
        {
#line 1089 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1552 "equiv_type.m"
        {
#line 1552 "equiv_type.m"
          MR_Word base;
#line 1552 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1552 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1552 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1552 "equiv_type.m"
        }
#line 1549 "equiv_type.m"
      }
#line 1546 "equiv_type.m"
  }
#line 1538 "equiv_type.m"
}

#line 1534 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1534 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1534 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1534 "equiv_type.m"
{
#line 1534 "equiv_type.m"
  {
#line 1534 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1534 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1534 "equiv_type.m"
    {
#line 1534 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1534 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1534 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1534 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1534 "equiv_type.m"
  }
#line 1534 "equiv_type.m"
}

#line 1513 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1513 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1513 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1513 "equiv_type.m"
{
#line 1520 "equiv_type.m"
  {
#line 1520 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1520 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1534 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1534 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1534 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1534 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1534 "equiv_type.m"
    {
#line 1534 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1534 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1534 "equiv_type.m"
    }
#line 7061 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1534 "equiv_type.m"
    {
#line 1534 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1534 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1534 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1536 "equiv_type.m"
    {
#line 1536 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1536 "equiv_type.m"
    }
#line 1533 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1533 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 7086 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1534 "equiv_type.m"
    {
#line 1534 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1534 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1534 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1536 "equiv_type.m"
    {
#line 1536 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1536 "equiv_type.m"
    }
#line 1520 "equiv_type.m"
    {
#line 1520 "equiv_type.m"
      MR_Word base;
#line 1520 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1520 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1520 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1520 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1520 "equiv_type.m"
    }
#line 1520 "equiv_type.m"
  }
#line 1513 "equiv_type.m"
}

#line 1507 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1507 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1507 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1507 "equiv_type.m"
{
#line 1507 "equiv_type.m"
  {
#line 1507 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1507 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1507 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1507 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1507 "equiv_type.m"
    {
#line 1507 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1507 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1507 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1507 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1507 "equiv_type.m"
  }
#line 1507 "equiv_type.m"
}

#line 1491 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1491 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1491 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1491 "equiv_type.m"
{
#line 1502 "equiv_type.m"
  {
#line 1502 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1502 "equiv_type.m"
#line 1502 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) {
#line 1502 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "equiv_type.m"
      case (MR_Integer) 0:
#line 1502 "equiv_type.m"
        {
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1502 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1502 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1502 "equiv_type.m"
        }
#line 1502 "equiv_type.m"
        break;
#line 1502 "equiv_type.m"
      case (MR_Integer) 1:
#line 1505 "equiv_type.m"
        {
#line 1505 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1505 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1505 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1505 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_24_24;
#line 1506 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1506 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1507 "equiv_type.m"
          {
#line 1507 "equiv_type.m"
            parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1507 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1507 "equiv_type.m"
          }
#line 7254 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[1];
#line 1506 "equiv_type.m"
          {
#line 1506 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
          }
#line 1506 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1506 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1510 "equiv_type.m"
          {
#line 1510 "equiv_type.m"
            MR_Word base;
#line 1510 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "equiv_type.m"
            *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1510 "equiv_type.m"
          }
#line 1505 "equiv_type.m"
        }
#line 1502 "equiv_type.m"
        break;
#line 1502 "equiv_type.m"
      case (MR_Integer) 2:
#line 1502 "equiv_type.m"
        {
#line 1503 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1502 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1502 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1502 "equiv_type.m"
        }
#line 1502 "equiv_type.m"
        break;
#line 1502 "equiv_type.m"
    }
#line 1502 "equiv_type.m"
  }
#line 1491 "equiv_type.m"
}

#line 1474 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1474 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1474 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1474 "equiv_type.m"
{
#line 1480 "equiv_type.m"
  {
#line 1480 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1480 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1485 "equiv_type.m"
      {
#line 1485 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1485 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1485 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1089 "equiv_type.m"
        {
#line 1089 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1485 "equiv_type.m"
        {
#line 1485 "equiv_type.m"
          MR_Word base;
#line 1485 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1485 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1485 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1485 "equiv_type.m"
        }
#line 1485 "equiv_type.m"
      }
#line 1480 "equiv_type.m"
    else
#line 1480 "equiv_type.m"
      {
#line 1480 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1480 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1089 "equiv_type.m"
        {
#line 1089 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1480 "equiv_type.m"
        {
#line 1480 "equiv_type.m"
          MR_Word base;
#line 1480 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1480 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1480 "equiv_type.m"
        }
#line 1480 "equiv_type.m"
      }
#line 1480 "equiv_type.m"
  }
#line 1474 "equiv_type.m"
}

#line 1471 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1471 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1471 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1471 "equiv_type.m"
{
#line 1471 "equiv_type.m"
  {
#line 1471 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1471 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1471 "equiv_type.m"
    {
#line 1471 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1471 "equiv_type.m"
  }
#line 1471 "equiv_type.m"
}

#line 1464 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1464 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1464 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1464 "equiv_type.m"
{
#line 1470 "equiv_type.m"
  {
#line 1470 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1470 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1470 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1471 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1471 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1471 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1471 "equiv_type.m"
    {
#line 1471 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 1471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 1471 "equiv_type.m"
    }
#line 7515 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1471 "equiv_type.m"
    {
#line 1471 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1471 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1470 "equiv_type.m"
  }
#line 1464 "equiv_type.m"
}

#line 1356 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1356 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1356 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1356 "equiv_type.m"
{
#line 1356 "equiv_type.m"
  {
#line 1356 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1356 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1356 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1356 "equiv_type.m"
    {
#line 1356 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1356__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1356 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1356 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1356 "equiv_type.m"
  }
#line 1356 "equiv_type.m"
}

#line 1349 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1349 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1349 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1349 "equiv_type.m"
{
#line 1349 "equiv_type.m"
  {
#line 1349 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1349 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1349 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1349 "equiv_type.m"
    {
#line 1349 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1349__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1349 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1349 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1349 "equiv_type.m"
  }
#line 1349 "equiv_type.m"
}

#line 1289 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1289 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1289 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1289 "equiv_type.m"
{
#line 1304 "equiv_type.m"
  {
#line 1304 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1304 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1304 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1336 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1336 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1305 "equiv_type.m"
    {
#line 1305 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1308 "equiv_type.m"
    {
#line 1308 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1330 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1331 "equiv_type.m"
      {
#line 1332 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1331 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1331 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1331 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1331 "equiv_type.m"
      }
#line 1330 "equiv_type.m"
    else
#line 1311 "equiv_type.m"
      {
#line 1311 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1311 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1312 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1320 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1315 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1315 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1312 "equiv_type.m"
        {
#line 1312 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1315 "equiv_type.m"
        {
#line 1315 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1315 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1315 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1320 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1318 "equiv_type.m"
          {
#line 1318 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1319 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1318 "equiv_type.m"
          }
#line 1320 "equiv_type.m"
        else
#line 1321 "equiv_type.m"
          {
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1321 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1321 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1323 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1323 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[16])));
#line 1324 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
            {
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1324 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1324 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1323 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1323 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1323 "equiv_type.m"
            }
#line 1323 "equiv_type.m"
            {
#line 1323 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1323 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1323 "equiv_type.m"
            }
#line 1322 "equiv_type.m"
            {
#line 1322 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1322 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1322 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1326 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1327 "equiv_type.m"
            }
#line 1328 "equiv_type.m"
            {
#line 1328 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1328 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1328 "equiv_type.m"
            }
#line 1321 "equiv_type.m"
          }
#line 1311 "equiv_type.m"
      }
#line 7951 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1337 "equiv_type.m"
    {
#line 1337 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1338 "equiv_type.m"
    {
#line 1338 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1338 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1338 "equiv_type.m"
    }
#line 1336 "equiv_type.m"
    {
#line 1336 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_29, parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1340 "equiv_type.m"
    {
#line 1340 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7976 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7978 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7980 "parse_tree.equiv_type.c"
        {
#line 1349 "equiv_type.m"
          {
#line 1349 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1348 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1373 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1374 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7993 "parse_tree.equiv_type.c"
        }
#line 7995 "parse_tree.equiv_type.c"
      else
#line 7997 "parse_tree.equiv_type.c"
        {
#line 1353 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1353 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1353 "equiv_type.m"
          {
#line 1353 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1353 "equiv_type.m"
          {
#line 1353 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1353 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 8016 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 8018 "parse_tree.equiv_type.c"
            {
#line 8020 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1354 "equiv_type.m"
              {
#line 1354 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1356 "equiv_type.m"
              {
#line 1356 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1355 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1373 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1374 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8039 "parse_tree.equiv_type.c"
            }
#line 8041 "parse_tree.equiv_type.c"
          else
#line 8043 "parse_tree.equiv_type.c"
            {
#line 8045 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 8047 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 8049 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 8051 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 8053 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 8055 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 8057 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 8059 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 8061 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 8063 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1361 "equiv_type.m"
              {
#line 1361 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1361 "equiv_type.m"
              }
#line 1361 "equiv_type.m"
              {
#line 1361 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1361 "equiv_type.m"
              }
#line 1361 "equiv_type.m"
              {
#line 1361 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])));
#line 1361 "equiv_type.m"
              }
#line 1361 "equiv_type.m"
              {
#line 1361 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1361 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1361 "equiv_type.m"
              }
#line 1360 "equiv_type.m"
              {
#line 1360 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1360 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1360 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1364 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1364 "equiv_type.m"
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "equiv_type.m"
              }
#line 1365 "equiv_type.m"
              {
#line 1365 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1365 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1365 "equiv_type.m"
              }
#line 1366 "equiv_type.m"
              {
#line 1366 "equiv_type.m"
                MR_Word base;
#line 1366 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1366 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1366 "equiv_type.m"
              }
#line 1367 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1379 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1380 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8186 "parse_tree.equiv_type.c"
            }
#line 8188 "parse_tree.equiv_type.c"
        }
#line 8190 "parse_tree.equiv_type.c"
    else
#line 8192 "parse_tree.equiv_type.c"
      {
#line 1344 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1343 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1379 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1380 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8202 "parse_tree.equiv_type.c"
      }
#line 1385 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "equiv_type.m"
      {
#line 1384 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1383 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1383 "equiv_type.m"
      }
#line 1385 "equiv_type.m"
    else
#line 1386 "equiv_type.m"
      {
#line 1386 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1386 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1386 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1386 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1387 "equiv_type.m"
        {
#line 1387 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1388 "equiv_type.m"
        {
#line 1388 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1388 "equiv_type.m"
        {
#line 1388 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1388 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1388 "equiv_type.m"
        }
#line 1387 "equiv_type.m"
        {
#line 1387 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1387 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1387 "equiv_type.m"
        }
#line 1389 "equiv_type.m"
        {
#line 1389 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1390 "equiv_type.m"
        {
#line 1390 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1386 "equiv_type.m"
      }
#line 1304 "equiv_type.m"
  }
#line 1289 "equiv_type.m"
}

#line 1188 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1188 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1188 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55)
#line 1188 "equiv_type.m"
{
#line 1196 "equiv_type.m"
  {
#line 1196 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1196 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_35;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_36;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_37;
#line 1233 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1203 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvTypeBody_33;
#line 1203 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_34;
#line 1203 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_EqvTypeBody_33;

#line 1197 "equiv_type.m"
    {
#line 1197 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1199 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1198 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1199 "equiv_type.m"
    else
#line 1200 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1203 "equiv_type.m"
    {
#line 1203 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__TypeEqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_EqvTypeBody_33);
    }
#line 1203 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1203 "equiv_type.m"
      {
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__EqvTypeBody_33 = ((MR_Word) parse_tree__equiv_type__conv0_EqvTypeBody_33);
#line 1203 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1203 "equiv_type.m"
      }
#line 1203 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1203 "equiv_type.m"
      {
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 0)));
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 1)));
#line 1204 "equiv_type.m"
        parse_tree__equiv_type__Body0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 2)));
#line 1214 "equiv_type.m"
        {
#line 1214 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50, parse_tree__equiv_type__EqvVarSet_34, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_37);
        }
#line 1216 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
#line 1203 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1217 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1203 "equiv_type.m"
      }
#line 1233 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1220 "equiv_type.m"
      {
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_38;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_39;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_40;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_41;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_42;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1230 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1562 "equiv_type.m"
        if ((parse_tree__equiv_type__MaybeRecord_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1562 "equiv_type.m"
        else
#line 1564 "equiv_type.m"
          {
#line 1564 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Visibility_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRecord_19, (MR_Integer) 0)));
#line 1564 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1565 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1566 "equiv_type.m"
            {
#line 1566 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0(parse_tree__equiv_type__Visibility_78, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1564 "equiv_type.m"
          }
#line 1222 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
#line 8438 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 1223 "equiv_type.m"
        {
#line 1223 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_35, parse_tree__equiv_type__Renaming_37, &parse_tree__equiv_type__Args_38);
        }
#line 1224 "equiv_type.m"
        {
#line 1224 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_37, parse_tree__equiv_type__Body0_36, &parse_tree__equiv_type__Body1_39);
        }
#line 1225 "equiv_type.m"
        {
#line 1225 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1226 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_40));
#line 1226 "equiv_type.m"
        }
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1228 "equiv_type.m"
        {
#line 1228 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_38, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_41);
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_41, parse_tree__equiv_type__Body1_39, &parse_tree__equiv_type__Body_42);
        }
#line 1231 "equiv_type.m"
        {
#line 1231 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1231 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1231 "equiv_type.m"
        }
#line 1230 "equiv_type.m"
        {
#line 1230 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_19, parse_tree__equiv_type__TypeEqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_42, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__STATE_VARIABLE_Circ_49, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_51, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1220 "equiv_type.m"
      }
#line 1233 "equiv_type.m"
    else
#line 1241 "equiv_type.m"
      {
#line 1238 "equiv_type.m"
#line 1238 "equiv_type.m"
        switch (parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46) {
#line 1238 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1238 "equiv_type.m"
          case (MR_Integer) 0:
#line 1240 "equiv_type.m"
            *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1238 "equiv_type.m"
            break;
#line 1238 "equiv_type.m"
          case (MR_Integer) 1:
#line 1235 "equiv_type.m"
            {
#line 1235 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1236 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1237 "equiv_type.m"
              {
#line 1237 "equiv_type.m"
                MR_Word base;
#line 1237 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "equiv_type.m"
                *parse_tree__equiv_type__Type_26 = base;
#line 1237 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_44));
#line 1237 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1237 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1237 "equiv_type.m"
              }
#line 1235 "equiv_type.m"
            }
#line 1238 "equiv_type.m"
            break;
#line 1238 "equiv_type.m"
        }
#line 1242 "equiv_type.m"
        {
#line 1242 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48, parse_tree__equiv_type__STATE_VARIABLE_Circ_49);
        }
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_51 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50;
#line 1241 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46;
#line 1241 "equiv_type.m"
      }
#line 1196 "equiv_type.m"
  }
#line 1188 "equiv_type.m"
}

#line 1095 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1095 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1095 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1095 "equiv_type.m"
{
#line 1105 "equiv_type.m"
  {
#line 1105 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1105 "equiv_type.m"
#line 1105 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) {
#line 1105 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1105 "equiv_type.m"
      case (MR_Integer) 0:
#line 1105 "equiv_type.m"
        {
#line 1106 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1107 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1108 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1105 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1105 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1105 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1105 "equiv_type.m"
        }
#line 1105 "equiv_type.m"
        break;
#line 1105 "equiv_type.m"
      case (MR_Integer) 1:
#line 1110 "equiv_type.m"
        {
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1110 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1110 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1111 "equiv_type.m"
          {
#line 1111 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1114 "equiv_type.m"
          {
#line 1114 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1115 "equiv_type.m"
          {
#line 1115 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1115 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1115 "equiv_type.m"
          }
#line 1116 "equiv_type.m"
          {
#line 1116 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1116 "equiv_type.m"
            return;
          }
#line 1110 "equiv_type.m"
        }
#line 1105 "equiv_type.m"
        break;
#line 1105 "equiv_type.m"
      case (MR_Integer) 2:
#line 1120 "equiv_type.m"
        {
#line 1121 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1122 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1123 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1120 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1120 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1120 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1120 "equiv_type.m"
        }
#line 1105 "equiv_type.m"
        break;
#line 1105 "equiv_type.m"
      case (MR_Integer) 3:
#line 1105 "equiv_type.m"
#line 1105 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) {
#line 1105 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1105 "equiv_type.m"
          case (MR_Integer) 0:
#line 1151 "equiv_type.m"
            {
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_82;

#line 1152 "equiv_type.m"
              {
#line 1152 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1158 "equiv_type.m"
#line 1158 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1158 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1158 "equiv_type.m"
                case (MR_Integer) 0:
#line 1160 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1158 "equiv_type.m"
                  break;
#line 1158 "equiv_type.m"
                case (MR_Integer) 1:
#line 1157 "equiv_type.m"
                  {
#line 1157 "equiv_type.m"
                    MR_Word base;
#line 1157 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1157 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1157 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1157 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1157 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1157 "equiv_type.m"
                  }
#line 1158 "equiv_type.m"
                  break;
#line 1158 "equiv_type.m"
              }
#line 1151 "equiv_type.m"
            }
#line 1105 "equiv_type.m"
            break;
#line 1105 "equiv_type.m"
          case (MR_Integer) 1:
#line 1125 "equiv_type.m"
            {
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_38;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1125 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1126 "equiv_type.m"
              {
#line 1126 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
              }
#line 1137 "equiv_type.m"
              if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "equiv_type.m"
                {
#line 1139 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1140 "equiv_type.m"
                  *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1141 "equiv_type.m"
                  *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1138 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1138 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1138 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1138 "equiv_type.m"
                }
#line 1137 "equiv_type.m"
              else
#line 1130 "equiv_type.m"
                {
#line 1130 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1130 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret_41;
#line 1130 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1130 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1131 "equiv_type.m"
                  {
#line 1131 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1134 "equiv_type.m"
                  {
#line 1134 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1134 "equiv_type.m"
                  }
#line 1135 "equiv_type.m"
                  {
#line 1135 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                  }
#line 1136 "equiv_type.m"
                  {
#line 1136 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                  }
#line 1130 "equiv_type.m"
                }
#line 1146 "equiv_type.m"
#line 1146 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1146 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1146 "equiv_type.m"
                case (MR_Integer) 0:
#line 1148 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1146 "equiv_type.m"
                  break;
#line 1146 "equiv_type.m"
                case (MR_Integer) 1:
#line 1145 "equiv_type.m"
                  {
#line 1145 "equiv_type.m"
                    MR_Word base;
#line 1145 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1145 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1145 "equiv_type.m"
                  }
#line 1146 "equiv_type.m"
                  break;
#line 1146 "equiv_type.m"
              }
#line 1125 "equiv_type.m"
            }
#line 1105 "equiv_type.m"
            break;
#line 1105 "equiv_type.m"
          case (MR_Integer) 2:
#line 1163 "equiv_type.m"
            {
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1163 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1164 "equiv_type.m"
              {
#line 1164 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1170 "equiv_type.m"
#line 1170 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1170 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1170 "equiv_type.m"
                case (MR_Integer) 0:
#line 1172 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1170 "equiv_type.m"
                  break;
#line 1170 "equiv_type.m"
                case (MR_Integer) 1:
#line 1169 "equiv_type.m"
                  {
#line 1169 "equiv_type.m"
                    MR_Word base;
#line 1169 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1169 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1169 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1169 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1169 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1169 "equiv_type.m"
                  }
#line 1170 "equiv_type.m"
                  break;
#line 1170 "equiv_type.m"
              }
#line 1163 "equiv_type.m"
            }
#line 1105 "equiv_type.m"
            break;
#line 1105 "equiv_type.m"
          case (MR_Integer) 3:
#line 1175 "equiv_type.m"
            {
#line 1175 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1175 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType_46;
#line 1175 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1176 "equiv_type.m"
              {
#line 1176 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1182 "equiv_type.m"
#line 1182 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1182 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1182 "equiv_type.m"
                case (MR_Integer) 0:
#line 1184 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1182 "equiv_type.m"
                  break;
#line 1182 "equiv_type.m"
                case (MR_Integer) 1:
#line 1181 "equiv_type.m"
                  {
#line 1181 "equiv_type.m"
                    MR_Word base;
#line 1181 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1181 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1181 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1181 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1181 "equiv_type.m"
                  }
#line 1182 "equiv_type.m"
                  break;
#line 1182 "equiv_type.m"
              }
#line 1175 "equiv_type.m"
            }
#line 1105 "equiv_type.m"
            break;
#line 1105 "equiv_type.m"
        }
#line 1105 "equiv_type.m"
        break;
#line 1105 "equiv_type.m"
    }
#line 1105 "equiv_type.m"
  }
#line 1095 "equiv_type.m"
}

#line 1082 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1082 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1082 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1082 "equiv_type.m"
{
#line 1088 "equiv_type.m"
  {
#line 1088 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1089 "equiv_type.m"
    {
#line 1089 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1088 "equiv_type.m"
  }
#line 1082 "equiv_type.m"
}

#line 1067 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1067 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg)
#line 1067 "equiv_type.m"
{
#line 1067 "equiv_type.m"
  {
#line 1067 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1067 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;

#line 1067 "equiv_type.m"
    {
#line 1067 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1067__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))));
    }
#line 1067 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1067 "equiv_type.m"
  }
#line 1067 "equiv_type.m"
}

#line 1044 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1044 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1044 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1044 "equiv_type.m"
{
#line 1051 "equiv_type.m"
  {
#line 1051 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1051 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1051 "equiv_type.m"
      {
#line 1051 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1052 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1051 "equiv_type.m"
      }
#line 1051 "equiv_type.m"
    else
#line 1055 "equiv_type.m"
      {
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1055 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65;
#line 1057 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1057 "equiv_type.m"
        {
#line 1057 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1061 "equiv_type.m"
#line 1061 "equiv_type.m"
        switch (MR_tag((MR_Word) parse_tree__equiv_type__Width_42)) {
#line 1061 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "equiv_type.m"
          case (MR_Integer) 0:
#line 1061 "equiv_type.m"
#line 1061 "equiv_type.m"
            switch (MR_unmkbody(parse_tree__equiv_type__Width_42)) {
#line 1061 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1061 "equiv_type.m"
              case (MR_Integer) 0:
#line 1060 "equiv_type.m"
                {
#line 1060 "equiv_type.m"
                }
#line 1061 "equiv_type.m"
                break;
#line 1061 "equiv_type.m"
              case (MR_Integer) 1:
#line 1062 "equiv_type.m"
                {
#line 1062 "equiv_type.m"
                }
#line 1061 "equiv_type.m"
                break;
#line 1061 "equiv_type.m"
            }
#line 1061 "equiv_type.m"
            break;
#line 1061 "equiv_type.m"
          case (MR_Integer) 1:
#line 1061 "equiv_type.m"
          case (MR_Integer) 2:
#line 1066 "equiv_type.m"
            {
#line 1066 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 1067 "equiv_type.m"
              {
#line 1067 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1067 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1));
#line 1067 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1067 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 3) = ((MR_Box) (parse_tree__equiv_type__Type0_41));
#line 1067 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 4) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1067 "equiv_type.m"
              }
#line 1067 "equiv_type.m"
              {
#line 1067 "equiv_type.m"
                mercury__require__expect_4_p_0(parse_tree__equiv_type__V_61_61, (MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
              }
#line 1066 "equiv_type.m"
            }
#line 1061 "equiv_type.m"
            break;
#line 1061 "equiv_type.m"
        }
#line 1070 "equiv_type.m"
        {
#line 1070 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1070 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1070 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1070 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1070 "equiv_type.m"
        }
#line 1071 "equiv_type.m"
        {
#line 1071 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1072 "equiv_type.m"
        {
#line 1072 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1054 "equiv_type.m"
        {
#line 1054 "equiv_type.m"
          MR_Word base;
#line 1054 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1054 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1054 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1054 "equiv_type.m"
        }
#line 1055 "equiv_type.m"
      }
#line 1051 "equiv_type.m"
  }
#line 1044 "equiv_type.m"
}

#line 1001 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1001 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1001 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1001 "equiv_type.m"
{
#line 1008 "equiv_type.m"
  {
#line 1008 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1008 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1008 "equiv_type.m"
      {
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1009 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1008 "equiv_type.m"
      }
#line 1008 "equiv_type.m"
    else
#line 1012 "equiv_type.m"
      {
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_42;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types_45;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1012 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1013 "equiv_type.m"
        {
#line 1013 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_34, &parse_tree__equiv_type__Type_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1016 "equiv_type.m"
        {
#line 1016 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__HeadVar__7_7, parse_tree__equiv_type__ContainsCirc_44);
        }
#line 1017 "equiv_type.m"
        {
#line 1017 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Types0_35, &parse_tree__equiv_type__Types_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1020 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1021 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1021 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1026 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1024 "equiv_type.m"
          {
#line 1024 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1025 "equiv_type.m"
            {
#line 1025 "equiv_type.m"
              MR_Word base;
#line 1025 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1025 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_42));
#line 1025 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_45));
#line 1025 "equiv_type.m"
            }
#line 1024 "equiv_type.m"
          }
#line 1026 "equiv_type.m"
        else
#line 1027 "equiv_type.m"
          {
#line 1027 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1028 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1027 "equiv_type.m"
          }
#line 1012 "equiv_type.m"
      }
#line 1008 "equiv_type.m"
  }
#line 1001 "equiv_type.m"
}

#line 990 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 990 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 990 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 990 "equiv_type.m"
{
#line 997 "equiv_type.m"
  {
#line 997 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 998 "equiv_type.m"
    {
#line 998 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 998 "equiv_type.m"
      return;
    }
#line 997 "equiv_type.m"
  }
#line 990 "equiv_type.m"
}

#line 980 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 980 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 980 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 980 "equiv_type.m"
{
#line 986 "equiv_type.m"
  {
#line 986 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 987 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 987 "equiv_type.m"
    {
#line 987 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Types_0_20, parse_tree__equiv_type__STATE_VARIABLE_Types_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 986 "equiv_type.m"
  }
#line 980 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 960 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 960 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32)
#line 960 "equiv_type.m"
{
#line 966 "equiv_type.m"
  {
#line 966 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_87;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 0)));
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 1)));
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 2)));
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 3)));
#line 966 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 4)));
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 5)));
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs_24;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_26;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 966 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_74_74;
#line 1041 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32;

#line 1041 "equiv_type.m"
    {
#line 1041 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__CtorArgs0_21, &parse_tree__equiv_type__CtorArgs_24, (MR_Integer) 0, &parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 848 "equiv_type.m"
    }
#line 9657 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_87, parse_tree__equiv_type__TypeCtorInfo_38_87, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_74_74, parse_tree__equiv_type__Constraints0_19, &parse_tree__equiv_type__Constraints_26, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
    }
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28);
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30);
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
#line 972 "equiv_type.m"
    {
#line 972 "equiv_type.m"
      MR_Word base;
#line 972 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 972 "equiv_type.m"
      *parse_tree__equiv_type__Ctor_14 = base;
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_18));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_26));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__CtorName_20));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__CtorArgs_24));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Arity_22));
#line 972 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Ctxt_23));
#line 972 "equiv_type.m"
    }
#line 966 "equiv_type.m"
  }
#line 960 "equiv_type.m"
}

#line 957 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 957 "equiv_type.m"
{
#line 957 "equiv_type.m"
  {
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 957 "equiv_type.m"
  }
#line 957 "equiv_type.m"
}

#line 950 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 950 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 950 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 950 "equiv_type.m"
{
#line 956 "equiv_type.m"
  {
#line 956 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 956 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 956 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 957 "equiv_type.m"
    }
#line 9807 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 956 "equiv_type.m"
  }
#line 950 "equiv_type.m"
}

#line 930 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 930 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 930 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 930 "equiv_type.m"
{
#line 935 "equiv_type.m"
  {
#line 935 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 935 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "equiv_type.m"
      {
#line 935 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 935 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 935 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 935 "equiv_type.m"
      }
#line 935 "equiv_type.m"
    else
#line 938 "equiv_type.m"
      {
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 938 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1089 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 937 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 937 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1089 "equiv_type.m"
        {
#line 1089 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 938 "equiv_type.m"
        {
#line 938 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 938 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 938 "equiv_type.m"
        }
#line 941 "equiv_type.m"
        {
#line 941 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 938 "equiv_type.m"
        {
#line 938 "equiv_type.m"
          MR_Word base;
#line 938 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 938 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 938 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 938 "equiv_type.m"
        }
#line 938 "equiv_type.m"
      }
#line 935 "equiv_type.m"
  }
#line 930 "equiv_type.m"
}

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 888 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 888 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 888 "equiv_type.m"
{
#line 899 "equiv_type.m"
  {
#line 899 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 899 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 899 "equiv_type.m"
      {
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_37;
#line 899 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 900 "equiv_type.m"
        {
#line 900 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__PredName_20, parse_tree__equiv_type__PredOrFunc_21, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_22, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_26, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_23, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 905 "equiv_type.m"
        {
#line 905 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 906 "equiv_type.m"
        {
#line 906 "equiv_type.m"
          MR_Word base;
#line 906 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 906 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_21));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_37));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_27));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_28));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 906 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 906 "equiv_type.m"
        }
#line 899 "equiv_type.m"
      }
#line 899 "equiv_type.m"
    else
#line 911 "equiv_type.m"
      {
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 911 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_66;
#line 911 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 913 "equiv_type.m"
        {
#line 913 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 912 "equiv_type.m"
        {
#line 912 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__PredName_60, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_61, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__MaybeDetism0_62, &parse_tree__equiv_type__MaybeDetism_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 919 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 919 "equiv_type.m"
        else
#line 921 "equiv_type.m"
          {
#line 921 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 923 "equiv_type.m"
        {
#line 923 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 924 "equiv_type.m"
        {
#line 924 "equiv_type.m"
          MR_Word base;
#line 924 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 924 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_60));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_66));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_63));
#line 924 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 924 "equiv_type.m"
        }
#line 911 "equiv_type.m"
      }
#line 899 "equiv_type.m"
  }
#line 888 "equiv_type.m"
}

#line 885 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 885 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 885 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 885 "equiv_type.m"
{
#line 885 "equiv_type.m"
  {
#line 885 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 885 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 885 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 885 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 885 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 885 "equiv_type.m"
    {
#line 885 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 885 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 885 "equiv_type.m"
  }
#line 885 "equiv_type.m"
}

#line 875 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 875 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 875 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 875 "equiv_type.m"
{
#line 883 "equiv_type.m"
  {
#line 883 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 883 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 883 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 884 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 884 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 884 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 885 "equiv_type.m"
    {
#line 885 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_12));
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_13));
#line 885 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__InstEqvMap_14));
#line 885 "equiv_type.m"
    }
#line 10270 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 884 "equiv_type.m"
    {
#line 884 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[8], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_15, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 884 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 884 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 884 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 883 "equiv_type.m"
  }
#line 875 "equiv_type.m"
}

#line 861 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 861 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 861 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 861 "equiv_type.m"
{
#line 867 "equiv_type.m"
  {
#line 867 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 867 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 867 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 867 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 998 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 998 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 998 "equiv_type.m"
    {
#line 998 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 871 "equiv_type.m"
    {
#line 871 "equiv_type.m"
      MR_Word base;
#line 871 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 871 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 871 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 871 "equiv_type.m"
    }
#line 867 "equiv_type.m"
  }
#line 861 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 840 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 840 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 840 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 840 "equiv_type.m"
{
#line 846 "equiv_type.m"
  {
#line 846 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 846 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 846 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 848 "equiv_type.m"
    }
#line 10462 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17, parse_tree__equiv_type__STATE_VARIABLE_Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 847 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 846 "equiv_type.m"
  }
#line 840 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 826 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 826 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 826 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 826 "equiv_type.m"
{
#line 832 "equiv_type.m"
  {
#line 832 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 832 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 848 "equiv_type.m"
    }
#line 10604 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 836 "equiv_type.m"
    {
#line 836 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 838 "equiv_type.m"
    {
#line 838 "equiv_type.m"
      MR_Word base;
#line 838 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 838 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 838 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 838 "equiv_type.m"
    }
#line 832 "equiv_type.m"
  }
#line 826 "equiv_type.m"
}

#line 805 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 805 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 805 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 805 "equiv_type.m"
{
#line 811 "equiv_type.m"
  {
#line 811 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 811 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 811 "equiv_type.m"
      {
#line 811 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 811 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 811 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 811 "equiv_type.m"
      }
#line 811 "equiv_type.m"
    else
#line 814 "equiv_type.m"
      {
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 814 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 815 "equiv_type.m"
        {
#line 815 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 817 "equiv_type.m"
        {
#line 817 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 813 "equiv_type.m"
        {
#line 813 "equiv_type.m"
          MR_Word base;
#line 813 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 813 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 813 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 813 "equiv_type.m"
        }
#line 814 "equiv_type.m"
      }
#line 811 "equiv_type.m"
  }
#line 805 "equiv_type.m"
}

#line 764 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 764 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 764 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 764 "equiv_type.m"
{
#line 774 "equiv_type.m"
  {
#line 774 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 774 "equiv_type.m"
#line 774 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) {
#line 774 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 774 "equiv_type.m"
      case (MR_Integer) 0:
#line 780 "equiv_type.m"
        {
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 780 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_66;

#line 781 "equiv_type.m"
          {
#line 781 "equiv_type.m"
            parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 783 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 784 "equiv_type.m"
          {
#line 784 "equiv_type.m"
            MR_Word base;
#line 784 "equiv_type.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 784 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 784 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 784 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 784 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 784 "equiv_type.m"
          }
#line 780 "equiv_type.m"
        }
#line 774 "equiv_type.m"
        break;
#line 774 "equiv_type.m"
      case (MR_Integer) 1:
#line 774 "equiv_type.m"
        {
#line 774 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 774 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 774 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 775 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 775 "equiv_type.m"
          {
#line 775 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 775 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "equiv_type.m"
          }
#line 775 "equiv_type.m"
          {
#line 775 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 778 "equiv_type.m"
          {
#line 778 "equiv_type.m"
            MR_Word base;
#line 778 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 778 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 778 "equiv_type.m"
          }
#line 774 "equiv_type.m"
        }
#line 774 "equiv_type.m"
        break;
#line 774 "equiv_type.m"
      case (MR_Integer) 2:
#line 800 "equiv_type.m"
        {
#line 801 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 802 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 800 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 800 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 800 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 800 "equiv_type.m"
        }
#line 774 "equiv_type.m"
        break;
#line 774 "equiv_type.m"
      case (MR_Integer) 3:
#line 774 "equiv_type.m"
#line 774 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) {
#line 774 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 774 "equiv_type.m"
          case (MR_Integer) 0:
#line 786 "equiv_type.m"
            {
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_50_50;
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 786 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_37_37;

#line 789 "equiv_type.m"
              {
#line 789 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 789 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "equiv_type.m"
              }
#line 789 "equiv_type.m"
              {
#line 789 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
              }
#line 792 "equiv_type.m"
              {
#line 792 "equiv_type.m"
                parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__InstEqvMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
              }
#line 794 "equiv_type.m"
              {
#line 794 "equiv_type.m"
                parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 794 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 794 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 794 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 794 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 794 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 794 "equiv_type.m"
              }
#line 796 "equiv_type.m"
              {
#line 796 "equiv_type.m"
                MR_Word base;
#line 796 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 796 "equiv_type.m"
                *parse_tree__equiv_type__TypeDefn_19 = base;
#line 796 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 796 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 796 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 796 "equiv_type.m"
              }
#line 786 "equiv_type.m"
            }
#line 774 "equiv_type.m"
            break;
#line 774 "equiv_type.m"
          case (MR_Integer) 1:
#line 800 "equiv_type.m"
            {
#line 801 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 802 "equiv_type.m"
              *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 800 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 800 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 800 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 800 "equiv_type.m"
            }
#line 774 "equiv_type.m"
            break;
#line 774 "equiv_type.m"
        }
#line 774 "equiv_type.m"
        break;
#line 774 "equiv_type.m"
    }
#line 774 "equiv_type.m"
  }
#line 764 "equiv_type.m"
}

#line 680 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 680 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 680 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 680 "equiv_type.m"
{
#line 687 "equiv_type.m"
  {
#line 687 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 687 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 687 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 687 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 690 "equiv_type.m"
    {
#line 690 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1089 "equiv_type.m"
    {
#line 1089 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1252 "equiv_type.m"
    {
#line 1252 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1252 "equiv_type.m"
    {
#line 1252 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__InstEqvMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 695 "equiv_type.m"
    {
#line 695 "equiv_type.m"
      MR_Word base;
#line 695 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 695 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 695 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 695 "equiv_type.m"
    }
#line 687 "equiv_type.m"
  }
#line 680 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 495 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 495 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 495 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 495 "equiv_type.m"
{
#line 502 "equiv_type.m"
  {
#line 502 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 502 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 502 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 502 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 505 "equiv_type.m"
    {
#line 505 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Vars_22, &parse_tree__equiv_type__Arity_29);
    }
#line 506 "equiv_type.m"
    {
#line 506 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 848 "equiv_type.m"
    }
#line 11268 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 847 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 516 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "equiv_type.m"
      {
#line 513 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 515 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 512 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 512 "equiv_type.m"
      }
#line 516 "equiv_type.m"
    else
#line 517 "equiv_type.m"
      {
#line 517 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 517 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 518 "equiv_type.m"
        {
#line 518 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__Methods0_36, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 521 "equiv_type.m"
        {
#line 521 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 521 "equiv_type.m"
        }
#line 517 "equiv_type.m"
      }
#line 523 "equiv_type.m"
    {
#line 523 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 523 "equiv_type.m"
    }
#line 523 "equiv_type.m"
    {
#line 523 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 523 "equiv_type.m"
    }
#line 524 "equiv_type.m"
    {
#line 524 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 525 "equiv_type.m"
    {
#line 525 "equiv_type.m"
      MR_Word base;
#line 525 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 525 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Vars_22));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__FunDeps_24));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 525 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 525 "equiv_type.m"
    }
#line 502 "equiv_type.m"
  }
#line 495 "equiv_type.m"
}

#line 428 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 428 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 428 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 428 "equiv_type.m"
{
#line 435 "equiv_type.m"
  {
#line 435 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 435 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_41;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 435 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 435 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 435 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 440 "equiv_type.m"
    {
#line 440 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 442 "equiv_type.m"
    {
#line 442 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__PredOrFunc_22, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_23, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_28, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_24, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_25, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__MaybeDetism0_26, &parse_tree__equiv_type__MaybeDetism_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 448 "equiv_type.m"
    {
#line 448 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_22);
    }
#line 449 "equiv_type.m"
    {
#line 449 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 450 "equiv_type.m"
    {
#line 450 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_22, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 451 "equiv_type.m"
    {
#line 451 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 451 "equiv_type.m"
    }
#line 451 "equiv_type.m"
    {
#line 451 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 451 "equiv_type.m"
    }
#line 452 "equiv_type.m"
    {
#line 452 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 453 "equiv_type.m"
    {
#line 453 "equiv_type.m"
      MR_Word base;
#line 453 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 453 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_22));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_41));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Origin_27));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_29));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_30));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 453 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 453 "equiv_type.m"
    }
#line 435 "equiv_type.m"
  }
#line 428 "equiv_type.m"
}

#line 391 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 391 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 391 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 391 "equiv_type.m"
{
#line 398 "equiv_type.m"
  {
#line 398 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 398 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 398 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 398 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 401 "equiv_type.m"
    {
#line 401 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22, &parse_tree__equiv_type__Arity_27);
    }
#line 402 "equiv_type.m"
    {
#line 402 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 405 "equiv_type.m"
    {
#line 405 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 405 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 405 "equiv_type.m"
    }
#line 404 "equiv_type.m"
    {
#line 404 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_23, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_24, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 419 "equiv_type.m"
#line 419 "equiv_type.m"
    switch (parse_tree__equiv_type__ContainsCirc_30) {
#line 419 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 419 "equiv_type.m"
      case (MR_Integer) 0:
#line 421 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "equiv_type.m"
        break;
#line 419 "equiv_type.m"
      case (MR_Integer) 1:
#line 416 "equiv_type.m"
        {
#line 409 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_33_33;

#line 409 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_23)) == (MR_mktag((MR_Integer) 1)));
#line 409 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 409 "equiv_type.m"
            {
#line 409 "equiv_type.m"
              parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_23, (MR_Integer) 0)));
#line 412 "equiv_type.m"
              {
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces_34;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg_35;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec_36;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_47_47;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_48_48;
#line 412 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_49_49;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_56_56;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_57_57;
#line 412 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_61_61;

#line 411 "equiv_type.m"
                {
#line 411 "equiv_type.m"
                  parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22);
                }
#line 411 "equiv_type.m"
                {
#line 411 "equiv_type.m"
                  parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 411 "equiv_type.m"
                }
#line 411 "equiv_type.m"
                {
#line 411 "equiv_type.m"
                  parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 411 "equiv_type.m"
                }
#line 411 "equiv_type.m"
                {
#line 411 "equiv_type.m"
                  parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 411 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[14])));
#line 411 "equiv_type.m"
                }
#line 410 "equiv_type.m"
                {
#line 410 "equiv_type.m"
                  parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 410 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 410 "equiv_type.m"
                }
#line 413 "equiv_type.m"
                {
#line 413 "equiv_type.m"
                  parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 413 "equiv_type.m"
                }
#line 413 "equiv_type.m"
                {
#line 413 "equiv_type.m"
                  parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "equiv_type.m"
                }
#line 413 "equiv_type.m"
                {
#line 413 "equiv_type.m"
                  parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 413 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 414 "equiv_type.m"
                }
#line 415 "equiv_type.m"
                {
#line 415 "equiv_type.m"
                  MR_Word base;
#line 415 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "equiv_type.m"
                  *parse_tree__equiv_type__Specs_20 = base;
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 415 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "equiv_type.m"
                }
#line 412 "equiv_type.m"
              }
#line 409 "equiv_type.m"
            }
#line 409 "equiv_type.m"
          else
#line 417 "equiv_type.m"
            {
#line 417 "equiv_type.m"
              {
#line 417 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 417 "equiv_type.m"
                return;
              }
#line 417 "equiv_type.m"
            }
#line 416 "equiv_type.m"
        }
#line 419 "equiv_type.m"
        break;
#line 419 "equiv_type.m"
    }
#line 423 "equiv_type.m"
    {
#line 423 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 423 "equiv_type.m"
    }
#line 423 "equiv_type.m"
    {
#line 423 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 423 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 423 "equiv_type.m"
    }
#line 424 "equiv_type.m"
    {
#line 424 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 425 "equiv_type.m"
    {
#line 425 "equiv_type.m"
      MR_Word base;
#line 425 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 425 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypeVars_22));
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 425 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 425 "equiv_type.m"
    }
#line 398 "equiv_type.m"
  }
#line 391 "equiv_type.m"
}

#line 324 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43,
#line 324 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45,
#line 324 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 324 "equiv_type.m"
{
#line 332 "equiv_type.m"
  {
#line 332 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 332 "equiv_type.m"
#line 332 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) {
#line 332 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 332 "equiv_type.m"
      case (MR_Integer) 0:
#line 332 "equiv_type.m"
      case (MR_Integer) 2:
#line 386 "equiv_type.m"
        {
#line 387 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 388 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 386 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 386 "equiv_type.m"
        }
#line 332 "equiv_type.m"
        break;
#line 332 "equiv_type.m"
      case (MR_Integer) 1:
#line 332 "equiv_type.m"
        {
#line 332 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_16), (MR_Integer) 1);
#line 332 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 333 "equiv_type.m"
          {
#line 333 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
          }
#line 336 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) parse_tree__equiv_type__ItemTypeDefn_22);
#line 332 "equiv_type.m"
        }
#line 332 "equiv_type.m"
        break;
#line 332 "equiv_type.m"
      case (MR_Integer) 3:
#line 332 "equiv_type.m"
#line 332 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) {
#line 332 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 332 "equiv_type.m"
          case (MR_Integer) 0:
#line 374 "equiv_type.m"
            {
#line 377 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 378 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 374 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 374 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 374 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 1:
#line 338 "equiv_type.m"
            {
#line 338 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 338 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 339 "equiv_type.m"
              {
#line 339 "equiv_type.m"
                parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 342 "equiv_type.m"
              {
#line 342 "equiv_type.m"
                MR_Word base;
#line 342 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 342 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 342 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 342 "equiv_type.m"
              }
#line 338 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 2:
#line 344 "equiv_type.m"
            {
#line 344 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 344 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 345 "equiv_type.m"
              {
#line 345 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 348 "equiv_type.m"
              {
#line 348 "equiv_type.m"
                MR_Word base;
#line 348 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 348 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 348 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 348 "equiv_type.m"
              }
#line 344 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 3:
#line 350 "equiv_type.m"
            {
#line 350 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 350 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 351 "equiv_type.m"
              {
#line 351 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 354 "equiv_type.m"
              {
#line 354 "equiv_type.m"
                MR_Word base;
#line 354 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 354 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 354 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 354 "equiv_type.m"
              }
#line 350 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 4:
#line 332 "equiv_type.m"
          case (MR_Integer) 7:
#line 332 "equiv_type.m"
          case (MR_Integer) 8:
#line 332 "equiv_type.m"
          case (MR_Integer) 10:
#line 386 "equiv_type.m"
            {
#line 387 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 388 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 386 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 386 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 5:
#line 356 "equiv_type.m"
            {
#line 356 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 356 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 357 "equiv_type.m"
              {
#line 357 "equiv_type.m"
                parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 360 "equiv_type.m"
              {
#line 360 "equiv_type.m"
                MR_Word base;
#line 360 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 360 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 360 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 360 "equiv_type.m"
              }
#line 356 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 6:
#line 362 "equiv_type.m"
            {
#line 362 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 362 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 363 "equiv_type.m"
              {
#line 363 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 366 "equiv_type.m"
              {
#line 366 "equiv_type.m"
                MR_Word base;
#line 366 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 366 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 366 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 366 "equiv_type.m"
              }
#line 362 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 9:
#line 368 "equiv_type.m"
            {
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;
#line 368 "equiv_type.m"
              MR_String parse_tree__equiv_type__MutName_72;
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__QualName_73;
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_74;
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_75;
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemId_76;
#line 368 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_79_79;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_82_82;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_83_83;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_84_84;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_85_85;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_86_86;
#line 671 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_87_87;
#line 671 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_88_88;

#line 670 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__MutName_72 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 0)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 1)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 2)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 3)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 4)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 5)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 6)));
#line 671 "equiv_type.m"
              parse_tree__equiv_type__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 7)));
#line 672 "equiv_type.m"
              {
#line 672 "equiv_type.m"
                parse_tree__equiv_type__QualName_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_73, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 672 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_73, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_72));
#line 672 "equiv_type.m"
              }
#line 673 "equiv_type.m"
              {
#line 673 "equiv_type.m"
                recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_73, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, &parse_tree__equiv_type__ExpandedItems0_74);
              }
#line 675 "equiv_type.m"
              {
#line 675 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__ExpandedItems0_74, &parse_tree__equiv_type__ExpandedItems_75, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45);
              }
#line 677 "equiv_type.m"
              {
#line 677 "equiv_type.m"
                parse_tree__equiv_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_79_79, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_73));
#line 677 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_79_79, 1) = ((MR_Box) ((MR_Integer) 0));
#line 677 "equiv_type.m"
              }
#line 677 "equiv_type.m"
              {
#line 677 "equiv_type.m"
                parse_tree__equiv_type__ItemId_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 677 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_76, 0) = ((MR_Box) ((MR_Integer) 8));
#line 677 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_76, 1) = ((MR_Box) (parse_tree__equiv_type__V_79_79));
#line 677 "equiv_type.m"
              }
#line 678 "equiv_type.m"
              {
#line 678 "equiv_type.m"
                recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_76, parse_tree__equiv_type__ExpandedItems_75, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43);
              }
#line 372 "equiv_type.m"
              {
#line 372 "equiv_type.m"
                MR_Word base;
#line 372 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 372 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 372 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 372 "equiv_type.m"
              }
#line 368 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
        }
#line 332 "equiv_type.m"
        break;
#line 332 "equiv_type.m"
    }
#line 332 "equiv_type.m"
  }
#line 324 "equiv_type.m"
}

#line 300 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 300 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 300 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 300 "equiv_type.m"
{
#line 307 "equiv_type.m"
  while (MR_TRUE)
#line 307 "equiv_type.m"
    {
#line 307 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 307 "equiv_type.m"
      {
#line 307 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 307 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 307 "equiv_type.m"
          {
#line 308 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 308 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 308 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 308 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 307 "equiv_type.m"
          }
#line 307 "equiv_type.m"
        else
#line 310 "equiv_type.m"
          {
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_40;
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_41;
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;
#line 310 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;

#line 311 "equiv_type.m"
            {
#line 311 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_4, parse_tree__equiv_type__Item0_34, &parse_tree__equiv_type__Item_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, &parse_tree__equiv_type__ItemSpecs_41);
            }
#line 317 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "equiv_type.m"
              {
#line 316 "equiv_type.m"
                {
#line 316 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 0) = ((MR_Box) (parse_tree__equiv_type__Item_40));
#line 316 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6));
#line 316 "equiv_type.m"
                }
#line 315 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 315 "equiv_type.m"
              }
#line 317 "equiv_type.m"
            else
#line 318 "equiv_type.m"
              {
#line 319 "equiv_type.m"
                {
#line 319 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
                }
#line 318 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 318 "equiv_type.m"
              }
#line 321 "equiv_type.m"
            /* direct tailcall eliminated */
#line 321 "equiv_type.m"
            {
#line 321 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__Items0_35;
#line 321 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;
#line 321 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 321 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 321 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;

#line 321 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 321 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 321 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 321 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6;
#line 321 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 321 "equiv_type.m"
            }
#line 321 "equiv_type.m"
            continue;
#line 310 "equiv_type.m"
          }
#line 307 "equiv_type.m"
      }
#line 307 "equiv_type.m"
      break;
#line 307 "equiv_type.m"
    }
#line 300 "equiv_type.m"
}

#line 205 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 205 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 205 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 205 "equiv_type.m"
{
#line 209 "equiv_type.m"
  while (MR_TRUE)
#line 209 "equiv_type.m"
    {
#line 209 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 209 "equiv_type.m"
      {
#line 209 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 209 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "equiv_type.m"
          {
#line 209 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 209 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 209 "equiv_type.m"
          }
#line 209 "equiv_type.m"
        else
#line 210 "equiv_type.m"
          {
#line 210 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 210 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;
#line 227 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_32;
#line 227 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Args_33;
#line 227 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Body_34;
#line 227 "equiv_type.m"
            MR_Word parse_tree__equiv_type__VarSet_35;
#line 220 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemTypeDefn_31;
#line 220 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_43_43;
#line 221 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_36_36;
#line 221 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_37;

#line 220 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 1)));
#line 220 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 220 "equiv_type.m"
              {
#line 220 "equiv_type.m"
                parse_tree__equiv_type__ItemTypeDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 1);
#line 221 "equiv_type.m"
                parse_tree__equiv_type__Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 0)));
#line 221 "equiv_type.m"
                parse_tree__equiv_type__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 1)));
#line 221 "equiv_type.m"
                parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 2)));
#line 221 "equiv_type.m"
                parse_tree__equiv_type__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 3)));
#line 221 "equiv_type.m"
                parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 4)));
#line 221 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 5)));
#line 222 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 222 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 222 "equiv_type.m"
                  parse_tree__equiv_type__Body_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 220 "equiv_type.m"
              }
#line 227 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 224 "equiv_type.m"
              {
#line 224 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__Arity_38;
#line 224 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtor_39;
#line 224 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_44_44;

#line 224 "equiv_type.m"
                {
#line 224 "equiv_type.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Args_33, &parse_tree__equiv_type__Arity_38);
                }
#line 225 "equiv_type.m"
                {
#line 225 "equiv_type.m"
                  parse_tree__equiv_type__TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_32));
#line 225 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 225 "equiv_type.m"
                }
#line 226 "equiv_type.m"
                {
#line 226 "equiv_type.m"
                  parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 226 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_35));
#line 226 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_33));
#line 226 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_34));
#line 226 "equiv_type.m"
                }
#line 226 "equiv_type.m"
                {
#line 226 "equiv_type.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_39)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20);
                }
#line 224 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 224 "equiv_type.m"
              }
#line 227 "equiv_type.m"
            else
#line 235 "equiv_type.m"
              {
#line 235 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_52;
#line 235 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_53;
#line 235 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_54;
#line 235 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_55;
#line 228 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemInstDefn_40;
#line 228 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 229 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_41_41;
#line 229 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_49;

#line 228 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 228 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 228 "equiv_type.m"
                  {
#line 228 "equiv_type.m"
                    parse_tree__equiv_type__ItemInstDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 0)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 1)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 2)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 3)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 4)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 5)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 230 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 230 "equiv_type.m"
                      parse_tree__equiv_type__Body_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, (MR_Integer) 0)));
#line 228 "equiv_type.m"
                  }
#line 235 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 232 "equiv_type.m"
                  {
#line 232 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstId_42;
#line 232 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;
#line 232 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_51;

#line 232 "equiv_type.m"
                    {
#line 232 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__Args_53, &parse_tree__equiv_type__Arity_51);
                    }
#line 233 "equiv_type.m"
                    {
#line 233 "equiv_type.m"
                      parse_tree__equiv_type__InstId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 0) = ((MR_Box) (parse_tree__equiv_type__Name_52));
#line 233 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_51));
#line 233 "equiv_type.m"
                    }
#line 234 "equiv_type.m"
                    {
#line 234 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_55));
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Args_53));
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (parse_tree__equiv_type__Body_54));
#line 234 "equiv_type.m"
                    }
#line 234 "equiv_type.m"
                    {
#line 234 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_42)), ((MR_Box) (parse_tree__equiv_type__V_47_47)), parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21);
                    }
#line 232 "equiv_type.m"
                  }
#line 235 "equiv_type.m"
                else
#line 235 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 235 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 235 "equiv_type.m"
              }
#line 212 "equiv_type.m"
            /* direct tailcall eliminated */
#line 212 "equiv_type.m"
            {
#line 212 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 212 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 212 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;

#line 212 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 212 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 212 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 212 "equiv_type.m"
            }
#line 212 "equiv_type.m"
            continue;
#line 210 "equiv_type.m"
          }
#line 209 "equiv_type.m"
      }
#line 209 "equiv_type.m"
      break;
#line 209 "equiv_type.m"
    }
#line 205 "equiv_type.m"
}

#line 957 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 957 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 957 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 957 "equiv_type.m"
{
#line 957 "equiv_type.m"
  {
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 957 "equiv_type.m"
  }
#line 957 "equiv_type.m"
}

#line 78 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_8,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_14,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_16,
#line 78 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17,
#line 78 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18)
#line 78 "equiv_type.m"
{
#line 946 "equiv_type.m"
  {
#line 946 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 946 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 946 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 946 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 957 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 957 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 948 "equiv_type.m"
    {
#line 948 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 957 "equiv_type.m"
    }
#line 12823 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 957 "equiv_type.m"
    {
#line 957 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 957 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 957 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 946 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 848 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 848 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 848 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 848 "equiv_type.m"
{
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 848 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 848 "equiv_type.m"
  }
#line 848 "equiv_type.m"
}

#line 74 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_8,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_9,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_10,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_15,
#line 74 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16,
#line 74 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17)
#line 74 "equiv_type.m"
{
#line 822 "equiv_type.m"
  {
#line 822 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 822 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 847 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 836 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 824 "equiv_type.m"
    {
#line 824 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 833 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 833 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 848 "equiv_type.m"
    {
#line 848 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) (parse_tree__equiv_type__V_18_18));
#line 848 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 848 "equiv_type.m"
    }
#line 12974 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 847 "equiv_type.m"
    {
#line 847 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 847 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 836 "equiv_type.m"
    {
#line 836 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__V_18_18, parse_tree__equiv_type__TypeEqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 838 "equiv_type.m"
    {
#line 838 "equiv_type.m"
      MR_Word base;
#line 838 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 838 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 838 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 838 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 838 "equiv_type.m"
    }
#line 822 "equiv_type.m"
  }
#line 74 "equiv_type.m"
}

#line 69 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
#line 69 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_9,
#line 69 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15,
#line 69 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Typess_16,
#line 69 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_11,
#line 69 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17,
#line 69 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_18,
#line 69 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 69 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20)
#line 69 "equiv_type.m"
{
#line 976 "equiv_type.m"
  {
#line 976 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 976 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 987 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 987 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 978 "equiv_type.m"
    {
#line 978 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 987 "equiv_type.m"
    {
#line 987 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15, parse_tree__equiv_type__STATE_VARIABLE_Typess_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 976 "equiv_type.m"
  }
#line 69 "equiv_type.m"
}

#line 65 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_9,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_10,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_11,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_12,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_17,
#line 65 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18,
#line 65 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19)
#line 65 "equiv_type.m"
{
#line 1077 "equiv_type.m"
  {
#line 1077 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1077 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1089 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1080 "equiv_type.m"
    {
#line 1080 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1089 "equiv_type.m"
    {
#line 1089 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1077 "equiv_type.m"
  }
#line 65 "equiv_type.m"
}

#line 55 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_9_p_0(
#line 55 "equiv_type.m"
  MR_Word parse_tree__equiv_type__AugCompUnit0_10,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__AugCompUnit_11,
#line 55 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EventSpecMap0_12,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__EventSpecMap_13,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeEqvMap_14,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_39,
#line 55 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 55 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_42)
#line 55 "equiv_type.m"
{
#line 114 "equiv_type.m"
  {
#line 114 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_108_108;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_111_111;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_112_112;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 0)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleNameContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 1)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleVersionNumbers_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 2)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 3)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 4)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 5)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 6)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 7)));
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstEqvMap_26;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevSrcItemBlocks_27;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevDirectIntItemBlocks_28;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIndirectIntItemBlocks_29;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIntForOptItemBlocks_30;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevOptItemBlocks_31;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks_32;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks_33;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks_34;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks_35;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks_36;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_37;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_38;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80;
#line 114 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81;

#line 122 "equiv_type.m"
    {
#line 122 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43);
    }
#line 123 "equiv_type.m"
    {
#line 123 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44);
    }
#line 124 "equiv_type.m"
    {
#line 124 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__SrcItemBlocks0_21, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46);
    }
#line 126 "equiv_type.m"
    {
#line 126 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__DirectIntItemBlocks0_22, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48);
    }
#line 128 "equiv_type.m"
    {
#line 128 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IndirectIntItemBlocks0_23, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50);
    }
#line 130 "equiv_type.m"
    {
#line 130 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IntForOptItemBlocks0_25, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52);
    }
#line 132 "equiv_type.m"
    {
#line 132 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__OptItemBlocks0_24, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52, &parse_tree__equiv_type__InstEqvMap_26);
    }
#line 141 "equiv_type.m"
    {
#line 141 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 143 "equiv_type.m"
    {
#line 143 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__SrcItemBlocks0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevSrcItemBlocks_27, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61);
    }
#line 146 "equiv_type.m"
    {
#line 146 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__DirectIntItemBlocks0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevDirectIntItemBlocks_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61, &parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66);
    }
#line 150 "equiv_type.m"
    {
#line 150 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IndirectIntItemBlocks0_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIndirectIntItemBlocks_29, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66, &parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71);
    }
#line 154 "equiv_type.m"
    {
#line 154 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IntForOptItemBlocks0_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIntForOptItemBlocks_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71, &parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76);
    }
#line 158 "equiv_type.m"
    {
#line 158 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__OptItemBlocks0_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevOptItemBlocks_31, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76, &parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81);
    }
#line 162 "equiv_type.m"
    {
#line 162 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__RevSrcItemBlocks_27, &parse_tree__equiv_type__SrcItemBlocks_32);
    }
#line 13303 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_108_108 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[1];
#line 163 "equiv_type.m"
    {
#line 163 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevDirectIntItemBlocks_28, &parse_tree__equiv_type__DirectIntItemBlocks_33);
    }
#line 164 "equiv_type.m"
    {
#line 164 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevIndirectIntItemBlocks_29, &parse_tree__equiv_type__IndirectIntItemBlocks_34);
    }
#line 165 "equiv_type.m"
    {
#line 165 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], parse_tree__equiv_type__RevOptItemBlocks_31, &parse_tree__equiv_type__OptItemBlocks_35);
    }
#line 166 "equiv_type.m"
    {
#line 166 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[3], parse_tree__equiv_type__RevIntForOptItemBlocks_30, &parse_tree__equiv_type__IntForOptItemBlocks_36);
    }
#line 167 "equiv_type.m"
    {
#line 167 "equiv_type.m"
      MR_Word base;
#line 167 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 167 "equiv_type.m"
      *parse_tree__equiv_type__AugCompUnit_11 = base;
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_18));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ModuleNameContext_19));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ModuleVersionNumbers_20));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SrcItemBlocks_32));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__DirectIntItemBlocks_33));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__IndirectIntItemBlocks_34));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__OptItemBlocks_35));
#line 167 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__IntForOptItemBlocks_36));
#line 167 "equiv_type.m"
    }
#line 13351 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_111_111 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 13353 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 172 "equiv_type.m"
    {
#line 172 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecMap0_12, &parse_tree__equiv_type__EventSpecList0_37);
    }
#line 173 "equiv_type.m"
    {
#line 173 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_37, &parse_tree__equiv_type__EventSpecList_38, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_39, parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81, parse_tree__equiv_type__STATE_VARIABLE_Specs_42);
    }
#line 175 "equiv_type.m"
    {
#line 175 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecList_38, parse_tree__equiv_type__EventSpecMap_13);
#line 175 "equiv_type.m"
      return;
    }
#line 114 "equiv_type.m"
  }
#line 55 "equiv_type.m"
}

void mercury__parse_tree__equiv_type__init(void)
{
}

void mercury__parse_tree__equiv_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_section_maybe_record_sym_name_use_1);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_type_eqv_map_0);
}

void mercury__parse_tree__equiv_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.equiv_type. */
