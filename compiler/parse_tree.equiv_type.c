/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0;

#line 178 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1;

#line 181 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2;

#line 184 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3];

#line 187 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3];

#line 190 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3];

#line 193 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 196 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 199 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 202 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 205 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 208 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 211 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 214 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 217 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 219 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 222 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 225 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 227 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 229 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 232 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 235 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 237 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 240 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 243 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 245 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 247 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 250 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 253 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 255 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 258 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 261 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 263 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 265 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 268 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 271 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 273 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 276 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 279 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 281 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 283 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 286 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 289 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 291 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 294 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 297 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 299 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 301 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 304 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 307 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 309 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 312 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 315 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 317 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 319 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 1350 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1350 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_24,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1212 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1202 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 675 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 644 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 476 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 408 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 1313 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1313__1_1_f_0(
#line 1313 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1306 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1306__1_1_f_0(
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 1009 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1009__1_2_p_0(
#line 1009 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1009 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44);

#line 159 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 159 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 159 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 157 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 157 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 157 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 116 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 116 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 116 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 150 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 150 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 150 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1494 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1490 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1469 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1464 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1448 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1431 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1428 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1421 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1313 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1313 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1313 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1306 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1306 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1306 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1127 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);

#line 1036 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1023 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1009 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1009 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg);

#line 986 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 945 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 934 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 923 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 903 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32);

#line 900 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 893 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 873 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 831 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 828 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 820 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 806 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 786 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 772 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 751 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 710 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 626 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 444 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 378 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 341 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 280 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_15,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 257 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_4,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 217 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks_12_p_0(
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_5,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_6,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_7,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_8,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_11,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_12);

#line 178 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 178 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 178 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 163 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_blocks_5_p_0(
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 900 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);


static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[34][2];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_2[6][3];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_3[3][13];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_4[1][14];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_6[2][12];




static /* final */ const MR_Box parse_tree__equiv_type_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[2]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__equiv_type_scalar_common_1[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type after \140with_type\140."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotations are incompatible."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the \140with_type\140 and \140with_inst\140"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected higher order "))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "inst after \140with_inst\140."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[9])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: circular equivalence type"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In type declaration for"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: expected higher order"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32]))),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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
    ((MR_Box) (&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0)),
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2088 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2097 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2105 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 2113 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2122 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2130 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2139 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2148 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2156 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2164 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2172 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2179 "parse_tree.equiv_type.c"
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

#line 2194 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2199 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2208 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2213 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2218 "parse_tree.equiv_type.c"
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

#line 2235 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2243 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2251 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2259 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2266 "parse_tree.equiv_type.c"
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

#line 2281 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2286 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2295 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2300 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2305 "parse_tree.equiv_type.c"
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

#line 2322 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0 = {
  (MR_String) "eqv_type_out_of_module",
  (MR_Integer) 0
};

#line 2328 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1 = {
  (MR_String) "eqv_type_in_interface",
  (MR_Integer) 1
};

#line 2334 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2 = {
  (MR_String) "eqv_type_in_implementation",
  (MR_Integer) 2
};

#line 2340 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2
};

#line 2347 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0[3] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_2,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_eqv_type_location_0_0
};

#line 2354 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2361 "parse_tree.equiv_type.c"
const MR_TypeCtorInfo_Struct parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001)),
  ((MR_Box) (parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001)),
  (MR_String) "parse_tree.equiv_type",
  (MR_String) "eqv_type_location",
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_eqv_type_location_0 },
  {     parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_eqv_type_location_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_location_0
};

#line 2378 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2387 "parse_tree.equiv_type.c"
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

#line 2404 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2410 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2416 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2422 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2428 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2434 "parse_tree.equiv_type.c"
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

#line 2451 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2460 "parse_tree.equiv_type.c"
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

#line 2477 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2480 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2482 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2484 "parse_tree.equiv_type.c"
{
#line 2486 "parse_tree.equiv_type.c"
  {
#line 2488 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2491 "parse_tree.equiv_type.c"
    {
#line 2493 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2496 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2498 "parse_tree.equiv_type.c"
  }
#line 2500 "parse_tree.equiv_type.c"
}

#line 2503 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2506 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2508 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2510 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2512 "parse_tree.equiv_type.c"
{
#line 2514 "parse_tree.equiv_type.c"
  {
#line 2516 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2519 "parse_tree.equiv_type.c"
    {
#line 2521 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2524 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2526 "parse_tree.equiv_type.c"
  }
#line 2528 "parse_tree.equiv_type.c"
}

#line 2531 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2534 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2536 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2538 "parse_tree.equiv_type.c"
{
#line 2540 "parse_tree.equiv_type.c"
  {
#line 2542 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2545 "parse_tree.equiv_type.c"
    {
#line 2547 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2550 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2552 "parse_tree.equiv_type.c"
  }
#line 2554 "parse_tree.equiv_type.c"
}

#line 2557 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2560 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2562 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2564 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2566 "parse_tree.equiv_type.c"
{
#line 2568 "parse_tree.equiv_type.c"
  {
#line 2570 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2573 "parse_tree.equiv_type.c"
    {
#line 2575 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2578 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2580 "parse_tree.equiv_type.c"
  }
#line 2582 "parse_tree.equiv_type.c"
}

#line 2585 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0_10001(
#line 2588 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2590 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2592 "parse_tree.equiv_type.c"
{
#line 2594 "parse_tree.equiv_type.c"
  {
#line 2596 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2599 "parse_tree.equiv_type.c"
    {
#line 2601 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_location_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2604 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2606 "parse_tree.equiv_type.c"
  }
#line 2608 "parse_tree.equiv_type.c"
}

#line 2611 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0_10001(
#line 2614 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2616 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2618 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2620 "parse_tree.equiv_type.c"
{
#line 2622 "parse_tree.equiv_type.c"
  {
#line 2624 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2627 "parse_tree.equiv_type.c"
    {
#line 2629 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_location_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2632 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2634 "parse_tree.equiv_type.c"
  }
#line 2636 "parse_tree.equiv_type.c"
}

#line 2639 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 2642 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2644 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2646 "parse_tree.equiv_type.c"
{
#line 2648 "parse_tree.equiv_type.c"
  {
#line 2650 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2653 "parse_tree.equiv_type.c"
    {
#line 2655 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2658 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2660 "parse_tree.equiv_type.c"
  }
#line 2662 "parse_tree.equiv_type.c"
}

#line 2665 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 2668 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2670 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2672 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2674 "parse_tree.equiv_type.c"
{
#line 2676 "parse_tree.equiv_type.c"
  {
#line 2678 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2681 "parse_tree.equiv_type.c"
    {
#line 2683 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2686 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2688 "parse_tree.equiv_type.c"
  }
#line 2690 "parse_tree.equiv_type.c"
}

#line 2693 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 2696 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2698 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2700 "parse_tree.equiv_type.c"
{
#line 2702 "parse_tree.equiv_type.c"
  {
#line 2704 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2707 "parse_tree.equiv_type.c"
    {
#line 2709 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2712 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2714 "parse_tree.equiv_type.c"
  }
#line 2716 "parse_tree.equiv_type.c"
}

#line 2719 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 2722 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2724 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2726 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2728 "parse_tree.equiv_type.c"
{
#line 2730 "parse_tree.equiv_type.c"
  {
#line 2732 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2735 "parse_tree.equiv_type.c"
    {
#line 2737 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2740 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2742 "parse_tree.equiv_type.c"
  }
#line 2744 "parse_tree.equiv_type.c"
}

#line 2747 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 2750 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2752 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2754 "parse_tree.equiv_type.c"
{
#line 2756 "parse_tree.equiv_type.c"
  {
#line 2758 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2761 "parse_tree.equiv_type.c"
    {
#line 2763 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2766 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2768 "parse_tree.equiv_type.c"
  }
#line 2770 "parse_tree.equiv_type.c"
}

#line 2773 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 2776 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2778 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2780 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2782 "parse_tree.equiv_type.c"
{
#line 2784 "parse_tree.equiv_type.c"
  {
#line 2786 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2789 "parse_tree.equiv_type.c"
    {
#line 2791 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____type_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2794 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2796 "parse_tree.equiv_type.c"
  }
#line 2798 "parse_tree.equiv_type.c"
}

#line 1350 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_20,
#line 1350 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_21,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_22,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_23,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_24,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1350 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1350 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1350 "equiv_type.m"
{
#line 1364 "equiv_type.m"
  {
#line 1364 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1364 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1414 "equiv_type.m"
      {
#line 1415 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1416 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1417 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1418 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1414 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1414 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1414 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1414 "equiv_type.m"
      }
#line 1364 "equiv_type.m"
    else
#line 1364 "equiv_type.m"
      {
#line 1364 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1364 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1364 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1368 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1368 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1368 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1370 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1365 "equiv_type.m"
        {
#line 1365 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__InstEqvMap_24, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1368 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1368 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1368 "equiv_type.m"
          {
#line 1368 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1368 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1369 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1369 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1369 "equiv_type.m"
              {
#line 1369 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1370 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1372 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1371 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1372 "equiv_type.m"
                else
#line 1372 "equiv_type.m"
                  {
#line 1372 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1372 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1372 "equiv_type.m"
                  }
#line 1369 "equiv_type.m"
              }
#line 1368 "equiv_type.m"
          }
#line 1389 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1375 "equiv_type.m"
          {
#line 1375 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1375 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1375 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1375 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1375 "equiv_type.m"
            {
#line 1375 "equiv_type.m"
              MR_Word base;
#line 1375 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = base;
#line 1375 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1375 "equiv_type.m"
            }
#line 1376 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1377 "equiv_type.m"
            {
#line 1377 "equiv_type.m"
              MR_Word base;
#line 1377 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1377 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1377 "equiv_type.m"
            }
#line 1378 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1382 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1381 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1382 "equiv_type.m"
            else
#line 1383 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1385 "equiv_type.m"
            {
#line 1385 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1386 "equiv_type.m"
            {
#line 1386 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1386 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_21));
#line 1386 "equiv_type.m"
            }
#line 1385 "equiv_type.m"
            {
#line 1385 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1385 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1385 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1385 "equiv_type.m"
            }
#line 1387 "equiv_type.m"
            {
#line 1387 "equiv_type.m"
              recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1388 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1375 "equiv_type.m"
          }
#line 1389 "equiv_type.m"
        else
#line 1390 "equiv_type.m"
          {
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1390 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1390 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1390 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1391 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1394 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1396 "equiv_type.m"
#line 1396 "equiv_type.m"
            switch (parse_tree__equiv_type__DeclType_23) {
#line 1396 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1396 "equiv_type.m"
              case (MR_Integer) 1:
#line 1396 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1396 "equiv_type.m"
                break;
#line 1396 "equiv_type.m"
              case (MR_Integer) 0:
#line 1395 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1396 "equiv_type.m"
                break;
#line 1396 "equiv_type.m"
            }
#line 1401 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1400 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1401 "equiv_type.m"
            else
#line 1402 "equiv_type.m"
              {
#line 1402 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1402 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1403 "equiv_type.m"
                {
#line 1403 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1403 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1403 "equiv_type.m"
                }
#line 1403 "equiv_type.m"
                {
#line 1403 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1403 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1403 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1403 "equiv_type.m"
                }
#line 1402 "equiv_type.m"
              }
#line 3122 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1405 "equiv_type.m"
            {
#line 1405 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1405 "equiv_type.m"
            }
#line 1405 "equiv_type.m"
            {
#line 1405 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1405 "equiv_type.m"
            }
#line 1405 "equiv_type.m"
            {
#line 1405 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1405 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1405 "equiv_type.m"
            }
#line 1406 "equiv_type.m"
            {
#line 1406 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1406 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 1406 "equiv_type.m"
            }
#line 1406 "equiv_type.m"
            {
#line 1406 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1406 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[24])));
#line 1406 "equiv_type.m"
            }
#line 1407 "equiv_type.m"
            {
#line 1407 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[26]));
            }
#line 1407 "equiv_type.m"
            {
#line 1407 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1406 "equiv_type.m"
            {
#line 1406 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1405 "equiv_type.m"
            {
#line 1405 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1409 "equiv_type.m"
            {
#line 1409 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1409 "equiv_type.m"
            }
#line 1409 "equiv_type.m"
            {
#line 1409 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1409 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1409 "equiv_type.m"
            }
#line 1409 "equiv_type.m"
            {
#line 1409 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1409 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 1409 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1409 "equiv_type.m"
            }
#line 1410 "equiv_type.m"
            {
#line 1410 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1410 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "equiv_type.m"
            }
#line 1410 "equiv_type.m"
            {
#line 1410 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1410 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1410 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1410 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1410 "equiv_type.m"
            }
#line 1411 "equiv_type.m"
            {
#line 1411 "equiv_type.m"
              MR_Word base;
#line 1411 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1411 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1411 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1411 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1411 "equiv_type.m"
            }
#line 1390 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1390 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1390 "equiv_type.m"
          }
#line 1364 "equiv_type.m"
      }
#line 1364 "equiv_type.m"
  }
#line 1350 "equiv_type.m"
}

#line 1212 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1212 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1212 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1212 "equiv_type.m"
{
#line 1240 "equiv_type.m"
  while (MR_TRUE)
#line 1240 "equiv_type.m"
    {
#line 1240 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1240 "equiv_type.m"
      {
#line 1240 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1240 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1240 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1220 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1220 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1220 "equiv_type.m"
          {
#line 1220 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1220 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1220 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1220 "equiv_type.m"
              {
#line 1220 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1220 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1220 "equiv_type.m"
              }
#line 1220 "equiv_type.m"
          }
#line 1240 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1221 "equiv_type.m"
          {
#line 1221 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1221 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1221 "equiv_type.m"
            {
#line 1221 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1221 "equiv_type.m"
            {
#line 1221 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1221 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1221 "equiv_type.m"
            }
#line 1223 "equiv_type.m"
            {
#line 1223 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1226 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1225 "equiv_type.m"
              {
#line 1225 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1225 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1225 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1225 "equiv_type.m"
              }
#line 1226 "equiv_type.m"
            else
#line 1237 "equiv_type.m"
              {
#line 1237 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1237 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1227 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1228 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1227 "equiv_type.m"
                {
#line 1227 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__InstEqvMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1227 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1227 "equiv_type.m"
                  {
#line 1227 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1227 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1227 "equiv_type.m"
                  }
#line 1227 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1227 "equiv_type.m"
                  {
#line 1228 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1228 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1228 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1228 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1227 "equiv_type.m"
                  }
#line 1237 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1230 "equiv_type.m"
                  {
#line 1230 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1230 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1230 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1230 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1230 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;

#line 1230 "equiv_type.m"
                    {
#line 1230 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1231 "equiv_type.m"
                    {
#line 1231 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1232 "equiv_type.m"
                    {
#line 1232 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1232 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1232 "equiv_type.m"
                    }
#line 1232 "equiv_type.m"
                    {
#line 1232 "equiv_type.m"
                      recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1235 "equiv_type.m"
                    {
#line 1235 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1234 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1234 "equiv_type.m"
                    {
#line 1234 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1234 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1234 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1234 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1234 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1234 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1234 "equiv_type.m"
                    }
#line 1234 "equiv_type.m"
                    continue;
#line 1230 "equiv_type.m"
                  }
#line 1237 "equiv_type.m"
                else
#line 1238 "equiv_type.m"
                  {
#line 1238 "equiv_type.m"
                    *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1238 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1238 "equiv_type.m"
                    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1238 "equiv_type.m"
                  }
#line 1237 "equiv_type.m"
              }
#line 1221 "equiv_type.m"
          }
#line 1240 "equiv_type.m"
        else
#line 1241 "equiv_type.m"
          {
#line 1241 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1241 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1241 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1241 "equiv_type.m"
          }
#line 1240 "equiv_type.m"
      }
#line 1240 "equiv_type.m"
      break;
#line 1240 "equiv_type.m"
    }
#line 1212 "equiv_type.m"
}

#line 1202 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1202 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1202 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1202 "equiv_type.m"
{
#line 1208 "equiv_type.m"
  {
#line 1208 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1208 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1209 "equiv_type.m"
    {
#line 1209 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1209 "equiv_type.m"
    {
#line 1209 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__InstEqvMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1209 "equiv_type.m"
      return;
    }
#line 1208 "equiv_type.m"
  }
#line 1202 "equiv_type.m"
}

#line 675 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 675 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 675 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 675 "equiv_type.m"
{
#line 682 "equiv_type.m"
  {
#line 682 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 682 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "equiv_type.m"
      {
#line 682 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 683 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 683 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 682 "equiv_type.m"
      }
#line 682 "equiv_type.m"
    else
#line 685 "equiv_type.m"
      {
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 685 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 685 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 685 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 703 "equiv_type.m"
        {
#line 703 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1030 "equiv_type.m"
        {
#line 1030 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 707 "equiv_type.m"
        {
#line 707 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 707 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 707 "equiv_type.m"
        }
#line 688 "equiv_type.m"
        {
#line 688 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 684 "equiv_type.m"
        {
#line 684 "equiv_type.m"
          MR_Word base;
#line 684 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 684 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 684 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 684 "equiv_type.m"
        }
#line 685 "equiv_type.m"
      }
#line 682 "equiv_type.m"
  }
#line 675 "equiv_type.m"
}

#line 644 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 644 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 644 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 644 "equiv_type.m"
{
#line 651 "equiv_type.m"
  {
#line 651 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 651 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "equiv_type.m"
      {
#line 651 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 651 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 651 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 651 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 651 "equiv_type.m"
      }
#line 651 "equiv_type.m"
    else
#line 654 "equiv_type.m"
      {
#line 654 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 654 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 654 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 654 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 654 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 653 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 653 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 668 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 668 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 668 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 668 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 668 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 670 "equiv_type.m"
        {
#line 670 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 672 "equiv_type.m"
        {
#line 672 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 672 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 672 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 672 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 672 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 672 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 672 "equiv_type.m"
        }
#line 653 "equiv_type.m"
        {
#line 653 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 653 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 653 "equiv_type.m"
        }
#line 657 "equiv_type.m"
        {
#line 657 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 653 "equiv_type.m"
        {
#line 653 "equiv_type.m"
          MR_Word base;
#line 653 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 653 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 653 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 653 "equiv_type.m"
        }
#line 654 "equiv_type.m"
      }
#line 651 "equiv_type.m"
  }
#line 644 "equiv_type.m"
}

#line 508 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 508 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 508 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 508 "equiv_type.m"
{
#line 515 "equiv_type.m"
  {
#line 515 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_20;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 515 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 515 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 515 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 516 "equiv_type.m"
    parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 516 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 516 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 541 "equiv_type.m"
#line 541 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_20)) {
#line 541 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 541 "equiv_type.m"
      case (MR_Integer) 0:
#line 541 "equiv_type.m"
      case (MR_Integer) 1:
#line 604 "equiv_type.m"
        {
#line 605 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 604 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 604 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 604 "equiv_type.m"
        }
#line 541 "equiv_type.m"
        break;
#line 541 "equiv_type.m"
      case (MR_Integer) 2:
#line 542 "equiv_type.m"
        {
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs_62;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemId_63;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo_64;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 542 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_108_108;
#line 542 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_109_109;
#line 561 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Sharing0_52;
#line 561 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Types0_54;
#line 561 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 550 "equiv_type.m"
          MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 550 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_101_101;

#line 546 "equiv_type.m"
          {
#line 546 "equiv_type.m"
            recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
          }
#line 548 "equiv_type.m"
          {
#line 548 "equiv_type.m"
            parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
          }
#line 550 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 550 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 550 "equiv_type.m"
            {
#line 550 "equiv_type.m"
              parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 550 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 551 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 551 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 551 "equiv_type.m"
                {
#line 551 "equiv_type.m"
                  parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 551 "equiv_type.m"
                  parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 551 "equiv_type.m"
                  parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 551 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 551 "equiv_type.m"
                }
#line 550 "equiv_type.m"
            }
#line 561 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 555 "equiv_type.m"
            {
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Types_56;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TVarSet_58;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Sharing_59;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__UserSharing_61;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 555 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_106_106;
#line 553 "equiv_type.m"
              MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 553 "equiv_type.m"
              {
#line 553 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
              }
#line 556 "equiv_type.m"
              {
#line 556 "equiv_type.m"
                parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 558 "equiv_type.m"
              {
#line 558 "equiv_type.m"
                parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 558 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 558 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 558 "equiv_type.m"
              }
#line 558 "equiv_type.m"
              {
#line 558 "equiv_type.m"
                parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 558 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 558 "equiv_type.m"
              }
#line 559 "equiv_type.m"
              {
#line 559 "equiv_type.m"
                parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 559 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 559 "equiv_type.m"
              }
#line 560 "equiv_type.m"
              {
#line 560 "equiv_type.m"
                parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
              }
#line 555 "equiv_type.m"
            }
#line 561 "equiv_type.m"
          else
#line 562 "equiv_type.m"
            {
#line 562 "equiv_type.m"
              parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 562 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 562 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 562 "equiv_type.m"
            }
#line 565 "equiv_type.m"
          {
#line 565 "equiv_type.m"
            parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
          }
#line 564 "equiv_type.m"
          {
#line 564 "equiv_type.m"
            parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 564 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 564 "equiv_type.m"
          }
#line 564 "equiv_type.m"
          {
#line 564 "equiv_type.m"
            parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 564 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 564 "equiv_type.m"
          }
#line 566 "equiv_type.m"
          {
#line 566 "equiv_type.m"
            recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
          }
#line 569 "equiv_type.m"
          {
#line 569 "equiv_type.m"
            parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 569 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 569 "equiv_type.m"
          }
#line 571 "equiv_type.m"
          {
#line 571 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 571 "equiv_type.m"
            MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 571 "equiv_type.m"
          }
#line 542 "equiv_type.m"
        }
#line 541 "equiv_type.m"
        break;
#line 541 "equiv_type.m"
      case (MR_Integer) 3:
#line 541 "equiv_type.m"
#line 541 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)))) {
#line 541 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 541 "equiv_type.m"
          case (MR_Integer) 0:
#line 541 "equiv_type.m"
          case (MR_Integer) 1:
#line 541 "equiv_type.m"
          case (MR_Integer) 2:
#line 541 "equiv_type.m"
          case (MR_Integer) 3:
#line 541 "equiv_type.m"
          case (MR_Integer) 4:
#line 541 "equiv_type.m"
          case (MR_Integer) 6:
#line 541 "equiv_type.m"
          case (MR_Integer) 7:
#line 541 "equiv_type.m"
          case (MR_Integer) 8:
#line 541 "equiv_type.m"
          case (MR_Integer) 9:
#line 541 "equiv_type.m"
          case (MR_Integer) 10:
#line 541 "equiv_type.m"
          case (MR_Integer) 11:
#line 541 "equiv_type.m"
          case (MR_Integer) 12:
#line 541 "equiv_type.m"
          case (MR_Integer) 13:
#line 541 "equiv_type.m"
          case (MR_Integer) 14:
#line 541 "equiv_type.m"
          case (MR_Integer) 15:
#line 541 "equiv_type.m"
          case (MR_Integer) 16:
#line 541 "equiv_type.m"
          case (MR_Integer) 17:
#line 541 "equiv_type.m"
          case (MR_Integer) 18:
#line 541 "equiv_type.m"
          case (MR_Integer) 19:
#line 541 "equiv_type.m"
          case (MR_Integer) 20:
#line 541 "equiv_type.m"
          case (MR_Integer) 21:
#line 541 "equiv_type.m"
          case (MR_Integer) 22:
#line 541 "equiv_type.m"
          case (MR_Integer) 23:
#line 541 "equiv_type.m"
          case (MR_Integer) 24:
#line 541 "equiv_type.m"
          case (MR_Integer) 25:
#line 541 "equiv_type.m"
          case (MR_Integer) 26:
#line 541 "equiv_type.m"
          case (MR_Integer) 27:
#line 541 "equiv_type.m"
          case (MR_Integer) 28:
#line 541 "equiv_type.m"
          case (MR_Integer) 29:
#line 604 "equiv_type.m"
            {
#line 605 "equiv_type.m"
              parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 604 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 604 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 604 "equiv_type.m"
            }
#line 541 "equiv_type.m"
            break;
#line 541 "equiv_type.m"
          case (MR_Integer) 5:
#line 518 "equiv_type.m"
            {
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 1)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 518 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst_35;
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet_36;
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds_38;
#line 518 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 522 "equiv_type.m"
              parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "equiv_type.m"
              if (!(parse_tree__equiv_type__succeeded))
#line 523 "equiv_type.m"
                {
#line 523 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_115_115;
#line 523 "equiv_type.m"
                  MR_String parse_tree__equiv_type__V_33_33;

#line 523 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 523 "equiv_type.m"
                  if (parse_tree__equiv_type__succeeded)
#line 523 "equiv_type.m"
                    {
#line 523 "equiv_type.m"
                      parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 523 "equiv_type.m"
                      parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 523 "equiv_type.m"
                      {
#line 523 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                      }
#line 523 "equiv_type.m"
                    }
#line 523 "equiv_type.m"
                }
#line 527 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 526 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "equiv_type.m"
              else
#line 528 "equiv_type.m"
                {
#line 528 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_111_111;

#line 528 "equiv_type.m"
                  {
#line 528 "equiv_type.m"
                    parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 528 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 528 "equiv_type.m"
                  }
#line 528 "equiv_type.m"
                  {
#line 528 "equiv_type.m"
                    parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 528 "equiv_type.m"
                  }
#line 528 "equiv_type.m"
                }
#line 530 "equiv_type.m"
              {
#line 530 "equiv_type.m"
                parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 535 "equiv_type.m"
              if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "equiv_type.m"
                parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 535 "equiv_type.m"
              else
#line 536 "equiv_type.m"
                {
#line 536 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 536 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 536 "equiv_type.m"
                  parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 536 "equiv_type.m"
                }
#line 538 "equiv_type.m"
              {
#line 538 "equiv_type.m"
                parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 538 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 538 "equiv_type.m"
              }
#line 540 "equiv_type.m"
              {
#line 540 "equiv_type.m"
                parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 540 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 540 "equiv_type.m"
              }
#line 518 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 518 "equiv_type.m"
            }
#line 541 "equiv_type.m"
            break;
#line 541 "equiv_type.m"
        }
#line 541 "equiv_type.m"
        break;
#line 541 "equiv_type.m"
    }
#line 607 "equiv_type.m"
    {
#line 607 "equiv_type.m"
      MR_Word base;
#line 607 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 607 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 607 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 607 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 607 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 607 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 607 "equiv_type.m"
    }
#line 515 "equiv_type.m"
  }
#line 508 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 476 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 476 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 476 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 476 "equiv_type.m"
{
#line 483 "equiv_type.m"
  {
#line 483 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_20;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_21;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_22;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 483 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 483 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 483 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 498 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 498 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 483 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__Types0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 484 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 487 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 488 "equiv_type.m"
      {
#line 488 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 492 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 491 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "equiv_type.m"
    else
#line 493 "equiv_type.m"
      {
#line 493 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 493 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 493 "equiv_type.m"
        {
#line 493 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 493 "equiv_type.m"
        {
#line 493 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 493 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 493 "equiv_type.m"
        }
#line 493 "equiv_type.m"
        {
#line 493 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 493 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 493 "equiv_type.m"
        }
#line 493 "equiv_type.m"
      }
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 793 "equiv_type.m"
    }
#line 4624 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 793 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 498 "equiv_type.m"
    {
#line 498 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 502 "equiv_type.m"
    {
#line 502 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Arity_38);
    }
#line 503 "equiv_type.m"
    {
#line 503 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 503 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 503 "equiv_type.m"
    }
#line 503 "equiv_type.m"
    {
#line 503 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 503 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 503 "equiv_type.m"
    }
#line 504 "equiv_type.m"
    {
#line 504 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 505 "equiv_type.m"
    {
#line 505 "equiv_type.m"
      MR_Word base;
#line 505 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 505 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_22));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 505 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 505 "equiv_type.m"
    }
#line 483 "equiv_type.m"
  }
#line 476 "equiv_type.m"
}

#line 408 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 408 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 408 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 408 "equiv_type.m"
{
#line 415 "equiv_type.m"
  {
#line 415 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 415 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_33;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 415 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 415 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 418 "equiv_type.m"
    {
#line 418 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 4772 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 420 "equiv_type.m"
    {
#line 420 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23);
    }
#line 420 "equiv_type.m"
    {
#line 420 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, parse_tree__equiv_type__InstEqvMap_15, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 427 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_23;
#line 427 "equiv_type.m"
    else
#line 429 "equiv_type.m"
      {
#line 429 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23, parse_tree__equiv_type__ExtraModes_30);
      }
#line 438 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 439 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 438 "equiv_type.m"
    else
#line 432 "equiv_type.m"
      {
#line 432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 432 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 432 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 432 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 433 "equiv_type.m"
        {
#line 433 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 434 "equiv_type.m"
        {
#line 434 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 435 "equiv_type.m"
        {
#line 435 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 436 "equiv_type.m"
        {
#line 436 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 436 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 436 "equiv_type.m"
        }
#line 436 "equiv_type.m"
        {
#line 436 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 436 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 436 "equiv_type.m"
        }
#line 437 "equiv_type.m"
        {
#line 437 "equiv_type.m"
          recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 432 "equiv_type.m"
      }
#line 441 "equiv_type.m"
    {
#line 441 "equiv_type.m"
      MR_Word base;
#line 441 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 441 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_33));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_26));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 441 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 441 "equiv_type.m"
    }
#line 415 "equiv_type.m"
  }
#line 408 "equiv_type.m"
}

#line 1313 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1313__1_1_f_0(
#line 1313 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1313 "equiv_type.m"
{
#line 1313 "equiv_type.m"
  {
#line 1313 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1313 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1313 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1313 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1314 "equiv_type.m"
    {
#line 1314 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1314 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1314 "equiv_type.m"
    }
#line 1313 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1313 "equiv_type.m"
  }
#line 1313 "equiv_type.m"
}

#line 1306 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1306__1_1_f_0(
#line 1306 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1306 "equiv_type.m"
{
#line 1306 "equiv_type.m"
  {
#line 1306 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1306 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1306 "equiv_type.m"
    {
#line 1306 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1306 "equiv_type.m"
    }
#line 1306 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1306 "equiv_type.m"
  }
#line 1306 "equiv_type.m"
}

#line 1009 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1009__1_2_p_0(
#line 1009 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1009 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44)
#line 1009 "equiv_type.m"
{
#line 1009 "equiv_type.m"
  {
#line 1009 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1009 "equiv_type.m"
    {
#line 1009 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
    }
#line 1009 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1009 "equiv_type.m"
  }
#line 1009 "equiv_type.m"
}

#line 90 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0(
#line 90 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 90 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 90 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 90 "equiv_type.m"
{
#line 90 "equiv_type.m"
  {
#line 90 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 90 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 90 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 90 "equiv_type.m"
    {
#line 90 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 90 "equiv_type.m"
      return;
    }
#line 90 "equiv_type.m"
  }
#line 90 "equiv_type.m"
}

#line 90 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0(
#line 90 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 90 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 90 "equiv_type.m"
{
#line 90 "equiv_type.m"
  {
#line 90 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 90 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 90 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 90 "equiv_type.m"
    {
#line 90 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[3], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 90 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 90 "equiv_type.m"
  }
#line 90 "equiv_type.m"
}

#line 159 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 159 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 159 "equiv_type.m"
{
#line 159 "equiv_type.m"
  {
#line 159 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 159 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 159 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 159 "equiv_type.m"
    {
#line 159 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 159 "equiv_type.m"
      return;
    }
#line 159 "equiv_type.m"
  }
#line 159 "equiv_type.m"
}

#line 159 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 159 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 159 "equiv_type.m"
{
#line 5082 "parse_tree.equiv_type.c"
  {
#line 5084 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5087 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5089 "parse_tree.equiv_type.c"
  }
#line 159 "equiv_type.m"
}

#line 157 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 157 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 157 "equiv_type.m"
{
#line 157 "equiv_type.m"
  {
#line 157 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 157 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 157 "equiv_type.m"
    {
#line 157 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 157 "equiv_type.m"
      return;
    }
#line 157 "equiv_type.m"
  }
#line 157 "equiv_type.m"
}

#line 157 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 157 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 157 "equiv_type.m"
{
#line 157 "equiv_type.m"
  {
#line 157 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 157 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 157 "equiv_type.m"
    {
#line 157 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 157 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 157 "equiv_type.m"
  }
#line 157 "equiv_type.m"
}

#line 116 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_location_0_0(
#line 116 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 116 "equiv_type.m"
{
#line 116 "equiv_type.m"
  {
#line 116 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 116 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 116 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 116 "equiv_type.m"
    {
#line 116 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 116 "equiv_type.m"
      return;
    }
#line 116 "equiv_type.m"
  }
#line 116 "equiv_type.m"
}

#line 116 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_location_0_0(
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 116 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 116 "equiv_type.m"
{
#line 5197 "parse_tree.equiv_type.c"
  {
#line 5199 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 5202 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 5204 "parse_tree.equiv_type.c"
  }
#line 116 "equiv_type.m"
}

#line 83 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0(
#line 83 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 83 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 83 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 83 "equiv_type.m"
{
#line 83 "equiv_type.m"
  {
#line 83 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 83 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 83 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 83 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 83 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5233 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 83 "equiv_type.m"
    else
#line 83 "equiv_type.m"
      {
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 83 "equiv_type.m"
        {
#line 83 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[3], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5259 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 83 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 83 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 83 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 83 "equiv_type.m"
        else
#line 83 "equiv_type.m"
          {
#line 83 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 83 "equiv_type.m"
            {
#line 83 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[8], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5279 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 83 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 83 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 83 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 83 "equiv_type.m"
            else
#line 83 "equiv_type.m"
              {
#line 83 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_type_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 83 "equiv_type.m"
                return;
              }
#line 83 "equiv_type.m"
          }
#line 83 "equiv_type.m"
      }
#line 83 "equiv_type.m"
  }
#line 83 "equiv_type.m"
}

#line 83 "equiv_type.m"
MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0(
#line 83 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 83 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 83 "equiv_type.m"
{
#line 83 "equiv_type.m"
  {
#line 83 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 83 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 83 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 83 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 83 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 83 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 83 "equiv_type.m"
    else
#line 83 "equiv_type.m"
      {
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 83 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5348 "parse_tree.equiv_type.c"
        {
#line 5350 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[3], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 83 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 83 "equiv_type.m"
          {
#line 5357 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[8];
#line 5359 "parse_tree.equiv_type.c"
            {
#line 5361 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 83 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5366 "parse_tree.equiv_type.c"
              {
#line 5368 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 83 "equiv_type.m"
          }
#line 83 "equiv_type.m"
      }
#line 83 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 83 "equiv_type.m"
  }
#line 83 "equiv_type.m"
}

#line 150 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 150 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 150 "equiv_type.m"
{
#line 150 "equiv_type.m"
  {
#line 150 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 150 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 150 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 150 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 150 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 5406 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 150 "equiv_type.m"
    else
#line 150 "equiv_type.m"
      {
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 150 "equiv_type.m"
        {
#line 150 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 5432 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 150 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 150 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 150 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 150 "equiv_type.m"
        else
#line 150 "equiv_type.m"
          {
#line 150 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 150 "equiv_type.m"
            {
#line 150 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[7], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 5452 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 150 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 150 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 150 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 150 "equiv_type.m"
            else
#line 150 "equiv_type.m"
              {
#line 150 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 150 "equiv_type.m"
                return;
              }
#line 150 "equiv_type.m"
          }
#line 150 "equiv_type.m"
      }
#line 150 "equiv_type.m"
  }
#line 150 "equiv_type.m"
}

#line 150 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 150 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 150 "equiv_type.m"
{
#line 150 "equiv_type.m"
  {
#line 150 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 150 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 150 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 150 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 150 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 150 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 150 "equiv_type.m"
    else
#line 150 "equiv_type.m"
      {
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 5521 "parse_tree.equiv_type.c"
        {
#line 5523 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 150 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 150 "equiv_type.m"
          {
#line 5530 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[7];
#line 5532 "parse_tree.equiv_type.c"
            {
#line 5534 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 150 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 5539 "parse_tree.equiv_type.c"
              {
#line 5541 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 150 "equiv_type.m"
          }
#line 150 "equiv_type.m"
      }
#line 150 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 150 "equiv_type.m"
  }
#line 150 "equiv_type.m"
}

#line 1494 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1494 "equiv_type.m"
{
#line 1502 "equiv_type.m"
  {
#line 1502 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1502 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1502 "equiv_type.m"
      {
#line 1503 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1502 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1502 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1502 "equiv_type.m"
      }
#line 1502 "equiv_type.m"
    else
#line 1505 "equiv_type.m"
      {
#line 1505 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1505 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1030 "equiv_type.m"
        {
#line 1030 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1508 "equiv_type.m"
        {
#line 1508 "equiv_type.m"
          MR_Word base;
#line 1508 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1508 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1508 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
      }
#line 1502 "equiv_type.m"
  }
#line 1494 "equiv_type.m"
}

#line 1490 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1490 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1490 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1490 "equiv_type.m"
{
#line 1490 "equiv_type.m"
  {
#line 1490 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1490 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1490 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1490 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1490 "equiv_type.m"
    {
#line 1490 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1490 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1490 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1490 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1490 "equiv_type.m"
  }
#line 1490 "equiv_type.m"
}

#line 1469 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1469 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1469 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1469 "equiv_type.m"
{
#line 1476 "equiv_type.m"
  {
#line 1476 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1476 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1490 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1490 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1490 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1490 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1490 "equiv_type.m"
    {
#line 1490 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1490 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1490 "equiv_type.m"
    }
#line 5764 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1490 "equiv_type.m"
    {
#line 1490 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1490 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1490 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1492 "equiv_type.m"
    {
#line 1492 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1492 "equiv_type.m"
    }
#line 1489 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1489 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 5789 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1490 "equiv_type.m"
    {
#line 1490 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1490 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1490 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1492 "equiv_type.m"
    {
#line 1492 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1492 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1492 "equiv_type.m"
    }
#line 1476 "equiv_type.m"
    {
#line 1476 "equiv_type.m"
      MR_Word base;
#line 1476 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1476 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1476 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1476 "equiv_type.m"
    }
#line 1476 "equiv_type.m"
  }
#line 1469 "equiv_type.m"
}

#line 1464 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1464 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1464 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1464 "equiv_type.m"
{
#line 1464 "equiv_type.m"
  {
#line 1464 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1464 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1464 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1464 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1464 "equiv_type.m"
    {
#line 1464 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1464 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1464 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1464 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1464 "equiv_type.m"
  }
#line 1464 "equiv_type.m"
}

#line 1448 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1448 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1448 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1448 "equiv_type.m"
{
#line 1459 "equiv_type.m"
  {
#line 1459 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1459 "equiv_type.m"
#line 1459 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) {
#line 1459 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "equiv_type.m"
      case (MR_Integer) 0:
#line 1459 "equiv_type.m"
        {
#line 1460 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1459 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1459 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1459 "equiv_type.m"
        }
#line 1459 "equiv_type.m"
        break;
#line 1459 "equiv_type.m"
      case (MR_Integer) 1:
#line 1462 "equiv_type.m"
        {
#line 1462 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1462 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1462 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1462 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_24_24;
#line 1463 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1463 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1464 "equiv_type.m"
          {
#line 1464 "equiv_type.m"
            parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__Location_10));
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1464 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1464 "equiv_type.m"
          }
#line 5957 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[1];
#line 1463 "equiv_type.m"
          {
#line 1463 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
          }
#line 1463 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1463 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1466 "equiv_type.m"
          {
#line 1466 "equiv_type.m"
            MR_Word base;
#line 1466 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1466 "equiv_type.m"
            *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1466 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1466 "equiv_type.m"
          }
#line 1462 "equiv_type.m"
        }
#line 1459 "equiv_type.m"
        break;
#line 1459 "equiv_type.m"
      case (MR_Integer) 2:
#line 1459 "equiv_type.m"
        {
#line 1460 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1459 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1459 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1459 "equiv_type.m"
        }
#line 1459 "equiv_type.m"
        break;
#line 1459 "equiv_type.m"
    }
#line 1459 "equiv_type.m"
  }
#line 1448 "equiv_type.m"
}

#line 1431 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1431 "equiv_type.m"
{
#line 1437 "equiv_type.m"
  {
#line 1437 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1437 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1442 "equiv_type.m"
      {
#line 1442 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1442 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1442 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1030 "equiv_type.m"
        {
#line 1030 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1442 "equiv_type.m"
        {
#line 1442 "equiv_type.m"
          MR_Word base;
#line 1442 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1442 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1442 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1442 "equiv_type.m"
        }
#line 1442 "equiv_type.m"
      }
#line 1437 "equiv_type.m"
    else
#line 1437 "equiv_type.m"
      {
#line 1437 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1437 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1030 "equiv_type.m"
        {
#line 1030 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1437 "equiv_type.m"
        {
#line 1437 "equiv_type.m"
          MR_Word base;
#line 1437 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1437 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1437 "equiv_type.m"
        }
#line 1437 "equiv_type.m"
      }
#line 1437 "equiv_type.m"
  }
#line 1431 "equiv_type.m"
}

#line 1428 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1428 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1428 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1428 "equiv_type.m"
{
#line 1428 "equiv_type.m"
  {
#line 1428 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1428 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1428 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1428 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1428 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1428 "equiv_type.m"
    {
#line 1428 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1428 "equiv_type.m"
  }
#line 1428 "equiv_type.m"
}

#line 1421 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1421 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1421 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1421 "equiv_type.m"
{
#line 1427 "equiv_type.m"
  {
#line 1427 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1427 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1427 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1428 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1428 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1428 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1428 "equiv_type.m"
    {
#line 1428 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 1428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 1428 "equiv_type.m"
    }
#line 6218 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1428 "equiv_type.m"
    {
#line 1428 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1428 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1427 "equiv_type.m"
  }
#line 1421 "equiv_type.m"
}

#line 1313 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1313 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1313 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1313 "equiv_type.m"
{
#line 1313 "equiv_type.m"
  {
#line 1313 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1313 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1313 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1313 "equiv_type.m"
    {
#line 1313 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1313__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1313 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1313 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1313 "equiv_type.m"
  }
#line 1313 "equiv_type.m"
}

#line 1306 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1306 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1306 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1306 "equiv_type.m"
{
#line 1306 "equiv_type.m"
  {
#line 1306 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1306 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1306 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1306 "equiv_type.m"
    {
#line 1306 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1306__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1306 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1306 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1306 "equiv_type.m"
  }
#line 1306 "equiv_type.m"
}

#line 1246 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_24,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1246 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1246 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1246 "equiv_type.m"
{
#line 1261 "equiv_type.m"
  {
#line 1261 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1261 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1261 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1293 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1293 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1262 "equiv_type.m"
    {
#line 1262 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1265 "equiv_type.m"
    {
#line 1265 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1287 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1288 "equiv_type.m"
      {
#line 1289 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1290 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1288 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1288 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1288 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1288 "equiv_type.m"
      }
#line 1287 "equiv_type.m"
    else
#line 1268 "equiv_type.m"
      {
#line 1268 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1268 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1269 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1277 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1272 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1272 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1269 "equiv_type.m"
        {
#line 1269 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_11_p_0(parse_tree__equiv_type__Location_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1272 "equiv_type.m"
        {
#line 1272 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1272 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1272 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1277 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1275 "equiv_type.m"
          {
#line 1275 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1276 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1275 "equiv_type.m"
          }
#line 1277 "equiv_type.m"
        else
#line 1278 "equiv_type.m"
          {
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1278 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1278 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1280 "equiv_type.m"
            }
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1280 "equiv_type.m"
            }
#line 1281 "equiv_type.m"
            {
#line 1281 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[13])));
#line 1281 "equiv_type.m"
            }
#line 1281 "equiv_type.m"
            {
#line 1281 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 1281 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1281 "equiv_type.m"
            }
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1280 "equiv_type.m"
            }
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[29])));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1280 "equiv_type.m"
            }
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1280 "equiv_type.m"
            }
#line 1280 "equiv_type.m"
            {
#line 1280 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1280 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1280 "equiv_type.m"
            }
#line 1279 "equiv_type.m"
            {
#line 1279 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1279 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1279 "equiv_type.m"
            }
#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1283 "equiv_type.m"
            }
#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "equiv_type.m"
            }
#line 1283 "equiv_type.m"
            {
#line 1283 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1283 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1283 "equiv_type.m"
            }
#line 1284 "equiv_type.m"
            {
#line 1284 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1284 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1284 "equiv_type.m"
            }
#line 1284 "equiv_type.m"
            {
#line 1284 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1284 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1284 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1284 "equiv_type.m"
            }
#line 1285 "equiv_type.m"
            {
#line 1285 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1285 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1285 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1285 "equiv_type.m"
            }
#line 1278 "equiv_type.m"
          }
#line 1268 "equiv_type.m"
      }
#line 6654 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1293 "equiv_type.m"
    {
#line 1293 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1294 "equiv_type.m"
    {
#line 1294 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1294 "equiv_type.m"
    }
#line 1293 "equiv_type.m"
    {
#line 1293 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, parse_tree__equiv_type__InstEqvMap_29, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1297 "equiv_type.m"
    {
#line 1297 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 6679 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6681 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6683 "parse_tree.equiv_type.c"
        {
#line 1306 "equiv_type.m"
          {
#line 1306 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1305 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1330 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1331 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6696 "parse_tree.equiv_type.c"
        }
#line 6698 "parse_tree.equiv_type.c"
      else
#line 6700 "parse_tree.equiv_type.c"
        {
#line 1310 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1310 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1310 "equiv_type.m"
          {
#line 1310 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1310 "equiv_type.m"
          {
#line 1310 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1310 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 6719 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 6721 "parse_tree.equiv_type.c"
            {
#line 6723 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1311 "equiv_type.m"
              {
#line 1311 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1313 "equiv_type.m"
              {
#line 1313 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1312 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1330 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1331 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6742 "parse_tree.equiv_type.c"
            }
#line 6744 "parse_tree.equiv_type.c"
          else
#line 6746 "parse_tree.equiv_type.c"
            {
#line 6748 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 6750 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 6752 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 6754 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 6756 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 6758 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 6760 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 6762 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 6764 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 6766 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1318 "equiv_type.m"
              {
#line 1318 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1318 "equiv_type.m"
              }
#line 1318 "equiv_type.m"
              {
#line 1318 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1318 "equiv_type.m"
              }
#line 1318 "equiv_type.m"
              {
#line 1318 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[20])));
#line 1318 "equiv_type.m"
              }
#line 1318 "equiv_type.m"
              {
#line 1318 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1318 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1318 "equiv_type.m"
              }
#line 1317 "equiv_type.m"
              {
#line 1317 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[28])));
#line 1317 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1317 "equiv_type.m"
              }
#line 1321 "equiv_type.m"
              {
#line 1321 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1321 "equiv_type.m"
              }
#line 1321 "equiv_type.m"
              {
#line 1321 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1321 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1321 "equiv_type.m"
              }
#line 1321 "equiv_type.m"
              {
#line 1321 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1321 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1321 "equiv_type.m"
              }
#line 1322 "equiv_type.m"
              {
#line 1322 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1322 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "equiv_type.m"
              }
#line 1322 "equiv_type.m"
              {
#line 1322 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1322 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1322 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1322 "equiv_type.m"
              }
#line 1323 "equiv_type.m"
              {
#line 1323 "equiv_type.m"
                MR_Word base;
#line 1323 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1323 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1323 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1323 "equiv_type.m"
              }
#line 1324 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1336 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1337 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 6889 "parse_tree.equiv_type.c"
            }
#line 6891 "parse_tree.equiv_type.c"
        }
#line 6893 "parse_tree.equiv_type.c"
    else
#line 6895 "parse_tree.equiv_type.c"
      {
#line 1301 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1300 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1336 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1337 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 6905 "parse_tree.equiv_type.c"
      }
#line 1342 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1340 "equiv_type.m"
      {
#line 1341 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1340 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1340 "equiv_type.m"
      }
#line 1342 "equiv_type.m"
    else
#line 1343 "equiv_type.m"
      {
#line 1343 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1343 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1343 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1343 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1344 "equiv_type.m"
        {
#line 1344 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1345 "equiv_type.m"
        {
#line 1345 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1345 "equiv_type.m"
        {
#line 1345 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1345 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1345 "equiv_type.m"
        }
#line 1344 "equiv_type.m"
        {
#line 1344 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1344 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1344 "equiv_type.m"
        }
#line 1346 "equiv_type.m"
        {
#line 1346 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1347 "equiv_type.m"
        {
#line 1347 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1343 "equiv_type.m"
      }
#line 1261 "equiv_type.m"
  }
#line 1246 "equiv_type.m"
}

#line 1127 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_19,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1127 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1127 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55)
#line 1127 "equiv_type.m"
{
#line 1135 "equiv_type.m"
  {
#line 1135 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1135 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1171 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_35;
#line 1171 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_36;
#line 1171 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_37;
#line 1171 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvTypeBody_33;
#line 1142 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_34;
#line 1142 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_EqvTypeBody_33;

#line 1136 "equiv_type.m"
    {
#line 1136 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1138 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1137 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1138 "equiv_type.m"
    else
#line 1139 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1142 "equiv_type.m"
    {
#line 1142 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__TypeEqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_EqvTypeBody_33);
    }
#line 1142 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1142 "equiv_type.m"
      {
#line 1142 "equiv_type.m"
        parse_tree__equiv_type__EqvTypeBody_33 = ((MR_Word) parse_tree__equiv_type__conv0_EqvTypeBody_33);
#line 1142 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1142 "equiv_type.m"
      }
#line 1142 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1142 "equiv_type.m"
      {
#line 1143 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 0)));
#line 1143 "equiv_type.m"
        parse_tree__equiv_type__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 1)));
#line 1143 "equiv_type.m"
        parse_tree__equiv_type__Body0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 2)));
#line 1153 "equiv_type.m"
        {
#line 1153 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50, parse_tree__equiv_type__EqvVarSet_34, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_37);
        }
#line 1155 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
#line 1142 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1156 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1142 "equiv_type.m"
      }
#line 1171 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1158 "equiv_type.m"
      {
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_38;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_39;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_40;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_41;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_42;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1158 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1168 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1188 "equiv_type.m"
#line 1188 "equiv_type.m"
        switch (parse_tree__equiv_type__Location_19) {
#line 1188 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1188 "equiv_type.m"
          case (MR_Integer) 2:
#line 1196 "equiv_type.m"
            {
#line 1196 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1197 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1198 "equiv_type.m"
              {
#line 1198 "equiv_type.m"
                parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 1, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
              }
#line 1196 "equiv_type.m"
            }
#line 1188 "equiv_type.m"
            break;
#line 1188 "equiv_type.m"
          case (MR_Integer) 1:
#line 1196 "equiv_type.m"
            {
#line 1196 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeCtorSymName_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1197 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___TypeCtorArity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1198 "equiv_type.m"
              {
#line 1198 "equiv_type.m"
                parse_tree__prog_data__record_sym_name_module_as_used_4_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeCtorSymName_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
              }
#line 1196 "equiv_type.m"
            }
#line 1188 "equiv_type.m"
            break;
#line 1188 "equiv_type.m"
          case (MR_Integer) 0:
#line 1188 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1188 "equiv_type.m"
            break;
#line 1188 "equiv_type.m"
        }
#line 1160 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
#line 7168 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[1];
#line 1161 "equiv_type.m"
        {
#line 1161 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_35, parse_tree__equiv_type__Renaming_37, &parse_tree__equiv_type__Args_38);
        }
#line 1162 "equiv_type.m"
        {
#line 1162 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_37, parse_tree__equiv_type__Body0_36, &parse_tree__equiv_type__Body1_39);
        }
#line 1163 "equiv_type.m"
        {
#line 1163 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1164 "equiv_type.m"
        {
#line 1164 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1164 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1164 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_40));
#line 1164 "equiv_type.m"
        }
#line 1164 "equiv_type.m"
        {
#line 1164 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1166 "equiv_type.m"
        {
#line 1166 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_38, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_41);
        }
#line 1167 "equiv_type.m"
        {
#line 1167 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_41, parse_tree__equiv_type__Body1_39, &parse_tree__equiv_type__Body_42);
        }
#line 1169 "equiv_type.m"
        {
#line 1169 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1169 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1169 "equiv_type.m"
        }
#line 1168 "equiv_type.m"
        {
#line 1168 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_19, parse_tree__equiv_type__TypeEqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_42, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__STATE_VARIABLE_Circ_49, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_51, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1158 "equiv_type.m"
      }
#line 1171 "equiv_type.m"
    else
#line 1179 "equiv_type.m"
      {
#line 1176 "equiv_type.m"
#line 1176 "equiv_type.m"
        switch (parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46) {
#line 1176 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1176 "equiv_type.m"
          case (MR_Integer) 0:
#line 1178 "equiv_type.m"
            *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1176 "equiv_type.m"
            break;
#line 1176 "equiv_type.m"
          case (MR_Integer) 1:
#line 1173 "equiv_type.m"
            {
#line 1173 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1174 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1175 "equiv_type.m"
              {
#line 1175 "equiv_type.m"
                MR_Word base;
#line 1175 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "equiv_type.m"
                *parse_tree__equiv_type__Type_26 = base;
#line 1175 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_44));
#line 1175 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1175 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1175 "equiv_type.m"
              }
#line 1173 "equiv_type.m"
            }
#line 1176 "equiv_type.m"
            break;
#line 1176 "equiv_type.m"
        }
#line 1180 "equiv_type.m"
        {
#line 1180 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48, parse_tree__equiv_type__STATE_VARIABLE_Circ_49);
        }
#line 1179 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1179 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1179 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_51 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50;
#line 1179 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46;
#line 1179 "equiv_type.m"
      }
#line 1135 "equiv_type.m"
  }
#line 1127 "equiv_type.m"
}

#line 1036 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_2_13_p_0(
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1036 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1036 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1036 "equiv_type.m"
{
#line 1044 "equiv_type.m"
  {
#line 1044 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1044 "equiv_type.m"
#line 1044 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) {
#line 1044 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1044 "equiv_type.m"
      case (MR_Integer) 0:
#line 1044 "equiv_type.m"
        {
#line 1045 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1046 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1047 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1044 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1044 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1044 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1044 "equiv_type.m"
        }
#line 1044 "equiv_type.m"
        break;
#line 1044 "equiv_type.m"
      case (MR_Integer) 1:
#line 1049 "equiv_type.m"
        {
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1049 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1049 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1050 "equiv_type.m"
          {
#line 1050 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1053 "equiv_type.m"
          {
#line 1053 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1054 "equiv_type.m"
          {
#line 1054 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1054 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1054 "equiv_type.m"
          }
#line 1055 "equiv_type.m"
          {
#line 1055 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1055 "equiv_type.m"
            return;
          }
#line 1049 "equiv_type.m"
        }
#line 1044 "equiv_type.m"
        break;
#line 1044 "equiv_type.m"
      case (MR_Integer) 2:
#line 1059 "equiv_type.m"
        {
#line 1060 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1061 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1062 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1059 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1059 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1059 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1059 "equiv_type.m"
        }
#line 1044 "equiv_type.m"
        break;
#line 1044 "equiv_type.m"
      case (MR_Integer) 3:
#line 1044 "equiv_type.m"
#line 1044 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) {
#line 1044 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1044 "equiv_type.m"
          case (MR_Integer) 0:
#line 1090 "equiv_type.m"
            {
#line 1090 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1090 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1090 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_82;

#line 1091 "equiv_type.m"
              {
#line 1091 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1097 "equiv_type.m"
#line 1097 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1097 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1097 "equiv_type.m"
                case (MR_Integer) 0:
#line 1099 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1097 "equiv_type.m"
                  break;
#line 1097 "equiv_type.m"
                case (MR_Integer) 1:
#line 1096 "equiv_type.m"
                  {
#line 1096 "equiv_type.m"
                    MR_Word base;
#line 1096 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1096 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1096 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1096 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1096 "equiv_type.m"
                  }
#line 1097 "equiv_type.m"
                  break;
#line 1097 "equiv_type.m"
              }
#line 1090 "equiv_type.m"
            }
#line 1044 "equiv_type.m"
            break;
#line 1044 "equiv_type.m"
          case (MR_Integer) 1:
#line 1064 "equiv_type.m"
            {
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_38;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1064 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1065 "equiv_type.m"
              {
#line 1065 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
              }
#line 1076 "equiv_type.m"
              if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "equiv_type.m"
                {
#line 1078 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1079 "equiv_type.m"
                  *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1080 "equiv_type.m"
                  *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1077 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1077 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1077 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1077 "equiv_type.m"
                }
#line 1076 "equiv_type.m"
              else
#line 1069 "equiv_type.m"
                {
#line 1069 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1069 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret_41;
#line 1069 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1069 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1070 "equiv_type.m"
                  {
#line 1070 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1073 "equiv_type.m"
                  {
#line 1073 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1073 "equiv_type.m"
                  }
#line 1074 "equiv_type.m"
                  {
#line 1074 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                  }
#line 1075 "equiv_type.m"
                  {
#line 1075 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                  }
#line 1069 "equiv_type.m"
                }
#line 1085 "equiv_type.m"
#line 1085 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1085 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1085 "equiv_type.m"
                case (MR_Integer) 0:
#line 1087 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1085 "equiv_type.m"
                  break;
#line 1085 "equiv_type.m"
                case (MR_Integer) 1:
#line 1084 "equiv_type.m"
                  {
#line 1084 "equiv_type.m"
                    MR_Word base;
#line 1084 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1084 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1084 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1084 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1084 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1084 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1084 "equiv_type.m"
                  }
#line 1085 "equiv_type.m"
                  break;
#line 1085 "equiv_type.m"
              }
#line 1064 "equiv_type.m"
            }
#line 1044 "equiv_type.m"
            break;
#line 1044 "equiv_type.m"
          case (MR_Integer) 2:
#line 1102 "equiv_type.m"
            {
#line 1102 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1102 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1102 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1102 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1103 "equiv_type.m"
              {
#line 1103 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1109 "equiv_type.m"
#line 1109 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1109 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1109 "equiv_type.m"
                case (MR_Integer) 0:
#line 1111 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1109 "equiv_type.m"
                  break;
#line 1109 "equiv_type.m"
                case (MR_Integer) 1:
#line 1108 "equiv_type.m"
                  {
#line 1108 "equiv_type.m"
                    MR_Word base;
#line 1108 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1108 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1108 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1108 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1108 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1108 "equiv_type.m"
                  }
#line 1109 "equiv_type.m"
                  break;
#line 1109 "equiv_type.m"
              }
#line 1102 "equiv_type.m"
            }
#line 1044 "equiv_type.m"
            break;
#line 1044 "equiv_type.m"
          case (MR_Integer) 3:
#line 1114 "equiv_type.m"
            {
#line 1114 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1114 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType_46;
#line 1114 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1115 "equiv_type.m"
              {
#line 1115 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1121 "equiv_type.m"
#line 1121 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1121 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1121 "equiv_type.m"
                case (MR_Integer) 0:
#line 1123 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1121 "equiv_type.m"
                  break;
#line 1121 "equiv_type.m"
                case (MR_Integer) 1:
#line 1120 "equiv_type.m"
                  {
#line 1120 "equiv_type.m"
                    MR_Word base;
#line 1120 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1120 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1120 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1120 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1120 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1120 "equiv_type.m"
                  }
#line 1121 "equiv_type.m"
                  break;
#line 1121 "equiv_type.m"
              }
#line 1114 "equiv_type.m"
            }
#line 1044 "equiv_type.m"
            break;
#line 1044 "equiv_type.m"
        }
#line 1044 "equiv_type.m"
        break;
#line 1044 "equiv_type.m"
    }
#line 1044 "equiv_type.m"
  }
#line 1036 "equiv_type.m"
}

#line 1023 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_location_11_p_0(
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1023 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1023 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1023 "equiv_type.m"
{
#line 1029 "equiv_type.m"
  {
#line 1029 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1030 "equiv_type.m"
    {
#line 1030 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1029 "equiv_type.m"
  }
#line 1023 "equiv_type.m"
}

#line 1009 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1009 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg)
#line 1009 "equiv_type.m"
{
#line 1009 "equiv_type.m"
  {
#line 1009 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1009 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;

#line 1009 "equiv_type.m"
    {
#line 1009 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1009__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))));
    }
#line 1009 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1009 "equiv_type.m"
  }
#line 1009 "equiv_type.m"
}

#line 986 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 986 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 986 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 986 "equiv_type.m"
{
#line 993 "equiv_type.m"
  {
#line 993 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 993 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "equiv_type.m"
      {
#line 993 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 994 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 994 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 994 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 993 "equiv_type.m"
      }
#line 993 "equiv_type.m"
    else
#line 997 "equiv_type.m"
      {
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 997 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65;
#line 999 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 999 "equiv_type.m"
        {
#line 999 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1003 "equiv_type.m"
#line 1003 "equiv_type.m"
        switch (MR_tag((MR_Word) parse_tree__equiv_type__Width_42)) {
#line 1003 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "equiv_type.m"
          case (MR_Integer) 0:
#line 1003 "equiv_type.m"
#line 1003 "equiv_type.m"
            switch (MR_unmkbody(parse_tree__equiv_type__Width_42)) {
#line 1003 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1003 "equiv_type.m"
              case (MR_Integer) 0:
#line 1002 "equiv_type.m"
                {
#line 1002 "equiv_type.m"
                }
#line 1003 "equiv_type.m"
                break;
#line 1003 "equiv_type.m"
              case (MR_Integer) 1:
#line 1004 "equiv_type.m"
                {
#line 1004 "equiv_type.m"
                }
#line 1003 "equiv_type.m"
                break;
#line 1003 "equiv_type.m"
            }
#line 1003 "equiv_type.m"
            break;
#line 1003 "equiv_type.m"
          case (MR_Integer) 1:
#line 1003 "equiv_type.m"
          case (MR_Integer) 2:
#line 1008 "equiv_type.m"
            {
#line 1008 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 1009 "equiv_type.m"
              {
#line 1009 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1009 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1));
#line 1009 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1009 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 3) = ((MR_Box) (parse_tree__equiv_type__Type0_41));
#line 1009 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 4) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1009 "equiv_type.m"
              }
#line 1009 "equiv_type.m"
              {
#line 1009 "equiv_type.m"
                mercury__require__expect_4_p_0(parse_tree__equiv_type__V_61_61, (MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
              }
#line 1008 "equiv_type.m"
            }
#line 1003 "equiv_type.m"
            break;
#line 1003 "equiv_type.m"
        }
#line 1012 "equiv_type.m"
        {
#line 1012 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1012 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1012 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1012 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1012 "equiv_type.m"
        }
#line 1013 "equiv_type.m"
        {
#line 1013 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1014 "equiv_type.m"
        {
#line 1014 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 996 "equiv_type.m"
        {
#line 996 "equiv_type.m"
          MR_Word base;
#line 996 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 996 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 996 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 996 "equiv_type.m"
        }
#line 997 "equiv_type.m"
      }
#line 993 "equiv_type.m"
  }
#line 986 "equiv_type.m"
}

#line 945 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 945 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 945 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 945 "equiv_type.m"
{
#line 952 "equiv_type.m"
  {
#line 952 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 952 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 952 "equiv_type.m"
      {
#line 952 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 952 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 953 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 953 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 953 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 953 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 952 "equiv_type.m"
      }
#line 952 "equiv_type.m"
    else
#line 956 "equiv_type.m"
      {
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_42;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types_45;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 956 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 957 "equiv_type.m"
        {
#line 957 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_34, &parse_tree__equiv_type__Type_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 959 "equiv_type.m"
        {
#line 959 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__HeadVar__7_7);
        }
#line 960 "equiv_type.m"
        {
#line 960 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Types0_35, &parse_tree__equiv_type__Types_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 963 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 964 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 964 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 969 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 967 "equiv_type.m"
          {
#line 967 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 968 "equiv_type.m"
            {
#line 968 "equiv_type.m"
              MR_Word base;
#line 968 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 968 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_42));
#line 968 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_45));
#line 968 "equiv_type.m"
            }
#line 967 "equiv_type.m"
          }
#line 969 "equiv_type.m"
        else
#line 970 "equiv_type.m"
          {
#line 970 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 971 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 970 "equiv_type.m"
          }
#line 956 "equiv_type.m"
      }
#line 952 "equiv_type.m"
  }
#line 945 "equiv_type.m"
}

#line 934 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 934 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 934 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 934 "equiv_type.m"
{
#line 941 "equiv_type.m"
  {
#line 941 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 942 "equiv_type.m"
    {
#line 942 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 942 "equiv_type.m"
      return;
    }
#line 941 "equiv_type.m"
  }
#line 934 "equiv_type.m"
}

#line 923 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 923 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 923 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 923 "equiv_type.m"
{
#line 930 "equiv_type.m"
  {
#line 930 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 931 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 931 "equiv_type.m"
    {
#line 931 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Types_0_20, parse_tree__equiv_type__STATE_VARIABLE_Types_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 930 "equiv_type.m"
  }
#line 923 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 903 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 903 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 903 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32)
#line 903 "equiv_type.m"
{
#line 909 "equiv_type.m"
  {
#line 909 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_87;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 0)));
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 1)));
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 2)));
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 3)));
#line 909 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 4)));
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 5)));
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs_24;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_26;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 909 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_74_74;
#line 983 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32;

#line 983 "equiv_type.m"
    {
#line 983 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__CtorArgs0_21, &parse_tree__equiv_type__CtorArgs_24, (MR_Integer) 0, &parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 793 "equiv_type.m"
    }
#line 8387 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_87, parse_tree__equiv_type__TypeCtorInfo_38_87, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_74_74, parse_tree__equiv_type__Constraints0_19, &parse_tree__equiv_type__Constraints_26, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28);
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30);
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
#line 915 "equiv_type.m"
    {
#line 915 "equiv_type.m"
      MR_Word base;
#line 915 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 915 "equiv_type.m"
      *parse_tree__equiv_type__Ctor_14 = base;
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_18));
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_26));
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__CtorName_20));
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__CtorArgs_24));
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Arity_22));
#line 915 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Ctxt_23));
#line 915 "equiv_type.m"
    }
#line 909 "equiv_type.m"
  }
#line 903 "equiv_type.m"
}

#line 900 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 900 "equiv_type.m"
{
#line 900 "equiv_type.m"
  {
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 900 "equiv_type.m"
  }
#line 900 "equiv_type.m"
}

#line 893 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 893 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 893 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 893 "equiv_type.m"
{
#line 899 "equiv_type.m"
  {
#line 899 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 899 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 899 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 900 "equiv_type.m"
    }
#line 8537 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 899 "equiv_type.m"
  }
#line 893 "equiv_type.m"
}

#line 873 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 873 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 873 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 873 "equiv_type.m"
{
#line 878 "equiv_type.m"
  {
#line 878 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 878 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "equiv_type.m"
      {
#line 878 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 878 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 878 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 878 "equiv_type.m"
      }
#line 878 "equiv_type.m"
    else
#line 881 "equiv_type.m"
      {
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 881 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1030 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 880 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 880 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1030 "equiv_type.m"
        {
#line 1030 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 881 "equiv_type.m"
        {
#line 881 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 881 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 881 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 881 "equiv_type.m"
        }
#line 884 "equiv_type.m"
        {
#line 884 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 881 "equiv_type.m"
        {
#line 881 "equiv_type.m"
          MR_Word base;
#line 881 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 881 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 881 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 881 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 881 "equiv_type.m"
        }
#line 881 "equiv_type.m"
      }
#line 878 "equiv_type.m"
  }
#line 873 "equiv_type.m"
}

#line 831 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 831 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 831 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 831 "equiv_type.m"
{
#line 842 "equiv_type.m"
  {
#line 842 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 842 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 842 "equiv_type.m"
      {
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_37;
#line 842 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 843 "equiv_type.m"
        {
#line 843 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_12, parse_tree__equiv_type__PredName_20, parse_tree__equiv_type__PredOrFunc_21, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_22, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_26, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_23, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 848 "equiv_type.m"
        {
#line 848 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 849 "equiv_type.m"
        {
#line 849 "equiv_type.m"
          MR_Word base;
#line 849 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 849 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_21));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_37));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_27));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_28));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 849 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 849 "equiv_type.m"
        }
#line 842 "equiv_type.m"
      }
#line 842 "equiv_type.m"
    else
#line 854 "equiv_type.m"
      {
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 854 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_66;
#line 854 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 855 "equiv_type.m"
        {
#line 855 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 855 "equiv_type.m"
        {
#line 855 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__PredName_60, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, parse_tree__equiv_type__InstEqvMap_14, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_61, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__MaybeDetism0_62, &parse_tree__equiv_type__MaybeDetism_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 862 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 861 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 862 "equiv_type.m"
        else
#line 864 "equiv_type.m"
          {
#line 864 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 866 "equiv_type.m"
        {
#line 866 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 867 "equiv_type.m"
        {
#line 867 "equiv_type.m"
          MR_Word base;
#line 867 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 867 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_60));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_66));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_63));
#line 867 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 867 "equiv_type.m"
        }
#line 854 "equiv_type.m"
      }
#line 842 "equiv_type.m"
  }
#line 831 "equiv_type.m"
}

#line 828 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 828 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 828 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 828 "equiv_type.m"
{
#line 828 "equiv_type.m"
  {
#line 828 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 828 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 828 "equiv_type.m"
    {
#line 828 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 828 "equiv_type.m"
  }
#line 828 "equiv_type.m"
}

#line 820 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_12,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_13,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 820 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 820 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 820 "equiv_type.m"
{
#line 827 "equiv_type.m"
  {
#line 827 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 827 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 827 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 828 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 828 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 828 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 828 "equiv_type.m"
    {
#line 828 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__Location_12));
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 828 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__InstEqvMap_15));
#line 828 "equiv_type.m"
    }
#line 9000 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 828 "equiv_type.m"
    {
#line 828 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_13, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 828 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 827 "equiv_type.m"
  }
#line 820 "equiv_type.m"
}

#line 806 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 806 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 806 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 806 "equiv_type.m"
{
#line 812 "equiv_type.m"
  {
#line 812 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 812 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 812 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 812 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 942 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 942 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 942 "equiv_type.m"
    {
#line 942 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 816 "equiv_type.m"
    {
#line 816 "equiv_type.m"
      MR_Word base;
#line 816 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 816 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 816 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 816 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 816 "equiv_type.m"
    }
#line 812 "equiv_type.m"
  }
#line 806 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 786 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 786 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 786 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 786 "equiv_type.m"
{
#line 792 "equiv_type.m"
  {
#line 792 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 792 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 792 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 793 "equiv_type.m"
    }
#line 9192 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17, parse_tree__equiv_type__STATE_VARIABLE_Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 792 "equiv_type.m"
  }
#line 786 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 772 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_11,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 772 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 772 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 772 "equiv_type.m"
{
#line 778 "equiv_type.m"
  {
#line 778 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 778 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__Location_11));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 793 "equiv_type.m"
    }
#line 9334 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 782 "equiv_type.m"
    {
#line 782 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__Location_11, parse_tree__equiv_type__TypeEqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 784 "equiv_type.m"
    {
#line 784 "equiv_type.m"
      MR_Word base;
#line 784 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 784 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 784 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 784 "equiv_type.m"
    }
#line 778 "equiv_type.m"
  }
#line 772 "equiv_type.m"
}

#line 751 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_1,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 751 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 751 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 751 "equiv_type.m"
{
#line 757 "equiv_type.m"
  {
#line 757 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 757 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "equiv_type.m"
      {
#line 757 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 757 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 757 "equiv_type.m"
      }
#line 757 "equiv_type.m"
    else
#line 760 "equiv_type.m"
      {
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 760 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 761 "equiv_type.m"
        {
#line 761 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 763 "equiv_type.m"
        {
#line 763 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 759 "equiv_type.m"
        {
#line 759 "equiv_type.m"
          MR_Word base;
#line 759 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 759 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 759 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 759 "equiv_type.m"
        }
#line 760 "equiv_type.m"
      }
#line 757 "equiv_type.m"
  }
#line 751 "equiv_type.m"
}

#line 710 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_14,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 710 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 710 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 710 "equiv_type.m"
{
#line 720 "equiv_type.m"
  {
#line 720 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 720 "equiv_type.m"
#line 720 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) {
#line 720 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 720 "equiv_type.m"
      case (MR_Integer) 0:
#line 726 "equiv_type.m"
        {
#line 726 "equiv_type.m"
          MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 726 "equiv_type.m"
          MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 726 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 726 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_66;

#line 727 "equiv_type.m"
          {
#line 727 "equiv_type.m"
            parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 729 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 730 "equiv_type.m"
          {
#line 730 "equiv_type.m"
            MR_Word base;
#line 730 "equiv_type.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 730 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 730 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 730 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 730 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 730 "equiv_type.m"
          }
#line 726 "equiv_type.m"
        }
#line 720 "equiv_type.m"
        break;
#line 720 "equiv_type.m"
      case (MR_Integer) 1:
#line 720 "equiv_type.m"
        {
#line 720 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 720 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 720 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 721 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 721 "equiv_type.m"
          {
#line 721 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 721 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "equiv_type.m"
          }
#line 721 "equiv_type.m"
          {
#line 721 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 724 "equiv_type.m"
          {
#line 724 "equiv_type.m"
            MR_Word base;
#line 724 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 724 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 724 "equiv_type.m"
          }
#line 720 "equiv_type.m"
        }
#line 720 "equiv_type.m"
        break;
#line 720 "equiv_type.m"
      case (MR_Integer) 2:
#line 746 "equiv_type.m"
        {
#line 747 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 748 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 746 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 746 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 746 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 746 "equiv_type.m"
        }
#line 720 "equiv_type.m"
        break;
#line 720 "equiv_type.m"
      case (MR_Integer) 3:
#line 720 "equiv_type.m"
#line 720 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) {
#line 720 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 720 "equiv_type.m"
          case (MR_Integer) 0:
#line 732 "equiv_type.m"
            {
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_50_50;
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 732 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 735 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_37_37;

#line 735 "equiv_type.m"
              {
#line 735 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 735 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "equiv_type.m"
              }
#line 735 "equiv_type.m"
              {
#line 735 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
              }
#line 738 "equiv_type.m"
              {
#line 738 "equiv_type.m"
                parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__Location_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__InstEqvMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
              }
#line 740 "equiv_type.m"
              {
#line 740 "equiv_type.m"
                parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 740 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 740 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 740 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 740 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 740 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 740 "equiv_type.m"
              }
#line 742 "equiv_type.m"
              {
#line 742 "equiv_type.m"
                MR_Word base;
#line 742 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 742 "equiv_type.m"
                *parse_tree__equiv_type__TypeDefn_19 = base;
#line 742 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 742 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 742 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 742 "equiv_type.m"
              }
#line 732 "equiv_type.m"
            }
#line 720 "equiv_type.m"
            break;
#line 720 "equiv_type.m"
          case (MR_Integer) 1:
#line 746 "equiv_type.m"
            {
#line 747 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 748 "equiv_type.m"
              *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 746 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 746 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 746 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 746 "equiv_type.m"
            }
#line 720 "equiv_type.m"
            break;
#line 720 "equiv_type.m"
        }
#line 720 "equiv_type.m"
        break;
#line 720 "equiv_type.m"
    }
#line 720 "equiv_type.m"
  }
#line 710 "equiv_type.m"
}

#line 626 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_10,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 626 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 626 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 626 "equiv_type.m"
{
#line 633 "equiv_type.m"
  {
#line 633 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 633 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 633 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 633 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 636 "equiv_type.m"
    {
#line 636 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1030 "equiv_type.m"
    {
#line 1030 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0(parse_tree__equiv_type__Location_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1209 "equiv_type.m"
    {
#line 1209 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1209 "equiv_type.m"
    {
#line 1209 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__InstEqvMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 641 "equiv_type.m"
    {
#line 641 "equiv_type.m"
      MR_Word base;
#line 641 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 641 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 641 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 641 "equiv_type.m"
    }
#line 633 "equiv_type.m"
  }
#line 626 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 444 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 444 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 444 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 444 "equiv_type.m"
{
#line 451 "equiv_type.m"
  {
#line 451 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 451 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 451 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 451 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 454 "equiv_type.m"
    {
#line 454 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[1], parse_tree__equiv_type__Vars_22, &parse_tree__equiv_type__Arity_29);
    }
#line 455 "equiv_type.m"
    {
#line 455 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__Location_13));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 793 "equiv_type.m"
    }
#line 9998 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 793 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 465 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 461 "equiv_type.m"
      {
#line 462 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 464 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 461 "equiv_type.m"
      }
#line 465 "equiv_type.m"
    else
#line 466 "equiv_type.m"
      {
#line 466 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 466 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 467 "equiv_type.m"
        {
#line 467 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__Methods0_36, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 469 "equiv_type.m"
        {
#line 469 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 469 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 469 "equiv_type.m"
        }
#line 466 "equiv_type.m"
      }
#line 471 "equiv_type.m"
    {
#line 471 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 471 "equiv_type.m"
    }
#line 471 "equiv_type.m"
    {
#line 471 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 471 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 471 "equiv_type.m"
    }
#line 472 "equiv_type.m"
    {
#line 472 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 473 "equiv_type.m"
    {
#line 473 "equiv_type.m"
      MR_Word base;
#line 473 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 473 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Vars_22));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__FunDeps_24));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 473 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 473 "equiv_type.m"
    }
#line 451 "equiv_type.m"
  }
#line 444 "equiv_type.m"
}

#line 378 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 378 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 378 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 378 "equiv_type.m"
{
#line 385 "equiv_type.m"
  {
#line 385 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 385 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_41;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 385 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 385 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 385 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 390 "equiv_type.m"
    {
#line 390 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 392 "equiv_type.m"
    {
#line 392 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__PredOrFunc_22, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_23, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_28, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_24, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_25, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__MaybeDetism0_26, &parse_tree__equiv_type__MaybeDetism_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 398 "equiv_type.m"
    {
#line 398 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_22);
    }
#line 399 "equiv_type.m"
    {
#line 399 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 400 "equiv_type.m"
    {
#line 400 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_22, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 401 "equiv_type.m"
    {
#line 401 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 401 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 401 "equiv_type.m"
    }
#line 401 "equiv_type.m"
    {
#line 401 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 401 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 401 "equiv_type.m"
    }
#line 402 "equiv_type.m"
    {
#line 402 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 403 "equiv_type.m"
    {
#line 403 "equiv_type.m"
      MR_Word base;
#line 403 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 403 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_22));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_41));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Origin_27));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_29));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_30));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 403 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 403 "equiv_type.m"
    }
#line 385 "equiv_type.m"
  }
#line 378 "equiv_type.m"
}

#line 341 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_13,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 341 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 341 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 341 "equiv_type.m"
{
#line 348 "equiv_type.m"
  {
#line 348 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[1];
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 348 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 348 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 348 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 351 "equiv_type.m"
    {
#line 351 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22, &parse_tree__equiv_type__Arity_27);
    }
#line 352 "equiv_type.m"
    {
#line 352 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 355 "equiv_type.m"
    {
#line 355 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 355 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 355 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 355 "equiv_type.m"
    }
#line 354 "equiv_type.m"
    {
#line 354 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__Location_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_23, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_24, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 369 "equiv_type.m"
#line 369 "equiv_type.m"
    switch (parse_tree__equiv_type__ContainsCirc_30) {
#line 369 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 369 "equiv_type.m"
      case (MR_Integer) 0:
#line 371 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 369 "equiv_type.m"
        break;
#line 369 "equiv_type.m"
      case (MR_Integer) 1:
#line 366 "equiv_type.m"
        {
#line 359 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_33_33;

#line 359 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_23)) == (MR_mktag((MR_Integer) 1)));
#line 359 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 359 "equiv_type.m"
            {
#line 359 "equiv_type.m"
              parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_23, (MR_Integer) 0)));
#line 362 "equiv_type.m"
              {
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces_34;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg_35;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec_36;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_47_47;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_48_48;
#line 362 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_49_49;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_56_56;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_57_57;
#line 362 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_61_61;

#line 361 "equiv_type.m"
                {
#line 361 "equiv_type.m"
                  parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22);
                }
#line 361 "equiv_type.m"
                {
#line 361 "equiv_type.m"
                  parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 361 "equiv_type.m"
                }
#line 361 "equiv_type.m"
                {
#line 361 "equiv_type.m"
                  parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 361 "equiv_type.m"
                }
#line 361 "equiv_type.m"
                {
#line 361 "equiv_type.m"
                  parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 361 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[11])));
#line 361 "equiv_type.m"
                }
#line 360 "equiv_type.m"
                {
#line 360 "equiv_type.m"
                  parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[27])));
#line 360 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 360 "equiv_type.m"
                }
#line 363 "equiv_type.m"
                {
#line 363 "equiv_type.m"
                  parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 363 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 363 "equiv_type.m"
                }
#line 363 "equiv_type.m"
                {
#line 363 "equiv_type.m"
                  parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 363 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "equiv_type.m"
                }
#line 363 "equiv_type.m"
                {
#line 363 "equiv_type.m"
                  parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 363 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 363 "equiv_type.m"
                }
#line 364 "equiv_type.m"
                {
#line 364 "equiv_type.m"
                  parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 364 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "equiv_type.m"
                }
#line 364 "equiv_type.m"
                {
#line 364 "equiv_type.m"
                  parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 364 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 364 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 364 "equiv_type.m"
                }
#line 365 "equiv_type.m"
                {
#line 365 "equiv_type.m"
                  MR_Word base;
#line 365 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "equiv_type.m"
                  *parse_tree__equiv_type__Specs_20 = base;
#line 365 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 365 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "equiv_type.m"
                }
#line 362 "equiv_type.m"
              }
#line 359 "equiv_type.m"
            }
#line 359 "equiv_type.m"
          else
#line 367 "equiv_type.m"
            {
#line 367 "equiv_type.m"
              {
#line 367 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 367 "equiv_type.m"
                return;
              }
#line 367 "equiv_type.m"
            }
#line 366 "equiv_type.m"
        }
#line 369 "equiv_type.m"
        break;
#line 369 "equiv_type.m"
    }
#line 373 "equiv_type.m"
    {
#line 373 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 373 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 373 "equiv_type.m"
    }
#line 373 "equiv_type.m"
    {
#line 373 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 373 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 373 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 373 "equiv_type.m"
    }
#line 374 "equiv_type.m"
    {
#line 374 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 375 "equiv_type.m"
    {
#line 375 "equiv_type.m"
      MR_Word base;
#line 375 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 375 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypeVars_22));
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 375 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 375 "equiv_type.m"
    }
#line 348 "equiv_type.m"
  }
#line 341 "equiv_type.m"
}

#line 280 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_15,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 280 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 280 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 280 "equiv_type.m"
{
#line 288 "equiv_type.m"
  {
#line 288 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 288 "equiv_type.m"
#line 288 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) {
#line 288 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 288 "equiv_type.m"
      case (MR_Integer) 0:
#line 288 "equiv_type.m"
      case (MR_Integer) 1:
#line 336 "equiv_type.m"
        {
#line 337 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 338 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 336 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 336 "equiv_type.m"
        }
#line 288 "equiv_type.m"
        break;
#line 288 "equiv_type.m"
      case (MR_Integer) 2:
#line 288 "equiv_type.m"
        {
#line 288 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_16), (MR_Integer) 2);
#line 288 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 289 "equiv_type.m"
          {
#line 289 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
          }
#line 291 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__equiv_type__ItemTypeDefn_22);
#line 288 "equiv_type.m"
        }
#line 288 "equiv_type.m"
        break;
#line 288 "equiv_type.m"
      case (MR_Integer) 3:
#line 288 "equiv_type.m"
#line 288 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) {
#line 288 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 288 "equiv_type.m"
          case (MR_Integer) 0:
#line 288 "equiv_type.m"
          case (MR_Integer) 5:
#line 288 "equiv_type.m"
          case (MR_Integer) 8:
#line 288 "equiv_type.m"
          case (MR_Integer) 9:
#line 288 "equiv_type.m"
          case (MR_Integer) 11:
#line 336 "equiv_type.m"
            {
#line 337 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 338 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 336 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 336 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 1:
#line 323 "equiv_type.m"
            {
#line 326 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 327 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 323 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 323 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 2:
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 293 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 294 "equiv_type.m"
              {
#line 294 "equiv_type.m"
                parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 296 "equiv_type.m"
              {
#line 296 "equiv_type.m"
                MR_Word base;
#line 296 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 296 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 296 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 296 "equiv_type.m"
              }
#line 293 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 3:
#line 298 "equiv_type.m"
            {
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 299 "equiv_type.m"
              {
#line 299 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 301 "equiv_type.m"
              {
#line 301 "equiv_type.m"
                MR_Word base;
#line 301 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 301 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 301 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 301 "equiv_type.m"
              }
#line 298 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 4:
#line 303 "equiv_type.m"
            {
#line 303 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 303 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 304 "equiv_type.m"
              {
#line 304 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 306 "equiv_type.m"
              {
#line 306 "equiv_type.m"
                MR_Word base;
#line 306 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 306 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 306 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 306 "equiv_type.m"
              }
#line 303 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 6:
#line 308 "equiv_type.m"
            {
#line 308 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 308 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 309 "equiv_type.m"
              {
#line 309 "equiv_type.m"
                parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 311 "equiv_type.m"
              {
#line 311 "equiv_type.m"
                MR_Word base;
#line 311 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 311 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 311 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 311 "equiv_type.m"
              }
#line 308 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 7:
#line 313 "equiv_type.m"
            {
#line 313 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 313 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 314 "equiv_type.m"
              {
#line 314 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 316 "equiv_type.m"
              {
#line 316 "equiv_type.m"
                MR_Word base;
#line 316 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 316 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 316 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 316 "equiv_type.m"
              }
#line 313 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
          case (MR_Integer) 10:
#line 318 "equiv_type.m"
            {
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;
#line 318 "equiv_type.m"
              MR_String parse_tree__equiv_type__MutName_73;
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__QualName_74;
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_75;
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_76;
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemId_77;
#line 318 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_80_80;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_83_83;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_84_84;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_85_85;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_86_86;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_87_87;
#line 617 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_88_88;
#line 617 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_89_89;

#line 616 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__MutName_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 0)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 1)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 2)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 3)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 4)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 5)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 6)));
#line 617 "equiv_type.m"
              parse_tree__equiv_type__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 7)));
#line 618 "equiv_type.m"
              {
#line 618 "equiv_type.m"
                parse_tree__equiv_type__QualName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_74, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 618 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_74, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_73));
#line 618 "equiv_type.m"
              }
#line 619 "equiv_type.m"
              {
#line 619 "equiv_type.m"
                recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_74, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_75);
              }
#line 621 "equiv_type.m"
              {
#line 621 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__Location_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__ExpandedItems0_75, &parse_tree__equiv_type__ExpandedItems_76, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46);
              }
#line 623 "equiv_type.m"
              {
#line 623 "equiv_type.m"
                parse_tree__equiv_type__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_80_80, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_74));
#line 623 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_80_80, 1) = ((MR_Box) ((MR_Integer) 0));
#line 623 "equiv_type.m"
              }
#line 623 "equiv_type.m"
              {
#line 623 "equiv_type.m"
                parse_tree__equiv_type__ItemId_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_77, 0) = ((MR_Box) ((MR_Integer) 8));
#line 623 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_77, 1) = ((MR_Box) (parse_tree__equiv_type__V_80_80));
#line 623 "equiv_type.m"
              }
#line 624 "equiv_type.m"
              {
#line 624 "equiv_type.m"
                recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_77, parse_tree__equiv_type__ExpandedItems_76, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
              }
#line 321 "equiv_type.m"
              {
#line 321 "equiv_type.m"
                MR_Word base;
#line 321 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 321 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 321 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 321 "equiv_type.m"
              }
#line 318 "equiv_type.m"
            }
#line 288 "equiv_type.m"
            break;
#line 288 "equiv_type.m"
        }
#line 288 "equiv_type.m"
        break;
#line 288 "equiv_type.m"
    }
#line 288 "equiv_type.m"
  }
#line 280 "equiv_type.m"
}

#line 257 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Location_4,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 257 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 257 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 257 "equiv_type.m"
{
#line 263 "equiv_type.m"
  while (MR_TRUE)
#line 263 "equiv_type.m"
    {
#line 263 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 263 "equiv_type.m"
      {
#line 263 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 263 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 263 "equiv_type.m"
          {
#line 264 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 264 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 264 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 264 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 263 "equiv_type.m"
          }
#line 263 "equiv_type.m"
        else
#line 266 "equiv_type.m"
          {
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_40;
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_41;
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;
#line 266 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;

#line 267 "equiv_type.m"
            {
#line 267 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__Location_4, parse_tree__equiv_type__Item0_34, &parse_tree__equiv_type__Item_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, &parse_tree__equiv_type__ItemSpecs_41);
            }
#line 273 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 271 "equiv_type.m"
              {
#line 272 "equiv_type.m"
                {
#line 272 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 0) = ((MR_Box) (parse_tree__equiv_type__Item_40));
#line 272 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6));
#line 272 "equiv_type.m"
                }
#line 271 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 271 "equiv_type.m"
              }
#line 273 "equiv_type.m"
            else
#line 274 "equiv_type.m"
              {
#line 275 "equiv_type.m"
                {
#line 275 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
                }
#line 274 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 274 "equiv_type.m"
              }
#line 277 "equiv_type.m"
            /* direct tailcall eliminated */
#line 277 "equiv_type.m"
            {
#line 277 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__Items0_35;
#line 277 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;
#line 277 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 277 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 277 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;

#line 277 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 277 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 277 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 277 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6;
#line 277 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 277 "equiv_type.m"
            }
#line 277 "equiv_type.m"
            continue;
#line 266 "equiv_type.m"
          }
#line 263 "equiv_type.m"
      }
#line 263 "equiv_type.m"
      break;
#line 263 "equiv_type.m"
    }
#line 257 "equiv_type.m"
}

#line 217 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks_12_p_0(
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_5,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_6,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_7,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_8,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10,
#line 217 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_11,
#line 217 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_12)
#line 217 "equiv_type.m"
{
#line 224 "equiv_type.m"
  while (MR_TRUE)
#line 224 "equiv_type.m"
    {
#line 224 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 224 "equiv_type.m"
      {
#line 224 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 224 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "equiv_type.m"
          {
#line 225 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_11;
#line 225 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 225 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_7;
#line 225 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_5;
#line 224 "equiv_type.m"
          }
#line 224 "equiv_type.m"
        else
#line 228 "equiv_type.m"
          {
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AugSection_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_31, (MR_Integer) 0)));
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_31, (MR_Integer) 1)));
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_31, (MR_Integer) 2)));
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Location_40;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_47;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_48;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_49;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61;
#line 228 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_62_62;

#line 233 "equiv_type.m"
#line 233 "equiv_type.m"
            switch (MR_tag((MR_Word) parse_tree__equiv_type__AugSection_37)) {
#line 233 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 233 "equiv_type.m"
              case (MR_Integer) 0:
#line 233 "equiv_type.m"
#line 233 "equiv_type.m"
                switch (MR_unmkbody(parse_tree__equiv_type__AugSection_37)) {
#line 233 "equiv_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 233 "equiv_type.m"
                  case (MR_Integer) 0:
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__Location_40 = (MR_Integer) 1;
#line 233 "equiv_type.m"
                    break;
#line 233 "equiv_type.m"
                  case (MR_Integer) 1:
#line 233 "equiv_type.m"
                  case (MR_Integer) 2:
#line 237 "equiv_type.m"
                    parse_tree__equiv_type__Location_40 = (MR_Integer) 2;
#line 233 "equiv_type.m"
                    break;
#line 233 "equiv_type.m"
                  case (MR_Integer) 3:
#line 245 "equiv_type.m"
                    parse_tree__equiv_type__Location_40 = (MR_Integer) 0;
#line 233 "equiv_type.m"
                    break;
#line 233 "equiv_type.m"
                }
#line 233 "equiv_type.m"
                break;
#line 233 "equiv_type.m"
              case (MR_Integer) 1:
#line 233 "equiv_type.m"
              case (MR_Integer) 2:
#line 245 "equiv_type.m"
                parse_tree__equiv_type__Location_40 = (MR_Integer) 0;
#line 233 "equiv_type.m"
                break;
#line 233 "equiv_type.m"
              case (MR_Integer) 3:
#line 245 "equiv_type.m"
                parse_tree__equiv_type__Location_40 = (MR_Integer) 0;
#line 233 "equiv_type.m"
                break;
#line 233 "equiv_type.m"
            }
#line 247 "equiv_type.m"
            {
#line 247 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__Location_40, parse_tree__equiv_type__Items0_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_11, &parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61);
            }
#line 249 "equiv_type.m"
            {
#line 249 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_47, &parse_tree__equiv_type__ReplItems_48);
            }
#line 252 "equiv_type.m"
            {
#line 252 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_49, 0) = ((MR_Box) (parse_tree__equiv_type__AugSection_37));
#line 252 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_49, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_38));
#line 252 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_49, 2) = ((MR_Box) (parse_tree__equiv_type__ReplItems_48));
#line 252 "equiv_type.m"
            }
#line 253 "equiv_type.m"
            {
#line 253 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_49));
#line 253 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_5));
#line 253 "equiv_type.m"
            }
#line 254 "equiv_type.m"
            /* direct tailcall eliminated */
#line 254 "equiv_type.m"
            {
#line 254 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__4__tmp_copy_4 = parse_tree__equiv_type__ItemBlocks0_32;
#line 254 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_5 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_62_62;
#line 254 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_7 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59;
#line 254 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 254 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_11 = parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61;

#line 254 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_11 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_11;
#line 254 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_9;
#line 254 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_7 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_7;
#line 254 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_5 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_5;
#line 254 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__4_4 = parse_tree__equiv_type__HeadVar__4__tmp_copy_4;
#line 254 "equiv_type.m"
            }
#line 254 "equiv_type.m"
            continue;
#line 228 "equiv_type.m"
          }
#line 224 "equiv_type.m"
      }
#line 224 "equiv_type.m"
      break;
#line 224 "equiv_type.m"
    }
#line 217 "equiv_type.m"
}

#line 178 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 178 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 178 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 178 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 178 "equiv_type.m"
{
#line 182 "equiv_type.m"
  while (MR_TRUE)
#line 182 "equiv_type.m"
    {
#line 182 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 182 "equiv_type.m"
      {
#line 182 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 182 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 182 "equiv_type.m"
          {
#line 182 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 182 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 182 "equiv_type.m"
          }
#line 182 "equiv_type.m"
        else
#line 183 "equiv_type.m"
          {
#line 183 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 183 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 183 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 183 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_32;
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Args_33;
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Body_34;
#line 200 "equiv_type.m"
            MR_Word parse_tree__equiv_type__VarSet_35;
#line 193 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemTypeDefn_31;
#line 193 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_43_43;
#line 194 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_36_36;
#line 194 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_37;

#line 193 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 193 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 193 "equiv_type.m"
              {
#line 193 "equiv_type.m"
                parse_tree__equiv_type__ItemTypeDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 194 "equiv_type.m"
                parse_tree__equiv_type__Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 0)));
#line 194 "equiv_type.m"
                parse_tree__equiv_type__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 1)));
#line 194 "equiv_type.m"
                parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 2)));
#line 194 "equiv_type.m"
                parse_tree__equiv_type__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 3)));
#line 194 "equiv_type.m"
                parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 4)));
#line 194 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 5)));
#line 195 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 195 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 195 "equiv_type.m"
                  parse_tree__equiv_type__Body_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 193 "equiv_type.m"
              }
#line 200 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 197 "equiv_type.m"
              {
#line 197 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__Arity_38;
#line 197 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtor_39;
#line 197 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_44_44;

#line 197 "equiv_type.m"
                {
#line 197 "equiv_type.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[1], parse_tree__equiv_type__Args_33, &parse_tree__equiv_type__Arity_38);
                }
#line 198 "equiv_type.m"
                {
#line 198 "equiv_type.m"
                  parse_tree__equiv_type__TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 198 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_32));
#line 198 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 198 "equiv_type.m"
                }
#line 199 "equiv_type.m"
                {
#line 199 "equiv_type.m"
                  parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 199 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_35));
#line 199 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_33));
#line 199 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_34));
#line 199 "equiv_type.m"
                }
#line 199 "equiv_type.m"
                {
#line 199 "equiv_type.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_39)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20);
                }
#line 197 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 197 "equiv_type.m"
              }
#line 200 "equiv_type.m"
            else
#line 208 "equiv_type.m"
              {
#line 208 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_52;
#line 208 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_53;
#line 208 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_54;
#line 208 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_55;
#line 201 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemInstDefn_40;
#line 201 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 202 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_41_41;
#line 202 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_49;

#line 201 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 201 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 201 "equiv_type.m"
                  {
#line 201 "equiv_type.m"
                    parse_tree__equiv_type__ItemInstDefn_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 0)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 1)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 2)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 3)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 4)));
#line 202 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 5)));
#line 203 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 203 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 203 "equiv_type.m"
                      parse_tree__equiv_type__Body_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, (MR_Integer) 0)));
#line 201 "equiv_type.m"
                  }
#line 208 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 205 "equiv_type.m"
                  {
#line 205 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstId_42;
#line 205 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;
#line 205 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_51;

#line 205 "equiv_type.m"
                    {
#line 205 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], parse_tree__equiv_type__Args_53, &parse_tree__equiv_type__Arity_51);
                    }
#line 206 "equiv_type.m"
                    {
#line 206 "equiv_type.m"
                      parse_tree__equiv_type__InstId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 0) = ((MR_Box) (parse_tree__equiv_type__Name_52));
#line 206 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_51));
#line 206 "equiv_type.m"
                    }
#line 207 "equiv_type.m"
                    {
#line 207 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 207 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_55));
#line 207 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Args_53));
#line 207 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (parse_tree__equiv_type__Body_54));
#line 207 "equiv_type.m"
                    }
#line 207 "equiv_type.m"
                    {
#line 207 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_42)), ((MR_Box) (parse_tree__equiv_type__V_47_47)), parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21);
                    }
#line 205 "equiv_type.m"
                  }
#line 208 "equiv_type.m"
                else
#line 208 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 208 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 208 "equiv_type.m"
              }
#line 185 "equiv_type.m"
            /* direct tailcall eliminated */
#line 185 "equiv_type.m"
            {
#line 185 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 185 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 185 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;

#line 185 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 185 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 185 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 185 "equiv_type.m"
            }
#line 185 "equiv_type.m"
            continue;
#line 183 "equiv_type.m"
          }
#line 182 "equiv_type.m"
      }
#line 182 "equiv_type.m"
      break;
#line 182 "equiv_type.m"
    }
#line 178 "equiv_type.m"
}

#line 163 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_blocks_5_p_0(
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 163 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 163 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 163 "equiv_type.m"
{
#line 167 "equiv_type.m"
  while (MR_TRUE)
#line 167 "equiv_type.m"
    {
#line 167 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 167 "equiv_type.m"
      {
#line 167 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 167 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 167 "equiv_type.m"
          {
#line 167 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 167 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 167 "equiv_type.m"
          }
#line 167 "equiv_type.m"
        else
#line 169 "equiv_type.m"
          {
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AugItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AugItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__AugSection_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugItemBlock_12, (MR_Integer) 0)));
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugItemBlock_12, (MR_Integer) 2)));
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_24_24;
#line 169 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_25_25;
#line 170 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugItemBlock_12, (MR_Integer) 1)));
#line 171 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_19_19;

#line 171 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__AugSection_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__AugSection_16, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 171 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 171 "equiv_type.m"
              {
#line 171 "equiv_type.m"
                parse_tree__equiv_type__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__AugSection_16, (MR_Integer) 1)));
#line 172 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_25_25 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 172 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_24_24 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 171 "equiv_type.m"
              }
#line 171 "equiv_type.m"
            else
#line 174 "equiv_type.m"
              {
#line 174 "equiv_type.m"
                parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(parse_tree__equiv_type__Items_18, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_24_24, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_25_25);
              }
#line 176 "equiv_type.m"
            /* direct tailcall eliminated */
#line 176 "equiv_type.m"
            {
#line 176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__AugItemBlocks_13;
#line 176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_24_24;
#line 176 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_25_25;

#line 176 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 176 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 176 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 176 "equiv_type.m"
            }
#line 176 "equiv_type.m"
            continue;
#line 169 "equiv_type.m"
          }
#line 167 "equiv_type.m"
      }
#line 167 "equiv_type.m"
      break;
#line 167 "equiv_type.m"
    }
#line 163 "equiv_type.m"
}

#line 900 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 900 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 900 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 900 "equiv_type.m"
{
#line 900 "equiv_type.m"
  {
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 900 "equiv_type.m"
  }
#line 900 "equiv_type.m"
}

#line 79 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0(
#line 79 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_8,
#line 79 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13,
#line 79 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_14,
#line 79 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15,
#line 79 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_16,
#line 79 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17,
#line 79 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18)
#line 79 "equiv_type.m"
{
#line 889 "equiv_type.m"
  {
#line 889 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 889 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 900 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 900 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 891 "equiv_type.m"
    {
#line 891 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) ((MR_Integer) 0));
#line 900 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 900 "equiv_type.m"
    }
#line 11874 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 900 "equiv_type.m"
    {
#line 900 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 900 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 900 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 889 "equiv_type.m"
  }
#line 79 "equiv_type.m"
}

#line 793 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 793 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 793 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 793 "equiv_type.m"
{
#line 793 "equiv_type.m"
  {
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 793 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 793 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 793 "equiv_type.m"
  }
#line 793 "equiv_type.m"
}

#line 75 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0(
#line 75 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_8,
#line 75 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_9,
#line 75 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_10,
#line 75 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14,
#line 75 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_15,
#line 75 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16,
#line 75 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17)
#line 75 "equiv_type.m"
{
#line 768 "equiv_type.m"
  {
#line 768 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 768 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 793 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 782 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 770 "equiv_type.m"
    {
#line 770 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 779 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 779 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) ((MR_Integer) 0));
#line 793 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 793 "equiv_type.m"
    }
#line 12023 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 793 "equiv_type.m"
    {
#line 793 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[3], (MR_Word) &parse_tree__equiv_type_scalar_common_1[4], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 793 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 782 "equiv_type.m"
    {
#line 782 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeEqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 784 "equiv_type.m"
    {
#line 784 "equiv_type.m"
      MR_Word base;
#line 784 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 784 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 784 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 784 "equiv_type.m"
    }
#line 768 "equiv_type.m"
  }
#line 75 "equiv_type.m"
}

#line 70 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_8_p_0(
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_9,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Typess_16,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_11,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_18,
#line 70 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 70 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20)
#line 70 "equiv_type.m"
{
#line 919 "equiv_type.m"
  {
#line 919 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 919 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 931 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 931 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 921 "equiv_type.m"
    {
#line 921 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 931 "equiv_type.m"
    {
#line 931 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15, parse_tree__equiv_type__STATE_VARIABLE_Typess_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 919 "equiv_type.m"
  }
#line 70 "equiv_type.m"
}

#line 66 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__replace_in_type_8_p_0(
#line 66 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_9,
#line 66 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_10,
#line 66 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_11,
#line 66 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_12,
#line 66 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16,
#line 66 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_17,
#line 66 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18,
#line 66 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19)
#line 66 "equiv_type.m"
{
#line 1019 "equiv_type.m"
  {
#line 1019 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1019 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1030 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1021 "equiv_type.m"
    {
#line 1021 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1030 "equiv_type.m"
    {
#line 1030 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_location_2_13_p_0((MR_Integer) 0, parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1019 "equiv_type.m"
  }
#line 66 "equiv_type.m"
}

#line 56 "equiv_type.m"
void MR_CALL 
parse_tree__equiv_type__expand_eqv_types_insts_10_p_0(
#line 56 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_11,
#line 56 "equiv_type.m"
  MR_Word parse_tree__equiv_type__AugItemBlocks0_12,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__AugItemBlocks_13,
#line 56 "equiv_type.m"
  MR_Word parse_tree__equiv_type__EventSpecMap0_14,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__EventSpecMap_15,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeEqvMap_16,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26,
#line 56 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28,
#line 56 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_29)
#line 56 "equiv_type.m"
{
#line 126 "equiv_type.m"
  {
#line 126 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_44_44;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_45_45;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeEqvMap0_20;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstEqvMap0_21;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstEqvMap_22;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevAugItemBlocks_23;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_24;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_25;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_33_33;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_34_34;
#line 126 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_35_35;

#line 129 "equiv_type.m"
    {
#line 129 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__TypeEqvMap0_20);
    }
#line 130 "equiv_type.m"
    {
#line 130 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__InstEqvMap0_21);
    }
#line 131 "equiv_type.m"
    {
#line 131 "equiv_type.m"
      parse_tree__equiv_type__build_eqv_maps_in_blocks_5_p_0(parse_tree__equiv_type__AugItemBlocks0_12, parse_tree__equiv_type__TypeEqvMap0_20, parse_tree__equiv_type__TypeEqvMap_16, parse_tree__equiv_type__InstEqvMap0_21, &parse_tree__equiv_type__InstEqvMap_22);
    }
#line 136 "equiv_type.m"
    {
#line 136 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 138 "equiv_type.m"
    {
#line 138 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks_12_p_0(parse_tree__equiv_type__ModuleName_11, *parse_tree__equiv_type__TypeEqvMap_16, parse_tree__equiv_type__InstEqvMap_22, parse_tree__equiv_type__AugItemBlocks0_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevAugItemBlocks_23, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_27, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_34_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_35_35);
    }
#line 140 "equiv_type.m"
    {
#line 140 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__RevAugItemBlocks_23, parse_tree__equiv_type__AugItemBlocks_13);
    }
#line 12238 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 12240 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 141 "equiv_type.m"
    {
#line 141 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_44_44, parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__EventSpecMap0_14, &parse_tree__equiv_type__EventSpecList0_24);
    }
#line 142 "equiv_type.m"
    {
#line 142 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_24, &parse_tree__equiv_type__EventSpecList_25, *parse_tree__equiv_type__TypeEqvMap_16, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_33_33, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_28, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26, parse_tree__equiv_type__STATE_VARIABLE_Specs_35_35, parse_tree__equiv_type__STATE_VARIABLE_Specs_29);
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_44_44, parse_tree__equiv_type__TypeCtorInfo_45_45, parse_tree__equiv_type__EventSpecList_25, parse_tree__equiv_type__EventSpecMap_15);
#line 144 "equiv_type.m"
      return;
    }
#line 126 "equiv_type.m"
  }
#line 56 "equiv_type.m"
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
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_location_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_inst_eqv_map_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_pred_or_func_decl_type_0);
	MR_register_type_ctor_info(&parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_type_eqv_map_0);
}

void mercury__parse_tree__equiv_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.equiv_type. */
