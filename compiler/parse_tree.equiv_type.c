/*
** Automatically generated from `equiv_type.m'
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


/* :- module parse_tree.equiv_type. */
/* :- implementation. */

/*
INIT mercury__parse_tree__equiv_type__init
ENDINIT
*/

#include "parse_tree.equiv_type.mih"


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
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 118 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 121 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 124 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 127 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

#line 130 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

#line 133 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

#line 136 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

#line 139 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

#line 142 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

#line 145 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 151 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

#line 157 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

#line 160 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

#line 163 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

#line 166 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

#line 169 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

#line 172 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 175 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0;

#line 178 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1];

#line 181 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1;

#line 184 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1];

#line 187 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1];

#line 190 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2];

#line 193 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2];

#line 196 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2];

#line 199 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 202 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 205 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 208 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 211 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 214 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0;

#line 217 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 220 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 223 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 225 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 228 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 231 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 233 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 235 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 238 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 241 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 243 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 246 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 249 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 251 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 253 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 256 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 259 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 261 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 264 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 267 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 269 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 271 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 274 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 277 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 279 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 282 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 285 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 287 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 289 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 292 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 295 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 297 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 300 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 303 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 305 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 307 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 310 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 313 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 315 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 317 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 320 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 323 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 325 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 327 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 329 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4);

#line 332 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 335 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 337 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 340 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 343 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 345 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 347 "parse_tree.equiv_type.c"
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

#line 1458 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1458 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1280 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_12,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_13,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1271 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_10,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 755 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 724 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 588 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 554 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 484 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 484 "equiv_type.m"
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

#line 1375 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1375__1_1_f_0(
#line 1375 "equiv_type.m"
  MR_Word parse_tree__equiv_type__LambdaHeadVar__1_242);

#line 1093 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1093__1_2_p_0(
#line 1093 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1093 "equiv_type.m"
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

#line 1607 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1603 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1582 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1576 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1560 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeAndMode0_13,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeAndMode_14,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 1536 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1(
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1529 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_0_17,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_18,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1446 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(
#line 1446 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1446 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__3_3,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5);

#line 1375 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1375 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1375 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1314 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_84,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_85,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_86,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_87,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_88,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_89,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_90,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_91,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_92);

#line 1214 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);

#line 1121 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1108 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1093 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1093 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg);

#line 1070 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1027 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 1016 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 1006 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 986 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32);

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 976 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 956 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 914 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 911 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 901 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 887 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 866 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 852 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 831 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 790 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 706 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_32,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_33,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_34,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35);

#line 689 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 521 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 454 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 417 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 417 "equiv_type.m"
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

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[35][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[4][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_7[2][1];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[35][2] = {
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
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotations are incompatible;"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "they specify"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but only"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[1])),
    ((MR_Box) (parse_tree__equiv_type__replace_in_pred_type_23_p_0_1)),
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

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[2][5] = {
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



#line 2262 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2271 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2279 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 2287 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2296 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2304 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2313 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2321 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2329 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2337 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2344 "parse_tree.equiv_type.c"
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

#line 2359 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2364 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2373 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2378 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2383 "parse_tree.equiv_type.c"
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

#line 2400 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2408 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2416 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2424 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2431 "parse_tree.equiv_type.c"
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

#line 2446 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2451 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2460 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2465 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2470 "parse_tree.equiv_type.c"
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

#line 2487 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2496 "parse_tree.equiv_type.c"
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

#line 2513 "parse_tree.equiv_type.c"
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

#line 2528 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_visibility_0
};

#line 2533 "parse_tree.equiv_type.c"
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

#line 2548 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0
};

#line 2553 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2558 "parse_tree.equiv_type.c"
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

#line 2572 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2578 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2584 "parse_tree.equiv_type.c"
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

#line 2601 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2607 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2613 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2619 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2625 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2631 "parse_tree.equiv_type.c"
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

#line 2648 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0
  }
};

#line 2658 "parse_tree.equiv_type.c"
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

#line 2675 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2684 "parse_tree.equiv_type.c"
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

#line 2701 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2704 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2706 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2708 "parse_tree.equiv_type.c"
{
#line 2710 "parse_tree.equiv_type.c"
  {
#line 2712 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2715 "parse_tree.equiv_type.c"
    {
#line 2717 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2720 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2722 "parse_tree.equiv_type.c"
  }
#line 2724 "parse_tree.equiv_type.c"
}

#line 2727 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2730 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2732 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2734 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2736 "parse_tree.equiv_type.c"
{
#line 2738 "parse_tree.equiv_type.c"
  {
#line 2740 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2743 "parse_tree.equiv_type.c"
    {
#line 2745 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2748 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2750 "parse_tree.equiv_type.c"
  }
#line 2752 "parse_tree.equiv_type.c"
}

#line 2755 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2758 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2760 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2762 "parse_tree.equiv_type.c"
{
#line 2764 "parse_tree.equiv_type.c"
  {
#line 2766 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2769 "parse_tree.equiv_type.c"
    {
#line 2771 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2774 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2776 "parse_tree.equiv_type.c"
  }
#line 2778 "parse_tree.equiv_type.c"
}

#line 2781 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2784 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2786 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2788 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2790 "parse_tree.equiv_type.c"
{
#line 2792 "parse_tree.equiv_type.c"
  {
#line 2794 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2797 "parse_tree.equiv_type.c"
    {
#line 2799 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2802 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2804 "parse_tree.equiv_type.c"
  }
#line 2806 "parse_tree.equiv_type.c"
}

#line 2809 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 2812 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2814 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2816 "parse_tree.equiv_type.c"
{
#line 2818 "parse_tree.equiv_type.c"
  {
#line 2820 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2823 "parse_tree.equiv_type.c"
    {
#line 2825 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2828 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2830 "parse_tree.equiv_type.c"
  }
#line 2832 "parse_tree.equiv_type.c"
}

#line 2835 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 2838 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2840 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2842 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2844 "parse_tree.equiv_type.c"
{
#line 2846 "parse_tree.equiv_type.c"
  {
#line 2848 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2851 "parse_tree.equiv_type.c"
    {
#line 2853 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2856 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2858 "parse_tree.equiv_type.c"
  }
#line 2860 "parse_tree.equiv_type.c"
}

#line 2863 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 2866 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2868 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2870 "parse_tree.equiv_type.c"
{
#line 2872 "parse_tree.equiv_type.c"
  {
#line 2874 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2877 "parse_tree.equiv_type.c"
    {
#line 2879 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2882 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2884 "parse_tree.equiv_type.c"
  }
#line 2886 "parse_tree.equiv_type.c"
}

#line 2889 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 2892 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2894 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2896 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2898 "parse_tree.equiv_type.c"
{
#line 2900 "parse_tree.equiv_type.c"
  {
#line 2902 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2905 "parse_tree.equiv_type.c"
    {
#line 2907 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2910 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2912 "parse_tree.equiv_type.c"
  }
#line 2914 "parse_tree.equiv_type.c"
}

#line 2917 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 2920 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2922 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2924 "parse_tree.equiv_type.c"
{
#line 2926 "parse_tree.equiv_type.c"
  {
#line 2928 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2931 "parse_tree.equiv_type.c"
    {
#line 2933 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2936 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2938 "parse_tree.equiv_type.c"
  }
#line 2940 "parse_tree.equiv_type.c"
}

#line 2943 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 2946 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2948 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2950 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2952 "parse_tree.equiv_type.c"
{
#line 2954 "parse_tree.equiv_type.c"
  {
#line 2956 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2959 "parse_tree.equiv_type.c"
    {
#line 2961 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2964 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2966 "parse_tree.equiv_type.c"
  }
#line 2968 "parse_tree.equiv_type.c"
}

#line 2971 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 2974 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2976 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2978 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2980 "parse_tree.equiv_type.c"
{
#line 2982 "parse_tree.equiv_type.c"
  {
#line 2984 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2987 "parse_tree.equiv_type.c"
    {
#line 2989 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2992 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2994 "parse_tree.equiv_type.c"
  }
#line 2996 "parse_tree.equiv_type.c"
}

#line 2999 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 3002 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3004 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 3006 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 3008 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4)
#line 3010 "parse_tree.equiv_type.c"
{
#line 3012 "parse_tree.equiv_type.c"
  {
#line 3014 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3017 "parse_tree.equiv_type.c"
    {
#line 3019 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), ((MR_Word) parse_tree__equiv_type__wrapper_arg_4));
    }
#line 3022 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3024 "parse_tree.equiv_type.c"
  }
#line 3026 "parse_tree.equiv_type.c"
}

#line 3029 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 3032 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3034 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3036 "parse_tree.equiv_type.c"
{
#line 3038 "parse_tree.equiv_type.c"
  {
#line 3040 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3043 "parse_tree.equiv_type.c"
    {
#line 3045 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3048 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3050 "parse_tree.equiv_type.c"
  }
#line 3052 "parse_tree.equiv_type.c"
}

#line 3055 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 3058 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3060 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3062 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3064 "parse_tree.equiv_type.c"
{
#line 3066 "parse_tree.equiv_type.c"
  {
#line 3068 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3071 "parse_tree.equiv_type.c"
    {
#line 3073 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____type_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3076 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3078 "parse_tree.equiv_type.c"
  }
#line 3080 "parse_tree.equiv_type.c"
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
      parse_tree__equiv_type__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__equiv_type__Cast_HeadVar1_3, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_4);
    }
#line 245 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 245 "equiv_type.m"
  }
#line 245 "equiv_type.m"
}

#line 1458 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1458 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1458 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1458 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1458 "equiv_type.m"
{
#line 1472 "equiv_type.m"
  {
#line 1472 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1472 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1522 "equiv_type.m"
      {
#line 1523 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1524 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1525 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1526 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1522 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1522 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1522 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1522 "equiv_type.m"
      }
#line 1472 "equiv_type.m"
    else
#line 1472 "equiv_type.m"
      {
#line 1472 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1472 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1472 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1475 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1475 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1475 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1476 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1476 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1476 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1478 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1473 "equiv_type.m"
        {
#line 1473 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__InstEqvMap_20, parse_tree__equiv_type__WithInst0_34, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1476 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1476 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1476 "equiv_type.m"
          {
#line 1476 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1476 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1477 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1477 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1477 "equiv_type.m"
              {
#line 1477 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1478 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1478 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1478 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1478 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1480 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1479 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1480 "equiv_type.m"
                else
#line 1480 "equiv_type.m"
                  {
#line 1480 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1480 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1480 "equiv_type.m"
                  }
#line 1477 "equiv_type.m"
              }
#line 1476 "equiv_type.m"
          }
#line 1475 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1483 "equiv_type.m"
          {
#line 1483 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1483 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1483 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1483 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1483 "equiv_type.m"
            {
#line 1483 "equiv_type.m"
              MR_Word base;
#line 1483 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1483 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = base;
#line 1483 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1483 "equiv_type.m"
            }
#line 1484 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1485 "equiv_type.m"
            {
#line 1485 "equiv_type.m"
              MR_Word base;
#line 1485 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1485 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1485 "equiv_type.m"
            }
#line 1486 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1490 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1489 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1490 "equiv_type.m"
            else
#line 1491 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1493 "equiv_type.m"
            {
#line 1493 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1494 "equiv_type.m"
            {
#line 1494 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1494 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_22));
#line 1494 "equiv_type.m"
            }
#line 1493 "equiv_type.m"
            {
#line 1493 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1493 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1493 "equiv_type.m"
            }
#line 1495 "equiv_type.m"
            {
#line 1495 "equiv_type.m"
              recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1496 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1483 "equiv_type.m"
          }
#line 1475 "equiv_type.m"
        else
#line 1498 "equiv_type.m"
          {
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1498 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1498 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1498 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1499 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1502 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1504 "equiv_type.m"
#line 1504 "equiv_type.m"
            switch (parse_tree__equiv_type__DeclType_24) {
#line 1504 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1504 "equiv_type.m"
              case (MR_Integer) 1:
#line 1504 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1504 "equiv_type.m"
                break;
#line 1504 "equiv_type.m"
              case (MR_Integer) 0:
#line 1503 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1504 "equiv_type.m"
                break;
#line 1504 "equiv_type.m"
            }
#line 1509 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "equiv_type.m"
            else
#line 1510 "equiv_type.m"
              {
#line 1510 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1510 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1511 "equiv_type.m"
                {
#line 1511 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1511 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1511 "equiv_type.m"
                }
#line 1511 "equiv_type.m"
                {
#line 1511 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1511 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1511 "equiv_type.m"
                }
#line 1510 "equiv_type.m"
              }
#line 3464 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1513 "equiv_type.m"
            {
#line 1513 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1513 "equiv_type.m"
            }
#line 1513 "equiv_type.m"
            {
#line 1513 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[34])));
#line 1513 "equiv_type.m"
            }
#line 1513 "equiv_type.m"
            {
#line 1513 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
#line 1513 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1513 "equiv_type.m"
            }
#line 1514 "equiv_type.m"
            {
#line 1514 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1514 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1514 "equiv_type.m"
            }
#line 1514 "equiv_type.m"
            {
#line 1514 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1514 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[21])));
#line 1514 "equiv_type.m"
            }
#line 1515 "equiv_type.m"
            {
#line 1515 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23]));
            }
#line 1515 "equiv_type.m"
            {
#line 1515 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1514 "equiv_type.m"
            {
#line 1514 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1513 "equiv_type.m"
            {
#line 1513 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1517 "equiv_type.m"
            {
#line 1517 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1517 "equiv_type.m"
            }
#line 1517 "equiv_type.m"
            {
#line 1517 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1517 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1517 "equiv_type.m"
            }
#line 1517 "equiv_type.m"
            {
#line 1517 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 1517 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1517 "equiv_type.m"
            }
#line 1518 "equiv_type.m"
            {
#line 1518 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1518 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1518 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "equiv_type.m"
            }
#line 1518 "equiv_type.m"
            {
#line 1518 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1518 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1518 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1518 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1518 "equiv_type.m"
            }
#line 1519 "equiv_type.m"
            {
#line 1519 "equiv_type.m"
              MR_Word base;
#line 1519 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1519 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1519 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1519 "equiv_type.m"
            }
#line 1498 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1498 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1498 "equiv_type.m"
          }
#line 1472 "equiv_type.m"
      }
#line 1472 "equiv_type.m"
  }
#line 1458 "equiv_type.m"
}

#line 1280 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_12,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_13,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1280 "equiv_type.m"
{
#line 1288 "equiv_type.m"
  while (MR_TRUE)
#line 1288 "equiv_type.m"
    {
#line 1288 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1288 "equiv_type.m"
      {
#line 1288 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1288 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1288 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1288 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1288 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1288 "equiv_type.m"
          {
#line 1288 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_13, (MR_Integer) 1)));
#line 1288 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1288 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1288 "equiv_type.m"
              {
#line 1288 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1288 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1288 "equiv_type.m"
              }
#line 1288 "equiv_type.m"
          }
#line 1288 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1289 "equiv_type.m"
          {
#line 1289 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1289 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1289 "equiv_type.m"
            {
#line 1289 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1289 "equiv_type.m"
            {
#line 1289 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1289 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1289 "equiv_type.m"
            }
#line 1291 "equiv_type.m"
            {
#line 1291 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_12);
            }
#line 1290 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1293 "equiv_type.m"
              {
#line 1293 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_13;
#line 1293 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1293 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1293 "equiv_type.m"
              }
#line 1290 "equiv_type.m"
            else
#line 1294 "equiv_type.m"
              {
#line 1294 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1294 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1295 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1295 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1296 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1295 "equiv_type.m"
                {
#line 1295 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__InstEqvMap_11, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1295 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1295 "equiv_type.m"
                  {
#line 1295 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1295 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1295 "equiv_type.m"
                  }
#line 1295 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1295 "equiv_type.m"
                  {
#line 1296 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1296 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1296 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1296 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1295 "equiv_type.m"
                  }
#line 1294 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1298 "equiv_type.m"
                  {
#line 1298 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1298 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1298 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1298 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1298 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;

#line 1298 "equiv_type.m"
                    {
#line 1298 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1299 "equiv_type.m"
                    {
#line 1299 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1300 "equiv_type.m"
                    {
#line 1300 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1300 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1300 "equiv_type.m"
                    }
#line 1300 "equiv_type.m"
                    {
#line 1300 "equiv_type.m"
                      recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1303 "equiv_type.m"
                    {
#line 1303 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1302 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1302 "equiv_type.m"
                    {
#line 1302 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_12 = parse_tree__equiv_type__V_35_35;
#line 1302 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_13 = parse_tree__equiv_type__Inst1_24;
#line 1302 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1302 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1302 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_13 = parse_tree__equiv_type__Inst0__tmp_copy_13;
#line 1302 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_12 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_12;
#line 1302 "equiv_type.m"
                    }
#line 1302 "equiv_type.m"
                    continue;
#line 1298 "equiv_type.m"
                  }
#line 1294 "equiv_type.m"
                else
#line 1306 "equiv_type.m"
                  {
#line 1306 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_13;
#line 1306 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1306 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1306 "equiv_type.m"
                  }
#line 1294 "equiv_type.m"
              }
#line 1289 "equiv_type.m"
          }
#line 1288 "equiv_type.m"
        else
#line 1309 "equiv_type.m"
          {
#line 1309 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_13;
#line 1309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1309 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1309 "equiv_type.m"
          }
#line 1288 "equiv_type.m"
      }
#line 1288 "equiv_type.m"
      break;
#line 1288 "equiv_type.m"
    }
#line 1280 "equiv_type.m"
}

#line 1271 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_10,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1271 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1271 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1271 "equiv_type.m"
{
#line 1276 "equiv_type.m"
  {
#line 1276 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1276 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1277 "equiv_type.m"
    {
#line 1277 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1277 "equiv_type.m"
    {
#line 1277 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__InstEqvMap_10, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst0_11, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
    }
#line 1276 "equiv_type.m"
  }
#line 1271 "equiv_type.m"
}

#line 755 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 755 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 755 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 755 "equiv_type.m"
{
#line 762 "equiv_type.m"
  {
#line 762 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 762 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 762 "equiv_type.m"
      {
#line 762 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 763 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 763 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 762 "equiv_type.m"
      }
#line 762 "equiv_type.m"
    else
#line 765 "equiv_type.m"
      {
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 765 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 765 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 765 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 783 "equiv_type.m"
        {
#line 783 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1115 "equiv_type.m"
        {
#line 1115 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 787 "equiv_type.m"
        {
#line 787 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 787 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 787 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 787 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 787 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 787 "equiv_type.m"
        }
#line 768 "equiv_type.m"
        {
#line 768 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 764 "equiv_type.m"
        {
#line 764 "equiv_type.m"
          MR_Word base;
#line 764 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 764 "equiv_type.m"
        }
#line 765 "equiv_type.m"
      }
#line 762 "equiv_type.m"
  }
#line 755 "equiv_type.m"
}

#line 724 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 724 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 724 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 724 "equiv_type.m"
{
#line 731 "equiv_type.m"
  {
#line 731 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 731 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "equiv_type.m"
      {
#line 731 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 731 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 731 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 731 "equiv_type.m"
      }
#line 731 "equiv_type.m"
    else
#line 734 "equiv_type.m"
      {
#line 734 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 734 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 734 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 734 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 734 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 733 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 733 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 748 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 748 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 748 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 748 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 748 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 750 "equiv_type.m"
        {
#line 750 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 752 "equiv_type.m"
        {
#line 752 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 752 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 752 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 752 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 752 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 752 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 752 "equiv_type.m"
        }
#line 733 "equiv_type.m"
        {
#line 733 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 733 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 733 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 733 "equiv_type.m"
        }
#line 737 "equiv_type.m"
        {
#line 737 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 733 "equiv_type.m"
        {
#line 733 "equiv_type.m"
          MR_Word base;
#line 733 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 733 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 733 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 733 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 733 "equiv_type.m"
        }
#line 734 "equiv_type.m"
      }
#line 731 "equiv_type.m"
  }
#line 724 "equiv_type.m"
}

#line 588 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 588 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 588 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 588 "equiv_type.m"
{
#line 595 "equiv_type.m"
  {
#line 595 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 595 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_20;
#line 595 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21;
#line 595 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 595 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 595 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 595 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 596 "equiv_type.m"
    parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 596 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 596 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 621 "equiv_type.m"
#line 621 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_20)) {
#line 621 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 621 "equiv_type.m"
      case (MR_Integer) 0:
#line 621 "equiv_type.m"
      case (MR_Integer) 1:
#line 684 "equiv_type.m"
        {
#line 685 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 684 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 684 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 684 "equiv_type.m"
        }
#line 621 "equiv_type.m"
        break;
#line 621 "equiv_type.m"
      case (MR_Integer) 2:
#line 622 "equiv_type.m"
        {
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs_62;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemId_63;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo_64;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 622 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_108_108;
#line 622 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_109_109;
#line 629 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Sharing0_52;
#line 629 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Types0_54;
#line 629 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 630 "equiv_type.m"
          MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 630 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_101_101;

#line 626 "equiv_type.m"
          {
#line 626 "equiv_type.m"
            recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
          }
#line 628 "equiv_type.m"
          {
#line 628 "equiv_type.m"
            parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
          }
#line 630 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 630 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 630 "equiv_type.m"
            {
#line 630 "equiv_type.m"
              parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 630 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 631 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 631 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 631 "equiv_type.m"
                {
#line 631 "equiv_type.m"
                  parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 631 "equiv_type.m"
                  parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 631 "equiv_type.m"
                  parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 631 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 631 "equiv_type.m"
                }
#line 630 "equiv_type.m"
            }
#line 629 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 635 "equiv_type.m"
            {
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Types_56;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TVarSet_58;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Sharing_59;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__UserSharing_61;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 635 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_106_106;
#line 633 "equiv_type.m"
              MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 633 "equiv_type.m"
              {
#line 633 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
              }
#line 636 "equiv_type.m"
              {
#line 636 "equiv_type.m"
                parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 638 "equiv_type.m"
              {
#line 638 "equiv_type.m"
                parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 638 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 638 "equiv_type.m"
              }
#line 638 "equiv_type.m"
              {
#line 638 "equiv_type.m"
                parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 638 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 638 "equiv_type.m"
              }
#line 639 "equiv_type.m"
              {
#line 639 "equiv_type.m"
                parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 639 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 639 "equiv_type.m"
              }
#line 640 "equiv_type.m"
              {
#line 640 "equiv_type.m"
                parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
              }
#line 635 "equiv_type.m"
            }
#line 629 "equiv_type.m"
          else
#line 642 "equiv_type.m"
            {
#line 642 "equiv_type.m"
              parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 642 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 642 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 642 "equiv_type.m"
            }
#line 645 "equiv_type.m"
          {
#line 645 "equiv_type.m"
            parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
          }
#line 644 "equiv_type.m"
          {
#line 644 "equiv_type.m"
            parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 644 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 644 "equiv_type.m"
          }
#line 644 "equiv_type.m"
          {
#line 644 "equiv_type.m"
            parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 644 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 644 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 644 "equiv_type.m"
          }
#line 646 "equiv_type.m"
          {
#line 646 "equiv_type.m"
            recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
          }
#line 649 "equiv_type.m"
          {
#line 649 "equiv_type.m"
            parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 649 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 649 "equiv_type.m"
          }
#line 651 "equiv_type.m"
          {
#line 651 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "equiv_type.m"
            MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 651 "equiv_type.m"
          }
#line 622 "equiv_type.m"
        }
#line 621 "equiv_type.m"
        break;
#line 621 "equiv_type.m"
      case (MR_Integer) 3:
#line 621 "equiv_type.m"
#line 621 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)))) {
#line 621 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 621 "equiv_type.m"
          case (MR_Integer) 0:
#line 621 "equiv_type.m"
          case (MR_Integer) 1:
#line 621 "equiv_type.m"
          case (MR_Integer) 2:
#line 621 "equiv_type.m"
          case (MR_Integer) 3:
#line 621 "equiv_type.m"
          case (MR_Integer) 5:
#line 621 "equiv_type.m"
          case (MR_Integer) 6:
#line 621 "equiv_type.m"
          case (MR_Integer) 7:
#line 621 "equiv_type.m"
          case (MR_Integer) 8:
#line 621 "equiv_type.m"
          case (MR_Integer) 9:
#line 621 "equiv_type.m"
          case (MR_Integer) 10:
#line 621 "equiv_type.m"
          case (MR_Integer) 11:
#line 621 "equiv_type.m"
          case (MR_Integer) 12:
#line 621 "equiv_type.m"
          case (MR_Integer) 13:
#line 621 "equiv_type.m"
          case (MR_Integer) 14:
#line 621 "equiv_type.m"
          case (MR_Integer) 15:
#line 621 "equiv_type.m"
          case (MR_Integer) 16:
#line 621 "equiv_type.m"
          case (MR_Integer) 17:
#line 621 "equiv_type.m"
          case (MR_Integer) 18:
#line 621 "equiv_type.m"
          case (MR_Integer) 19:
#line 621 "equiv_type.m"
          case (MR_Integer) 20:
#line 621 "equiv_type.m"
          case (MR_Integer) 21:
#line 621 "equiv_type.m"
          case (MR_Integer) 22:
#line 621 "equiv_type.m"
          case (MR_Integer) 23:
#line 621 "equiv_type.m"
          case (MR_Integer) 24:
#line 621 "equiv_type.m"
          case (MR_Integer) 25:
#line 621 "equiv_type.m"
          case (MR_Integer) 26:
#line 621 "equiv_type.m"
          case (MR_Integer) 27:
#line 621 "equiv_type.m"
          case (MR_Integer) 28:
#line 621 "equiv_type.m"
          case (MR_Integer) 29:
#line 684 "equiv_type.m"
            {
#line 685 "equiv_type.m"
              parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 684 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 684 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 684 "equiv_type.m"
            }
#line 621 "equiv_type.m"
            break;
#line 621 "equiv_type.m"
          case (MR_Integer) 4:
#line 598 "equiv_type.m"
            {
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 1)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 598 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst_35;
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet_36;
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds_38;
#line 598 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 602 "equiv_type.m"
              parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "equiv_type.m"
              if (!(parse_tree__equiv_type__succeeded))
#line 603 "equiv_type.m"
                {
#line 603 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_115_115;
#line 603 "equiv_type.m"
                  MR_String parse_tree__equiv_type__V_33_33;

#line 603 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 603 "equiv_type.m"
                  if (parse_tree__equiv_type__succeeded)
#line 603 "equiv_type.m"
                    {
#line 603 "equiv_type.m"
                      parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 603 "equiv_type.m"
                      parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 603 "equiv_type.m"
                      {
#line 603 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                      }
#line 603 "equiv_type.m"
                    }
#line 603 "equiv_type.m"
                }
#line 601 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 606 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "equiv_type.m"
              else
#line 608 "equiv_type.m"
                {
#line 608 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_111_111;

#line 608 "equiv_type.m"
                  {
#line 608 "equiv_type.m"
                    parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 608 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 608 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 608 "equiv_type.m"
                  }
#line 608 "equiv_type.m"
                  {
#line 608 "equiv_type.m"
                    parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 608 "equiv_type.m"
                  }
#line 608 "equiv_type.m"
                }
#line 610 "equiv_type.m"
              {
#line 610 "equiv_type.m"
                parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 615 "equiv_type.m"
              if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "equiv_type.m"
                parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 615 "equiv_type.m"
              else
#line 616 "equiv_type.m"
                {
#line 616 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 616 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 616 "equiv_type.m"
                  parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 616 "equiv_type.m"
                }
#line 618 "equiv_type.m"
              {
#line 618 "equiv_type.m"
                parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 618 "equiv_type.m"
              }
#line 620 "equiv_type.m"
              {
#line 620 "equiv_type.m"
                parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 620 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 620 "equiv_type.m"
              }
#line 598 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 598 "equiv_type.m"
            }
#line 621 "equiv_type.m"
            break;
#line 621 "equiv_type.m"
        }
#line 621 "equiv_type.m"
        break;
#line 621 "equiv_type.m"
    }
#line 687 "equiv_type.m"
    {
#line 687 "equiv_type.m"
      MR_Word base;
#line 687 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 687 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 687 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 687 "equiv_type.m"
    }
#line 595 "equiv_type.m"
  }
#line 588 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
}

#line 554 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 554 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 554 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 554 "equiv_type.m"
{
#line 561 "equiv_type.m"
  {
#line 561 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_20;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_21;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_22;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 561 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 561 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 561 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 577 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 561 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 0)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__Types0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 1)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 2)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 3)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 4)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 5)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 6)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 7)));
#line 562 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 8)));
#line 566 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 567 "equiv_type.m"
      {
#line 567 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 565 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 570 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "equiv_type.m"
    else
#line 572 "equiv_type.m"
      {
#line 572 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 572 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 572 "equiv_type.m"
        {
#line 572 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 572 "equiv_type.m"
        {
#line 572 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 572 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 572 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 572 "equiv_type.m"
        }
#line 572 "equiv_type.m"
        {
#line 572 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 572 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 572 "equiv_type.m"
        }
#line 572 "equiv_type.m"
      }
#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 874 "equiv_type.m"
    }
#line 4964 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 873 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 577 "equiv_type.m"
    {
#line 577 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 581 "equiv_type.m"
    {
#line 581 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Arity_38);
    }
#line 582 "equiv_type.m"
    {
#line 582 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 582 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 582 "equiv_type.m"
    }
#line 582 "equiv_type.m"
    {
#line 582 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 582 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 582 "equiv_type.m"
    }
#line 583 "equiv_type.m"
    {
#line 583 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 584 "equiv_type.m"
    {
#line 584 "equiv_type.m"
      MR_Word base;
#line 584 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 584 "equiv_type.m"
      *parse_tree__equiv_type__InstanceInfo_17 = base;
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_22));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 584 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 584 "equiv_type.m"
    }
#line 561 "equiv_type.m"
  }
#line 554 "equiv_type.m"
}

#line 484 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 484 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 484 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 484 "equiv_type.m"
{
#line 491 "equiv_type.m"
  {
#line 491 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 491 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_33;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 491 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 491 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 494 "equiv_type.m"
    {
#line 494 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 5112 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 497 "equiv_type.m"
    {
#line 497 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23);
    }
#line 496 "equiv_type.m"
    {
#line 496 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 504 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 503 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_23;
#line 504 "equiv_type.m"
    else
#line 506 "equiv_type.m"
      {
#line 506 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23, parse_tree__equiv_type__ExtraModes_30);
      }
#line 515 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 515 "equiv_type.m"
    else
#line 509 "equiv_type.m"
      {
#line 509 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 509 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 509 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 509 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 509 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 509 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 510 "equiv_type.m"
        {
#line 510 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 511 "equiv_type.m"
        {
#line 511 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 512 "equiv_type.m"
        {
#line 512 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 513 "equiv_type.m"
        {
#line 513 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 513 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 513 "equiv_type.m"
        }
#line 513 "equiv_type.m"
        {
#line 513 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 513 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 513 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 513 "equiv_type.m"
        }
#line 514 "equiv_type.m"
        {
#line 514 "equiv_type.m"
          recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 509 "equiv_type.m"
      }
#line 518 "equiv_type.m"
    {
#line 518 "equiv_type.m"
      MR_Word base;
#line 518 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 518 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_33));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_26));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 518 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 518 "equiv_type.m"
    }
#line 491 "equiv_type.m"
  }
#line 484 "equiv_type.m"
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

#line 1375 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1375__1_1_f_0(
#line 1375 "equiv_type.m"
  MR_Word parse_tree__equiv_type__LambdaHeadVar__1_242)
#line 1375 "equiv_type.m"
{
#line 1375 "equiv_type.m"
  {
#line 1375 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1375 "equiv_type.m"
    MR_Word parse_tree__equiv_type__LambdaHeadVar__2_243;

#line 1375 "equiv_type.m"
    {
#line 1375 "equiv_type.m"
      parse_tree__equiv_type__LambdaHeadVar__2_243 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__LambdaHeadVar__2_243, 0) = ((MR_Box) (parse_tree__equiv_type__LambdaHeadVar__1_242));
#line 1375 "equiv_type.m"
    }
#line 1375 "equiv_type.m"
    return parse_tree__equiv_type__LambdaHeadVar__2_243;
#line 1375 "equiv_type.m"
  }
#line 1375 "equiv_type.m"
}

#line 1093 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1093__1_2_p_0(
#line 1093 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1093 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44)
#line 1093 "equiv_type.m"
{
#line 1093 "equiv_type.m"
  {
#line 1093 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1093 "equiv_type.m"
    {
#line 1093 "equiv_type.m"
      parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
    }
#line 1093 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1093 "equiv_type.m"
  }
#line 1093 "equiv_type.m"
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
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
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
      parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
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
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2);
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
#line 6226 "parse_tree.equiv_type.c"
  {
#line 6228 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 6231 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 6233 "parse_tree.equiv_type.c"
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
#line 6262 "parse_tree.equiv_type.c"
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
#line 6274 "parse_tree.equiv_type.c"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 1;
#line 241 "equiv_type.m"
    else
#line 241 "equiv_type.m"
      {
#line 241 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 241 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6285 "parse_tree.equiv_type.c"
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
#line 6368 "parse_tree.equiv_type.c"
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
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[1], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
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
      parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[1], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
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
#line 6465 "parse_tree.equiv_type.c"
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
#line 6491 "parse_tree.equiv_type.c"
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
#line 6511 "parse_tree.equiv_type.c"
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

#line 6578 "parse_tree.equiv_type.c"
        {
#line 6580 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 6587 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[11];
#line 6589 "parse_tree.equiv_type.c"
            {
#line 6591 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6596 "parse_tree.equiv_type.c"
              {
#line 6598 "parse_tree.equiv_type.c"
                parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
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
#line 6636 "parse_tree.equiv_type.c"
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
#line 6662 "parse_tree.equiv_type.c"
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
#line 6682 "parse_tree.equiv_type.c"
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

#line 6749 "parse_tree.equiv_type.c"
        {
#line 6751 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 181 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 181 "equiv_type.m"
          {
#line 6758 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[10];
#line 6760 "parse_tree.equiv_type.c"
            {
#line 6762 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 181 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6767 "parse_tree.equiv_type.c"
              {
#line 6769 "parse_tree.equiv_type.c"
                parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
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

#line 1607 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1607 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1607 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1607 "equiv_type.m"
{
#line 1615 "equiv_type.m"
  {
#line 1615 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1615 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1615 "equiv_type.m"
      {
#line 1616 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1615 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1615 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1615 "equiv_type.m"
      }
#line 1615 "equiv_type.m"
    else
#line 1618 "equiv_type.m"
      {
#line 1618 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1618 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1115 "equiv_type.m"
        {
#line 1115 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1621 "equiv_type.m"
        {
#line 1621 "equiv_type.m"
          MR_Word base;
#line 1621 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1621 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1621 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1621 "equiv_type.m"
        }
#line 1618 "equiv_type.m"
      }
#line 1615 "equiv_type.m"
  }
#line 1607 "equiv_type.m"
}

#line 1603 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1603 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1603 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1603 "equiv_type.m"
{
#line 1603 "equiv_type.m"
  {
#line 1603 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1603 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1603 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1603 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1603 "equiv_type.m"
    {
#line 1603 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1603 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1603 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1603 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1603 "equiv_type.m"
  }
#line 1603 "equiv_type.m"
}

#line 1582 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1582 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1582 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1582 "equiv_type.m"
{
#line 1589 "equiv_type.m"
  {
#line 1589 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1589 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1603 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1603 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1603 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1603 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1603 "equiv_type.m"
    {
#line 1603 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1603 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1603 "equiv_type.m"
    }
#line 6992 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1603 "equiv_type.m"
    {
#line 1603 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1603 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1603 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1605 "equiv_type.m"
    {
#line 1605 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1605 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1605 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1605 "equiv_type.m"
    }
#line 1602 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1602 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 7017 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1603 "equiv_type.m"
    {
#line 1603 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1603 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1603 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1605 "equiv_type.m"
    {
#line 1605 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1605 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1605 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1605 "equiv_type.m"
    }
#line 1589 "equiv_type.m"
    {
#line 1589 "equiv_type.m"
      MR_Word base;
#line 1589 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1589 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1589 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1589 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1589 "equiv_type.m"
    }
#line 1589 "equiv_type.m"
  }
#line 1582 "equiv_type.m"
}

#line 1576 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1576 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1576 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1576 "equiv_type.m"
{
#line 1576 "equiv_type.m"
  {
#line 1576 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1576 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1576 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1576 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1576 "equiv_type.m"
    {
#line 1576 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1576 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1576 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1576 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1576 "equiv_type.m"
  }
#line 1576 "equiv_type.m"
}

#line 1560 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1560 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1560 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1560 "equiv_type.m"
{
#line 1571 "equiv_type.m"
  {
#line 1571 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1571 "equiv_type.m"
#line 1571 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) {
#line 1571 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1571 "equiv_type.m"
      case (MR_Integer) 0:
#line 1571 "equiv_type.m"
        {
#line 1572 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1571 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1571 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1571 "equiv_type.m"
        }
#line 1571 "equiv_type.m"
        break;
#line 1571 "equiv_type.m"
      case (MR_Integer) 1:
#line 1574 "equiv_type.m"
        {
#line 1574 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1574 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1574 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1574 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_24_24;
#line 1575 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1575 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1576 "equiv_type.m"
          {
#line 1576 "equiv_type.m"
            parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1576 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1576 "equiv_type.m"
          }
#line 7185 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[0];
#line 1575 "equiv_type.m"
          {
#line 1575 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
          }
#line 1575 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1575 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1579 "equiv_type.m"
          {
#line 1579 "equiv_type.m"
            MR_Word base;
#line 1579 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1579 "equiv_type.m"
            *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1579 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1579 "equiv_type.m"
          }
#line 1574 "equiv_type.m"
        }
#line 1571 "equiv_type.m"
        break;
#line 1571 "equiv_type.m"
      case (MR_Integer) 2:
#line 1571 "equiv_type.m"
        {
#line 1572 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1571 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1571 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1571 "equiv_type.m"
        }
#line 1571 "equiv_type.m"
        break;
#line 1571 "equiv_type.m"
    }
#line 1571 "equiv_type.m"
  }
#line 1560 "equiv_type.m"
}

#line 1539 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeAndMode0_13,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeAndMode_14,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 1539 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 1539 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 1539 "equiv_type.m"
{
#line 1547 "equiv_type.m"
  {
#line 1547 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1547 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__TypeAndMode0_13)) == (MR_mktag((MR_Integer) 1))))
#line 1552 "equiv_type.m"
      {
#line 1552 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeAndMode0_13, (MR_Integer) 1)));
#line 1552 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeAndMode0_13, (MR_Integer) 0)));
#line 1552 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_36;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_51_51;

#line 1115 "equiv_type.m"
        {
#line 1115 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_35, &parse_tree__equiv_type__Type_36, &parse_tree__equiv_type__V_22_22, &parse_tree__equiv_type__V_51_51, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
        }
#line 1555 "equiv_type.m"
        {
#line 1555 "equiv_type.m"
          MR_Word base;
#line 1555 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "equiv_type.m"
          *parse_tree__equiv_type__TypeAndMode_14 = base;
#line 1555 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_36));
#line 1555 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_21));
#line 1555 "equiv_type.m"
        }
#line 1552 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
    else
#line 1547 "equiv_type.m"
      {
#line 1547 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeAndMode0_13, (MR_Integer) 0)));
#line 1547 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_19;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_20_20;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_70_70;

#line 1115 "equiv_type.m"
        {
#line 1115 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_19, &parse_tree__equiv_type__V_20_20, &parse_tree__equiv_type__V_70_70, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
        }
#line 1550 "equiv_type.m"
        {
#line 1550 "equiv_type.m"
          MR_Word base;
#line 1550 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1550 "equiv_type.m"
          *parse_tree__equiv_type__TypeAndMode_14 = base;
#line 1550 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_19));
#line 1550 "equiv_type.m"
        }
#line 1547 "equiv_type.m"
      }
#line 1547 "equiv_type.m"
  }
#line 1539 "equiv_type.m"
}

#line 1536 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1(
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1536 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1536 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1536 "equiv_type.m"
{
#line 1536 "equiv_type.m"
  {
#line 1536 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_TypeAndMode_14;
#line 1536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 1536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 1536 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 1536 "equiv_type.m"
    {
#line 1536 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_and_mode_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_TypeAndMode_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_TypeAndMode_14));
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 1536 "equiv_type.m"
  }
#line 1536 "equiv_type.m"
}

#line 1529 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_0_17,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_18,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1529 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1529 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1529 "equiv_type.m"
{
#line 1535 "equiv_type.m"
  {
#line 1535 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1535 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1536 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1536 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1536 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1536 "equiv_type.m"
    {
#line 1536 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_types_and_modes_10_p_0_1));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 1536 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 1536 "equiv_type.m"
    }
#line 7446 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1536 "equiv_type.m"
    {
#line 1536 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_0_17, parse_tree__equiv_type__STATE_VARIABLE_TypeAndModes_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1536 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1535 "equiv_type.m"
  }
#line 1529 "equiv_type.m"
}

#line 1446 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(
#line 1446 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1446 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__3_3,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1446 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5)
#line 1446 "equiv_type.m"
{
#line 1449 "equiv_type.m"
  {
#line 1449 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1449 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1449 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1449 "equiv_type.m"
        {
#line 1449 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1449 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1449 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1449 "equiv_type.m"
        }
#line 1449 "equiv_type.m"
      else
#line 1451 "equiv_type.m"
        {
#line 1451 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__2_2;
#line 1451 "equiv_type.m"
        }
#line 1449 "equiv_type.m"
    else
#line 1449 "equiv_type.m"
      {
#line 1449 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 1449 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));

#line 1449 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "equiv_type.m"
          {
#line 1450 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__1_1;
#line 1450 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1450 "equiv_type.m"
          }
#line 1449 "equiv_type.m"
        else
#line 1454 "equiv_type.m"
          {
#line 1454 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Mode_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 1454 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Modes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 1454 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypesAndModes_16;
#line 1454 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_19_19;

#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_19_19, 0) = ((MR_Box) (parse_tree__equiv_type__V_21_21));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_19_19, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_14));
#line 1453 "equiv_type.m"
            }
#line 1455 "equiv_type.m"
            {
#line 1455 "equiv_type.m"
              parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__Modes_15, &parse_tree__equiv_type__TypesAndModes_16, parse_tree__equiv_type__HeadVar__4_4, parse_tree__equiv_type__HeadVar__5_5);
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              MR_Word base;
#line 1453 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1453 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__3_3 = base;
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_19_19));
#line 1453 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_16));
#line 1453 "equiv_type.m"
            }
#line 1454 "equiv_type.m"
          }
#line 1449 "equiv_type.m"
      }
#line 1449 "equiv_type.m"
  }
#line 1446 "equiv_type.m"
}

#line 1375 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1375 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1375 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1375 "equiv_type.m"
{
#line 1375 "equiv_type.m"
  {
#line 1375 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1375 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1375 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_LambdaHeadVar__2_243;

#line 1375 "equiv_type.m"
    {
#line 1375 "equiv_type.m"
      parse_tree__equiv_type__conv0_LambdaHeadVar__2_243 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1375__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1375 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_LambdaHeadVar__2_243));
#line 1375 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1375 "equiv_type.m"
  }
#line 1375 "equiv_type.m"
}

#line 1314 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_84,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_85,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_86,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_87,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_88,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_89,
#line 1314 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_90,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_91,
#line 1314 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_92)
#line 1314 "equiv_type.m"
{
#line 1329 "equiv_type.m"
  {
#line 1329 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_254_254;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_93_93;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_94_94;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_95_95;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_96_96;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_97_97;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_98_98;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_101_101;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_102_102;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103;
#line 1329 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_135_135;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_137_137;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_139_139;
#line 1329 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141;
#line 1362 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1362 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1330 "equiv_type.m"
    {
#line 1330 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_84, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_93_93, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_88, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_94_94, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_90, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_95_95);
    }
#line 1333 "equiv_type.m"
    {
#line 1333 "equiv_type.m"
      parse_tree__equiv_type__replace_in_types_and_modes_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_93_93, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_96_96, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_94_94, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_97_97, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_95_95, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_98_98);
    }
#line 1356 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1357 "equiv_type.m"
      {
#line 1358 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1359 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1357 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_85 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_96_96;
#line 1357 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_101_101 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_97_97;
#line 1357 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_102_102 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_98_98;
#line 1357 "equiv_type.m"
      }
#line 1356 "equiv_type.m"
    else
#line 1337 "equiv_type.m"
      {
#line 1337 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1337 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1338 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1340 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1341 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_263_263;
#line 1341 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1338 "equiv_type.m"
        {
#line 1338 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_96_96, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_85, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_97_97, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_101_101, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_98_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_102_102);
        }
#line 1341 "equiv_type.m"
        {
#line 1341 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_263_263, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1341 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1341 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_263_263);
#line 1340 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1344 "equiv_type.m"
          {
#line 1344 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1345 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1344 "equiv_type.m"
          }
#line 1340 "equiv_type.m"
        else
#line 1347 "equiv_type.m"
          {
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_106_106;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_107_107;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_109_109;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_110_110;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_113_113;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_115_115;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_118_118;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_126_126;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_127_127;
#line 1347 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_131_131;

#line 1347 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_107_107, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1349 "equiv_type.m"
            }
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_109_109, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1349 "equiv_type.m"
            }
#line 1350 "equiv_type.m"
            {
#line 1350 "equiv_type.m"
              parse_tree__equiv_type__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_118_118, 0) = ((MR_Box) (parse_tree__equiv_type__V_107_107));
#line 1350 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[16])));
#line 1350 "equiv_type.m"
            }
#line 1350 "equiv_type.m"
            {
#line 1350 "equiv_type.m"
              parse_tree__equiv_type__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_115_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[27])));
#line 1350 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_115_115, 1) = ((MR_Box) (parse_tree__equiv_type__V_118_118));
#line 1350 "equiv_type.m"
            }
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_113_113, 1) = ((MR_Box) (parse_tree__equiv_type__V_115_115));
#line 1349 "equiv_type.m"
            }
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_110_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[26])));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_110_110, 1) = ((MR_Box) (parse_tree__equiv_type__V_113_113));
#line 1349 "equiv_type.m"
            }
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_110_110));
#line 1349 "equiv_type.m"
            }
#line 1349 "equiv_type.m"
            {
#line 1349 "equiv_type.m"
              parse_tree__equiv_type__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__V_107_107));
#line 1349 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1349 "equiv_type.m"
            }
#line 1348 "equiv_type.m"
            {
#line 1348 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25])));
#line 1348 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 1348 "equiv_type.m"
            }
#line 1352 "equiv_type.m"
            {
#line 1352 "equiv_type.m"
              parse_tree__equiv_type__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1352 "equiv_type.m"
            }
#line 1352 "equiv_type.m"
            {
#line 1352 "equiv_type.m"
              parse_tree__equiv_type__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_126_126, 0) = ((MR_Box) (parse_tree__equiv_type__V_127_127));
#line 1352 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1352 "equiv_type.m"
            }
#line 1352 "equiv_type.m"
            {
#line 1352 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1352 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_126_126));
#line 1352 "equiv_type.m"
            }
#line 1353 "equiv_type.m"
            {
#line 1353 "equiv_type.m"
              parse_tree__equiv_type__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_131_131, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1353 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "equiv_type.m"
            }
#line 1353 "equiv_type.m"
            {
#line 1353 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1353 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1353 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_131_131));
#line 1353 "equiv_type.m"
            }
#line 1354 "equiv_type.m"
            {
#line 1354 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1354 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1354 "equiv_type.m"
            }
#line 1347 "equiv_type.m"
          }
#line 1337 "equiv_type.m"
      }
#line 7968 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1363 "equiv_type.m"
    {
#line 1363 "equiv_type.m"
      parse_tree__equiv_type__V_135_135 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_254_254, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1364 "equiv_type.m"
    {
#line 1364 "equiv_type.m"
      parse_tree__equiv_type__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_137_137, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1364 "equiv_type.m"
    }
#line 1362 "equiv_type.m"
    {
#line 1362 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_29, parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_135_135, parse_tree__equiv_type__Context_27, (MR_Integer) 0, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_137_137, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_86, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_87, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_101_101, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_139_139, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_91, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1366 "equiv_type.m"
    {
#line 1366 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_103_103, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7993 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7995 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7997 "parse_tree.equiv_type.c"
        {
#line 1375 "equiv_type.m"
          {
#line 1375 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_254_254, (MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1374 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_92 = parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141;
#line 1426 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1427 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8010 "parse_tree.equiv_type.c"
        }
#line 8012 "parse_tree.equiv_type.c"
      else
#line 8014 "parse_tree.equiv_type.c"
        {
#line 8016 "parse_tree.equiv_type.c"
          MR_Word parse_tree__equiv_type__LeftOverExtraTypes_64;
#line 8018 "parse_tree.equiv_type.c"
          MR_Word parse_tree__equiv_type__LeftOverExtraModes_65;

#line 1379 "equiv_type.m"
          {
#line 1379 "equiv_type.m"
            parse_tree__equiv_type__pair_extra_types_and_modes_5_p_0(parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesAndModes_60, &parse_tree__equiv_type__LeftOverExtraTypes_64, &parse_tree__equiv_type__LeftOverExtraModes_65);
          }
#line 1384 "equiv_type.m"
          if ((parse_tree__equiv_type__LeftOverExtraTypes_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1384 "equiv_type.m"
            if ((parse_tree__equiv_type__LeftOverExtraModes_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1382 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_92 = parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141;
#line 1384 "equiv_type.m"
            else
#line 1385 "equiv_type.m"
              {
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtorInfo_257_257 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtorInfo_258_258;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtorInfo_259_259;
#line 1385 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__NumExtraTypes_68;
#line 1385 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__NumExtraModes_69;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces2_70;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg2_71;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec2_72;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_195_195;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_196_196;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_197_197;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_198_198;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_199_199;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_202_202;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_204_204;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_207_207;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_210_210;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_213_213;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_214_214;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_215_215;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_216_216;
#line 1385 "equiv_type.m"
                MR_String parse_tree__equiv_type__V_217_217;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_220_220;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_223_223;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_224_224;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_225_225;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_226_226;
#line 1385 "equiv_type.m"
                MR_String parse_tree__equiv_type__V_227_227;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_233_233;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_234_234;
#line 1385 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_238_238;
#line 1394 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv1_V_217_217;
#line 1396 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv2_V_227_227;

#line 1387 "equiv_type.m"
                {
#line 1387 "equiv_type.m"
                  mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_257_257, parse_tree__equiv_type__ExtraTypes_50, &parse_tree__equiv_type__NumExtraTypes_68);
                }
#line 8108 "parse_tree.equiv_type.c"
                parse_tree__equiv_type__TypeCtorInfo_258_258 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1388 "equiv_type.m"
                {
#line 1388 "equiv_type.m"
                  mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_258_258, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__NumExtraModes_69);
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_196_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_196_196, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_196_196, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1390 "equiv_type.m"
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_198_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_198_198, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_198_198, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1390 "equiv_type.m"
                }
#line 1393 "equiv_type.m"
                {
#line 1393 "equiv_type.m"
                  parse_tree__equiv_type__V_214_214 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_214_214, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_214_214, 1) = ((MR_Box) (parse_tree__equiv_type__NumExtraModes_69));
#line 1393 "equiv_type.m"
                }
#line 8145 "parse_tree.equiv_type.c"
                parse_tree__equiv_type__TypeCtorInfo_259_259 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1394 "equiv_type.m"
                {
#line 1394 "equiv_type.m"
                  parse_tree__equiv_type__conv1_V_217_217 = parse_tree__error_util__choose_number_3_f_0(parse_tree__equiv_type__TypeCtorInfo_258_258, parse_tree__equiv_type__TypeCtorInfo_259_259, parse_tree__equiv_type__ExtraModes_54, ((MR_Box) ((MR_String) "mode")), ((MR_Box) ((MR_String) "modes")));
                }
#line 1394 "equiv_type.m"
                parse_tree__equiv_type__V_217_217 = ((MR_String) parse_tree__equiv_type__conv1_V_217_217);
#line 1394 "equiv_type.m"
                {
#line 1394 "equiv_type.m"
                  parse_tree__equiv_type__V_216_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_216_216, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1394 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_216_216, 1) = ((MR_Box) (parse_tree__equiv_type__V_217_217));
#line 1394 "equiv_type.m"
                }
#line 1395 "equiv_type.m"
                {
#line 1395 "equiv_type.m"
                  parse_tree__equiv_type__V_224_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_224_224, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_224_224, 1) = ((MR_Box) (parse_tree__equiv_type__NumExtraTypes_68));
#line 1395 "equiv_type.m"
                }
#line 1396 "equiv_type.m"
                {
#line 1396 "equiv_type.m"
                  parse_tree__equiv_type__conv2_V_227_227 = parse_tree__error_util__choose_number_3_f_0(parse_tree__equiv_type__TypeCtorInfo_257_257, parse_tree__equiv_type__TypeCtorInfo_259_259, parse_tree__equiv_type__ExtraTypes_50, ((MR_Box) ((MR_String) "type.")), ((MR_Box) ((MR_String) "types.")));
                }
#line 1396 "equiv_type.m"
                parse_tree__equiv_type__V_227_227 = ((MR_String) parse_tree__equiv_type__conv2_V_227_227);
#line 1396 "equiv_type.m"
                {
#line 1396 "equiv_type.m"
                  parse_tree__equiv_type__V_226_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_226_226, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1396 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_226_226, 1) = ((MR_Box) (parse_tree__equiv_type__V_227_227));
#line 1396 "equiv_type.m"
                }
#line 1396 "equiv_type.m"
                {
#line 1396 "equiv_type.m"
                  parse_tree__equiv_type__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1396 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_225_225, 0) = ((MR_Box) (parse_tree__equiv_type__V_226_226));
#line 1396 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])));
#line 1396 "equiv_type.m"
                }
#line 1395 "equiv_type.m"
                {
#line 1395 "equiv_type.m"
                  parse_tree__equiv_type__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_223_223, 0) = ((MR_Box) (parse_tree__equiv_type__V_224_224));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_223_223, 1) = ((MR_Box) (parse_tree__equiv_type__V_225_225));
#line 1395 "equiv_type.m"
                }
#line 1395 "equiv_type.m"
                {
#line 1395 "equiv_type.m"
                  parse_tree__equiv_type__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_220_220, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1395 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_220_220, 1) = ((MR_Box) (parse_tree__equiv_type__V_223_223));
#line 1395 "equiv_type.m"
                }
#line 1394 "equiv_type.m"
                {
#line 1394 "equiv_type.m"
                  parse_tree__equiv_type__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_215_215, 0) = ((MR_Box) (parse_tree__equiv_type__V_216_216));
#line 1394 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_215_215, 1) = ((MR_Box) (parse_tree__equiv_type__V_220_220));
#line 1394 "equiv_type.m"
                }
#line 1393 "equiv_type.m"
                {
#line 1393 "equiv_type.m"
                  parse_tree__equiv_type__V_213_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_213_213, 0) = ((MR_Box) (parse_tree__equiv_type__V_214_214));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_213_213, 1) = ((MR_Box) (parse_tree__equiv_type__V_215_215));
#line 1393 "equiv_type.m"
                }
#line 1393 "equiv_type.m"
                {
#line 1393 "equiv_type.m"
                  parse_tree__equiv_type__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_210_210, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1393 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_210_210, 1) = ((MR_Box) (parse_tree__equiv_type__V_213_213));
#line 1393 "equiv_type.m"
                }
#line 1392 "equiv_type.m"
                {
#line 1392 "equiv_type.m"
                  parse_tree__equiv_type__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_207_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1392 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_207_207, 1) = ((MR_Box) (parse_tree__equiv_type__V_210_210));
#line 1392 "equiv_type.m"
                }
#line 1391 "equiv_type.m"
                {
#line 1391 "equiv_type.m"
                  parse_tree__equiv_type__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_204_204, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1391 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_204_204, 1) = ((MR_Box) (parse_tree__equiv_type__V_207_207));
#line 1391 "equiv_type.m"
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_202_202, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_202_202, 1) = ((MR_Box) (parse_tree__equiv_type__V_204_204));
#line 1390 "equiv_type.m"
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_199_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[26])));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_199_199, 1) = ((MR_Box) (parse_tree__equiv_type__V_202_202));
#line 1390 "equiv_type.m"
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_197_197, 0) = ((MR_Box) (parse_tree__equiv_type__V_198_198));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_197_197, 1) = ((MR_Box) (parse_tree__equiv_type__V_199_199));
#line 1390 "equiv_type.m"
                }
#line 1390 "equiv_type.m"
                {
#line 1390 "equiv_type.m"
                  parse_tree__equiv_type__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_195_195, 0) = ((MR_Box) (parse_tree__equiv_type__V_196_196));
#line 1390 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_195_195, 1) = ((MR_Box) (parse_tree__equiv_type__V_197_197));
#line 1390 "equiv_type.m"
                }
#line 1389 "equiv_type.m"
                {
#line 1389 "equiv_type.m"
                  parse_tree__equiv_type__Pieces2_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25])));
#line 1389 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_70, 1) = ((MR_Box) (parse_tree__equiv_type__V_195_195));
#line 1389 "equiv_type.m"
                }
#line 1397 "equiv_type.m"
                {
#line 1397 "equiv_type.m"
                  parse_tree__equiv_type__V_234_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1397 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_234_234, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_70));
#line 1397 "equiv_type.m"
                }
#line 1397 "equiv_type.m"
                {
#line 1397 "equiv_type.m"
                  parse_tree__equiv_type__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1397 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_233_233, 0) = ((MR_Box) (parse_tree__equiv_type__V_234_234));
#line 1397 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1397 "equiv_type.m"
                }
#line 1397 "equiv_type.m"
                {
#line 1397 "equiv_type.m"
                  parse_tree__equiv_type__Msg2_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1397 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_71, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1397 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_71, 1) = ((MR_Box) (parse_tree__equiv_type__V_233_233));
#line 1397 "equiv_type.m"
                }
#line 1398 "equiv_type.m"
                {
#line 1398 "equiv_type.m"
                  parse_tree__equiv_type__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_238_238, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_71));
#line 1398 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_238_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1398 "equiv_type.m"
                }
#line 1398 "equiv_type.m"
                {
#line 1398 "equiv_type.m"
                  parse_tree__equiv_type__Spec2_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1398 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1398 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1398 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_72, 2) = ((MR_Box) (parse_tree__equiv_type__V_238_238));
#line 1398 "equiv_type.m"
                }
#line 1399 "equiv_type.m"
                {
#line 1399 "equiv_type.m"
                  MR_Word base;
#line 1399 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1399 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_Specs_92 = base;
#line 1399 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_72));
#line 1399 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141));
#line 1399 "equiv_type.m"
                }
#line 1385 "equiv_type.m"
              }
#line 1384 "equiv_type.m"
          else
#line 1384 "equiv_type.m"
          if ((parse_tree__equiv_type__LeftOverExtraModes_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "equiv_type.m"
            {
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorInfo_260_260 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorInfo_261_261;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorInfo_262_262;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_147_147;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_148_148;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_149_149;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_150_150;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_151_151;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_154_154;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_159_159;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_162_162;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_165_165;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_166_166;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_167_167;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_168_168;
#line 1401 "equiv_type.m"
              MR_String parse_tree__equiv_type__V_169_169;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_172_172;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_175_175;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_176_176;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_177_177;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_178_178;
#line 1401 "equiv_type.m"
              MR_String parse_tree__equiv_type__V_179_179;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_185_185;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_186_186;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_190_190;
#line 1401 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__NumExtraTypes_249;
#line 1401 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__NumExtraModes_250;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Pieces2_251;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Msg2_252;
#line 1401 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Spec2_253;
#line 1410 "equiv_type.m"
              MR_Box parse_tree__equiv_type__conv3_V_169_169;
#line 1412 "equiv_type.m"
              MR_Box parse_tree__equiv_type__conv4_V_179_179;

#line 1403 "equiv_type.m"
              {
#line 1403 "equiv_type.m"
                mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_260_260, parse_tree__equiv_type__ExtraTypes_50, &parse_tree__equiv_type__NumExtraTypes_249);
              }
#line 8465 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__TypeCtorInfo_261_261 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 1404 "equiv_type.m"
              {
#line 1404 "equiv_type.m"
                mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_261_261, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__NumExtraModes_250);
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_148_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_148_148, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_148_148, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1406 "equiv_type.m"
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_150_150 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_150_150, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_150_150, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1406 "equiv_type.m"
              }
#line 1409 "equiv_type.m"
              {
#line 1409 "equiv_type.m"
                parse_tree__equiv_type__V_166_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_166_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_166_166, 1) = ((MR_Box) (parse_tree__equiv_type__NumExtraTypes_249));
#line 1409 "equiv_type.m"
              }
#line 8502 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__TypeCtorInfo_262_262 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1410 "equiv_type.m"
              {
#line 1410 "equiv_type.m"
                parse_tree__equiv_type__conv3_V_169_169 = parse_tree__error_util__choose_number_3_f_0(parse_tree__equiv_type__TypeCtorInfo_260_260, parse_tree__equiv_type__TypeCtorInfo_262_262, parse_tree__equiv_type__ExtraTypes_50, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
              }
#line 1410 "equiv_type.m"
              parse_tree__equiv_type__V_169_169 = ((MR_String) parse_tree__equiv_type__conv3_V_169_169);
#line 1410 "equiv_type.m"
              {
#line 1410 "equiv_type.m"
                parse_tree__equiv_type__V_168_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1410 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1410 "equiv_type.m"
              }
#line 1411 "equiv_type.m"
              {
#line 1411 "equiv_type.m"
                parse_tree__equiv_type__V_176_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_176_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_176_176, 1) = ((MR_Box) (parse_tree__equiv_type__NumExtraModes_250));
#line 1411 "equiv_type.m"
              }
#line 1412 "equiv_type.m"
              {
#line 1412 "equiv_type.m"
                parse_tree__equiv_type__conv4_V_179_179 = parse_tree__error_util__choose_number_3_f_0(parse_tree__equiv_type__TypeCtorInfo_261_261, parse_tree__equiv_type__TypeCtorInfo_262_262, parse_tree__equiv_type__ExtraModes_54, ((MR_Box) ((MR_String) "mode.")), ((MR_Box) ((MR_String) "modes.")));
              }
#line 1412 "equiv_type.m"
              parse_tree__equiv_type__V_179_179 = ((MR_String) parse_tree__equiv_type__conv4_V_179_179);
#line 1412 "equiv_type.m"
              {
#line 1412 "equiv_type.m"
                parse_tree__equiv_type__V_178_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_178_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1412 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_178_178, 1) = ((MR_Box) (parse_tree__equiv_type__V_179_179));
#line 1412 "equiv_type.m"
              }
#line 1412 "equiv_type.m"
              {
#line 1412 "equiv_type.m"
                parse_tree__equiv_type__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_177_177, 0) = ((MR_Box) (parse_tree__equiv_type__V_178_178));
#line 1412 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[12])));
#line 1412 "equiv_type.m"
              }
#line 1411 "equiv_type.m"
              {
#line 1411 "equiv_type.m"
                parse_tree__equiv_type__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_175_175, 0) = ((MR_Box) (parse_tree__equiv_type__V_176_176));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_175_175, 1) = ((MR_Box) (parse_tree__equiv_type__V_177_177));
#line 1411 "equiv_type.m"
              }
#line 1411 "equiv_type.m"
              {
#line 1411 "equiv_type.m"
                parse_tree__equiv_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1411 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_172_172, 1) = ((MR_Box) (parse_tree__equiv_type__V_175_175));
#line 1411 "equiv_type.m"
              }
#line 1410 "equiv_type.m"
              {
#line 1410 "equiv_type.m"
                parse_tree__equiv_type__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_167_167, 0) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1410 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_167_167, 1) = ((MR_Box) (parse_tree__equiv_type__V_172_172));
#line 1410 "equiv_type.m"
              }
#line 1409 "equiv_type.m"
              {
#line 1409 "equiv_type.m"
                parse_tree__equiv_type__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_165_165, 0) = ((MR_Box) (parse_tree__equiv_type__V_166_166));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_165_165, 1) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1409 "equiv_type.m"
              }
#line 1409 "equiv_type.m"
              {
#line 1409 "equiv_type.m"
                parse_tree__equiv_type__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_162_162, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1409 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_162_162, 1) = ((MR_Box) (parse_tree__equiv_type__V_165_165));
#line 1409 "equiv_type.m"
              }
#line 1408 "equiv_type.m"
              {
#line 1408 "equiv_type.m"
                parse_tree__equiv_type__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_159_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1408 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_159_159, 1) = ((MR_Box) (parse_tree__equiv_type__V_162_162));
#line 1408 "equiv_type.m"
              }
#line 1407 "equiv_type.m"
              {
#line 1407 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1407 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (parse_tree__equiv_type__V_159_159));
#line 1407 "equiv_type.m"
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_154_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_154_154, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1406 "equiv_type.m"
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_151_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[26])));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_151_151, 1) = ((MR_Box) (parse_tree__equiv_type__V_154_154));
#line 1406 "equiv_type.m"
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_149_149, 0) = ((MR_Box) (parse_tree__equiv_type__V_150_150));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_149_149, 1) = ((MR_Box) (parse_tree__equiv_type__V_151_151));
#line 1406 "equiv_type.m"
              }
#line 1406 "equiv_type.m"
              {
#line 1406 "equiv_type.m"
                parse_tree__equiv_type__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_147_147, 0) = ((MR_Box) (parse_tree__equiv_type__V_148_148));
#line 1406 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_147_147, 1) = ((MR_Box) (parse_tree__equiv_type__V_149_149));
#line 1406 "equiv_type.m"
              }
#line 1405 "equiv_type.m"
              {
#line 1405 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25])));
#line 1405 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_251, 1) = ((MR_Box) (parse_tree__equiv_type__V_147_147));
#line 1405 "equiv_type.m"
              }
#line 1413 "equiv_type.m"
              {
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_186_186, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_251));
#line 1413 "equiv_type.m"
              }
#line 1413 "equiv_type.m"
              {
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1413 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_185_185, 0) = ((MR_Box) (parse_tree__equiv_type__V_186_186));
#line 1413 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1413 "equiv_type.m"
              }
#line 1413 "equiv_type.m"
              {
#line 1413 "equiv_type.m"
                parse_tree__equiv_type__Msg2_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_252, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1413 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_252, 1) = ((MR_Box) (parse_tree__equiv_type__V_185_185));
#line 1413 "equiv_type.m"
              }
#line 1414 "equiv_type.m"
              {
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_190_190, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_252));
#line 1414 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "equiv_type.m"
              }
#line 1414 "equiv_type.m"
              {
#line 1414 "equiv_type.m"
                parse_tree__equiv_type__Spec2_253 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_253, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 1414 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_253, 2) = ((MR_Box) (parse_tree__equiv_type__V_190_190));
#line 1414 "equiv_type.m"
              }
#line 1415 "equiv_type.m"
              {
#line 1415 "equiv_type.m"
                MR_Word base;
#line 1415 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_92 = base;
#line 1415 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_253));
#line 1415 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141));
#line 1415 "equiv_type.m"
              }
#line 1401 "equiv_type.m"
            }
#line 1384 "equiv_type.m"
          else
#line 1417 "equiv_type.m"
            {
#line 1420 "equiv_type.m"
              {
#line 1420 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_pred_type\'/23", (MR_String) "both types and modes left over");
#line 1420 "equiv_type.m"
                return;
              }
#line 1417 "equiv_type.m"
            }
#line 1428 "equiv_type.m"
          if ((*parse_tree__equiv_type__STATE_VARIABLE_Specs_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1425 "equiv_type.m"
            {
#line 1426 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1427 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1425 "equiv_type.m"
            }
#line 1428 "equiv_type.m"
          else
#line 1429 "equiv_type.m"
            {
#line 1432 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1433 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 1429 "equiv_type.m"
            }
#line 8777 "parse_tree.equiv_type.c"
        }
#line 8779 "parse_tree.equiv_type.c"
    else
#line 8781 "parse_tree.equiv_type.c"
      {
#line 1370 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1369 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_92 = parse_tree__equiv_type__STATE_VARIABLE_Specs_141_141;
#line 1432 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1433 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8791 "parse_tree.equiv_type.c"
      }
#line 1438 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1436 "equiv_type.m"
      {
#line 1437 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1436 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_89 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_139_139;
#line 1436 "equiv_type.m"
      }
#line 1438 "equiv_type.m"
    else
#line 1439 "equiv_type.m"
      {
#line 1439 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_83;
#line 1439 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_244_244;
#line 1439 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_245_245;
#line 1439 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_246_246;

#line 1440 "equiv_type.m"
        {
#line 1440 "equiv_type.m"
          parse_tree__equiv_type__V_244_244 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1441 "equiv_type.m"
        {
#line 1441 "equiv_type.m"
          parse_tree__equiv_type__V_246_246 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_254_254, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1441 "equiv_type.m"
        {
#line 1441 "equiv_type.m"
          parse_tree__equiv_type__V_245_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_245_245, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1441 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_245_245, 1) = ((MR_Box) (parse_tree__equiv_type__V_246_246));
#line 1441 "equiv_type.m"
        }
#line 1440 "equiv_type.m"
        {
#line 1440 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1440 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_83, 0) = ((MR_Box) (parse_tree__equiv_type__V_244_244));
#line 1440 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_83, 1) = ((MR_Box) (parse_tree__equiv_type__V_245_245));
#line 1440 "equiv_type.m"
        }
#line 1442 "equiv_type.m"
        {
#line 1442 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_139_139, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_89);
        }
#line 1443 "equiv_type.m"
        {
#line 1443 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_254_254, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1439 "equiv_type.m"
      }
#line 1329 "equiv_type.m"
  }
#line 1314 "equiv_type.m"
}

#line 1214 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1214 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1214 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55)
#line 1214 "equiv_type.m"
{
#line 1222 "equiv_type.m"
  {
#line 1222 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1222 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1228 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_35;
#line 1228 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_36;
#line 1228 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_37;
#line 1228 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1229 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvTypeBody_33;
#line 1229 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_34;
#line 1229 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_EqvTypeBody_33;

#line 1223 "equiv_type.m"
    {
#line 1223 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1223 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1224 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1223 "equiv_type.m"
    else
#line 1226 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1229 "equiv_type.m"
    {
#line 1229 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__TypeEqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_EqvTypeBody_33);
    }
#line 1229 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1229 "equiv_type.m"
      {
#line 1229 "equiv_type.m"
        parse_tree__equiv_type__EqvTypeBody_33 = ((MR_Word) parse_tree__equiv_type__conv0_EqvTypeBody_33);
#line 1229 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1229 "equiv_type.m"
      }
#line 1229 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1229 "equiv_type.m"
      {
#line 1230 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 0)));
#line 1230 "equiv_type.m"
        parse_tree__equiv_type__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 1)));
#line 1230 "equiv_type.m"
        parse_tree__equiv_type__Body0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 2)));
#line 1240 "equiv_type.m"
        {
#line 1240 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50, parse_tree__equiv_type__EqvVarSet_34, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_37);
        }
#line 1242 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
#line 1229 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1243 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1229 "equiv_type.m"
      }
#line 1228 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1246 "equiv_type.m"
      {
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_38;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_39;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_40;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_41;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_42;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1246 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1256 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1631 "equiv_type.m"
        if ((parse_tree__equiv_type__MaybeRecord_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1631 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1631 "equiv_type.m"
        else
#line 1633 "equiv_type.m"
          {
#line 1633 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Visibility_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRecord_19, (MR_Integer) 0)));
#line 1633 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1634 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1635 "equiv_type.m"
            {
#line 1635 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0(parse_tree__equiv_type__Visibility_78, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1633 "equiv_type.m"
          }
#line 1248 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
#line 9027 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 1249 "equiv_type.m"
        {
#line 1249 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_35, parse_tree__equiv_type__Renaming_37, &parse_tree__equiv_type__Args_38);
        }
#line 1250 "equiv_type.m"
        {
#line 1250 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_37, parse_tree__equiv_type__Body0_36, &parse_tree__equiv_type__Body1_39);
        }
#line 1251 "equiv_type.m"
        {
#line 1251 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1252 "equiv_type.m"
        {
#line 1252 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1252 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_40));
#line 1252 "equiv_type.m"
        }
#line 1252 "equiv_type.m"
        {
#line 1252 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1254 "equiv_type.m"
        {
#line 1254 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_38, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_41);
        }
#line 1255 "equiv_type.m"
        {
#line 1255 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_41, parse_tree__equiv_type__Body1_39, &parse_tree__equiv_type__Body_42);
        }
#line 1257 "equiv_type.m"
        {
#line 1257 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1257 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1257 "equiv_type.m"
        }
#line 1256 "equiv_type.m"
        {
#line 1256 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_19, parse_tree__equiv_type__TypeEqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_42, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__STATE_VARIABLE_Circ_49, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_51, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1246 "equiv_type.m"
      }
#line 1228 "equiv_type.m"
    else
#line 1267 "equiv_type.m"
      {
#line 1264 "equiv_type.m"
#line 1264 "equiv_type.m"
        switch (parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46) {
#line 1264 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "equiv_type.m"
          case (MR_Integer) 0:
#line 1266 "equiv_type.m"
            *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1264 "equiv_type.m"
            break;
#line 1264 "equiv_type.m"
          case (MR_Integer) 1:
#line 1261 "equiv_type.m"
            {
#line 1261 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1262 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1263 "equiv_type.m"
              {
#line 1263 "equiv_type.m"
                MR_Word base;
#line 1263 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "equiv_type.m"
                *parse_tree__equiv_type__Type_26 = base;
#line 1263 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_44));
#line 1263 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1263 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1263 "equiv_type.m"
              }
#line 1261 "equiv_type.m"
            }
#line 1264 "equiv_type.m"
            break;
#line 1264 "equiv_type.m"
        }
#line 1268 "equiv_type.m"
        {
#line 1268 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48, parse_tree__equiv_type__STATE_VARIABLE_Circ_49);
        }
#line 1267 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1267 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1267 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_51 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50;
#line 1267 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46;
#line 1267 "equiv_type.m"
      }
#line 1222 "equiv_type.m"
  }
#line 1214 "equiv_type.m"
}

#line 1121 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1121 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1121 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1121 "equiv_type.m"
{
#line 1131 "equiv_type.m"
  {
#line 1131 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1131 "equiv_type.m"
#line 1131 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) {
#line 1131 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1131 "equiv_type.m"
      case (MR_Integer) 0:
#line 1131 "equiv_type.m"
        {
#line 1132 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1133 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1134 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1131 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1131 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1131 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1131 "equiv_type.m"
        }
#line 1131 "equiv_type.m"
        break;
#line 1131 "equiv_type.m"
      case (MR_Integer) 1:
#line 1136 "equiv_type.m"
        {
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1136 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1136 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1137 "equiv_type.m"
          {
#line 1137 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1140 "equiv_type.m"
          {
#line 1140 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1141 "equiv_type.m"
          {
#line 1141 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1141 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1141 "equiv_type.m"
          }
#line 1142 "equiv_type.m"
          {
#line 1142 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
          }
#line 1136 "equiv_type.m"
        }
#line 1131 "equiv_type.m"
        break;
#line 1131 "equiv_type.m"
      case (MR_Integer) 2:
#line 1146 "equiv_type.m"
        {
#line 1147 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1148 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1149 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1146 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1146 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1146 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1146 "equiv_type.m"
        }
#line 1131 "equiv_type.m"
        break;
#line 1131 "equiv_type.m"
      case (MR_Integer) 3:
#line 1131 "equiv_type.m"
#line 1131 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) {
#line 1131 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1131 "equiv_type.m"
          case (MR_Integer) 0:
#line 1177 "equiv_type.m"
            {
#line 1177 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1177 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1177 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_82;

#line 1178 "equiv_type.m"
              {
#line 1178 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1184 "equiv_type.m"
#line 1184 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1184 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1184 "equiv_type.m"
                case (MR_Integer) 0:
#line 1186 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1184 "equiv_type.m"
                  break;
#line 1184 "equiv_type.m"
                case (MR_Integer) 1:
#line 1183 "equiv_type.m"
                  {
#line 1183 "equiv_type.m"
                    MR_Word base;
#line 1183 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1183 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1183 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1183 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1183 "equiv_type.m"
                  }
#line 1184 "equiv_type.m"
                  break;
#line 1184 "equiv_type.m"
              }
#line 1177 "equiv_type.m"
            }
#line 1131 "equiv_type.m"
            break;
#line 1131 "equiv_type.m"
          case (MR_Integer) 1:
#line 1151 "equiv_type.m"
            {
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_38;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1151 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1152 "equiv_type.m"
              {
#line 1152 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
              }
#line 1163 "equiv_type.m"
              if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "equiv_type.m"
                {
#line 1165 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "equiv_type.m"
                  *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1167 "equiv_type.m"
                  *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1164 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1164 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1164 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1164 "equiv_type.m"
                }
#line 1163 "equiv_type.m"
              else
#line 1156 "equiv_type.m"
                {
#line 1156 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1156 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret_41;
#line 1156 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1156 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1157 "equiv_type.m"
                  {
#line 1157 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1160 "equiv_type.m"
                  {
#line 1160 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1160 "equiv_type.m"
                  }
#line 1161 "equiv_type.m"
                  {
#line 1161 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                  }
#line 1162 "equiv_type.m"
                  {
#line 1162 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                  }
#line 1156 "equiv_type.m"
                }
#line 1172 "equiv_type.m"
#line 1172 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1172 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "equiv_type.m"
                case (MR_Integer) 0:
#line 1174 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1172 "equiv_type.m"
                  break;
#line 1172 "equiv_type.m"
                case (MR_Integer) 1:
#line 1171 "equiv_type.m"
                  {
#line 1171 "equiv_type.m"
                    MR_Word base;
#line 1171 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1171 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1171 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1171 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1171 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1171 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1171 "equiv_type.m"
                  }
#line 1172 "equiv_type.m"
                  break;
#line 1172 "equiv_type.m"
              }
#line 1151 "equiv_type.m"
            }
#line 1131 "equiv_type.m"
            break;
#line 1131 "equiv_type.m"
          case (MR_Integer) 2:
#line 1189 "equiv_type.m"
            {
#line 1189 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1189 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1189 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1189 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1190 "equiv_type.m"
              {
#line 1190 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1196 "equiv_type.m"
#line 1196 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1196 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1196 "equiv_type.m"
                case (MR_Integer) 0:
#line 1198 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1196 "equiv_type.m"
                  break;
#line 1196 "equiv_type.m"
                case (MR_Integer) 1:
#line 1195 "equiv_type.m"
                  {
#line 1195 "equiv_type.m"
                    MR_Word base;
#line 1195 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1195 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1195 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1195 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1195 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1195 "equiv_type.m"
                  }
#line 1196 "equiv_type.m"
                  break;
#line 1196 "equiv_type.m"
              }
#line 1189 "equiv_type.m"
            }
#line 1131 "equiv_type.m"
            break;
#line 1131 "equiv_type.m"
          case (MR_Integer) 3:
#line 1201 "equiv_type.m"
            {
#line 1201 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1201 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType_46;
#line 1201 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1202 "equiv_type.m"
              {
#line 1202 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1208 "equiv_type.m"
#line 1208 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1208 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1208 "equiv_type.m"
                case (MR_Integer) 0:
#line 1210 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1208 "equiv_type.m"
                  break;
#line 1208 "equiv_type.m"
                case (MR_Integer) 1:
#line 1207 "equiv_type.m"
                  {
#line 1207 "equiv_type.m"
                    MR_Word base;
#line 1207 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1207 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1207 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1207 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1207 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1207 "equiv_type.m"
                  }
#line 1208 "equiv_type.m"
                  break;
#line 1208 "equiv_type.m"
              }
#line 1201 "equiv_type.m"
            }
#line 1131 "equiv_type.m"
            break;
#line 1131 "equiv_type.m"
        }
#line 1131 "equiv_type.m"
        break;
#line 1131 "equiv_type.m"
    }
#line 1131 "equiv_type.m"
  }
#line 1121 "equiv_type.m"
}

#line 1108 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1108 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1108 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1108 "equiv_type.m"
{
#line 1114 "equiv_type.m"
  {
#line 1114 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1115 "equiv_type.m"
    {
#line 1115 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1114 "equiv_type.m"
  }
#line 1108 "equiv_type.m"
}

#line 1093 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1093 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg)
#line 1093 "equiv_type.m"
{
#line 1093 "equiv_type.m"
  {
#line 1093 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1093 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;

#line 1093 "equiv_type.m"
    {
#line 1093 "equiv_type.m"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1093__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))));
    }
#line 1093 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1093 "equiv_type.m"
  }
#line 1093 "equiv_type.m"
}

#line 1070 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1070 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1070 "equiv_type.m"
{
#line 1077 "equiv_type.m"
  {
#line 1077 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1077 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "equiv_type.m"
      {
#line 1077 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1078 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1078 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1078 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1078 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1077 "equiv_type.m"
      }
#line 1077 "equiv_type.m"
    else
#line 1081 "equiv_type.m"
      {
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1081 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65;
#line 1083 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1083 "equiv_type.m"
        {
#line 1083 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1087 "equiv_type.m"
#line 1087 "equiv_type.m"
        switch (MR_tag((MR_Word) parse_tree__equiv_type__Width_42)) {
#line 1087 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1087 "equiv_type.m"
          case (MR_Integer) 0:
#line 1087 "equiv_type.m"
#line 1087 "equiv_type.m"
            switch (MR_unmkbody(parse_tree__equiv_type__Width_42)) {
#line 1087 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1087 "equiv_type.m"
              case (MR_Integer) 0:
#line 1086 "equiv_type.m"
                {
#line 1086 "equiv_type.m"
                }
#line 1087 "equiv_type.m"
                break;
#line 1087 "equiv_type.m"
              case (MR_Integer) 1:
#line 1088 "equiv_type.m"
                {
#line 1088 "equiv_type.m"
                }
#line 1087 "equiv_type.m"
                break;
#line 1087 "equiv_type.m"
            }
#line 1087 "equiv_type.m"
            break;
#line 1087 "equiv_type.m"
          case (MR_Integer) 1:
#line 1087 "equiv_type.m"
          case (MR_Integer) 2:
#line 1092 "equiv_type.m"
            {
#line 1092 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 1093 "equiv_type.m"
              {
#line 1093 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1093 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1));
#line 1093 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1093 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 3) = ((MR_Box) (parse_tree__equiv_type__Type0_41));
#line 1093 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 4) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1093 "equiv_type.m"
              }
#line 1093 "equiv_type.m"
              {
#line 1093 "equiv_type.m"
                mercury__require__expect_4_p_0(parse_tree__equiv_type__V_61_61, (MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
              }
#line 1092 "equiv_type.m"
            }
#line 1087 "equiv_type.m"
            break;
#line 1087 "equiv_type.m"
        }
#line 1096 "equiv_type.m"
        {
#line 1096 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1096 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1096 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1096 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1096 "equiv_type.m"
        }
#line 1097 "equiv_type.m"
        {
#line 1097 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1098 "equiv_type.m"
        {
#line 1098 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1080 "equiv_type.m"
        {
#line 1080 "equiv_type.m"
          MR_Word base;
#line 1080 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1080 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1080 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1080 "equiv_type.m"
        }
#line 1081 "equiv_type.m"
      }
#line 1077 "equiv_type.m"
  }
#line 1070 "equiv_type.m"
}

#line 1027 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1027 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1027 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1027 "equiv_type.m"
{
#line 1034 "equiv_type.m"
  {
#line 1034 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1034 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "equiv_type.m"
      {
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1035 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1034 "equiv_type.m"
      }
#line 1034 "equiv_type.m"
    else
#line 1038 "equiv_type.m"
      {
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_42;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types_45;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1038 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1039 "equiv_type.m"
        {
#line 1039 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_34, &parse_tree__equiv_type__Type_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1042 "equiv_type.m"
        {
#line 1042 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__HeadVar__7_7, parse_tree__equiv_type__ContainsCirc_44);
        }
#line 1043 "equiv_type.m"
        {
#line 1043 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Types0_35, &parse_tree__equiv_type__Types_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1046 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1047 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1047 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1045 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1050 "equiv_type.m"
          {
#line 1050 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1051 "equiv_type.m"
            {
#line 1051 "equiv_type.m"
              MR_Word base;
#line 1051 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1051 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_42));
#line 1051 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_45));
#line 1051 "equiv_type.m"
            }
#line 1050 "equiv_type.m"
          }
#line 1045 "equiv_type.m"
        else
#line 1053 "equiv_type.m"
          {
#line 1053 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1054 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1053 "equiv_type.m"
          }
#line 1038 "equiv_type.m"
      }
#line 1034 "equiv_type.m"
  }
#line 1027 "equiv_type.m"
}

#line 1016 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 1016 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 1016 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 1016 "equiv_type.m"
{
#line 1023 "equiv_type.m"
  {
#line 1023 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1024 "equiv_type.m"
    {
#line 1024 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 1023 "equiv_type.m"
  }
#line 1016 "equiv_type.m"
}

#line 1006 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 1006 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 1006 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 1006 "equiv_type.m"
{
#line 1012 "equiv_type.m"
  {
#line 1012 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1013 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1013 "equiv_type.m"
    {
#line 1013 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Types_0_20, parse_tree__equiv_type__STATE_VARIABLE_Types_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 1012 "equiv_type.m"
  }
#line 1006 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
}

#line 986 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32)
#line 986 "equiv_type.m"
{
#line 992 "equiv_type.m"
  {
#line 992 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_87;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 0)));
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 1)));
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 2)));
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 3)));
#line 992 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 4)));
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 5)));
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs_24;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_26;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 992 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_74_74;
#line 1067 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32;

#line 1067 "equiv_type.m"
    {
#line 1067 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__CtorArgs0_21, &parse_tree__equiv_type__CtorArgs_24, (MR_Integer) 0, &parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 874 "equiv_type.m"
    }
#line 10242 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_87, parse_tree__equiv_type__TypeCtorInfo_38_87, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_74_74, parse_tree__equiv_type__Constraints0_19, &parse_tree__equiv_type__Constraints_26, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
    }
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28);
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30);
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
#line 998 "equiv_type.m"
    {
#line 998 "equiv_type.m"
      MR_Word base;
#line 998 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 998 "equiv_type.m"
      *parse_tree__equiv_type__Ctor_14 = base;
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_18));
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_26));
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__CtorName_20));
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__CtorArgs_24));
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Arity_22));
#line 998 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Ctxt_23));
#line 998 "equiv_type.m"
    }
#line 992 "equiv_type.m"
  }
#line 986 "equiv_type.m"
}

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 983 "equiv_type.m"
{
#line 983 "equiv_type.m"
  {
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 983 "equiv_type.m"
  }
#line 983 "equiv_type.m"
}

#line 976 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 976 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 976 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 976 "equiv_type.m"
{
#line 982 "equiv_type.m"
  {
#line 982 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 982 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 982 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 983 "equiv_type.m"
    }
#line 10392 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 982 "equiv_type.m"
  }
#line 976 "equiv_type.m"
}

#line 956 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 956 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 956 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 956 "equiv_type.m"
{
#line 961 "equiv_type.m"
  {
#line 961 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 961 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 961 "equiv_type.m"
      {
#line 961 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 962 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 961 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 961 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 961 "equiv_type.m"
      }
#line 961 "equiv_type.m"
    else
#line 964 "equiv_type.m"
      {
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 964 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1115 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 963 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 963 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1115 "equiv_type.m"
        {
#line 1115 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 964 "equiv_type.m"
        {
#line 964 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 964 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 964 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 964 "equiv_type.m"
        }
#line 967 "equiv_type.m"
        {
#line 967 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 964 "equiv_type.m"
        {
#line 964 "equiv_type.m"
          MR_Word base;
#line 964 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 964 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 964 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 964 "equiv_type.m"
        }
#line 964 "equiv_type.m"
      }
#line 961 "equiv_type.m"
  }
#line 956 "equiv_type.m"
}

#line 914 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 914 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 914 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 914 "equiv_type.m"
{
#line 925 "equiv_type.m"
  {
#line 925 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 925 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 925 "equiv_type.m"
      {
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_37;
#line 925 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 926 "equiv_type.m"
        {
#line 926 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__PredName_20, parse_tree__equiv_type__PredOrFunc_21, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_22, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_26, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_23, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 931 "equiv_type.m"
        {
#line 931 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 932 "equiv_type.m"
        {
#line 932 "equiv_type.m"
          MR_Word base;
#line 932 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 932 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_21));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_37));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_27));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_28));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 932 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 932 "equiv_type.m"
        }
#line 925 "equiv_type.m"
      }
#line 925 "equiv_type.m"
    else
#line 937 "equiv_type.m"
      {
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 937 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_66;
#line 937 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 939 "equiv_type.m"
        {
#line 939 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 938 "equiv_type.m"
        {
#line 938 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__PredName_60, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_61, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__MaybeDetism0_62, &parse_tree__equiv_type__MaybeDetism_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 945 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 944 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 945 "equiv_type.m"
        else
#line 947 "equiv_type.m"
          {
#line 947 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 949 "equiv_type.m"
        {
#line 949 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 950 "equiv_type.m"
        {
#line 950 "equiv_type.m"
          MR_Word base;
#line 950 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 950 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_60));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_66));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_63));
#line 950 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 950 "equiv_type.m"
        }
#line 937 "equiv_type.m"
      }
#line 925 "equiv_type.m"
  }
#line 914 "equiv_type.m"
}

#line 911 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 911 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 911 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 911 "equiv_type.m"
{
#line 911 "equiv_type.m"
  {
#line 911 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 911 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 911 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 911 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 911 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 911 "equiv_type.m"
    {
#line 911 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 911 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 911 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 911 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 911 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 911 "equiv_type.m"
  }
#line 911 "equiv_type.m"
}

#line 901 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 901 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 901 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 901 "equiv_type.m"
{
#line 909 "equiv_type.m"
  {
#line 909 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 910 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 910 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 910 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 911 "equiv_type.m"
    {
#line 911 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_12));
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_13));
#line 911 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__InstEqvMap_14));
#line 911 "equiv_type.m"
    }
#line 10855 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 910 "equiv_type.m"
    {
#line 910 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[8], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_15, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 910 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 910 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 910 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 909 "equiv_type.m"
  }
#line 901 "equiv_type.m"
}

#line 887 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 887 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 887 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 887 "equiv_type.m"
{
#line 893 "equiv_type.m"
  {
#line 893 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 893 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 893 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 893 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 1024 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 1024 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 1024 "equiv_type.m"
    {
#line 1024 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 897 "equiv_type.m"
    {
#line 897 "equiv_type.m"
      MR_Word base;
#line 897 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 897 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 897 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 897 "equiv_type.m"
    }
#line 893 "equiv_type.m"
  }
#line 887 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
}

#line 866 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 866 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 866 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 866 "equiv_type.m"
{
#line 872 "equiv_type.m"
  {
#line 872 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 872 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 874 "equiv_type.m"
    }
#line 11047 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17, parse_tree__equiv_type__STATE_VARIABLE_Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 873 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 872 "equiv_type.m"
  }
#line 866 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
}

#line 852 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 852 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 852 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 852 "equiv_type.m"
{
#line 858 "equiv_type.m"
  {
#line 858 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 858 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 874 "equiv_type.m"
    }
#line 11189 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 862 "equiv_type.m"
    {
#line 862 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 864 "equiv_type.m"
    {
#line 864 "equiv_type.m"
      MR_Word base;
#line 864 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 864 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 864 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 864 "equiv_type.m"
    }
#line 858 "equiv_type.m"
  }
#line 852 "equiv_type.m"
}

#line 831 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 831 "equiv_type.m"
{
#line 837 "equiv_type.m"
  {
#line 837 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 837 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "equiv_type.m"
      {
#line 837 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 837 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 837 "equiv_type.m"
      }
#line 837 "equiv_type.m"
    else
#line 840 "equiv_type.m"
      {
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 840 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 841 "equiv_type.m"
        {
#line 841 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 843 "equiv_type.m"
        {
#line 843 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 839 "equiv_type.m"
        {
#line 839 "equiv_type.m"
          MR_Word base;
#line 839 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 839 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 839 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 839 "equiv_type.m"
        }
#line 840 "equiv_type.m"
      }
#line 837 "equiv_type.m"
  }
#line 831 "equiv_type.m"
}

#line 790 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 790 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 790 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 790 "equiv_type.m"
{
#line 800 "equiv_type.m"
  {
#line 800 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 800 "equiv_type.m"
#line 800 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) {
#line 800 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 800 "equiv_type.m"
      case (MR_Integer) 0:
#line 806 "equiv_type.m"
        {
#line 806 "equiv_type.m"
          MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 806 "equiv_type.m"
          MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 806 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 806 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_66;

#line 807 "equiv_type.m"
          {
#line 807 "equiv_type.m"
            parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 809 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 810 "equiv_type.m"
          {
#line 810 "equiv_type.m"
            MR_Word base;
#line 810 "equiv_type.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 810 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 810 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 810 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 810 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 810 "equiv_type.m"
          }
#line 806 "equiv_type.m"
        }
#line 800 "equiv_type.m"
        break;
#line 800 "equiv_type.m"
      case (MR_Integer) 1:
#line 800 "equiv_type.m"
        {
#line 800 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 800 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 800 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 801 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 801 "equiv_type.m"
          {
#line 801 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 801 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "equiv_type.m"
          }
#line 801 "equiv_type.m"
          {
#line 801 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 804 "equiv_type.m"
          {
#line 804 "equiv_type.m"
            MR_Word base;
#line 804 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 804 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 804 "equiv_type.m"
          }
#line 800 "equiv_type.m"
        }
#line 800 "equiv_type.m"
        break;
#line 800 "equiv_type.m"
      case (MR_Integer) 2:
#line 826 "equiv_type.m"
        {
#line 827 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 828 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 826 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 826 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 826 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 826 "equiv_type.m"
        }
#line 800 "equiv_type.m"
        break;
#line 800 "equiv_type.m"
      case (MR_Integer) 3:
#line 800 "equiv_type.m"
#line 800 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) {
#line 800 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 800 "equiv_type.m"
          case (MR_Integer) 0:
#line 812 "equiv_type.m"
            {
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_50_50;
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 812 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 815 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_37_37;

#line 815 "equiv_type.m"
              {
#line 815 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 815 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 815 "equiv_type.m"
              }
#line 815 "equiv_type.m"
              {
#line 815 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
              }
#line 818 "equiv_type.m"
              {
#line 818 "equiv_type.m"
                parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__InstEqvMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
              }
#line 820 "equiv_type.m"
              {
#line 820 "equiv_type.m"
                parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 820 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 820 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 820 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 820 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 820 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 820 "equiv_type.m"
              }
#line 822 "equiv_type.m"
              {
#line 822 "equiv_type.m"
                MR_Word base;
#line 822 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 822 "equiv_type.m"
                *parse_tree__equiv_type__TypeDefn_19 = base;
#line 822 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 822 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 822 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 822 "equiv_type.m"
              }
#line 812 "equiv_type.m"
            }
#line 800 "equiv_type.m"
            break;
#line 800 "equiv_type.m"
          case (MR_Integer) 1:
#line 826 "equiv_type.m"
            {
#line 827 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 828 "equiv_type.m"
              *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 826 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 826 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 826 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 826 "equiv_type.m"
            }
#line 800 "equiv_type.m"
            break;
#line 800 "equiv_type.m"
        }
#line 800 "equiv_type.m"
        break;
#line 800 "equiv_type.m"
    }
#line 800 "equiv_type.m"
  }
#line 790 "equiv_type.m"
}

#line 706 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_32,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_33,
#line 706 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_34,
#line 706 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35)
#line 706 "equiv_type.m"
{
#line 713 "equiv_type.m"
  {
#line 713 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 713 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OrigType_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OrigInst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 8)));
#line 713 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 9)));
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_27;
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_28;
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_31;
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_36_36;
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_37_37;
#line 713 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_70_70;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_29;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_30;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;

#line 716 "equiv_type.m"
    {
#line 716 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_27 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1115 "equiv_type.m"
    {
#line 1115 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_28, &parse_tree__equiv_type___TypeChanged_29, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__TVarSet0_27, &parse_tree__equiv_type___TVarSet_30, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_32, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_36_36, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_34, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_37_37);
    }
#line 1277 "equiv_type.m"
    {
#line 1277 "equiv_type.m"
      parse_tree__equiv_type__V_70_70 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1277 "equiv_type.m"
    {
#line 1277 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__InstEqvMap_12, parse_tree__equiv_type__V_70_70, parse_tree__equiv_type__Inst0_21, &parse_tree__equiv_type__Inst_31, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_36_36, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_37_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35);
    }
#line 721 "equiv_type.m"
    {
#line 721 "equiv_type.m"
      MR_Word base;
#line 721 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 721 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__OrigType_18));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Type_28));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__OrigInst_20));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Inst_31));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InitValue_22));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Attrs_23));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Varset_24));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 721 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 721 "equiv_type.m"
    }
#line 713 "equiv_type.m"
  }
#line 706 "equiv_type.m"
}

#line 689 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_info_11_p_0(
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26,
#line 689 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28,
#line 689 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 689 "equiv_type.m"
{
#line 696 "equiv_type.m"
  {
#line 696 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 696 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_20;
#line 696 "equiv_type.m"
    MR_Word parse_tree__equiv_type__QualName_21;
#line 696 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_22;
#line 696 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_23;
#line 696 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_24;
#line 696 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_31_31;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_36_36;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_37_37;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_39_39;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_40_40;
#line 697 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 697 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_42_42;

#line 696 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__MutName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 697 "equiv_type.m"
    parse_tree__equiv_type__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 698 "equiv_type.m"
    {
#line 698 "equiv_type.m"
      parse_tree__equiv_type__QualName_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_21, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_20));
#line 698 "equiv_type.m"
    }
#line 699 "equiv_type.m"
    {
#line 699 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, &parse_tree__equiv_type__ExpandedItems0_22);
    }
#line 701 "equiv_type.m"
    {
#line 701 "equiv_type.m"
      parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__Info0_16, parse_tree__equiv_type__Info_17, parse_tree__equiv_type__ExpandedItems0_22, &parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 703 "equiv_type.m"
    {
#line 703 "equiv_type.m"
      parse_tree__equiv_type__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_21));
#line 703 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_31_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 703 "equiv_type.m"
    }
#line 703 "equiv_type.m"
    {
#line 703 "equiv_type.m"
      parse_tree__equiv_type__ItemId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 0) = ((MR_Box) ((MR_Integer) 8));
#line 703 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_24, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 703 "equiv_type.m"
    }
#line 704 "equiv_type.m"
    {
#line 704 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_24, parse_tree__equiv_type__ExpandedItems_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_26);
    }
#line 696 "equiv_type.m"
  }
#line 689 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
}

#line 521 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 521 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 521 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 521 "equiv_type.m"
{
#line 528 "equiv_type.m"
  {
#line 528 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 528 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 528 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 528 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 531 "equiv_type.m"
    {
#line 531 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Vars_22, &parse_tree__equiv_type__Arity_29);
    }
#line 532 "equiv_type.m"
    {
#line 532 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 874 "equiv_type.m"
    }
#line 11995 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 873 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 542 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "equiv_type.m"
      {
#line 539 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 541 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 538 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 538 "equiv_type.m"
      }
#line 542 "equiv_type.m"
    else
#line 543 "equiv_type.m"
      {
#line 543 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 543 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 544 "equiv_type.m"
        {
#line 544 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__Methods0_36, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 547 "equiv_type.m"
        {
#line 547 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 547 "equiv_type.m"
        }
#line 543 "equiv_type.m"
      }
#line 549 "equiv_type.m"
    {
#line 549 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 549 "equiv_type.m"
    }
#line 549 "equiv_type.m"
    {
#line 549 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 549 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 549 "equiv_type.m"
    }
#line 550 "equiv_type.m"
    {
#line 550 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 551 "equiv_type.m"
    {
#line 551 "equiv_type.m"
      MR_Word base;
#line 551 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 551 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Vars_22));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__FunDeps_24));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 551 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 551 "equiv_type.m"
    }
#line 528 "equiv_type.m"
  }
#line 521 "equiv_type.m"
}

#line 454 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 454 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 454 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 454 "equiv_type.m"
{
#line 461 "equiv_type.m"
  {
#line 461 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 461 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_41;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 461 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 461 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 461 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 466 "equiv_type.m"
    {
#line 466 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 468 "equiv_type.m"
    {
#line 468 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__PredOrFunc_22, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_23, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_28, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_24, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_25, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__MaybeDetism0_26, &parse_tree__equiv_type__MaybeDetism_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 474 "equiv_type.m"
    {
#line 474 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_22);
    }
#line 475 "equiv_type.m"
    {
#line 475 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 476 "equiv_type.m"
    {
#line 476 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_22, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 477 "equiv_type.m"
    {
#line 477 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 477 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 477 "equiv_type.m"
    }
#line 477 "equiv_type.m"
    {
#line 477 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 477 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 477 "equiv_type.m"
    }
#line 478 "equiv_type.m"
    {
#line 478 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 479 "equiv_type.m"
    {
#line 479 "equiv_type.m"
      MR_Word base;
#line 479 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 479 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_22));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_41));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Origin_27));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_29));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_30));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 479 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 479 "equiv_type.m"
    }
#line 461 "equiv_type.m"
  }
#line 454 "equiv_type.m"
}

#line 417 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 417 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 417 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 417 "equiv_type.m"
{
#line 424 "equiv_type.m"
  {
#line 424 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 424 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 424 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 424 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 427 "equiv_type.m"
    {
#line 427 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22, &parse_tree__equiv_type__Arity_27);
    }
#line 428 "equiv_type.m"
    {
#line 428 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 431 "equiv_type.m"
    {
#line 431 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 431 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 431 "equiv_type.m"
    }
#line 430 "equiv_type.m"
    {
#line 430 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_23, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_24, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 445 "equiv_type.m"
#line 445 "equiv_type.m"
    switch (parse_tree__equiv_type__ContainsCirc_30) {
#line 445 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 445 "equiv_type.m"
      case (MR_Integer) 0:
#line 447 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "equiv_type.m"
        break;
#line 445 "equiv_type.m"
      case (MR_Integer) 1:
#line 435 "equiv_type.m"
        {
#line 435 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_33_33;

#line 435 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_23)) == (MR_mktag((MR_Integer) 1)));
#line 435 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 435 "equiv_type.m"
            {
#line 435 "equiv_type.m"
              parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_23, (MR_Integer) 0)));
#line 438 "equiv_type.m"
              {
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces_34;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg_35;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec_36;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_47_47;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_48_48;
#line 438 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_49_49;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_56_56;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_57_57;
#line 438 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_61_61;

#line 437 "equiv_type.m"
                {
#line 437 "equiv_type.m"
                  parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22);
                }
#line 437 "equiv_type.m"
                {
#line 437 "equiv_type.m"
                  parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 437 "equiv_type.m"
                }
#line 437 "equiv_type.m"
                {
#line 437 "equiv_type.m"
                  parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 437 "equiv_type.m"
                }
#line 437 "equiv_type.m"
                {
#line 437 "equiv_type.m"
                  parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 437 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[14])));
#line 437 "equiv_type.m"
                }
#line 436 "equiv_type.m"
                {
#line 436 "equiv_type.m"
                  parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[24])));
#line 436 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 436 "equiv_type.m"
                }
#line 439 "equiv_type.m"
                {
#line 439 "equiv_type.m"
                  parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 439 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 439 "equiv_type.m"
                }
#line 439 "equiv_type.m"
                {
#line 439 "equiv_type.m"
                  parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 439 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 439 "equiv_type.m"
                }
#line 439 "equiv_type.m"
                {
#line 439 "equiv_type.m"
                  parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 439 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 439 "equiv_type.m"
                }
#line 440 "equiv_type.m"
                {
#line 440 "equiv_type.m"
                  parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 440 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "equiv_type.m"
                }
#line 440 "equiv_type.m"
                {
#line 440 "equiv_type.m"
                  parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 440 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 440 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 440 "equiv_type.m"
                }
#line 441 "equiv_type.m"
                {
#line 441 "equiv_type.m"
                  MR_Word base;
#line 441 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "equiv_type.m"
                  *parse_tree__equiv_type__Specs_20 = base;
#line 441 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 441 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "equiv_type.m"
                }
#line 438 "equiv_type.m"
              }
#line 435 "equiv_type.m"
            }
#line 435 "equiv_type.m"
          else
#line 443 "equiv_type.m"
            {
#line 443 "equiv_type.m"
              {
#line 443 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 443 "equiv_type.m"
                return;
              }
#line 443 "equiv_type.m"
            }
#line 435 "equiv_type.m"
        }
#line 445 "equiv_type.m"
        break;
#line 445 "equiv_type.m"
    }
#line 449 "equiv_type.m"
    {
#line 449 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 449 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 449 "equiv_type.m"
    }
#line 449 "equiv_type.m"
    {
#line 449 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 449 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 449 "equiv_type.m"
    }
#line 450 "equiv_type.m"
    {
#line 450 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 451 "equiv_type.m"
    {
#line 451 "equiv_type.m"
      MR_Word base;
#line 451 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 451 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypeVars_22));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 451 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 451 "equiv_type.m"
    }
#line 424 "equiv_type.m"
  }
#line 417 "equiv_type.m"
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
#line 412 "equiv_type.m"
        {
#line 413 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 414 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 412 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 412 "equiv_type.m"
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
      case (MR_Integer) 2:
#line 338 "equiv_type.m"
        {
#line 362 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 363 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 338 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 338 "equiv_type.m"
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
#line 401 "equiv_type.m"
            {
#line 404 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 405 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 401 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 401 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 1:
#line 365 "equiv_type.m"
            {
#line 365 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 365 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl_25;

#line 366 "equiv_type.m"
              {
#line 366 "equiv_type.m"
                parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemPredDecl0_24, &parse_tree__equiv_type__ItemPredDecl_25, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 369 "equiv_type.m"
              {
#line 369 "equiv_type.m"
                MR_Word base;
#line 369 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 369 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 369 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_25));
#line 369 "equiv_type.m"
              }
#line 365 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 2:
#line 371 "equiv_type.m"
            {
#line 371 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 371 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl_27;

#line 372 "equiv_type.m"
              {
#line 372 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemModeDecl0_26, &parse_tree__equiv_type__ItemModeDecl_27, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 375 "equiv_type.m"
              {
#line 375 "equiv_type.m"
                MR_Word base;
#line 375 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 375 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 375 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_27));
#line 375 "equiv_type.m"
              }
#line 371 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 3:
#line 377 "equiv_type.m"
            {
#line 377 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 377 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma_29;

#line 378 "equiv_type.m"
              {
#line 378 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemPragma0_28, &parse_tree__equiv_type__ItemPragma_29, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 381 "equiv_type.m"
              {
#line 381 "equiv_type.m"
                MR_Word base;
#line 381 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 381 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 381 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_29));
#line 381 "equiv_type.m"
              }
#line 377 "equiv_type.m"
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
#line 412 "equiv_type.m"
            {
#line 413 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 414 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 412 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42;
#line 412 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44;
#line 412 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 5:
#line 383 "equiv_type.m"
            {
#line 383 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 383 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass_31;

#line 384 "equiv_type.m"
              {
#line 384 "equiv_type.m"
                parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeClass0_30, &parse_tree__equiv_type__ItemTypeClass_31, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 387 "equiv_type.m"
              {
#line 387 "equiv_type.m"
                MR_Word base;
#line 387 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 387 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 387 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_31));
#line 387 "equiv_type.m"
              }
#line 383 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 6:
#line 389 "equiv_type.m"
            {
#line 389 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance0_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 389 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance_33;

#line 390 "equiv_type.m"
              {
#line 390 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemInstance0_32, &parse_tree__equiv_type__ItemInstance_33, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 393 "equiv_type.m"
              {
#line 393 "equiv_type.m"
                MR_Word base;
#line 393 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 393 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 393 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_33));
#line 393 "equiv_type.m"
              }
#line 389 "equiv_type.m"
            }
#line 332 "equiv_type.m"
            break;
#line 332 "equiv_type.m"
          case (MR_Integer) 9:
#line 395 "equiv_type.m"
            {
#line 395 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 395 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_35;

#line 396 "equiv_type.m"
              {
#line 396 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemMutable0_34, &parse_tree__equiv_type__ItemMutable_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_45, parse_tree__equiv_type__Specs_20);
              }
#line 399 "equiv_type.m"
              {
#line 399 "equiv_type.m"
                MR_Word base;
#line 399 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 399 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 399 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_35));
#line 399 "equiv_type.m"
              }
#line 395 "equiv_type.m"
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
#line 219 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_32;
#line 219 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Args_33;
#line 219 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Body_34;
#line 219 "equiv_type.m"
            MR_Word parse_tree__equiv_type__VarSet_35;
#line 220 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemTypeDefn_31;
#line 220 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_43_43;
#line 221 "equiv_type.m"
            MR_Word parse_tree__equiv_type___Context_36;
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
                parse_tree__equiv_type___Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 4)));
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
#line 219 "equiv_type.m"
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
#line 219 "equiv_type.m"
            else
#line 227 "equiv_type.m"
              {
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_54;
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_55;
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_56;
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_57;
#line 228 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemInstDefn_40;
#line 228 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 229 "equiv_type.m"
                MR_Word parse_tree__equiv_type___IFTC_41;
#line 229 "equiv_type.m"
                MR_Word parse_tree__equiv_type___Context_49;
#line 229 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_50;

#line 228 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 228 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 228 "equiv_type.m"
                  {
#line 228 "equiv_type.m"
                    parse_tree__equiv_type__ItemInstDefn_40 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__Name_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 0)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 1)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type___IFTC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 2)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 3)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 4)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type___Context_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 5)));
#line 229 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 6)));
#line 230 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 230 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 230 "equiv_type.m"
                      parse_tree__equiv_type__Body_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, (MR_Integer) 0)));
#line 228 "equiv_type.m"
                  }
#line 227 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 232 "equiv_type.m"
                  {
#line 232 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstId_42;
#line 232 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;
#line 232 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_53;

#line 232 "equiv_type.m"
                    {
#line 232 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__Args_55, &parse_tree__equiv_type__Arity_53);
                    }
#line 233 "equiv_type.m"
                    {
#line 233 "equiv_type.m"
                      parse_tree__equiv_type__InstId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 0) = ((MR_Box) (parse_tree__equiv_type__Name_54));
#line 233 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_53));
#line 233 "equiv_type.m"
                    }
#line 234 "equiv_type.m"
                    {
#line 234 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_57));
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Args_55));
#line 234 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (parse_tree__equiv_type__Body_56));
#line 234 "equiv_type.m"
                    }
#line 234 "equiv_type.m"
                    {
#line 234 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_42)), ((MR_Box) (parse_tree__equiv_type__V_47_47)), parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21);
                    }
#line 232 "equiv_type.m"
                  }
#line 227 "equiv_type.m"
                else
#line 227 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 227 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 227 "equiv_type.m"
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

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 983 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 983 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 983 "equiv_type.m"
{
#line 983 "equiv_type.m"
  {
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 983 "equiv_type.m"
  }
#line 983 "equiv_type.m"
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
#line 972 "equiv_type.m"
  {
#line 972 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 972 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 983 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 974 "equiv_type.m"
    {
#line 974 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 983 "equiv_type.m"
    }
#line 13484 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 983 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 983 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 972 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 874 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 874 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 874 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 874 "equiv_type.m"
{
#line 874 "equiv_type.m"
  {
#line 874 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 874 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 874 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 874 "equiv_type.m"
  }
#line 874 "equiv_type.m"
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
#line 848 "equiv_type.m"
  {
#line 848 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 848 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 873 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 862 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 859 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 859 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) (parse_tree__equiv_type__V_18_18));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 874 "equiv_type.m"
    }
#line 13635 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 873 "equiv_type.m"
    {
#line 873 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 873 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 862 "equiv_type.m"
    {
#line 862 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__V_18_18, parse_tree__equiv_type__TypeEqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 864 "equiv_type.m"
    {
#line 864 "equiv_type.m"
      MR_Word base;
#line 864 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 864 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 864 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 864 "equiv_type.m"
    }
#line 848 "equiv_type.m"
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
#line 1002 "equiv_type.m"
  {
#line 1002 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1002 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1013 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 1013 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 1004 "equiv_type.m"
    {
#line 1004 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1013 "equiv_type.m"
    {
#line 1013 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15, parse_tree__equiv_type__STATE_VARIABLE_Typess_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 1002 "equiv_type.m"
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
#line 1103 "equiv_type.m"
  {
#line 1103 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1103 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1115 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1106 "equiv_type.m"
    {
#line 1106 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1115 "equiv_type.m"
    {
#line 1115 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1103 "equiv_type.m"
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
#line 13964 "parse_tree.equiv_type.c"
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
#line 14012 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_111_111 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 14014 "parse_tree.equiv_type.c"
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
