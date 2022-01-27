/*
** Automatically generated from `equiv_type.m'
** by the Mercury compiler,
** version DEV
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 101 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 104 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 107 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0;

#line 110 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 113 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 116 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0;

#line 119 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0;

#line 122 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 125 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 128 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 131 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3];

#line 134 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0;

#line 137 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1];

#line 140 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1];

#line 143 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1];

#line 146 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1];

#line 149 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 155 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3];

#line 161 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0;

#line 164 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1];

#line 167 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1];

#line 170 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1];

#line 173 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1];

#line 176 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0;

#line 179 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0;

#line 182 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1];

#line 185 "parse_tree.equiv_type.c"
static const MR_DuFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1;

#line 188 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1];

#line 191 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1];

#line 194 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_maybe_record_sym_name_use_0[2];

#line 197 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2];

#line 200 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2];

#line 203 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0;

#line 206 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1;

#line 209 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2];

#line 212 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2];

#line 215 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2];

#line 218 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0;

#line 221 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0;

#line 224 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 227 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 229 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 232 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 235 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 237 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 239 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 242 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 245 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 247 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 250 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 253 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 255 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 257 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 260 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 263 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 265 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 268 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 271 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 273 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 275 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 278 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 281 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 283 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 286 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 289 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 291 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 293 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 296 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 299 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 301 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 304 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 307 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 309 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 311 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 314 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 317 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 319 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 321 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 324 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 327 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 329 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 331 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 333 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4);

#line 336 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 339 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 341 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2);

#line 344 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 347 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 349 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 351 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3);

#line 248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 248 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1396 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1396 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33);

#line 1258 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29);

#line 1248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);

#line 732 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 701 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10);

#line 565 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 531 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11);

#line 461 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 197 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 197 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 197 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 1359 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1359__1_1_f_0(
#line 1359 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134);

#line 1352 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1352__1_1_f_0(
#line 1352 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165);

#line 1070 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1070__1_2_p_0(
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44);

#line 248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 248 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 193 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 193 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 193 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 244 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 244 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 244 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 191 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 184 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 184 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3);

#line 184 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2);

#line 1541 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1537 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1516 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22);

#line 1510 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6);

#line 1494 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23);

#line 1477 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 1474 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 1467 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 1359 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1359 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1359 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1352 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1352 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1352 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1);

#line 1292 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82);

#line 1191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);

#line 1098 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);

#line 1085 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);

#line 1070 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1070 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg);

#line 1047 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);

#line 1004 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);

#line 993 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 963 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32);

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 953 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 933 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);

#line 891 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51);

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 878 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25);

#line 864 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 843 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 829 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);

#line 808 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);

#line 767 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);

#line 683 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 498 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 431 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 394 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 326 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20);

#line 302 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13);

#line 208 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 208 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 208 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5);

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8);

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
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
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_src_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0))
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2272 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2281 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2289 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__maybe__pti_maybe_1__plain_recompilation__type_ctor_info_eqv_expanded_item_set_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_eqv_expanded_item_set_0
  }
};

#line 2297 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_id_0__plain_parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2306 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__equiv_type__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2314 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0
  }
};

#line 2323 "parse_tree.equiv_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__equiv_type__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_datastruct_0__plain_parse_tree__prog_data__type_ctor_info_datastruct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_datastruct_0
  }
};

#line 2332 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2340 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2348 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 2356 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_inst_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
};

#line 2363 "parse_tree.equiv_type.c"
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

#line 2378 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2383 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_inst_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_inst_body_0_0
  }
};

#line 2392 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_inst_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_inst_body_0_0
};

#line 2397 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_inst_body_0[1] = {
  (MR_Integer) 0
};

#line 2402 "parse_tree.equiv_type.c"
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

#line 2419 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2427 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2435 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct1 parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__equiv_type__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2443 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_eqv_type_body_0_0[3] = {
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__equiv_type__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2450 "parse_tree.equiv_type.c"
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

#line 2465 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2470 "parse_tree.equiv_type.c"
static const MR_DuPtagLayout parse_tree__equiv_type__parse_tree__equiv_type__du_ptag_ordered_eqv_type_body_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_eqv_type_body_0_0
  }
};

#line 2479 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_eqv_type_body_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_eqv_type_body_0_0
};

#line 2484 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_eqv_type_body_0[1] = {
  (MR_Integer) 0
};

#line 2489 "parse_tree.equiv_type.c"
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

#line 2506 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_inst_id_0parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0
  }
};

#line 2515 "parse_tree.equiv_type.c"
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

#line 2532 "parse_tree.equiv_type.c"
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

#line 2547 "parse_tree.equiv_type.c"
static const MR_PseudoTypeInfo parse_tree__equiv_type__parse_tree__equiv_type__field_types_maybe_record_sym_name_use_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_item_visibility_0
};

#line 2552 "parse_tree.equiv_type.c"
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

#line 2567 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_0[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0
};

#line 2572 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_stag_ordered_maybe_record_sym_name_use_0_1[1] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2577 "parse_tree.equiv_type.c"
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

#line 2591 "parse_tree.equiv_type.c"
static const MR_DuFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__du_name_ordered_maybe_record_sym_name_use_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__du_functor_desc_maybe_record_sym_name_use_0_1
};

#line 2597 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_maybe_record_sym_name_use_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2603 "parse_tree.equiv_type.c"
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

#line 2620 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0 = {
  (MR_String) "type_decl",
  (MR_Integer) 0
};

#line 2626 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDesc parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1 = {
  (MR_String) "mode_decl",
  (MR_Integer) 1
};

#line 2632 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_value_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1
};

#line 2638 "parse_tree.equiv_type.c"
static const MR_EnumFunctorDescPtr parse_tree__equiv_type__parse_tree__equiv_type__enum_name_ordered_pred_or_func_decl_type_0[2] = {
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_1,
  &parse_tree__equiv_type__parse_tree__equiv_type__enum_functor_desc_pred_or_func_decl_type_0_0
};

#line 2644 "parse_tree.equiv_type.c"
static const MR_Integer parse_tree__equiv_type__parse_tree__equiv_type__functor_number_map_pred_or_func_decl_type_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2650 "parse_tree.equiv_type.c"
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

#line 2667 "parse_tree.equiv_type.c"
static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__equiv_type____vpti_func_2__pseudo_1__plain_parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_maybe_record_sym_name_use_0
  }
};

#line 2677 "parse_tree.equiv_type.c"
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

#line 2694 "parse_tree.equiv_type.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__equiv_type__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0parse_tree__equiv_type__type_ctor_info_eqv_type_body_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0
  }
};

#line 2703 "parse_tree.equiv_type.c"
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

#line 2720 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0_10001(
#line 2723 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2725 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2727 "parse_tree.equiv_type.c"
{
#line 2729 "parse_tree.equiv_type.c"
  {
#line 2731 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2734 "parse_tree.equiv_type.c"
    {
#line 2736 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_inst_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2739 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2741 "parse_tree.equiv_type.c"
  }
#line 2743 "parse_tree.equiv_type.c"
}

#line 2746 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0_10001(
#line 2749 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2751 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2753 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2755 "parse_tree.equiv_type.c"
{
#line 2757 "parse_tree.equiv_type.c"
  {
#line 2759 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2762 "parse_tree.equiv_type.c"
    {
#line 2764 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_inst_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2767 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2769 "parse_tree.equiv_type.c"
  }
#line 2771 "parse_tree.equiv_type.c"
}

#line 2774 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_type_body_0_0_10001(
#line 2777 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2779 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2781 "parse_tree.equiv_type.c"
{
#line 2783 "parse_tree.equiv_type.c"
  {
#line 2785 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2788 "parse_tree.equiv_type.c"
    {
#line 2790 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____eqv_type_body_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2793 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2795 "parse_tree.equiv_type.c"
  }
#line 2797 "parse_tree.equiv_type.c"
}

#line 2800 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_type_body_0_0_10001(
#line 2803 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2805 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2807 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2809 "parse_tree.equiv_type.c"
{
#line 2811 "parse_tree.equiv_type.c"
  {
#line 2813 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2816 "parse_tree.equiv_type.c"
    {
#line 2818 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____eqv_type_body_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2821 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2823 "parse_tree.equiv_type.c"
  }
#line 2825 "parse_tree.equiv_type.c"
}

#line 2828 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0_10001(
#line 2831 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2833 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2835 "parse_tree.equiv_type.c"
{
#line 2837 "parse_tree.equiv_type.c"
  {
#line 2839 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2842 "parse_tree.equiv_type.c"
    {
#line 2844 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____inst_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2847 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2849 "parse_tree.equiv_type.c"
  }
#line 2851 "parse_tree.equiv_type.c"
}

#line 2854 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0_10001(
#line 2857 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2859 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2861 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2863 "parse_tree.equiv_type.c"
{
#line 2865 "parse_tree.equiv_type.c"
  {
#line 2867 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2870 "parse_tree.equiv_type.c"
    {
#line 2872 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____inst_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2875 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2877 "parse_tree.equiv_type.c"
  }
#line 2879 "parse_tree.equiv_type.c"
}

#line 2882 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0_10001(
#line 2885 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2887 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2889 "parse_tree.equiv_type.c"
{
#line 2891 "parse_tree.equiv_type.c"
  {
#line 2893 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2896 "parse_tree.equiv_type.c"
    {
#line 2898 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2901 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2903 "parse_tree.equiv_type.c"
  }
#line 2905 "parse_tree.equiv_type.c"
}

#line 2908 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0_10001(
#line 2911 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2913 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2915 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2917 "parse_tree.equiv_type.c"
{
#line 2919 "parse_tree.equiv_type.c"
  {
#line 2921 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2924 "parse_tree.equiv_type.c"
    {
#line 2926 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2929 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2931 "parse_tree.equiv_type.c"
  }
#line 2933 "parse_tree.equiv_type.c"
}

#line 2936 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0_10001(
#line 2939 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2941 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 2943 "parse_tree.equiv_type.c"
{
#line 2945 "parse_tree.equiv_type.c"
  {
#line 2947 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 2950 "parse_tree.equiv_type.c"
    {
#line 2952 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 2955 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 2957 "parse_tree.equiv_type.c"
  }
#line 2959 "parse_tree.equiv_type.c"
}

#line 2962 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0_10001(
#line 2965 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 2967 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2969 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2971 "parse_tree.equiv_type.c"
{
#line 2973 "parse_tree.equiv_type.c"
  {
#line 2975 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 2978 "parse_tree.equiv_type.c"
    {
#line 2980 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 2983 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 2985 "parse_tree.equiv_type.c"
  }
#line 2987 "parse_tree.equiv_type.c"
}

#line 2990 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0_10001(
#line 2993 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 2995 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 2997 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 2999 "parse_tree.equiv_type.c"
{
#line 3001 "parse_tree.equiv_type.c"
  {
#line 3003 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3006 "parse_tree.equiv_type.c"
    {
#line 3008 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3011 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3013 "parse_tree.equiv_type.c"
  }
#line 3015 "parse_tree.equiv_type.c"
}

#line 3018 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0_10001(
#line 3021 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3023 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 3025 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 3027 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_4)
#line 3029 "parse_tree.equiv_type.c"
{
#line 3031 "parse_tree.equiv_type.c"
  {
#line 3033 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3036 "parse_tree.equiv_type.c"
    {
#line 3038 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), ((MR_Word) parse_tree__equiv_type__wrapper_arg_4));
    }
#line 3041 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3043 "parse_tree.equiv_type.c"
  }
#line 3045 "parse_tree.equiv_type.c"
}

#line 3048 "parse_tree.equiv_type.c"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____type_eqv_map_0_0_10001(
#line 3051 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 3053 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2)
#line 3055 "parse_tree.equiv_type.c"
{
#line 3057 "parse_tree.equiv_type.c"
  {
#line 3059 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded;

#line 3062 "parse_tree.equiv_type.c"
    {
#line 3064 "parse_tree.equiv_type.c"
      parse_tree__equiv_type__succeeded = parse_tree__equiv_type____Unify____type_eqv_map_0_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1), ((MR_Word) parse_tree__equiv_type__wrapper_arg_2));
    }
#line 3067 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 3069 "parse_tree.equiv_type.c"
  }
#line 3071 "parse_tree.equiv_type.c"
}

#line 3074 "parse_tree.equiv_type.c"
static void MR_CALL 
parse_tree__equiv_type____Compare____type_eqv_map_0_0_10001(
#line 3077 "parse_tree.equiv_type.c"
  MR_Box * parse_tree__equiv_type__wrapper_arg_1,
#line 3079 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_2,
#line 3081 "parse_tree.equiv_type.c"
  MR_Box parse_tree__equiv_type__wrapper_arg_3)
#line 3083 "parse_tree.equiv_type.c"
{
#line 3085 "parse_tree.equiv_type.c"
  {
#line 3087 "parse_tree.equiv_type.c"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__1_1;

#line 3090 "parse_tree.equiv_type.c"
    {
#line 3092 "parse_tree.equiv_type.c"
      parse_tree__equiv_type____Compare____type_eqv_map_0_0(&parse_tree__equiv_type__conv0_HeadVar__1_1, ((MR_Word) parse_tree__equiv_type__wrapper_arg_2), ((MR_Word) parse_tree__equiv_type__wrapper_arg_3));
    }
#line 3095 "parse_tree.equiv_type.c"
    *parse_tree__equiv_type__wrapper_arg_1 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__1_1));
#line 3097 "parse_tree.equiv_type.c"
  }
#line 3099 "parse_tree.equiv_type.c"
}

#line 248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(
#line 248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 248 "equiv_type.m"
{
#line 248 "equiv_type.m"
  {
#line 248 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 248 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 248 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 248 "equiv_type.m"
    {
#line 248 "equiv_type.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(parse_tree__equiv_type__HeadVar__1_1, (MR_Word) parse_tree__equiv_type__Cast_HeadVar1_4, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_5);
#line 248 "equiv_type.m"
      return;
    }
#line 248 "equiv_type.m"
  }
#line 248 "equiv_type.m"
}

#line 248 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 248 "equiv_type.m"
{
#line 248 "equiv_type.m"
  {
#line 248 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 248 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 248 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 248 "equiv_type.m"
    {
#line 248 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__equiv_type__Cast_HeadVar1_3, (MR_Word) parse_tree__equiv_type__Cast_HeadVar2_4);
    }
#line 248 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 248 "equiv_type.m"
  }
#line 248 "equiv_type.m"
}

#line 1396 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_20,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_21,
#line 1396 "equiv_type.m"
  MR_Integer parse_tree__equiv_type__OrigArity_22,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_23,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__DeclType_24,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ExtraModes_25,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybePredOrFunc0_26,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybePredOrFunc_27,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_28,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_29,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1396 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55,
#line 1396 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_33)
#line 1396 "equiv_type.m"
{
#line 1410 "equiv_type.m"
  {
#line 1410 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1410 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithInst0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1460 "equiv_type.m"
      {
#line 1461 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1462 "equiv_type.m"
        *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1463 "equiv_type.m"
        *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1464 "equiv_type.m"
        *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1460 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1460 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1460 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1460 "equiv_type.m"
      }
#line 1410 "equiv_type.m"
    else
#line 1410 "equiv_type.m"
      {
#line 1410 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithInst0_28, (MR_Integer) 0)));
#line 1410 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_35;
#line 1410 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1435 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_39;
#line 1435 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes0_40;
#line 1435 "equiv_type.m"
        MR_Word parse_tree__equiv_type__DetPrime_42;
#line 1414 "equiv_type.m"
        MR_Word parse_tree__equiv_type__GroundInstInfo_37;
#line 1414 "equiv_type.m"
        MR_Word parse_tree__equiv_type__HOInst_38;
#line 1414 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1416 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_41_41;

#line 1411 "equiv_type.m"
        {
#line 1411 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(parse_tree__equiv_type__WithInst0_34, parse_tree__equiv_type__InstEqvMap_20, &parse_tree__equiv_type__WithInst_35, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1414 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__WithInst_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1414 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1414 "equiv_type.m"
          {
#line 1414 "equiv_type.m"
            parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 1)));
#line 1414 "equiv_type.m"
            parse_tree__equiv_type__GroundInstInfo_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__WithInst_35, (MR_Integer) 2)));
#line 1415 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__GroundInstInfo_37)) == (MR_mktag((MR_Integer) 1)));
#line 1415 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1415 "equiv_type.m"
              {
#line 1415 "equiv_type.m"
                parse_tree__equiv_type__HOInst_38 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__GroundInstInfo_37), (MR_Integer) 1);
#line 1416 "equiv_type.m"
                parse_tree__equiv_type__PredOrFunc_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 0)));
#line 1416 "equiv_type.m"
                parse_tree__equiv_type__ExtraModes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 1)));
#line 1416 "equiv_type.m"
                parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 2)));
#line 1416 "equiv_type.m"
                parse_tree__equiv_type__DetPrime_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HOInst_38, (MR_Integer) 3)));
#line 1418 "equiv_type.m"
                if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1417 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1418 "equiv_type.m"
                else
#line 1418 "equiv_type.m"
                  {
#line 1418 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));

#line 1418 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_39 == parse_tree__equiv_type__V_105_105);
#line 1418 "equiv_type.m"
                  }
#line 1415 "equiv_type.m"
              }
#line 1414 "equiv_type.m"
          }
#line 1435 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1421 "equiv_type.m"
          {
#line 1421 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RecordedPredOrFunc_43;
#line 1421 "equiv_type.m"
            MR_Word parse_tree__equiv_type__OrigItemId_44;
#line 1421 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_59_59;
#line 1421 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_60_60;

#line 1421 "equiv_type.m"
            {
#line 1421 "equiv_type.m"
              MR_Word base;
#line 1421 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = base;
#line 1421 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__DetPrime_42));
#line 1421 "equiv_type.m"
            }
#line 1422 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1423 "equiv_type.m"
            {
#line 1423 "equiv_type.m"
              MR_Word base;
#line 1423 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "equiv_type.m"
              *parse_tree__equiv_type__MaybePredOrFunc_27 = base;
#line 1423 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_39));
#line 1423 "equiv_type.m"
            }
#line 1424 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = parse_tree__equiv_type__ExtraModes0_40;
#line 1428 "equiv_type.m"
            if ((parse_tree__equiv_type__MaybePredOrFunc0_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1427 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = (MR_Integer) 0;
#line 1428 "equiv_type.m"
            else
#line 1429 "equiv_type.m"
              parse_tree__equiv_type__RecordedPredOrFunc_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc0_26, (MR_Integer) 0)));
#line 1431 "equiv_type.m"
            {
#line 1431 "equiv_type.m"
              parse_tree__equiv_type__V_59_59 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__RecordedPredOrFunc_43);
            }
#line 1432 "equiv_type.m"
            {
#line 1432 "equiv_type.m"
              parse_tree__equiv_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1432 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1432 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_22));
#line 1432 "equiv_type.m"
            }
#line 1431 "equiv_type.m"
            {
#line 1431 "equiv_type.m"
              parse_tree__equiv_type__OrigItemId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 0) = ((MR_Box) (parse_tree__equiv_type__V_59_59));
#line 1431 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_60_60));
#line 1431 "equiv_type.m"
            }
#line 1433 "equiv_type.m"
            {
#line 1433 "equiv_type.m"
              recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_44, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53);
            }
#line 1434 "equiv_type.m"
            *parse_tree__equiv_type__Specs_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "equiv_type.m"
          }
#line 1435 "equiv_type.m"
        else
#line 1436 "equiv_type.m"
          {
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorInfo_104_104;
#line 1436 "equiv_type.m"
            MR_String parse_tree__equiv_type__DeclStr_45;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__PredOrFuncPieces_46;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces_47;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg_48;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec_49;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_64_64;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_67_67;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_68_68;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_73_73;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_74_74;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_75_75;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_76_76;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_86_86;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_93_93;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_94_94;
#line 1436 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;

#line 1436 "equiv_type.m"
            *parse_tree__equiv_type__ExtraModes_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1437 "equiv_type.m"
            *parse_tree__equiv_type__MaybePredOrFunc_27 = parse_tree__equiv_type__MaybePredOrFunc0_26;
#line 1440 "equiv_type.m"
            *parse_tree__equiv_type__MaybeWithInst_29 = parse_tree__equiv_type__MaybeWithInst0_28;
#line 1442 "equiv_type.m"
#line 1442 "equiv_type.m"
            switch (parse_tree__equiv_type__DeclType_24) {
#line 1442 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1442 "equiv_type.m"
              case (MR_Integer) 1:
#line 1442 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "mode declaration";
#line 1442 "equiv_type.m"
                break;
#line 1442 "equiv_type.m"
              case (MR_Integer) 0:
#line 1441 "equiv_type.m"
                parse_tree__equiv_type__DeclStr_45 = (MR_String) "declaration";
#line 1442 "equiv_type.m"
                break;
#line 1442 "equiv_type.m"
            }
#line 1447 "equiv_type.m"
            if ((*parse_tree__equiv_type__MaybePredOrFunc_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1446 "equiv_type.m"
              parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1447 "equiv_type.m"
            else
#line 1448 "equiv_type.m"
              {
#line 1448 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_62_62;
#line 1448 "equiv_type.m"
                MR_Word parse_tree__equiv_type__PredOrFunc_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), *parse_tree__equiv_type__MaybePredOrFunc_27, (MR_Integer) 0)));

#line 1449 "equiv_type.m"
                {
#line 1449 "equiv_type.m"
                  parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1449 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_101));
#line 1449 "equiv_type.m"
                }
#line 1449 "equiv_type.m"
                {
#line 1449 "equiv_type.m"
                  parse_tree__equiv_type__PredOrFuncPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_62_62));
#line 1449 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredOrFuncPieces_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1449 "equiv_type.m"
                }
#line 1448 "equiv_type.m"
              }
#line 3485 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__DeclStr_45));
#line 1451 "equiv_type.m"
            }
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 0) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[36])));
#line 1451 "equiv_type.m"
            }
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[34])));
#line 1451 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__V_67_67));
#line 1451 "equiv_type.m"
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_76_76, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 1452 "equiv_type.m"
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 0) = ((MR_Box) (parse_tree__equiv_type__V_76_76));
#line 1452 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[27])));
#line 1452 "equiv_type.m"
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[29]));
            }
#line 1453 "equiv_type.m"
            {
#line 1453 "equiv_type.m"
              parse_tree__equiv_type__V_74_74 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_75_75, parse_tree__equiv_type__V_86_86);
            }
#line 1452 "equiv_type.m"
            {
#line 1452 "equiv_type.m"
              parse_tree__equiv_type__V_73_73 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__PredOrFuncPieces_46, parse_tree__equiv_type__V_74_74);
            }
#line 1451 "equiv_type.m"
            {
#line 1451 "equiv_type.m"
              parse_tree__equiv_type__Pieces_47 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_104_104, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__V_73_73);
            }
#line 1455 "equiv_type.m"
            {
#line 1455 "equiv_type.m"
              parse_tree__equiv_type__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_94_94, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_47));
#line 1455 "equiv_type.m"
            }
#line 1455 "equiv_type.m"
            {
#line 1455 "equiv_type.m"
              parse_tree__equiv_type__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__V_94_94));
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1455 "equiv_type.m"
            }
#line 1455 "equiv_type.m"
            {
#line 1455 "equiv_type.m"
              parse_tree__equiv_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 0) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 1455 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_93_93));
#line 1455 "equiv_type.m"
            }
#line 1456 "equiv_type.m"
            {
#line 1456 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1456 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_48));
#line 1456 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "equiv_type.m"
            }
#line 1456 "equiv_type.m"
            {
#line 1456 "equiv_type.m"
              parse_tree__equiv_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1456 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_49, 2) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1456 "equiv_type.m"
            }
#line 1457 "equiv_type.m"
            {
#line 1457 "equiv_type.m"
              MR_Word base;
#line 1457 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "equiv_type.m"
              *parse_tree__equiv_type__Specs_33 = base;
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_49));
#line 1457 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "equiv_type.m"
            }
#line 1436 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1436 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_51 = parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_50;
#line 1436 "equiv_type.m"
          }
#line 1410 "equiv_type.m"
      }
#line 1410 "equiv_type.m"
  }
#line 1396 "equiv_type.m"
}

#line 1258 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_11,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ExpandedInstIds_13,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_14,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27,
#line 1258 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28,
#line 1258 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29)
#line 1258 "equiv_type.m"
{
#line 1286 "equiv_type.m"
  while (MR_TRUE)
#line 1286 "equiv_type.m"
    {
#line 1286 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 1286 "equiv_type.m"
      {
#line 1286 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Inst0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1286 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SymName_17;
#line 1286 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ArgInsts_18;
#line 1266 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_30_30;

#line 1266 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1266 "equiv_type.m"
          {
#line 1266 "equiv_type.m"
            parse_tree__equiv_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Inst0_11, (MR_Integer) 1)));
#line 1266 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_30_30)) == (MR_mktag((MR_Integer) 0)));
#line 1266 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1266 "equiv_type.m"
              {
#line 1266 "equiv_type.m"
                parse_tree__equiv_type__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 0)));
#line 1266 "equiv_type.m"
                parse_tree__equiv_type__ArgInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_30_30, (MR_Integer) 1)));
#line 1266 "equiv_type.m"
              }
#line 1266 "equiv_type.m"
          }
#line 1286 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1267 "equiv_type.m"
          {
#line 1267 "equiv_type.m"
            MR_Word parse_tree__equiv_type__InstId_19;
#line 1267 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_31_31;

#line 1267 "equiv_type.m"
            {
#line 1267 "equiv_type.m"
              parse_tree__equiv_type__V_31_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, parse_tree__equiv_type__ArgInsts_18);
            }
#line 1267 "equiv_type.m"
            {
#line 1267 "equiv_type.m"
              parse_tree__equiv_type__InstId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_17));
#line 1267 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_19, 1) = ((MR_Box) (parse_tree__equiv_type__V_31_31));
#line 1267 "equiv_type.m"
            }
#line 1269 "equiv_type.m"
            {
#line 1269 "equiv_type.m"
              parse_tree__equiv_type__succeeded = mercury__set__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, ((MR_Box) (parse_tree__equiv_type__InstId_19)), parse_tree__equiv_type__ExpandedInstIds_13);
            }
#line 1272 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 1271 "equiv_type.m"
              {
#line 1271 "equiv_type.m"
                *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1271 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1271 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1271 "equiv_type.m"
              }
#line 1272 "equiv_type.m"
            else
#line 1283 "equiv_type.m"
              {
#line 1283 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstParams_22;
#line 1283 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInst_23;
#line 1273 "equiv_type.m"
                MR_Word parse_tree__equiv_type__EqvInstBody_20;
#line 1273 "equiv_type.m"
                MR_Box parse_tree__equiv_type__conv0_EqvInstBody_20;
#line 1274 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_21_21;

#line 1273 "equiv_type.m"
                {
#line 1273 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, parse_tree__equiv_type__InstEqvMap_12, ((MR_Box) (parse_tree__equiv_type__InstId_19)), &parse_tree__equiv_type__conv0_EqvInstBody_20);
                }
#line 1273 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1273 "equiv_type.m"
                  {
#line 1273 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstBody_20 = ((MR_Word) parse_tree__equiv_type__conv0_EqvInstBody_20);
#line 1273 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1273 "equiv_type.m"
                  }
#line 1273 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1273 "equiv_type.m"
                  {
#line 1274 "equiv_type.m"
                    parse_tree__equiv_type__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 0)));
#line 1274 "equiv_type.m"
                    parse_tree__equiv_type__EqvInstParams_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 1)));
#line 1274 "equiv_type.m"
                    parse_tree__equiv_type__EqvInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvInstBody_20, (MR_Integer) 2)));
#line 1274 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1273 "equiv_type.m"
                  }
#line 1283 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 1276 "equiv_type.m"
                  {
#line 1276 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__Inst1_24;
#line 1276 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstIdItem_25;
#line 1276 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_32_32;
#line 1276 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;
#line 1276 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_35_35;

#line 1276 "equiv_type.m"
                    {
#line 1276 "equiv_type.m"
                      parse_tree__prog_mode__inst_substitute_arg_list_4_p_0(parse_tree__equiv_type__EqvInstParams_22, parse_tree__equiv_type__ArgInsts_18, parse_tree__equiv_type__EqvInst_23, &parse_tree__equiv_type__Inst1_24);
                    }
#line 1277 "equiv_type.m"
                    {
#line 1277 "equiv_type.m"
                      parse_tree__equiv_type__InstIdItem_25 = recompilation__inst_id_to_item_name_1_f_0(parse_tree__equiv_type__InstId_19);
                    }
#line 1278 "equiv_type.m"
                    {
#line 1278 "equiv_type.m"
                      parse_tree__equiv_type__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1278 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_32_32, 1) = ((MR_Box) (parse_tree__equiv_type__InstIdItem_25));
#line 1278 "equiv_type.m"
                    }
#line 1278 "equiv_type.m"
                    {
#line 1278 "equiv_type.m"
                      recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33);
                    }
#line 1281 "equiv_type.m"
                    {
#line 1281 "equiv_type.m"
                      parse_tree__equiv_type__V_35_35 = mercury__set__insert_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, parse_tree__equiv_type__ExpandedInstIds_13, ((MR_Box) (parse_tree__equiv_type__InstId_19)));
                    }
#line 1280 "equiv_type.m"
                    /* direct tailcall eliminated */
#line 1280 "equiv_type.m"
                    {
#line 1280 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__Inst0__tmp_copy_11 = parse_tree__equiv_type__Inst1_24;
#line 1280 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13 = parse_tree__equiv_type__V_35_35;
#line 1280 "equiv_type.m"
                      MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_33_33;

#line 1280 "equiv_type.m"
                      parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0__tmp_copy_26;
#line 1280 "equiv_type.m"
                      parse_tree__equiv_type__ExpandedInstIds_13 = parse_tree__equiv_type__ExpandedInstIds__tmp_copy_13;
#line 1280 "equiv_type.m"
                      parse_tree__equiv_type__Inst0_11 = parse_tree__equiv_type__Inst0__tmp_copy_11;
#line 1280 "equiv_type.m"
                    }
#line 1280 "equiv_type.m"
                    continue;
#line 1276 "equiv_type.m"
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
#line 1267 "equiv_type.m"
          }
#line 1286 "equiv_type.m"
        else
#line 1287 "equiv_type.m"
          {
#line 1287 "equiv_type.m"
            *parse_tree__equiv_type__Inst_14 = parse_tree__equiv_type__Inst0_11;
#line 1287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_29 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_28;
#line 1287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_27 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_26;
#line 1287 "equiv_type.m"
          }
#line 1286 "equiv_type.m"
      }
#line 1286 "equiv_type.m"
      break;
#line 1286 "equiv_type.m"
    }
#line 1258 "equiv_type.m"
}

#line 1248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_95_91_49_93_95_48_8_p_0(
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Inst0_10,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_11,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Inst_12,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16,
#line 1248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17,
#line 1248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18)
#line 1248 "equiv_type.m"
{
#line 1254 "equiv_type.m"
  {
#line 1254 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1254 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 1255 "equiv_type.m"
    {
#line 1255 "equiv_type.m"
      parse_tree__equiv_type__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1255 "equiv_type.m"
    {
#line 1255 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_10, parse_tree__equiv_type__InstEqvMap_11, parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__Inst_12, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_16, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_18);
#line 1255 "equiv_type.m"
      return;
    }
#line 1254 "equiv_type.m"
  }
#line 1248 "equiv_type.m"
}

#line 732 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 732 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 732 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 732 "equiv_type.m"
{
#line 739 "equiv_type.m"
  {
#line 739 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 739 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 739 "equiv_type.m"
      {
#line 739 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 740 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 740 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 739 "equiv_type.m"
      }
#line 739 "equiv_type.m"
    else
#line 742 "equiv_type.m"
      {
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attr_24;
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_25;
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38;
#line 742 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__AttrNum_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 0)));
#line 742 "equiv_type.m"
        MR_String parse_tree__equiv_type__AttrName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 1)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType0_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 2)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrMode_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 3)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeSynthCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr0_22, (MR_Integer) 4)));
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TVarSet0_61;
#line 742 "equiv_type.m"
        MR_Word parse_tree__equiv_type__AttrType_62;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Changed_63;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___TVarSet_64;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type___EquivTypeInfo_65;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_84_84;

#line 760 "equiv_type.m"
        {
#line 760 "equiv_type.m"
          parse_tree__equiv_type__TVarSet0_61 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
        }
#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__HeadVar__3_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__AttrType0_58, &parse_tree__equiv_type__AttrType_62, &parse_tree__equiv_type___Changed_63, &parse_tree__equiv_type__V_84_84, parse_tree__equiv_type__TVarSet0_61, &parse_tree__equiv_type___TVarSet_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type___EquivTypeInfo_65, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38);
        }
#line 764 "equiv_type.m"
        {
#line 764 "equiv_type.m"
          parse_tree__equiv_type__Attr_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 0) = ((MR_Box) (parse_tree__equiv_type__AttrNum_56));
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 1) = ((MR_Box) (parse_tree__equiv_type__AttrName_57));
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 2) = ((MR_Box) (parse_tree__equiv_type__AttrType_62));
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 3) = ((MR_Box) (parse_tree__equiv_type__AttrMode_59));
#line 764 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Attr_24, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeSynthCall_60));
#line 764 "equiv_type.m"
        }
#line 745 "equiv_type.m"
        {
#line 745 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_23, &parse_tree__equiv_type__Attrs_25, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_38_38, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 741 "equiv_type.m"
        {
#line 741 "equiv_type.m"
          MR_Word base;
#line 741 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 741 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Attr_24));
#line 741 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Attrs_25));
#line 741 "equiv_type.m"
        }
#line 742 "equiv_type.m"
      }
#line 739 "equiv_type.m"
  }
#line 732 "equiv_type.m"
}

#line 701 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__2_2,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_3,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8,
#line 701 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9,
#line 701 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_10)
#line 701 "equiv_type.m"
{
#line 708 "equiv_type.m"
  {
#line 708 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 708 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 708 "equiv_type.m"
      {
#line 708 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 708 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_10 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9;
#line 708 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7;
#line 708 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5;
#line 708 "equiv_type.m"
      }
#line 708 "equiv_type.m"
    else
#line 711 "equiv_type.m"
      {
#line 711 "equiv_type.m"
        MR_String parse_tree__equiv_type__Name_22;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec0_23;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__EventSpec_25;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NameSpecs_26;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42;
#line 711 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventNumber_59;
#line 711 "equiv_type.m"
        MR_String parse_tree__equiv_type__EventName_60;
#line 711 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__EventLineNumber_61;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs0_62;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__SyntAttrNumOrder_63;
#line 711 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Attrs_64;

#line 710 "equiv_type.m"
        parse_tree__equiv_type__Name_22 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 0)));
#line 710 "equiv_type.m"
        parse_tree__equiv_type__EventSpec0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, (MR_Integer) 1)));
#line 725 "equiv_type.m"
        parse_tree__equiv_type__EventNumber_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 0)));
#line 725 "equiv_type.m"
        parse_tree__equiv_type__EventName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 1)));
#line 725 "equiv_type.m"
        parse_tree__equiv_type__EventLineNumber_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 2)));
#line 725 "equiv_type.m"
        parse_tree__equiv_type__Attrs0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 3)));
#line 725 "equiv_type.m"
        parse_tree__equiv_type__SyntAttrNumOrder_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec0_23, (MR_Integer) 4)));
#line 727 "equiv_type.m"
        {
#line 727 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_97_116_116_114_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__Attrs0_62, &parse_tree__equiv_type__Attrs_64, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_5, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_7, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_9, &parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42);
        }
#line 729 "equiv_type.m"
        {
#line 729 "equiv_type.m"
          parse_tree__equiv_type__EventSpec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 729 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 0) = ((MR_Box) (parse_tree__equiv_type__EventNumber_59));
#line 729 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 1) = ((MR_Box) (parse_tree__equiv_type__EventName_60));
#line 729 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 2) = ((MR_Box) (parse_tree__equiv_type__EventLineNumber_61));
#line 729 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 3) = ((MR_Box) (parse_tree__equiv_type__Attrs_64));
#line 729 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EventSpec_25, 4) = ((MR_Box) (parse_tree__equiv_type__SyntAttrNumOrder_63));
#line 729 "equiv_type.m"
        }
#line 710 "equiv_type.m"
        {
#line 710 "equiv_type.m"
          parse_tree__equiv_type__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 710 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_22));
#line 710 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, 1) = ((MR_Box) (parse_tree__equiv_type__EventSpec_25));
#line 710 "equiv_type.m"
        }
#line 714 "equiv_type.m"
        {
#line 714 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__NameSpecs0_24, &parse_tree__equiv_type__NameSpecs_26, parse_tree__equiv_type__TypeEqvMap_3, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_6, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_8, parse_tree__equiv_type__STATE_VARIABLE_Specs_42_42, parse_tree__equiv_type__STATE_VARIABLE_Specs_10);
        }
#line 710 "equiv_type.m"
        {
#line 710 "equiv_type.m"
          MR_Word base;
#line 710 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__2_2 = base;
#line 710 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_39_39));
#line 710 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__NameSpecs_26));
#line 710 "equiv_type.m"
        }
#line 711 "equiv_type.m"
      }
#line 708 "equiv_type.m"
  }
#line 701 "equiv_type.m"
}

#line 565 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97,
#line 565 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99,
#line 565 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 565 "equiv_type.m"
{
#line 572 "equiv_type.m"
  {
#line 572 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 572 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma0_20;
#line 572 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_21;
#line 572 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_22;
#line 572 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_23;
#line 572 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Pragma_41;

#line 572 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "equiv_type.m"
    parse_tree__equiv_type__Pragma0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 573 "equiv_type.m"
    parse_tree__equiv_type__Origin_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 573 "equiv_type.m"
    parse_tree__equiv_type__Context_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 573 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 598 "equiv_type.m"
#line 598 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Pragma0_20)) {
#line 598 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 598 "equiv_type.m"
      case (MR_Integer) 0:
#line 598 "equiv_type.m"
      case (MR_Integer) 1:
#line 661 "equiv_type.m"
        {
#line 662 "equiv_type.m"
          parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 661 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 661 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 661 "equiv_type.m"
        }
#line 598 "equiv_type.m"
        break;
#line 598 "equiv_type.m"
      case (MR_Integer) 2:
#line 599 "equiv_type.m"
        {
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 0)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 1)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 2)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 3)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcVarset_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 4)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcInstVarset_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 5)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ProcImpl_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo0_42, (MR_Integer) 6)));
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__UserSharing0_51;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Attrs_62;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemId_63;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__FPInfo_64;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104;
#line 599 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_108_108;
#line 599 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_109_109;
#line 618 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Sharing0_52;
#line 618 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Types0_54;
#line 618 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TVarSet0_55;
#line 607 "equiv_type.m"
          MR_Word parse_tree__equiv_type__MaybeTypes0_53;
#line 607 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_101_101;

#line 603 "equiv_type.m"
          {
#line 603 "equiv_type.m"
            recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PName_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100);
          }
#line 605 "equiv_type.m"
          {
#line 605 "equiv_type.m"
            parse_tree__equiv_type__UserSharing0_51 = parse_tree__prog_data__get_user_annotated_sharing_1_f_0(parse_tree__equiv_type__Attrs0_43);
          }
#line 607 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__UserSharing0_51)) == (MR_mktag((MR_Integer) 1)));
#line 607 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 607 "equiv_type.m"
            {
#line 607 "equiv_type.m"
              parse_tree__equiv_type__Sharing0_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 0)));
#line 607 "equiv_type.m"
              parse_tree__equiv_type__MaybeTypes0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing0_51, (MR_Integer) 1)));
#line 608 "equiv_type.m"
              parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__MaybeTypes0_53)) == (MR_mktag((MR_Integer) 1)));
#line 608 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 608 "equiv_type.m"
                {
#line 608 "equiv_type.m"
                  parse_tree__equiv_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes0_53, (MR_Integer) 0)));
#line 608 "equiv_type.m"
                  parse_tree__equiv_type__Types0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 0)));
#line 608 "equiv_type.m"
                  parse_tree__equiv_type__TVarSet0_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_101_101, (MR_Integer) 1)));
#line 608 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = MR_TRUE;
#line 608 "equiv_type.m"
                }
#line 607 "equiv_type.m"
            }
#line 618 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 612 "equiv_type.m"
            {
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Types_56;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TVarSet_58;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Sharing_59;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeTypes_60;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__UserSharing_61;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103;
#line 612 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_106_106;
#line 610 "equiv_type.m"
              MR_Word parse_tree__equiv_type___AnythingChanged_57;

#line 610 "equiv_type.m"
              {
#line 610 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_54, &parse_tree__equiv_type__Types_56, &parse_tree__equiv_type___AnythingChanged_57, parse_tree__equiv_type__TVarSet0_55, &parse_tree__equiv_type__TVarSet_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103);
              }
#line 613 "equiv_type.m"
              {
#line 613 "equiv_type.m"
                parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__TVarSet0_55, parse_tree__equiv_type__Sharing0_52, &parse_tree__equiv_type__Sharing_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_102_102, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_103_103, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 615 "equiv_type.m"
              {
#line 615 "equiv_type.m"
                parse_tree__equiv_type__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 0) = ((MR_Box) (parse_tree__equiv_type__Types_56));
#line 615 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_106_106, 1) = ((MR_Box) (parse_tree__equiv_type__TVarSet_58));
#line 615 "equiv_type.m"
              }
#line 615 "equiv_type.m"
              {
#line 615 "equiv_type.m"
                parse_tree__equiv_type__MaybeTypes_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 615 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeTypes_60, 0) = ((MR_Box) (parse_tree__equiv_type__V_106_106));
#line 615 "equiv_type.m"
              }
#line 616 "equiv_type.m"
              {
#line 616 "equiv_type.m"
                parse_tree__equiv_type__UserSharing_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 0) = ((MR_Box) (parse_tree__equiv_type__Sharing_59));
#line 616 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UserSharing_61, 1) = ((MR_Box) (parse_tree__equiv_type__MaybeTypes_60));
#line 616 "equiv_type.m"
              }
#line 617 "equiv_type.m"
              {
#line 617 "equiv_type.m"
                parse_tree__prog_data__set_user_annotated_sharing_3_p_0(parse_tree__equiv_type__UserSharing_61, parse_tree__equiv_type__Attrs0_43, &parse_tree__equiv_type__Attrs_62);
              }
#line 612 "equiv_type.m"
            }
#line 618 "equiv_type.m"
          else
#line 619 "equiv_type.m"
            {
#line 619 "equiv_type.m"
              parse_tree__equiv_type__Attrs_62 = parse_tree__equiv_type__Attrs0_43;
#line 619 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_100_100;
#line 619 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 619 "equiv_type.m"
            }
#line 622 "equiv_type.m"
          {
#line 622 "equiv_type.m"
            parse_tree__equiv_type__V_109_109 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_var_0, parse_tree__equiv_type__ProcVars_46);
          }
#line 621 "equiv_type.m"
          {
#line 621 "equiv_type.m"
            parse_tree__equiv_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 621 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (parse_tree__equiv_type__V_109_109));
#line 621 "equiv_type.m"
          }
#line 621 "equiv_type.m"
          {
#line 621 "equiv_type.m"
            parse_tree__equiv_type__ItemId_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 621 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 0) = ((MR_Box) ((MR_Integer) 9));
#line 621 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_63, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 621 "equiv_type.m"
          }
#line 623 "equiv_type.m"
          {
#line 623 "equiv_type.m"
            recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_63, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_104_104, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97);
          }
#line 626 "equiv_type.m"
          {
#line 626 "equiv_type.m"
            parse_tree__equiv_type__FPInfo_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 0) = ((MR_Box) (parse_tree__equiv_type__Attrs_62));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 1) = ((MR_Box) (parse_tree__equiv_type__PName_44));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 2) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_45));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 3) = ((MR_Box) (parse_tree__equiv_type__ProcVars_46));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 4) = ((MR_Box) (parse_tree__equiv_type__ProcVarset_47));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 5) = ((MR_Box) (parse_tree__equiv_type__ProcInstVarset_48));
#line 626 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__FPInfo_64, 6) = ((MR_Box) (parse_tree__equiv_type__ProcImpl_49));
#line 626 "equiv_type.m"
          }
#line 628 "equiv_type.m"
          {
#line 628 "equiv_type.m"
            parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "equiv_type.m"
            MR_hl_field(MR_mktag(2), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (parse_tree__equiv_type__FPInfo_64));
#line 628 "equiv_type.m"
          }
#line 599 "equiv_type.m"
        }
#line 598 "equiv_type.m"
        break;
#line 598 "equiv_type.m"
      case (MR_Integer) 3:
#line 598 "equiv_type.m"
#line 598 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 0)))) {
#line 598 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "equiv_type.m"
          case (MR_Integer) 0:
#line 598 "equiv_type.m"
          case (MR_Integer) 1:
#line 598 "equiv_type.m"
          case (MR_Integer) 2:
#line 598 "equiv_type.m"
          case (MR_Integer) 3:
#line 598 "equiv_type.m"
          case (MR_Integer) 4:
#line 598 "equiv_type.m"
          case (MR_Integer) 6:
#line 598 "equiv_type.m"
          case (MR_Integer) 7:
#line 598 "equiv_type.m"
          case (MR_Integer) 8:
#line 598 "equiv_type.m"
          case (MR_Integer) 9:
#line 598 "equiv_type.m"
          case (MR_Integer) 10:
#line 598 "equiv_type.m"
          case (MR_Integer) 11:
#line 598 "equiv_type.m"
          case (MR_Integer) 12:
#line 598 "equiv_type.m"
          case (MR_Integer) 13:
#line 598 "equiv_type.m"
          case (MR_Integer) 14:
#line 598 "equiv_type.m"
          case (MR_Integer) 15:
#line 598 "equiv_type.m"
          case (MR_Integer) 16:
#line 598 "equiv_type.m"
          case (MR_Integer) 17:
#line 598 "equiv_type.m"
          case (MR_Integer) 18:
#line 598 "equiv_type.m"
          case (MR_Integer) 19:
#line 598 "equiv_type.m"
          case (MR_Integer) 20:
#line 598 "equiv_type.m"
          case (MR_Integer) 21:
#line 598 "equiv_type.m"
          case (MR_Integer) 22:
#line 598 "equiv_type.m"
          case (MR_Integer) 23:
#line 598 "equiv_type.m"
          case (MR_Integer) 24:
#line 598 "equiv_type.m"
          case (MR_Integer) 25:
#line 598 "equiv_type.m"
          case (MR_Integer) 26:
#line 598 "equiv_type.m"
          case (MR_Integer) 27:
#line 598 "equiv_type.m"
          case (MR_Integer) 28:
#line 598 "equiv_type.m"
          case (MR_Integer) 29:
#line 661 "equiv_type.m"
            {
#line 662 "equiv_type.m"
              parse_tree__equiv_type__Pragma_41 = parse_tree__equiv_type__Pragma0_20;
#line 661 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 661 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98;
#line 661 "equiv_type.m"
            }
#line 598 "equiv_type.m"
            break;
#line 598 "equiv_type.m"
          case (MR_Integer) 5:
#line 575 "equiv_type.m"
            {
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma0_20, (MR_Integer) 1)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 0)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__NewName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 1)));
#line 575 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 2)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__PorF_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 3)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 4)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 5)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 6)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo0_24, (MR_Integer) 7)));
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_34;
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Subst_35;
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__VarSet_36;
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_37;
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemIds_38;
#line 575 "equiv_type.m"
              MR_Word parse_tree__equiv_type__TypeSpecInfo_40;

#line 579 "equiv_type.m"
              parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "equiv_type.m"
              if (!(parse_tree__equiv_type__succeeded))
#line 580 "equiv_type.m"
                {
#line 580 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_115_115;
#line 580 "equiv_type.m"
                  MR_String parse_tree__equiv_type__V_33_33;

#line 580 "equiv_type.m"
                  parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__PredName_25)) == (MR_mktag((MR_Integer) 1)));
#line 580 "equiv_type.m"
                  if (parse_tree__equiv_type__succeeded)
#line 580 "equiv_type.m"
                    {
#line 580 "equiv_type.m"
                      parse_tree__equiv_type__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 0)));
#line 580 "equiv_type.m"
                      parse_tree__equiv_type__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__PredName_25, (MR_Integer) 1)));
#line 580 "equiv_type.m"
                      {
#line 580 "equiv_type.m"
                        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__V_115_115);
                      }
#line 580 "equiv_type.m"
                    }
#line 580 "equiv_type.m"
                }
#line 584 "equiv_type.m"
              if (parse_tree__equiv_type__succeeded)
#line 583 "equiv_type.m"
                parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "equiv_type.m"
              else
#line 585 "equiv_type.m"
                {
#line 585 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_111_111;

#line 585 "equiv_type.m"
                  {
#line 585 "equiv_type.m"
                    parse_tree__equiv_type__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 585 "equiv_type.m"
                    MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_111_111, 1) = ((MR_Box) (parse_tree__equiv_type__ItemIds0_32));
#line 585 "equiv_type.m"
                  }
#line 585 "equiv_type.m"
                  {
#line 585 "equiv_type.m"
                    parse_tree__equiv_type__ExpandedItems0_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems0_34, 0) = ((MR_Box) (parse_tree__equiv_type__V_111_111));
#line 585 "equiv_type.m"
                  }
#line 585 "equiv_type.m"
                }
#line 587 "equiv_type.m"
              {
#line 587 "equiv_type.m"
                parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Subst0_30, &parse_tree__equiv_type__Subst_35, parse_tree__equiv_type__VarSet0_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__ExpandedItems0_34, &parse_tree__equiv_type__ExpandedItems_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_98, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_99);
              }
#line 592 "equiv_type.m"
              if ((parse_tree__equiv_type__ExpandedItems_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 591 "equiv_type.m"
                parse_tree__equiv_type__ItemIds_38 = parse_tree__equiv_type__ItemIds0_32;
#line 592 "equiv_type.m"
              else
#line 593 "equiv_type.m"
                {
#line 593 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ExpandedItems_37, (MR_Integer) 0)));
#line 593 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 0)));

#line 593 "equiv_type.m"
                  parse_tree__equiv_type__ItemIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_113_113, (MR_Integer) 1)));
#line 593 "equiv_type.m"
                }
#line 595 "equiv_type.m"
              {
#line 595 "equiv_type.m"
                parse_tree__equiv_type__TypeSpecInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 1) = ((MR_Box) (parse_tree__equiv_type__NewName_26));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 2) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 3) = ((MR_Box) (parse_tree__equiv_type__PorF_28));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 4) = ((MR_Box) (parse_tree__equiv_type__Modes_29));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 5) = ((MR_Box) (parse_tree__equiv_type__Subst_35));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 6) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 595 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeSpecInfo_40, 7) = ((MR_Box) (parse_tree__equiv_type__ItemIds_38));
#line 595 "equiv_type.m"
              }
#line 597 "equiv_type.m"
              {
#line 597 "equiv_type.m"
                parse_tree__equiv_type__Pragma_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 597 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Pragma_41, 1) = ((MR_Box) (parse_tree__equiv_type__TypeSpecInfo_40));
#line 597 "equiv_type.m"
              }
#line 575 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_97 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_96;
#line 575 "equiv_type.m"
            }
#line 598 "equiv_type.m"
            break;
#line 598 "equiv_type.m"
        }
#line 598 "equiv_type.m"
        break;
#line 598 "equiv_type.m"
    }
#line 664 "equiv_type.m"
    {
#line 664 "equiv_type.m"
      MR_Word base;
#line 664 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 664 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Pragma_41));
#line 664 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Origin_21));
#line 664 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Context_22));
#line 664 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SeqNum_23));
#line 664 "equiv_type.m"
    }
#line 572 "equiv_type.m"
  }
#line 565 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 531 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstanceInfo0_16,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__InstanceInfo_17,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41,
#line 531 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43,
#line 531 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__11_11)
#line 531 "equiv_type.m"
{
#line 538 "equiv_type.m"
  {
#line 538 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_81;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_20;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types0_21;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OriginalTypes_22;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstanceBody_24;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_25;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainingModuleName_26;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27;
#line 538 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_29;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_30;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet1_31;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors1_32;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Types_33;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_36;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_37;
#line 538 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_38;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_39;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_49_49;
#line 538 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet1_31;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_UsedTypeCtors1_32;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46;
#line 554 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_34_34;
#line 554 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_35_35;

#line 538 "equiv_type.m"
    *parse_tree__equiv_type__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__ClassName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 0)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__Types0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 1)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__OriginalTypes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 2)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 3)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__InstanceBody_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 4)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__VarSet0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 5)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__ContainingModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 6)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 7)));
#line 539 "equiv_type.m"
    parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstanceInfo0_16, (MR_Integer) 8)));
#line 543 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "equiv_type.m"
    if (!(parse_tree__equiv_type__succeeded))
#line 544 "equiv_type.m"
      {
#line 544 "equiv_type.m"
        parse_tree__equiv_type__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__equiv_type__ContainingModuleName_26, parse_tree__equiv_type__ModuleName_12);
      }
#line 548 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 547 "equiv_type.m"
      parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "equiv_type.m"
    else
#line 549 "equiv_type.m"
      {
#line 549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_44_44;
#line 549 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 549 "equiv_type.m"
        {
#line 549 "equiv_type.m"
          parse_tree__equiv_type__V_45_45 = mercury__set__init_0_f_0((MR_Word) &recompilation__recompilation__type_ctor_info_item_id_0);
        }
#line 549 "equiv_type.m"
        {
#line 549 "equiv_type.m"
          parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 549 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 549 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__V_45_45));
#line 549 "equiv_type.m"
        }
#line 549 "equiv_type.m"
        {
#line 549 "equiv_type.m"
          parse_tree__equiv_type__UsedTypeCtors0_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__UsedTypeCtors0_29, 0) = ((MR_Box) (parse_tree__equiv_type__V_44_44));
#line 549 "equiv_type.m"
        }
#line 549 "equiv_type.m"
      }
#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 851 "equiv_type.m"
    }
#line 4987 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_81 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_81, parse_tree__equiv_type__TypeCtorInfo_38_81, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_68_68, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_30, ((MR_Box) (parse_tree__equiv_type__VarSet0_25)), &parse_tree__equiv_type__conv6_VarSet1_31, ((MR_Box) (parse_tree__equiv_type__UsedTypeCtors0_29)), &parse_tree__equiv_type__conv5_UsedTypeCtors1_32, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_42)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
    }
#line 850 "equiv_type.m"
    parse_tree__equiv_type__VarSet1_31 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet1_31);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__UsedTypeCtors1_32 = ((MR_Word) parse_tree__equiv_type__conv5_UsedTypeCtors1_32);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_46_46);
#line 554 "equiv_type.m"
    {
#line 554 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Types_33, &parse_tree__equiv_type__V_34_34, &parse_tree__equiv_type__V_35_35, parse_tree__equiv_type__VarSet1_31, &parse_tree__equiv_type__VarSet_36, parse_tree__equiv_type__UsedTypeCtors1_32, &parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46_46, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43);
    }
#line 558 "equiv_type.m"
    {
#line 558 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Types0_21, &parse_tree__equiv_type__Arity_38);
    }
#line 559 "equiv_type.m"
    {
#line 559 "equiv_type.m"
      parse_tree__equiv_type__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_49_49, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 559 "equiv_type.m"
    }
#line 559 "equiv_type.m"
    {
#line 559 "equiv_type.m"
      parse_tree__equiv_type__ItemId_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 0) = ((MR_Box) ((MR_Integer) 4));
#line 559 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_39, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 559 "equiv_type.m"
    }
#line 560 "equiv_type.m"
    {
#line 560 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_39, parse_tree__equiv_type__UsedTypeCtors_37, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41);
    }
#line 561 "equiv_type.m"
    {
#line 561 "equiv_type.m"
      MR_Word base;
#line 561 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 561 "equiv_type.m"
      *parse_tree__equiv_type__InstanceInfo_17 = base;
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_20));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_33));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__OriginalTypes_22));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Constraints_30));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__InstanceBody_24));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_36));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__ContainingModuleName_26));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 561 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 561 "equiv_type.m"
    }
#line 538 "equiv_type.m"
  }
#line 531 "equiv_type.m"
}

#line 461 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 461 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 461 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 461 "equiv_type.m"
{
#line 468 "equiv_type.m"
  {
#line 468 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_52_52;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 468 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_29;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_30;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybePredOrFunc_31;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__WithInst_32;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_33;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_34;
#line 468 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Modes_35;
#line 468 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_47_47;

#line 471 "equiv_type.m"
    {
#line 471 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_29);
    }
#line 5135 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 474 "equiv_type.m"
    {
#line 474 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23);
    }
#line 473 "equiv_type.m"
    {
#line 473 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__V_47_47, parse_tree__equiv_type__Context_27, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_30, parse_tree__equiv_type__MaybePredOrFunc0_22, &parse_tree__equiv_type__MaybePredOrFunc_31, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_32, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_33, parse_tree__equiv_type__ExpandedItems0_29, &parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
    }
#line 481 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraModes_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "equiv_type.m"
      parse_tree__equiv_type__Modes_35 = parse_tree__equiv_type__Modes0_23;
#line 481 "equiv_type.m"
    else
#line 483 "equiv_type.m"
      {
#line 483 "equiv_type.m"
        parse_tree__equiv_type__Modes_35 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes0_23, parse_tree__equiv_type__ExtraModes_30);
      }
#line 492 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybePredOrFunc_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "equiv_type.m"
      *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 492 "equiv_type.m"
    else
#line 486 "equiv_type.m"
      {
#line 486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybePredOrFunc_31, (MR_Integer) 0)));
#line 486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemType_39;
#line 486 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__Arity_40;
#line 486 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__OrigArity_41;
#line 486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ItemId_42;
#line 486 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_50_50;

#line 487 "equiv_type.m"
        {
#line 487 "equiv_type.m"
          parse_tree__equiv_type__ItemType_39 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_38);
        }
#line 488 "equiv_type.m"
        {
#line 488 "equiv_type.m"
          mercury__list__length_2_p_0(parse_tree__equiv_type__TypeCtorInfo_52_52, parse_tree__equiv_type__Modes_35, &parse_tree__equiv_type__Arity_40);
        }
#line 489 "equiv_type.m"
        {
#line 489 "equiv_type.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_38, &parse_tree__equiv_type__OrigArity_41, parse_tree__equiv_type__Arity_40);
        }
#line 490 "equiv_type.m"
        {
#line 490 "equiv_type.m"
          parse_tree__equiv_type__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 490 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_41));
#line 490 "equiv_type.m"
        }
#line 490 "equiv_type.m"
        {
#line 490 "equiv_type.m"
          parse_tree__equiv_type__ItemId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_39));
#line 490 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_42, 1) = ((MR_Box) (parse_tree__equiv_type__V_50_50));
#line 490 "equiv_type.m"
        }
#line 491 "equiv_type.m"
        {
#line 491 "equiv_type.m"
          recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_42, parse_tree__equiv_type__ExpandedItems_34, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
        }
#line 486 "equiv_type.m"
      }
#line 495 "equiv_type.m"
    {
#line 495 "equiv_type.m"
      MR_Word base;
#line 495 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 495 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_31));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_35));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_32));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_33));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_26));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 495 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 495 "equiv_type.m"
    }
#line 468 "equiv_type.m"
  }
#line 461 "equiv_type.m"
}

#line 197 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 197 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 197 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 197 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 197 "equiv_type.m"
{
#line 201 "equiv_type.m"
  while (MR_TRUE)
#line 201 "equiv_type.m"
    {
#line 201 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 201 "equiv_type.m"
      {
#line 201 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 201 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 201 "equiv_type.m"
          {
#line 201 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 201 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 201 "equiv_type.m"
          }
#line 201 "equiv_type.m"
        else
#line 203 "equiv_type.m"
          {
#line 203 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 2)));
#line 203 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_23_23;
#line 203 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_24_24;
#line 204 "equiv_type.m"
            MR_Box parse_tree__equiv_type___Section_16 = (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 0));
#line 204 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock_12, (MR_Integer) 1)));

#line 205 "equiv_type.m"
            {
#line 205 "equiv_type.m"
              parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(parse_tree__equiv_type__Items_18, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_23_23, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_24_24);
            }
#line 206 "equiv_type.m"
            /* direct tailcall eliminated */
#line 206 "equiv_type.m"
            {
#line 206 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__ItemBlocks_13;
#line 206 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_23_23;
#line 206 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_24_24;

#line 206 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 206 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 206 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 206 "equiv_type.m"
            }
#line 206 "equiv_type.m"
            continue;
#line 203 "equiv_type.m"
          }
#line 201 "equiv_type.m"
      }
#line 201 "equiv_type.m"
      break;
#line 201 "equiv_type.m"
    }
#line 197 "equiv_type.m"
}

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 278 "equiv_type.m"
{
#line 286 "equiv_type.m"
  while (MR_TRUE)
#line 286 "equiv_type.m"
    {
#line 286 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 286 "equiv_type.m"
      {
#line 286 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 286 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 286 "equiv_type.m"
          }
#line 286 "equiv_type.m"
        else
#line 290 "equiv_type.m"
          {
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__MaybeRecord_43;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_44;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_45;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_46;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;

#line 260 "equiv_type.m"
#line 260 "equiv_type.m"
            switch (parse_tree__equiv_type__Section_40) {
#line 260 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 260 "equiv_type.m"
              case (MR_Integer) 2:
#line 264 "equiv_type.m"
                {
#line 265 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 264 "equiv_type.m"
                }
#line 260 "equiv_type.m"
                break;
#line 260 "equiv_type.m"
              case (MR_Integer) 1:
#line 262 "equiv_type.m"
                {
#line 263 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[0]);
#line 262 "equiv_type.m"
                }
#line 260 "equiv_type.m"
                break;
#line 260 "equiv_type.m"
              case (MR_Integer) 0:
#line 260 "equiv_type.m"
                {
#line 261 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRecord_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_7[1]);
#line 260 "equiv_type.m"
                }
#line 260 "equiv_type.m"
                break;
#line 260 "equiv_type.m"
            }
#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_43, parse_tree__equiv_type__Items0_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58);
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_44, &parse_tree__equiv_type__ReplItems_45);
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 2) = ((MR_Box) (parse_tree__equiv_type__ReplItems_45));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_46));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 297 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            /* direct tailcall eliminated */
#line 298 "equiv_type.m"
            {
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;

#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 298 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            continue;
#line 290 "equiv_type.m"
          }
#line 286 "equiv_type.m"
      }
#line 286 "equiv_type.m"
      break;
#line 286 "equiv_type.m"
    }
#line 278 "equiv_type.m"
}

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 278 "equiv_type.m"
{
#line 286 "equiv_type.m"
  while (MR_TRUE)
#line 286 "equiv_type.m"
    {
#line 286 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 286 "equiv_type.m"
      {
#line 286 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 286 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 286 "equiv_type.m"
          }
#line 286 "equiv_type.m"
        else
#line 290 "equiv_type.m"
          {
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_44;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_45;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_46;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;

#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58);
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_44, &parse_tree__equiv_type__ReplItems_45);
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 2) = ((MR_Box) (parse_tree__equiv_type__ReplItems_45));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_46));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 297 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            /* direct tailcall eliminated */
#line 298 "equiv_type.m"
            {
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;

#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 298 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            continue;
#line 290 "equiv_type.m"
          }
#line 286 "equiv_type.m"
      }
#line 286 "equiv_type.m"
      break;
#line 286 "equiv_type.m"
    }
#line 278 "equiv_type.m"
}

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 278 "equiv_type.m"
{
#line 286 "equiv_type.m"
  while (MR_TRUE)
#line 286 "equiv_type.m"
    {
#line 286 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 286 "equiv_type.m"
      {
#line 286 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 286 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 286 "equiv_type.m"
          }
#line 286 "equiv_type.m"
        else
#line 290 "equiv_type.m"
          {
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_44;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_45;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_46;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;

#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58);
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_44, &parse_tree__equiv_type__ReplItems_45);
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 2) = ((MR_Box) (parse_tree__equiv_type__ReplItems_45));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_46));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 297 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            /* direct tailcall eliminated */
#line 298 "equiv_type.m"
            {
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;

#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 298 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            continue;
#line 290 "equiv_type.m"
          }
#line 286 "equiv_type.m"
      }
#line 286 "equiv_type.m"
      break;
#line 286 "equiv_type.m"
    }
#line 278 "equiv_type.m"
}

#line 278 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 278 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 278 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 278 "equiv_type.m"
{
#line 286 "equiv_type.m"
  while (MR_TRUE)
#line 286 "equiv_type.m"
    {
#line 286 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 286 "equiv_type.m"
      {
#line 286 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 286 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 286 "equiv_type.m"
          {
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 287 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6;
#line 286 "equiv_type.m"
          }
#line 286 "equiv_type.m"
        else
#line 290 "equiv_type.m"
          {
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlock0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemBlocks0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Section_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 0)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__SectionContext_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 1)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemBlock0_34, (MR_Integer) 2)));
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__RevReplItems_44;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItems_45;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ReplItemBlock_46;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;
#line 290 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;

#line 293 "equiv_type.m"
            {
#line 293 "equiv_type.m"
              parse_tree__equiv_type__replace_in_items_13_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Items0_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevReplItems_44, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12, &parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58);
            }
#line 295 "equiv_type.m"
            {
#line 295 "equiv_type.m"
              mercury__list__reverse_2_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, parse_tree__equiv_type__RevReplItems_44, &parse_tree__equiv_type__ReplItems_45);
            }
#line 296 "equiv_type.m"
            {
#line 296 "equiv_type.m"
              parse_tree__equiv_type__ReplItemBlock_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 0) = ((MR_Box) (parse_tree__equiv_type__Section_40));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 1) = ((MR_Box) (parse_tree__equiv_type__SectionContext_41));
#line 296 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ReplItemBlock_46, 2) = ((MR_Box) (parse_tree__equiv_type__ReplItems_45));
#line 296 "equiv_type.m"
            }
#line 297 "equiv_type.m"
            {
#line 297 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 0) = ((MR_Box) (parse_tree__equiv_type__ReplItemBlock_46));
#line 297 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6));
#line 297 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            /* direct tailcall eliminated */
#line 298 "equiv_type.m"
            {
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__ItemBlocks0_35;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_59_59;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_56_56;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 298 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_58_58;

#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItemBlocks_0__tmp_copy_6;
#line 298 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 298 "equiv_type.m"
            }
#line 298 "equiv_type.m"
            continue;
#line 290 "equiv_type.m"
          }
#line 286 "equiv_type.m"
      }
#line 286 "equiv_type.m"
      break;
#line 286 "equiv_type.m"
    }
#line 278 "equiv_type.m"
}

#line 1359 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1359__1_1_f_0(
#line 1359 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_134)
#line 1359 "equiv_type.m"
{
#line 1359 "equiv_type.m"
  {
#line 1359 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1359 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_135;
#line 1359 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 0)));
#line 1359 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Mode_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_134, (MR_Integer) 1)));

#line 1360 "equiv_type.m"
    {
#line 1360 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 0) = ((MR_Box) (parse_tree__equiv_type__Type_172));
#line 1360 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_135, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_173));
#line 1360 "equiv_type.m"
    }
#line 1359 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_135;
#line 1359 "equiv_type.m"
  }
#line 1359 "equiv_type.m"
}

#line 1352 "equiv_type.m"
static MR_Word MR_CALL 
parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1352__1_1_f_0(
#line 1352 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_165)
#line 1352 "equiv_type.m"
{
#line 1352 "equiv_type.m"
  {
#line 1352 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1352 "equiv_type.m"
    MR_Word parse_tree__equiv_type__HeadVar__2_166;

#line 1352 "equiv_type.m"
    {
#line 1352 "equiv_type.m"
      parse_tree__equiv_type__HeadVar__2_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_166, 0) = ((MR_Box) (parse_tree__equiv_type__HeadVar__1_165));
#line 1352 "equiv_type.m"
    }
#line 1352 "equiv_type.m"
    return parse_tree__equiv_type__HeadVar__2_166;
#line 1352 "equiv_type.m"
  }
#line 1352 "equiv_type.m"
}

#line 1070 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1070__1_2_p_0(
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_41,
#line 1070 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type_44)
#line 1070 "equiv_type.m"
{
#line 1070 "equiv_type.m"
  {
#line 1070 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1070 "equiv_type.m"
    {
#line 1070 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(parse_tree__equiv_type__Type_44, parse_tree__equiv_type__Type0_41);
    }
#line 1070 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1070 "equiv_type.m"
  }
#line 1070 "equiv_type.m"
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

#line 248 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____section_maybe_record_sym_name_use_1_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_6,
#line 248 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 248 "equiv_type.m"
{
#line 248 "equiv_type.m"
  {
#line 248 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 248 "equiv_type.m"
    {
#line 248 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3);
#line 248 "equiv_type.m"
      return;
    }
#line 248 "equiv_type.m"
  }
#line 248 "equiv_type.m"
}

#line 248 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____section_maybe_record_sym_name_use_1_0(
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeInfo_for_MS_5,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 248 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 248 "equiv_type.m"
{
#line 248 "equiv_type.m"
  {
#line 248 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 248 "equiv_type.m"
    {
#line 248 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_112_97_114_115_101_95_116_114_101_101_95_95_101_113_117_105_118_95_116_121_112_101_95_95_115_101_99_116_105_111_110_95_109_97_121_98_101_95_114_101_99_111_114_100_95_115_121_109_95_110_97_109_101_95_117_115_101_95_49_95_95_91_49_93_95_48_2_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2);
    }
#line 248 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 248 "equiv_type.m"
  }
#line 248 "equiv_type.m"
}

#line 193 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____pred_or_func_decl_type_0_0(
#line 193 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 193 "equiv_type.m"
{
#line 193 "equiv_type.m"
  {
#line 193 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 193 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar1_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 193 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Cast_HeadVar2_5 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 193 "equiv_type.m"
    {
#line 193 "equiv_type.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__Cast_HeadVar1_4, parse_tree__equiv_type__Cast_HeadVar2_5);
#line 193 "equiv_type.m"
      return;
    }
#line 193 "equiv_type.m"
  }
#line 193 "equiv_type.m"
}

#line 193 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____pred_or_func_decl_type_0_0(
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_1,
#line 193 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 193 "equiv_type.m"
{
#line 6254 "parse_tree.equiv_type.c"
  {
#line 6256 "parse_tree.equiv_type.c"
    MR_bool parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__HeadVar__2_1 == parse_tree__equiv_type__HeadVar__2_2);

#line 6259 "parse_tree.equiv_type.c"
    return parse_tree__equiv_type__succeeded;
#line 6261 "parse_tree.equiv_type.c"
  }
#line 193 "equiv_type.m"
}

#line 244 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____maybe_record_sym_name_use_0_0(
#line 244 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 244 "equiv_type.m"
{
#line 244 "equiv_type.m"
  {
#line 244 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 244 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 244 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 244 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_8 == parse_tree__equiv_type__CastY_9);
#line 244 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6290 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "equiv_type.m"
    else
#line 244 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "equiv_type.m"
      if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "equiv_type.m"
      else
#line 6302 "parse_tree.equiv_type.c"
        *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 1;
#line 244 "equiv_type.m"
    else
#line 244 "equiv_type.m"
      {
#line 244 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));

#line 244 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6313 "parse_tree.equiv_type.c"
          *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 2;
#line 244 "equiv_type.m"
        else
#line 244 "equiv_type.m"
          {
#line 244 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 244 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_12_12 = (MR_Integer) parse_tree__equiv_type__V_11_11;
#line 244 "equiv_type.m"
            MR_Integer parse_tree__equiv_type__V_13_13 = (MR_Integer) parse_tree__equiv_type__V_7_7;

#line 244 "equiv_type.m"
            {
#line 244 "equiv_type.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_12_12, parse_tree__equiv_type__V_13_13);
#line 244 "equiv_type.m"
              return;
            }
#line 244 "equiv_type.m"
          }
#line 244 "equiv_type.m"
      }
#line 244 "equiv_type.m"
  }
#line 244 "equiv_type.m"
}

#line 244 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____maybe_record_sym_name_use_0_0(
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 244 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 244 "equiv_type.m"
{
#line 244 "equiv_type.m"
  {
#line 244 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 244 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_7 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 244 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_8 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 244 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_7 == parse_tree__equiv_type__CastY_8);
#line 244 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 244 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 244 "equiv_type.m"
    else
#line 244 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "equiv_type.m"
      {
#line 244 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastX_3 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 244 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__CastY_4 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 244 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastY_4 == parse_tree__equiv_type__CastX_3);
#line 244 "equiv_type.m"
      }
#line 244 "equiv_type.m"
    else
#line 244 "equiv_type.m"
      {
#line 244 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6;

#line 244 "equiv_type.m"
        parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 244 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 244 "equiv_type.m"
          {
#line 244 "equiv_type.m"
            parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 6398 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_5_5 == parse_tree__equiv_type__V_6_6);
#line 244 "equiv_type.m"
          }
#line 244 "equiv_type.m"
      }
#line 244 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 244 "equiv_type.m"
  }
#line 244 "equiv_type.m"
}

#line 191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____inst_eqv_map_0_0(
#line 191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 191 "equiv_type.m"
{
#line 191 "equiv_type.m"
  {
#line 191 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 191 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_4 = parse_tree__equiv_type__HeadVar__2_2;
#line 191 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_5 = parse_tree__equiv_type__HeadVar__3_3;

#line 191 "equiv_type.m"
    {
#line 191 "equiv_type.m"
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], parse_tree__equiv_type__HeadVar__1_1, ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_5)));
#line 191 "equiv_type.m"
      return;
    }
#line 191 "equiv_type.m"
  }
#line 191 "equiv_type.m"
}

#line 191 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____inst_eqv_map_0_0(
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 191 "equiv_type.m"
{
#line 191 "equiv_type.m"
  {
#line 191 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 191 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar1_3 = parse_tree__equiv_type__HeadVar__1_1;
#line 191 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Cast_HeadVar2_4 = parse_tree__equiv_type__HeadVar__2_2;

#line 191 "equiv_type.m"
    {
#line 191 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[2], ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__equiv_type__Cast_HeadVar2_4)));
    }
#line 191 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 191 "equiv_type.m"
  }
#line 191 "equiv_type.m"
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
#line 6497 "parse_tree.equiv_type.c"
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
#line 6523 "parse_tree.equiv_type.c"
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
#line 6543 "parse_tree.equiv_type.c"
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

#line 6612 "parse_tree.equiv_type.c"
        {
#line 6614 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[6], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 82 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 82 "equiv_type.m"
          {
#line 6621 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[11];
#line 6623 "parse_tree.equiv_type.c"
            {
#line 6625 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 82 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6630 "parse_tree.equiv_type.c"
              {
#line 6632 "parse_tree.equiv_type.c"
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

#line 184 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type____Compare____eqv_inst_body_0_0(
#line 184 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__1_1,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3)
#line 184 "equiv_type.m"
{
#line 184 "equiv_type.m"
  {
#line 184 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 184 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_12 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;
#line 184 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_13 = (MR_Integer) parse_tree__equiv_type__HeadVar__3_3;

#line 184 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_12 == parse_tree__equiv_type__CastY_13);
#line 184 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 6670 "parse_tree.equiv_type.c"
      *parse_tree__equiv_type__HeadVar__1_1 = (MR_Integer) 0;
#line 184 "equiv_type.m"
    else
#line 184 "equiv_type.m"
      {
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 2)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_10_10;

#line 184 "equiv_type.m"
        {
#line 184 "equiv_type.m"
          mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], &parse_tree__equiv_type__V_10_10, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
        }
#line 6696 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_10_10 == (MR_Integer) 0);
#line 184 "equiv_type.m"
        parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 184 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 184 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_10_10;
#line 184 "equiv_type.m"
        else
#line 184 "equiv_type.m"
          {
#line 184 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_11_11;

#line 184 "equiv_type.m"
            {
#line 184 "equiv_type.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[10], &parse_tree__equiv_type__V_11_11, ((MR_Box) (parse_tree__equiv_type__V_5_5)), ((MR_Box) (parse_tree__equiv_type__V_8_8)));
            }
#line 6716 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_11_11 == (MR_Integer) 0);
#line 184 "equiv_type.m"
            parse_tree__equiv_type__succeeded = !(parse_tree__equiv_type__succeeded);
#line 184 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 184 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__V_11_11;
#line 184 "equiv_type.m"
            else
#line 184 "equiv_type.m"
              {
#line 184 "equiv_type.m"
                parse_tree__prog_data____Compare____mer_inst_0_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__V_6_6, parse_tree__equiv_type__V_9_9);
#line 184 "equiv_type.m"
                return;
              }
#line 184 "equiv_type.m"
          }
#line 184 "equiv_type.m"
      }
#line 184 "equiv_type.m"
  }
#line 184 "equiv_type.m"
}

#line 184 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type____Unify____eqv_inst_body_0_0(
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 184 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2)
#line 184 "equiv_type.m"
{
#line 184 "equiv_type.m"
  {
#line 184 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 184 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastX_9 = (MR_Integer) parse_tree__equiv_type__HeadVar__1_1;
#line 184 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__CastY_10 = (MR_Integer) parse_tree__equiv_type__HeadVar__2_2;

#line 184 "equiv_type.m"
    parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__CastX_9 == parse_tree__equiv_type__CastY_10);
#line 184 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 184 "equiv_type.m"
      parse_tree__equiv_type__succeeded = MR_TRUE;
#line 184 "equiv_type.m"
    else
#line 184 "equiv_type.m"
      {
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_12_12;
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 2)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 0)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 1)));
#line 184 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__2_2, (MR_Integer) 2)));

#line 6785 "parse_tree.equiv_type.c"
        {
#line 6787 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[9], ((MR_Box) (parse_tree__equiv_type__V_3_3)), ((MR_Box) (parse_tree__equiv_type__V_6_6)));
        }
#line 184 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 184 "equiv_type.m"
          {
#line 6794 "parse_tree.equiv_type.c"
            parse_tree__equiv_type__TypeInfo_12_12 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[10];
#line 6796 "parse_tree.equiv_type.c"
            {
#line 6798 "parse_tree.equiv_type.c"
              parse_tree__equiv_type__succeeded = mercury__builtin__unify_2_p_0(parse_tree__equiv_type__TypeInfo_12_12, ((MR_Box) (parse_tree__equiv_type__V_4_4)), ((MR_Box) (parse_tree__equiv_type__V_7_7)));
            }
#line 184 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 6803 "parse_tree.equiv_type.c"
              {
#line 6805 "parse_tree.equiv_type.c"
                return parse_tree__equiv_type__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(parse_tree__equiv_type__V_5_5, parse_tree__equiv_type__V_8_8);
              }
#line 184 "equiv_type.m"
          }
#line 184 "equiv_type.m"
      }
#line 184 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 184 "equiv_type.m"
  }
#line 184 "equiv_type.m"
}

#line 1541 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_unit_selector_9_p_0(
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Sel0_13,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Sel_14,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1541 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1541 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1541 "equiv_type.m"
{
#line 1549 "equiv_type.m"
  {
#line 1549 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1549 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Sel0_13)) == (MR_mktag((MR_Integer) 0))))
#line 1549 "equiv_type.m"
      {
#line 1550 "equiv_type.m"
        *parse_tree__equiv_type__Sel_14 = parse_tree__equiv_type__Sel0_13;
#line 1549 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23;
#line 1549 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25;
#line 1549 "equiv_type.m"
      }
#line 1549 "equiv_type.m"
    else
#line 1552 "equiv_type.m"
      {
#line 1552 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Sel0_13, (MR_Integer) 0)));
#line 1552 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_20;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_21_21;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_22_22;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_19, &parse_tree__equiv_type__Type_20, &parse_tree__equiv_type__V_21_21, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__TVarSet_12, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
        }
#line 1555 "equiv_type.m"
        {
#line 1555 "equiv_type.m"
          MR_Word base;
#line 1555 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1555 "equiv_type.m"
          *parse_tree__equiv_type__Sel_14 = base;
#line 1555 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_20));
#line 1555 "equiv_type.m"
        }
#line 1552 "equiv_type.m"
      }
#line 1549 "equiv_type.m"
  }
#line 1541 "equiv_type.m"
}

#line 1537 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1(
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1537 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1537 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1537 "equiv_type.m"
{
#line 1537 "equiv_type.m"
  {
#line 1537 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1537 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_Sel_14;
#line 1537 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24;
#line 1537 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26;

#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      parse_tree__equiv_type__replace_in_unit_selector_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_Sel_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26);
    }
#line 1537 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_Sel_14));
#line 1537 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_24));
#line 1537 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_26));
#line 1537 "equiv_type.m"
  }
#line 1537 "equiv_type.m"
}

#line 1516 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20,
#line 1516 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21,
#line 1516 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22)
#line 1516 "equiv_type.m"
{
#line 1523 "equiv_type.m"
  {
#line 1523 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_50;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_33_76;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSA_15;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SSB_16;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 0)));
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA0_13, (MR_Integer) 1)));
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_40;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Var_64;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel0_65;
#line 1523 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Sel_66;
#line 1537 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23;
#line 1537 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24;
#line 1537 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20;
#line 1537 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22;

#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      parse_tree__equiv_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[1]));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0_1));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1537 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_41_41, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1537 "equiv_type.m"
    }
#line 7028 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_50, parse_tree__equiv_type__TypeCtorInfo_33_50, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_39, &parse_tree__equiv_type__Sel_40, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_21)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
    }
#line 1537 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_23_23);
#line 1537 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_24_24);
#line 1539 "equiv_type.m"
    {
#line 1539 "equiv_type.m"
      parse_tree__equiv_type__SSA_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 0) = ((MR_Box) (parse_tree__equiv_type__Var_38));
#line 1539 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSA_15, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_40));
#line 1539 "equiv_type.m"
    }
#line 1536 "equiv_type.m"
    parse_tree__equiv_type__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 0)));
#line 1536 "equiv_type.m"
    parse_tree__equiv_type__Sel0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB0_14, (MR_Integer) 1)));
#line 7053 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_33_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_unit_selector_0;
#line 1537 "equiv_type.m"
    {
#line 1537 "equiv_type.m"
      mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeCtorInfo_33_76, parse_tree__equiv_type__TypeCtorInfo_33_76, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__Sel0_65, &parse_tree__equiv_type__Sel_66, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_23_23)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
    }
#line 1537 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_20);
#line 1537 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_22);
#line 1539 "equiv_type.m"
    {
#line 1539 "equiv_type.m"
      parse_tree__equiv_type__SSB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 0) = ((MR_Box) (parse_tree__equiv_type__Var_64));
#line 1539 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SSB_16, 1) = ((MR_Box) (parse_tree__equiv_type__Sel_66));
#line 1539 "equiv_type.m"
    }
#line 1523 "equiv_type.m"
    {
#line 1523 "equiv_type.m"
      MR_Word base;
#line 1523 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "equiv_type.m"
      *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SSA_15));
#line 1523 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__SSB_16));
#line 1523 "equiv_type.m"
    }
#line 1523 "equiv_type.m"
  }
#line 1516 "equiv_type.m"
}

#line 1510 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1(
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1510 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1510 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6)
#line 1510 "equiv_type.m"
{
#line 1510 "equiv_type.m"
  {
#line 1510 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1510 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_HeadVar__5_5;
#line 1510 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20;
#line 1510 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22;

#line 1510 "equiv_type.m"
    {
#line 1510 "equiv_type.m"
      parse_tree__equiv_type__replace_in_structure_sharing_pair_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv2_HeadVar__5_5, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22);
    }
#line 1510 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv2_HeadVar__5_5));
#line 1510 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_20));
#line 1510 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_22));
#line 1510 "equiv_type.m"
  }
#line 1510 "equiv_type.m"
}

#line 1494 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0(
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TVarSet_12,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__SharingDomain0_13,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__SharingDomain_14,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 1494 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 1494 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23)
#line 1494 "equiv_type.m"
{
#line 1505 "equiv_type.m"
  {
#line 1505 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1505 "equiv_type.m"
#line 1505 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__SharingDomain0_13)) {
#line 1505 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1505 "equiv_type.m"
      case (MR_Integer) 0:
#line 1505 "equiv_type.m"
        {
#line 1506 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1505 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1505 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1505 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
        break;
#line 1505 "equiv_type.m"
      case (MR_Integer) 1:
#line 1508 "equiv_type.m"
        {
#line 1508 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeInfo_33_33;
#line 1508 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__SharingDomain0_13, (MR_Integer) 0)));
#line 1508 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SharingPairs_19;
#line 1508 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_24_24;
#line 1509 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21;
#line 1509 "equiv_type.m"
          MR_Box parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23;

#line 1510 "equiv_type.m"
          {
#line 1510 "equiv_type.m"
            parse_tree__equiv_type__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_6[0]));
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_structure_sharing_domain_9_p_0_1));
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_10));
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_11));
#line 1510 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_24_24, 5) = ((MR_Box) (parse_tree__equiv_type__TVarSet_12));
#line 1510 "equiv_type.m"
          }
#line 7221 "parse_tree.equiv_type.c"
          parse_tree__equiv_type__TypeInfo_33_33 = (MR_Word) &parse_tree__equiv_type_scalar_common_2[1];
#line 1509 "equiv_type.m"
          {
#line 1509 "equiv_type.m"
            mercury__list__map_foldl2_7_p_0(parse_tree__equiv_type__TypeInfo_33_33, parse_tree__equiv_type__TypeInfo_33_33, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_24_24, parse_tree__equiv_type__SharingPairs0_18, &parse_tree__equiv_type__SharingPairs_19, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
          }
#line 1509 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_EquivTypeInfo_21);
#line 1509 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv3_STATE_VARIABLE_UsedModules_23);
#line 1513 "equiv_type.m"
          {
#line 1513 "equiv_type.m"
            MR_Word base;
#line 1513 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1513 "equiv_type.m"
            *parse_tree__equiv_type__SharingDomain_14 = base;
#line 1513 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SharingPairs_19));
#line 1513 "equiv_type.m"
          }
#line 1508 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
        break;
#line 1505 "equiv_type.m"
      case (MR_Integer) 2:
#line 1505 "equiv_type.m"
        {
#line 1506 "equiv_type.m"
          *parse_tree__equiv_type__SharingDomain_14 = parse_tree__equiv_type__SharingDomain0_13;
#line 1505 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20;
#line 1505 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22;
#line 1505 "equiv_type.m"
        }
#line 1505 "equiv_type.m"
        break;
#line 1505 "equiv_type.m"
    }
#line 1505 "equiv_type.m"
  }
#line 1494 "equiv_type.m"
}

#line 1477 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tm_10_p_0(
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 1477 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 1477 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 1477 "equiv_type.m"
{
#line 1483 "equiv_type.m"
  {
#line 1483 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1483 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1488 "equiv_type.m"
      {
#line 1488 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1488 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Mode_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 1488 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_32;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_36_36;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_60_60;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_30, &parse_tree__equiv_type__Type_32, &parse_tree__equiv_type__V_36_36, &parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1488 "equiv_type.m"
        {
#line 1488 "equiv_type.m"
          MR_Word base;
#line 1488 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1488 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_32));
#line 1488 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Mode_31));
#line 1488 "equiv_type.m"
        }
#line 1488 "equiv_type.m"
      }
#line 1483 "equiv_type.m"
    else
#line 1483 "equiv_type.m"
      {
#line 1483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 1483 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_14;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_18_18;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_79_79;

#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_13, &parse_tree__equiv_type__Type_14, &parse_tree__equiv_type__V_18_18, &parse_tree__equiv_type__V_79_79, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 1483 "equiv_type.m"
        {
#line 1483 "equiv_type.m"
          MR_Word base;
#line 1483 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1483 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 1483 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_14));
#line 1483 "equiv_type.m"
        }
#line 1483 "equiv_type.m"
      }
#line 1483 "equiv_type.m"
  }
#line 1477 "equiv_type.m"
}

#line 1474 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0_1(
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 1474 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 1474 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 1474 "equiv_type.m"
{
#line 1474 "equiv_type.m"
  {
#line 1474 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1474 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_HeadVar__4_4;
#line 1474 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6;
#line 1474 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8;
#line 1474 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10;

#line 1474 "equiv_type.m"
    {
#line 1474 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tm_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_HeadVar__4_4, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10);
    }
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_HeadVar__4_4));
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_6));
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_8));
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_10));
#line 1474 "equiv_type.m"
  }
#line 1474 "equiv_type.m"
}

#line 1467 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_tms_10_p_0(
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TMs_18,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 1467 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 1467 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 1467 "equiv_type.m"
{
#line 1473 "equiv_type.m"
  {
#line 1473 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1473 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 1473 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 1474 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 1474 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 1474 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 1474 "equiv_type.m"
    {
#line 1474 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1474 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[2]));
#line 1474 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_tms_10_p_0_1));
#line 1474 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1474 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 1474 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 1474 "equiv_type.m"
    }
#line 7482 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1474 "equiv_type.m"
    {
#line 1474 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_TMs_0_17, parse_tree__equiv_type__STATE_VARIABLE_TMs_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 1474 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 1473 "equiv_type.m"
  }
#line 1467 "equiv_type.m"
}

#line 1359 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_2(
#line 1359 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1359 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1359 "equiv_type.m"
{
#line 1359 "equiv_type.m"
  {
#line 1359 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1359 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1359 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_HeadVar__2_135;

#line 1359 "equiv_type.m"
    {
#line 1359 "equiv_type.m"
      parse_tree__equiv_type__conv1_HeadVar__2_135 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1359__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1359 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv1_HeadVar__2_135));
#line 1359 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1359 "equiv_type.m"
  }
#line 1359 "equiv_type.m"
}

#line 1352 "equiv_type.m"
static MR_Box MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0_1(
#line 1352 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 1352 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1)
#line 1352 "equiv_type.m"
{
#line 1352 "equiv_type.m"
  {
#line 1352 "equiv_type.m"
    MR_Box parse_tree__equiv_type__wrapper_arg_2;
#line 1352 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 1352 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_HeadVar__2_166;

#line 1352 "equiv_type.m"
    {
#line 1352 "equiv_type.m"
      parse_tree__equiv_type__conv0_HeadVar__2_166 = parse_tree__equiv_type__IntroducedFrom__func__replace_in_pred_type__1352__1_1_f_0(((MR_Word) parse_tree__equiv_type__wrapper_arg_1));
    }
#line 1352 "equiv_type.m"
    parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv0_HeadVar__2_166));
#line 1352 "equiv_type.m"
    return parse_tree__equiv_type__wrapper_arg_2;
#line 1352 "equiv_type.m"
  }
#line 1352 "equiv_type.m"
}

#line 1292 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_type_23_p_0(
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_24,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredName_25,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__PredOrFunc_26,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Context_27,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_28,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_29,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassContext0_30,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassContext_31,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypesAndModes0_32,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypesAndModes_33,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithType0_35,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithType_36,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeWithInst0_37,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__MaybeWithInst_38,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79,
#line 1292 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81,
#line 1292 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_82)
#line 1292 "equiv_type.m"
{
#line 1307 "equiv_type.m"
  {
#line 1307 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_174_174;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes1_43;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypes_50;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraModes_54;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModeSpecs_57;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExtraTypesAndModes_60;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93;
#line 1307 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__V_125_125;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_127_127;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1307 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1339 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_55_55;
#line 1339 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_56_56;

#line 1308 "equiv_type.m"
    {
#line 1308 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__ClassContext0_30, parse_tree__equiv_type__ClassContext_31, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_0_74, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_78, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_80, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85);
    }
#line 1311 "equiv_type.m"
    {
#line 1311 "equiv_type.m"
      parse_tree__equiv_type__replace_in_tms_10_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__TypesAndModes0_32, &parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_83_83, &parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_84_84, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_85_85, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88);
    }
#line 1333 "equiv_type.m"
    if ((parse_tree__equiv_type__MaybeWithType0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1334 "equiv_type.m"
      {
#line 1335 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1336 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1334 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75 = parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86;
#line 1334 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87;
#line 1334 "equiv_type.m"
        parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88;
#line 1334 "equiv_type.m"
      }
#line 1333 "equiv_type.m"
    else
#line 1314 "equiv_type.m"
      {
#line 1314 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeWithType0_35, (MR_Integer) 0)));
#line 1314 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_45;
#line 1315 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_46_46;
#line 1323 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1318 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_182_182;
#line 1318 "equiv_type.m"
        MR_Word parse_tree__equiv_type___Purity_47;

#line 1315 "equiv_type.m"
        {
#line 1315 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(parse_tree__equiv_type__MaybeRecord_24, parse_tree__equiv_type__TypeEqvMap_28, parse_tree__equiv_type__WithType0_44, &parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type__V_46_46, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_86_86, parse_tree__equiv_type__STATE_VARIABLE_TypeVarSet_75, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_87_87, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_88_88, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92);
        }
#line 1318 "equiv_type.m"
        {
#line 1318 "equiv_type.m"
          parse_tree__equiv_type__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(parse_tree__equiv_type__WithType_45, &parse_tree__equiv_type___Purity_47, &parse_tree__equiv_type__V_182_182, &parse_tree__equiv_type__ExtraTypesPrime_49);
        }
#line 1318 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1318 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__PredOrFunc_26 == parse_tree__equiv_type__V_182_182);
#line 1323 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1321 "equiv_type.m"
          {
#line 1321 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = parse_tree__equiv_type__ExtraTypesPrime_49;
#line 1322 "equiv_type.m"
            parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1321 "equiv_type.m"
          }
#line 1323 "equiv_type.m"
        else
#line 1324 "equiv_type.m"
          {
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Pieces1_51;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Msg1_52;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Spec1_53;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_96_96;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_97_97;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_98_98;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_99_99;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_100_100;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_103_103;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_105_105;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_108_108;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_116_116;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_117_117;
#line 1324 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_121_121;

#line 1324 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypes_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_97_97, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_99_99, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1326 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[16])));
#line 1327 "equiv_type.m"
            }
#line 1327 "equiv_type.m"
            {
#line 1327 "equiv_type.m"
              parse_tree__equiv_type__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[33])));
#line 1327 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_105_105, 1) = ((MR_Box) (parse_tree__equiv_type__V_108_108));
#line 1327 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_103_103, 1) = ((MR_Box) (parse_tree__equiv_type__V_105_105));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[32])));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_100_100, 1) = ((MR_Box) (parse_tree__equiv_type__V_103_103));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 0) = ((MR_Box) (parse_tree__equiv_type__V_99_99));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_98_98, 1) = ((MR_Box) (parse_tree__equiv_type__V_100_100));
#line 1326 "equiv_type.m"
            }
#line 1326 "equiv_type.m"
            {
#line 1326 "equiv_type.m"
              parse_tree__equiv_type__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 0) = ((MR_Box) (parse_tree__equiv_type__V_97_97));
#line 1326 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_96_96, 1) = ((MR_Box) (parse_tree__equiv_type__V_98_98));
#line 1326 "equiv_type.m"
            }
#line 1325 "equiv_type.m"
            {
#line 1325 "equiv_type.m"
              parse_tree__equiv_type__Pieces1_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1325 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces1_51, 1) = ((MR_Box) (parse_tree__equiv_type__V_96_96));
#line 1325 "equiv_type.m"
            }
#line 1329 "equiv_type.m"
            {
#line 1329 "equiv_type.m"
              parse_tree__equiv_type__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_117_117, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces1_51));
#line 1329 "equiv_type.m"
            }
#line 1329 "equiv_type.m"
            {
#line 1329 "equiv_type.m"
              parse_tree__equiv_type__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 0) = ((MR_Box) (parse_tree__equiv_type__V_117_117));
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1329 "equiv_type.m"
            }
#line 1329 "equiv_type.m"
            {
#line 1329 "equiv_type.m"
              parse_tree__equiv_type__Msg1_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1329 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg1_52, 1) = ((MR_Box) (parse_tree__equiv_type__V_116_116));
#line 1329 "equiv_type.m"
            }
#line 1330 "equiv_type.m"
            {
#line 1330 "equiv_type.m"
              parse_tree__equiv_type__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 0) = ((MR_Box) (parse_tree__equiv_type__Msg1_52));
#line 1330 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "equiv_type.m"
            }
#line 1330 "equiv_type.m"
            {
#line 1330 "equiv_type.m"
              parse_tree__equiv_type__Spec1_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1330 "equiv_type.m"
              MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec1_53, 2) = ((MR_Box) (parse_tree__equiv_type__V_121_121));
#line 1330 "equiv_type.m"
            }
#line 1331 "equiv_type.m"
            {
#line 1331 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 0) = ((MR_Box) (parse_tree__equiv_type__Spec1_53));
#line 1331 "equiv_type.m"
              MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1331 "equiv_type.m"
            }
#line 1324 "equiv_type.m"
          }
#line 1314 "equiv_type.m"
      }
#line 7918 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_174_174 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0;
#line 1340 "equiv_type.m"
    {
#line 1340 "equiv_type.m"
      parse_tree__equiv_type__V_125_125 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
    }
#line 1341 "equiv_type.m"
    {
#line 1341 "equiv_type.m"
      parse_tree__equiv_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "equiv_type.m"
      MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_127_127, 0) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1341 "equiv_type.m"
    }
#line 1339 "equiv_type.m"
    {
#line 1339 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_29, parse_tree__equiv_type__PredName_25, parse_tree__equiv_type__V_125_125, parse_tree__equiv_type__Context_27, (MR_Integer) 0, &parse_tree__equiv_type__ExtraModes_54, parse_tree__equiv_type__V_127_127, &parse_tree__equiv_type__V_55_55, parse_tree__equiv_type__MaybeWithInst0_37, &parse_tree__equiv_type__V_56_56, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_0_76, parse_tree__equiv_type__STATE_VARIABLE_MaybeDetism_77, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_91_91, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_92_92, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_81, &parse_tree__equiv_type__ModeSpecs_57);
    }
#line 1343 "equiv_type.m"
    {
#line 1343 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__STATE_VARIABLE_Specs_93_93, parse_tree__equiv_type__ModeSpecs_57);
    }
#line 7943 "parse_tree.equiv_type.c"
    if ((parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7945 "parse_tree.equiv_type.c"
      if ((parse_tree__equiv_type__ExtraModes_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7947 "parse_tree.equiv_type.c"
        {
#line 1352 "equiv_type.m"
          {
#line 1352 "equiv_type.m"
            parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[4], parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1351 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1376 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1377 "equiv_type.m"
          *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7960 "parse_tree.equiv_type.c"
        }
#line 7962 "parse_tree.equiv_type.c"
      else
#line 7964 "parse_tree.equiv_type.c"
        {
#line 1356 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_132_132;
#line 1356 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__V_183_183;

#line 1356 "equiv_type.m"
          {
#line 1356 "equiv_type.m"
            parse_tree__equiv_type__V_132_132 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__ExtraTypes_50);
          }
#line 1356 "equiv_type.m"
          {
#line 1356 "equiv_type.m"
            parse_tree__equiv_type__V_183_183 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraModes_54);
          }
#line 1356 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__V_132_132 == parse_tree__equiv_type__V_183_183);
#line 7983 "parse_tree.equiv_type.c"
          if (parse_tree__equiv_type__succeeded)
#line 7985 "parse_tree.equiv_type.c"
            {
#line 7987 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__ExtraTypesModes_64;

#line 1357 "equiv_type.m"
              {
#line 1357 "equiv_type.m"
                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, parse_tree__equiv_type__ExtraTypes_50, parse_tree__equiv_type__ExtraModes_54, &parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1359 "equiv_type.m"
              {
#line 1359 "equiv_type.m"
                parse_tree__equiv_type__ExtraTypesAndModes_60 = mercury__list__map_2_f_0((MR_Word) &parse_tree__equiv_type_scalar_common_2[0], parse_tree__equiv_type__TypeCtorInfo_174_174, (MR_Word) &parse_tree__equiv_type_scalar_common_2[5], parse_tree__equiv_type__ExtraTypesModes_64);
              }
#line 1358 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1376 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1377 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8006 "parse_tree.equiv_type.c"
            }
#line 8008 "parse_tree.equiv_type.c"
          else
#line 8010 "parse_tree.equiv_type.c"
            {
#line 8012 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Pieces2_66;
#line 8014 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Msg2_67;
#line 8016 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__Spec2_68;
#line 8018 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_138_138;
#line 8020 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_139_139;
#line 8022 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_140_140;
#line 8024 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_141_141;
#line 8026 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_156_156;
#line 8028 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_157_157;
#line 8030 "parse_tree.equiv_type.c"
              MR_Word parse_tree__equiv_type__V_161_161;

#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_139_139, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_26));
#line 1364 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_141_141, 1) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1364 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 0) = ((MR_Box) (parse_tree__equiv_type__V_141_141));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[23])));
#line 1364 "equiv_type.m"
              }
#line 1364 "equiv_type.m"
              {
#line 1364 "equiv_type.m"
                parse_tree__equiv_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 0) = ((MR_Box) (parse_tree__equiv_type__V_139_139));
#line 1364 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_138_138, 1) = ((MR_Box) (parse_tree__equiv_type__V_140_140));
#line 1364 "equiv_type.m"
              }
#line 1363 "equiv_type.m"
              {
#line 1363 "equiv_type.m"
                parse_tree__equiv_type__Pieces2_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[31])));
#line 1363 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces2_66, 1) = ((MR_Box) (parse_tree__equiv_type__V_138_138));
#line 1363 "equiv_type.m"
              }
#line 1367 "equiv_type.m"
              {
#line 1367 "equiv_type.m"
                parse_tree__equiv_type__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_157_157, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces2_66));
#line 1367 "equiv_type.m"
              }
#line 1367 "equiv_type.m"
              {
#line 1367 "equiv_type.m"
                parse_tree__equiv_type__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 0) = ((MR_Box) (parse_tree__equiv_type__V_157_157));
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1367 "equiv_type.m"
              }
#line 1367 "equiv_type.m"
              {
#line 1367 "equiv_type.m"
                parse_tree__equiv_type__Msg2_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 0) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 1367 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg2_67, 1) = ((MR_Box) (parse_tree__equiv_type__V_156_156));
#line 1367 "equiv_type.m"
              }
#line 1368 "equiv_type.m"
              {
#line 1368 "equiv_type.m"
                parse_tree__equiv_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 0) = ((MR_Box) (parse_tree__equiv_type__Msg2_67));
#line 1368 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1368 "equiv_type.m"
              }
#line 1368 "equiv_type.m"
              {
#line 1368 "equiv_type.m"
                parse_tree__equiv_type__Spec2_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1368 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1368 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 1368 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec2_68, 2) = ((MR_Box) (parse_tree__equiv_type__V_161_161));
#line 1368 "equiv_type.m"
              }
#line 1369 "equiv_type.m"
              {
#line 1369 "equiv_type.m"
                MR_Word base;
#line 1369 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "equiv_type.m"
                *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = base;
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec2_68));
#line 1369 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131));
#line 1369 "equiv_type.m"
              }
#line 1370 "equiv_type.m"
              parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1382 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1383 "equiv_type.m"
              *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8153 "parse_tree.equiv_type.c"
            }
#line 8155 "parse_tree.equiv_type.c"
        }
#line 8157 "parse_tree.equiv_type.c"
    else
#line 8159 "parse_tree.equiv_type.c"
      {
#line 1347 "equiv_type.m"
        parse_tree__equiv_type__ExtraTypesAndModes_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1346 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Specs_82 = parse_tree__equiv_type__STATE_VARIABLE_Specs_131_131;
#line 1382 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithType_36 = parse_tree__equiv_type__MaybeWithType0_35;
#line 1383 "equiv_type.m"
        *parse_tree__equiv_type__MaybeWithInst_38 = parse_tree__equiv_type__MaybeWithInst0_37;
#line 8169 "parse_tree.equiv_type.c"
      }
#line 1388 "equiv_type.m"
    if ((parse_tree__equiv_type__ExtraTypesAndModes_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1386 "equiv_type.m"
      {
#line 1387 "equiv_type.m"
        *parse_tree__equiv_type__TypesAndModes_33 = parse_tree__equiv_type__TypesAndModes1_43;
#line 1386 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129;
#line 1386 "equiv_type.m"
      }
#line 1388 "equiv_type.m"
    else
#line 1389 "equiv_type.m"
      {
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__OrigItemId_73;
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_167_167;
#line 1389 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_168_168;
#line 1389 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_169_169;

#line 1390 "equiv_type.m"
        {
#line 1390 "equiv_type.m"
          parse_tree__equiv_type__V_167_167 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_26);
        }
#line 1391 "equiv_type.m"
        {
#line 1391 "equiv_type.m"
          parse_tree__equiv_type__V_169_169 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes0_32);
        }
#line 1391 "equiv_type.m"
        {
#line 1391 "equiv_type.m"
          parse_tree__equiv_type__V_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1391 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_25));
#line 1391 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_168_168, 1) = ((MR_Box) (parse_tree__equiv_type__V_169_169));
#line 1391 "equiv_type.m"
        }
#line 1390 "equiv_type.m"
        {
#line 1390 "equiv_type.m"
          parse_tree__equiv_type__OrigItemId_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 0) = ((MR_Box) (parse_tree__equiv_type__V_167_167));
#line 1390 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__OrigItemId_73, 1) = ((MR_Box) (parse_tree__equiv_type__V_168_168));
#line 1390 "equiv_type.m"
        }
#line 1392 "equiv_type.m"
        {
#line 1392 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__OrigItemId_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_129_129, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_79);
        }
#line 1393 "equiv_type.m"
        {
#line 1393 "equiv_type.m"
          *parse_tree__equiv_type__TypesAndModes_33 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_174_174, parse_tree__equiv_type__TypesAndModes1_43, parse_tree__equiv_type__ExtraTypesAndModes_60);
        }
#line 1389 "equiv_type.m"
      }
#line 1307 "equiv_type.m"
  }
#line 1292 "equiv_type.m"
}

#line 1191 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_type_ctor_18_p_0(
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_19,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_20,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_22,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_23,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TArgs_24,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Kind_25,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_26,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Changed_47,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_49,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_51,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53,
#line 1191 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54,
#line 1191 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55)
#line 1191 "equiv_type.m"
{
#line 1199 "equiv_type.m"
  {
#line 1199 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1199 "equiv_type.m"
    MR_Word parse_tree__equiv_type__AlreadyExpanded_32;
#line 1236 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Args0_35;
#line 1236 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Body0_36;
#line 1236 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Renaming_37;
#line 1236 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56;
#line 1206 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvTypeBody_33;
#line 1206 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EqvVarSet_34;
#line 1206 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv0_EqvTypeBody_33;

#line 1200 "equiv_type.m"
    {
#line 1200 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21);
    }
#line 1202 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1201 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 1;
#line 1202 "equiv_type.m"
    else
#line 1203 "equiv_type.m"
      parse_tree__equiv_type__AlreadyExpanded_32 = (MR_Integer) 0;
#line 1206 "equiv_type.m"
    {
#line 1206 "equiv_type.m"
      parse_tree__equiv_type__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, parse_tree__equiv_type__TypeEqvMap_20, ((MR_Box) (parse_tree__equiv_type__TypeCtor_23)), &parse_tree__equiv_type__conv0_EqvTypeBody_33);
    }
#line 1206 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1206 "equiv_type.m"
      {
#line 1206 "equiv_type.m"
        parse_tree__equiv_type__EqvTypeBody_33 = ((MR_Word) parse_tree__equiv_type__conv0_EqvTypeBody_33);
#line 1206 "equiv_type.m"
        parse_tree__equiv_type__succeeded = MR_TRUE;
#line 1206 "equiv_type.m"
      }
#line 1206 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1206 "equiv_type.m"
      {
#line 1207 "equiv_type.m"
        parse_tree__equiv_type__EqvVarSet_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 0)));
#line 1207 "equiv_type.m"
        parse_tree__equiv_type__Args0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 1)));
#line 1207 "equiv_type.m"
        parse_tree__equiv_type__Body0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__EqvTypeBody_33, (MR_Integer) 2)));
#line 1217 "equiv_type.m"
        {
#line 1217 "equiv_type.m"
          parse_tree__prog_data__tvarset_merge_renaming_without_names_4_p_0(parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50, parse_tree__equiv_type__EqvVarSet_34, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, &parse_tree__equiv_type__Renaming_37);
        }
#line 1219 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48 == (MR_Integer) 0);
#line 1206 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1220 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__AlreadyExpanded_32 == (MR_Integer) 0);
#line 1206 "equiv_type.m"
      }
#line 1236 "equiv_type.m"
    if (parse_tree__equiv_type__succeeded)
#line 1223 "equiv_type.m"
      {
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeInfo_71_71;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_38;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body1_39;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorItem_40;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_41;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Body_42;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_59_59;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60;
#line 1223 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_62_62;
#line 1233 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_43_43;

#line 1565 "equiv_type.m"
        if ((parse_tree__equiv_type__MaybeRecord_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1565 "equiv_type.m"
        else
#line 1567 "equiv_type.m"
          {
#line 1567 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Visibility_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRecord_19, (MR_Integer) 0)));
#line 1567 "equiv_type.m"
            MR_Word parse_tree__equiv_type__TypeCtorSymName_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1568 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___TypeCtorArity_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1569 "equiv_type.m"
            {
#line 1569 "equiv_type.m"
              parse_tree__prog_data__record_sym_name_module_as_used_4_p_0(parse_tree__equiv_type__Visibility_78, parse_tree__equiv_type__TypeCtorSymName_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
            }
#line 1567 "equiv_type.m"
          }
#line 1225 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = (MR_Integer) 1;
#line 8405 "parse_tree.equiv_type.c"
        parse_tree__equiv_type__TypeInfo_71_71 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 1226 "equiv_type.m"
        {
#line 1226 "equiv_type.m"
          mercury__map__apply_to_list_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__TypeInfo_71_71, parse_tree__equiv_type__Args0_35, parse_tree__equiv_type__Renaming_37, &parse_tree__equiv_type__Args_38);
        }
#line 1227 "equiv_type.m"
        {
#line 1227 "equiv_type.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(parse_tree__equiv_type__Renaming_37, parse_tree__equiv_type__Body0_36, &parse_tree__equiv_type__Body1_39);
        }
#line 1228 "equiv_type.m"
        {
#line 1228 "equiv_type.m"
          parse_tree__equiv_type__TypeCtorItem_40 = recompilation__type_ctor_to_item_name_1_f_0(parse_tree__equiv_type__TypeCtor_23);
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1229 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorItem_40));
#line 1229 "equiv_type.m"
        }
#line 1229 "equiv_type.m"
        {
#line 1229 "equiv_type.m"
          recompilation__record_expanded_item_3_p_0(parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60);
        }
#line 1231 "equiv_type.m"
        {
#line 1231 "equiv_type.m"
          mercury__map__from_corresponding_lists_3_p_0(parse_tree__equiv_type__TypeInfo_71_71, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__Args_38, parse_tree__equiv_type__TArgs_24, &parse_tree__equiv_type__Subst_41);
        }
#line 1232 "equiv_type.m"
        {
#line 1232 "equiv_type.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(parse_tree__equiv_type__Subst_41, parse_tree__equiv_type__Body1_39, &parse_tree__equiv_type__Body_42);
        }
#line 1234 "equiv_type.m"
        {
#line 1234 "equiv_type.m"
          parse_tree__equiv_type__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_23));
#line 1234 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_62_62, 1) = ((MR_Box) (parse_tree__equiv_type__TypeCtorsAlreadyExpanded_21));
#line 1234 "equiv_type.m"
        }
#line 1233 "equiv_type.m"
        {
#line 1233 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_19, parse_tree__equiv_type__TypeEqvMap_20, parse_tree__equiv_type__V_62_62, parse_tree__equiv_type__Body_42, parse_tree__equiv_type__Type_26, &parse_tree__equiv_type__V_43_43, parse_tree__equiv_type__STATE_VARIABLE_Circ_49, parse_tree__equiv_type__STATE_VARIABLE_VarSet_56_56, parse_tree__equiv_type__STATE_VARIABLE_VarSet_51, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_60_60, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55);
        }
#line 1223 "equiv_type.m"
      }
#line 1236 "equiv_type.m"
    else
#line 1244 "equiv_type.m"
      {
#line 1241 "equiv_type.m"
#line 1241 "equiv_type.m"
        switch (parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46) {
#line 1241 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1241 "equiv_type.m"
          case (MR_Integer) 0:
#line 1243 "equiv_type.m"
            *parse_tree__equiv_type__Type_26 = parse_tree__equiv_type__Type0_22;
#line 1241 "equiv_type.m"
            break;
#line 1241 "equiv_type.m"
          case (MR_Integer) 1:
#line 1238 "equiv_type.m"
            {
#line 1238 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SymName_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 0)));
#line 1239 "equiv_type.m"
              MR_Integer parse_tree__equiv_type___Arity_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_23, (MR_Integer) 1)));

#line 1240 "equiv_type.m"
              {
#line 1240 "equiv_type.m"
                MR_Word base;
#line 1240 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "equiv_type.m"
                *parse_tree__equiv_type__Type_26 = base;
#line 1240 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_44));
#line 1240 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__TArgs_24));
#line 1240 "equiv_type.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_25));
#line 1240 "equiv_type.m"
              }
#line 1238 "equiv_type.m"
            }
#line 1241 "equiv_type.m"
            break;
#line 1241 "equiv_type.m"
        }
#line 1245 "equiv_type.m"
        {
#line 1245 "equiv_type.m"
          mercury__bool__or_3_p_0(parse_tree__equiv_type__AlreadyExpanded_32, parse_tree__equiv_type__STATE_VARIABLE_Circ_0_48, parse_tree__equiv_type__STATE_VARIABLE_Circ_49);
        }
#line 1244 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_54;
#line 1244 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_53 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_52;
#line 1244 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_51 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_50;
#line 1244 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Changed_47 = parse_tree__equiv_type__STATE_VARIABLE_Changed_0_46;
#line 1244 "equiv_type.m"
      }
#line 1199 "equiv_type.m"
  }
#line 1191 "equiv_type.m"
}

#line 1098 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_17,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_18,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_19,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Circ_20,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_48,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50,
#line 1098 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51,
#line 1098 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52)
#line 1098 "equiv_type.m"
{
#line 1108 "equiv_type.m"
  {
#line 1108 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1108 "equiv_type.m"
#line 1108 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Type0_17)) {
#line 1108 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "equiv_type.m"
      case (MR_Integer) 0:
#line 1108 "equiv_type.m"
        {
#line 1109 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1110 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1111 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1108 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1108 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1108 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1108 "equiv_type.m"
        }
#line 1108 "equiv_type.m"
        break;
#line 1108 "equiv_type.m"
      case (MR_Integer) 1:
#line 1113 "equiv_type.m"
        {
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__SymName_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)));
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs0_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TArgs_28;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ArgsChanged_29;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Circ0_30;
#line 1113 "equiv_type.m"
          MR_Integer parse_tree__equiv_type__Arity_31;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeCtor_32;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74;
#line 1113 "equiv_type.m"
          MR_Word parse_tree__equiv_type__Kind_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1114 "equiv_type.m"
          {
#line 1114 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__TArgs0_27, &parse_tree__equiv_type__TArgs_28, &parse_tree__equiv_type__ArgsChanged_29, (MR_Integer) 0, &parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74);
          }
#line 1117 "equiv_type.m"
          {
#line 1117 "equiv_type.m"
            parse_tree__equiv_type__Arity_31 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, parse_tree__equiv_type__TArgs_28);
          }
#line 1118 "equiv_type.m"
          {
#line 1118 "equiv_type.m"
            parse_tree__equiv_type__TypeCtor_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_26));
#line 1118 "equiv_type.m"
            MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_32, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_31));
#line 1118 "equiv_type.m"
          }
#line 1119 "equiv_type.m"
          {
#line 1119 "equiv_type.m"
            parse_tree__equiv_type__replace_type_ctor_18_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Type0_17, parse_tree__equiv_type__TypeCtor_32, parse_tree__equiv_type__TArgs_28, parse_tree__equiv_type__Kind_78, parse_tree__equiv_type__Type_18, parse_tree__equiv_type__ArgsChanged_29, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ0_30, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_72_72, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_73_73, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
#line 1119 "equiv_type.m"
            return;
          }
#line 1113 "equiv_type.m"
        }
#line 1108 "equiv_type.m"
        break;
#line 1108 "equiv_type.m"
      case (MR_Integer) 2:
#line 1123 "equiv_type.m"
        {
#line 1124 "equiv_type.m"
          *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1125 "equiv_type.m"
          *parse_tree__equiv_type__Changed_19 = (MR_Integer) 0;
#line 1126 "equiv_type.m"
          *parse_tree__equiv_type__Circ_20 = (MR_Integer) 0;
#line 1123 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47;
#line 1123 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49;
#line 1123 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51;
#line 1123 "equiv_type.m"
        }
#line 1108 "equiv_type.m"
        break;
#line 1108 "equiv_type.m"
      case (MR_Integer) 3:
#line 1108 "equiv_type.m"
#line 1108 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 0)))) {
#line 1108 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "equiv_type.m"
          case (MR_Integer) 0:
#line 1154 "equiv_type.m"
            {
#line 1154 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1154 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1154 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_82;

#line 1155 "equiv_type.m"
              {
#line 1155 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_81, &parse_tree__equiv_type__Args_82, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1161 "equiv_type.m"
#line 1161 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1161 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1161 "equiv_type.m"
                case (MR_Integer) 0:
#line 1163 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1161 "equiv_type.m"
                  break;
#line 1161 "equiv_type.m"
                case (MR_Integer) 1:
#line 1160 "equiv_type.m"
                  {
#line 1160 "equiv_type.m"
                    MR_Word base;
#line 1160 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1160 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1160 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_82));
#line 1160 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_80));
#line 1160 "equiv_type.m"
                  }
#line 1161 "equiv_type.m"
                  break;
#line 1161 "equiv_type.m"
              }
#line 1154 "equiv_type.m"
            }
#line 1108 "equiv_type.m"
            break;
#line 1108 "equiv_type.m"
          case (MR_Integer) 1:
#line 1128 "equiv_type.m"
            {
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Purity_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_38;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsCirc_39;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeRet_44;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1128 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ArgsChanged_79;

#line 1129 "equiv_type.m"
              {
#line 1129 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_34, &parse_tree__equiv_type__Args_38, &parse_tree__equiv_type__ArgsChanged_79, (MR_Integer) 0, &parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67);
              }
#line 1140 "equiv_type.m"
              if ((parse_tree__equiv_type__MaybeRet0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1141 "equiv_type.m"
                {
#line 1142 "equiv_type.m"
                  parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1143 "equiv_type.m"
                  *parse_tree__equiv_type__Changed_19 = parse_tree__equiv_type__ArgsChanged_79;
#line 1144 "equiv_type.m"
                  *parse_tree__equiv_type__Circ_20 = parse_tree__equiv_type__ArgsCirc_39;
#line 1141 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_VarSet_48 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65;
#line 1141 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66;
#line 1141 "equiv_type.m"
                  *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67;
#line 1141 "equiv_type.m"
                }
#line 1140 "equiv_type.m"
              else
#line 1133 "equiv_type.m"
                {
#line 1133 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet0_35, (MR_Integer) 0)));
#line 1133 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__Ret_41;
#line 1133 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetChanged_42;
#line 1133 "equiv_type.m"
                  MR_Word parse_tree__equiv_type__RetCirc_43;

#line 1134 "equiv_type.m"
                  {
#line 1134 "equiv_type.m"
                    parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Ret0_40, &parse_tree__equiv_type__Ret_41, &parse_tree__equiv_type__RetChanged_42, &parse_tree__equiv_type__RetCirc_43, parse_tree__equiv_type__STATE_VARIABLE_VarSet_65_65, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_66_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_67_67, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
                  }
#line 1137 "equiv_type.m"
                  {
#line 1137 "equiv_type.m"
                    parse_tree__equiv_type__MaybeRet_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "equiv_type.m"
                    MR_hl_field(MR_mktag(1), parse_tree__equiv_type__MaybeRet_44, 0) = ((MR_Box) (parse_tree__equiv_type__Ret_41));
#line 1137 "equiv_type.m"
                  }
#line 1138 "equiv_type.m"
                  {
#line 1138 "equiv_type.m"
                    *parse_tree__equiv_type__Changed_19 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsChanged_79, parse_tree__equiv_type__RetChanged_42);
                  }
#line 1139 "equiv_type.m"
                  {
#line 1139 "equiv_type.m"
                    *parse_tree__equiv_type__Circ_20 = mercury__bool__or_2_f_0(parse_tree__equiv_type__ArgsCirc_39, parse_tree__equiv_type__RetCirc_43);
                  }
#line 1133 "equiv_type.m"
                }
#line 1149 "equiv_type.m"
#line 1149 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1149 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1149 "equiv_type.m"
                case (MR_Integer) 0:
#line 1151 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1149 "equiv_type.m"
                  break;
#line 1149 "equiv_type.m"
                case (MR_Integer) 1:
#line 1148 "equiv_type.m"
                  {
#line 1148 "equiv_type.m"
                    MR_Word base;
#line 1148 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1148 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1148 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_38));
#line 1148 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeRet_44));
#line 1148 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Purity_36));
#line 1148 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 4) = NULL;
#line 1148 "equiv_type.m"
                  }
#line 1149 "equiv_type.m"
                  break;
#line 1149 "equiv_type.m"
              }
#line 1128 "equiv_type.m"
            }
#line 1108 "equiv_type.m"
            break;
#line 1108 "equiv_type.m"
          case (MR_Integer) 2:
#line 1166 "equiv_type.m"
            {
#line 1166 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1166 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 3)));
#line 1166 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args0_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));
#line 1166 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Args_86;

#line 1167 "equiv_type.m"
              {
#line 1167 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__Args0_85, &parse_tree__equiv_type__Args_86, parse_tree__equiv_type__Changed_19, (MR_Integer) 0, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1173 "equiv_type.m"
#line 1173 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1173 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1173 "equiv_type.m"
                case (MR_Integer) 0:
#line 1175 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1173 "equiv_type.m"
                  break;
#line 1173 "equiv_type.m"
                case (MR_Integer) 1:
#line 1172 "equiv_type.m"
                  {
#line 1172 "equiv_type.m"
                    MR_Word base;
#line 1172 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1172 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1172 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__Var_83));
#line 1172 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Args_86));
#line 1172 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__equiv_type__Kind_84));
#line 1172 "equiv_type.m"
                  }
#line 1173 "equiv_type.m"
                  break;
#line 1173 "equiv_type.m"
              }
#line 1166 "equiv_type.m"
            }
#line 1108 "equiv_type.m"
            break;
#line 1108 "equiv_type.m"
          case (MR_Integer) 3:
#line 1178 "equiv_type.m"
            {
#line 1178 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 1)));
#line 1178 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RawType_46;
#line 1178 "equiv_type.m"
              MR_Word parse_tree__equiv_type__Kind_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Type0_17, (MR_Integer) 2)));

#line 1179 "equiv_type.m"
              {
#line 1179 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeCtorsAlreadyExpanded_16, parse_tree__equiv_type__RawType0_45, &parse_tree__equiv_type__RawType_46, parse_tree__equiv_type__Changed_19, parse_tree__equiv_type__Circ_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_47, parse_tree__equiv_type__STATE_VARIABLE_VarSet_48, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_49, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_50, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_51, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_52);
              }
#line 1185 "equiv_type.m"
#line 1185 "equiv_type.m"
              switch (*parse_tree__equiv_type__Changed_19) {
#line 1185 "equiv_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "equiv_type.m"
                case (MR_Integer) 0:
#line 1187 "equiv_type.m"
                  *parse_tree__equiv_type__Type_18 = parse_tree__equiv_type__Type0_17;
#line 1185 "equiv_type.m"
                  break;
#line 1185 "equiv_type.m"
                case (MR_Integer) 1:
#line 1184 "equiv_type.m"
                  {
#line 1184 "equiv_type.m"
                    MR_Word base;
#line 1184 "equiv_type.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "equiv_type.m"
                    *parse_tree__equiv_type__Type_18 = base;
#line 1184 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1184 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__RawType_46));
#line 1184 "equiv_type.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__Kind_87));
#line 1184 "equiv_type.m"
                  }
#line 1185 "equiv_type.m"
                  break;
#line 1185 "equiv_type.m"
              }
#line 1178 "equiv_type.m"
            }
#line 1108 "equiv_type.m"
            break;
#line 1108 "equiv_type.m"
        }
#line 1108 "equiv_type.m"
        break;
#line 1108 "equiv_type.m"
    }
#line 1108 "equiv_type.m"
  }
#line 1098 "equiv_type.m"
}

#line 1085 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_maybe_record_use_11_p_0(
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Type0_14,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Type_15,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_22,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24,
#line 1085 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25,
#line 1085 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26)
#line 1085 "equiv_type.m"
{
#line 1091 "equiv_type.m"
  {
#line 1091 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_20_20;

#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_14, parse_tree__equiv_type__Type_15, parse_tree__equiv_type__Changed_16, &parse_tree__equiv_type__V_20_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_22, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_24, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_26);
    }
#line 1091 "equiv_type.m"
  }
#line 1085 "equiv_type.m"
}

#line 1070 "equiv_type.m"
static MR_bool MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1(
#line 1070 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg)
#line 1070 "equiv_type.m"
{
#line 1070 "equiv_type.m"
  {
#line 1070 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1070 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;

#line 1070 "equiv_type.m"
    {
#line 1070 "equiv_type.m"
      return parse_tree__equiv_type__succeeded = parse_tree__equiv_type__IntroducedFrom__pred__replace_in_ctor_arg_list_2__1070__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))));
    }
#line 1070 "equiv_type.m"
    return parse_tree__equiv_type__succeeded;
#line 1070 "equiv_type.m"
  }
#line 1070 "equiv_type.m"
}

#line 1047 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Circ_7,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_9,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11,
#line 1047 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12,
#line 1047 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13)
#line 1047 "equiv_type.m"
{
#line 1054 "equiv_type.m"
  {
#line 1054 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1054 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "equiv_type.m"
      {
#line 1054 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1055 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12;
#line 1055 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10;
#line 1055 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_9 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8;
#line 1055 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_Circ_7 = parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6;
#line 1054 "equiv_type.m"
      }
#line 1054 "equiv_type.m"
    else
#line 1058 "equiv_type.m"
      {
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args0_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Arg_34;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Args_35;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 0)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 1)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Width_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 2)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg0_32, (MR_Integer) 3)));
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_44;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_46;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 1058 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65;
#line 1060 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_45_45;

#line 1060 "equiv_type.m"
        {
#line 1060 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_41, &parse_tree__equiv_type__Type_44, &parse_tree__equiv_type__V_45_45, &parse_tree__equiv_type__ContainsCirc_46, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_8, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_10, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_12, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60);
        }
#line 1064 "equiv_type.m"
#line 1064 "equiv_type.m"
        switch (MR_tag((MR_Word) parse_tree__equiv_type__Width_42)) {
#line 1064 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1064 "equiv_type.m"
          case (MR_Integer) 0:
#line 1064 "equiv_type.m"
#line 1064 "equiv_type.m"
            switch (MR_unmkbody(parse_tree__equiv_type__Width_42)) {
#line 1064 "equiv_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1064 "equiv_type.m"
              case (MR_Integer) 0:
#line 1063 "equiv_type.m"
                {
#line 1063 "equiv_type.m"
                }
#line 1064 "equiv_type.m"
                break;
#line 1064 "equiv_type.m"
              case (MR_Integer) 1:
#line 1065 "equiv_type.m"
                {
#line 1065 "equiv_type.m"
                }
#line 1064 "equiv_type.m"
                break;
#line 1064 "equiv_type.m"
            }
#line 1064 "equiv_type.m"
            break;
#line 1064 "equiv_type.m"
          case (MR_Integer) 1:
#line 1064 "equiv_type.m"
          case (MR_Integer) 2:
#line 1069 "equiv_type.m"
            {
#line 1069 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_61_61;

#line 1070 "equiv_type.m"
              {
#line 1070 "equiv_type.m"
                parse_tree__equiv_type__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_5[0]));
#line 1070 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0_1));
#line 1070 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1070 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 3) = ((MR_Box) (parse_tree__equiv_type__Type0_41));
#line 1070 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_61_61, 4) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1070 "equiv_type.m"
              }
#line 1070 "equiv_type.m"
              {
#line 1070 "equiv_type.m"
                mercury__require__expect_4_p_0(parse_tree__equiv_type__V_61_61, (MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_ctor_arg_list_2\'/13", (MR_String) "changed type of packed argument");
              }
#line 1069 "equiv_type.m"
            }
#line 1064 "equiv_type.m"
            break;
#line 1064 "equiv_type.m"
        }
#line 1073 "equiv_type.m"
        {
#line 1073 "equiv_type.m"
          parse_tree__equiv_type__Arg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 0) = ((MR_Box) (parse_tree__equiv_type__Name_40));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 1) = ((MR_Box) (parse_tree__equiv_type__Type_44));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 2) = ((MR_Box) (parse_tree__equiv_type__Width_42));
#line 1073 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Arg_34, 3) = ((MR_Box) (parse_tree__equiv_type__Context_43));
#line 1073 "equiv_type.m"
        }
#line 1074 "equiv_type.m"
        {
#line 1074 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65 = mercury__bool__or_2_f_0(parse_tree__equiv_type__STATE_VARIABLE_Circ_0_6, parse_tree__equiv_type__ContainsCirc_46);
        }
#line 1075 "equiv_type.m"
        {
#line 1075 "equiv_type.m"
          parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Args0_33, &parse_tree__equiv_type__Args_35, parse_tree__equiv_type__STATE_VARIABLE_Circ_65_65, parse_tree__equiv_type__STATE_VARIABLE_Circ_7, parse_tree__equiv_type__STATE_VARIABLE_VarSet_58_58, parse_tree__equiv_type__STATE_VARIABLE_VarSet_9, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_11, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_13);
        }
#line 1057 "equiv_type.m"
        {
#line 1057 "equiv_type.m"
          MR_Word base;
#line 1057 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1057 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Arg_34));
#line 1057 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Args_35));
#line 1057 "equiv_type.m"
        }
#line 1058 "equiv_type.m"
      }
#line 1054 "equiv_type.m"
  }
#line 1047 "equiv_type.m"
}

#line 1004 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__6_6,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__7_7,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__8_8,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_10,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12,
#line 1004 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13,
#line 1004 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14)
#line 1004 "equiv_type.m"
{
#line 1011 "equiv_type.m"
  {
#line 1011 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1011 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "equiv_type.m"
      {
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13;
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11;
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_10 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9;
#line 1012 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__8_8 = parse_tree__equiv_type__HeadVar__7_7;
#line 1011 "equiv_type.m"
      }
#line 1011 "equiv_type.m"
    else
#line 1015 "equiv_type.m"
      {
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_42;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed0_43;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ContainsCirc_44;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Types_45;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Changed1_46;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57;
#line 1015 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58;

#line 1016 "equiv_type.m"
        {
#line 1016 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Type0_34, &parse_tree__equiv_type__Type_42, &parse_tree__equiv_type__Changed0_43, &parse_tree__equiv_type__ContainsCirc_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_9, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_11, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_13, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57);
        }
#line 1019 "equiv_type.m"
        {
#line 1019 "equiv_type.m"
          parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58 = mercury__bool__or_2_f_0(parse_tree__equiv_type__HeadVar__7_7, parse_tree__equiv_type__ContainsCirc_44);
        }
#line 1020 "equiv_type.m"
        {
#line 1020 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__HeadVar__3_3, parse_tree__equiv_type__Types0_35, &parse_tree__equiv_type__Types_45, &parse_tree__equiv_type__Changed1_46, parse_tree__equiv_type__STATE_VARIABLE_Circ_58_58, parse_tree__equiv_type__HeadVar__8_8, parse_tree__equiv_type__STATE_VARIABLE_VarSet_55_55, parse_tree__equiv_type__STATE_VARIABLE_VarSet_10, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_56_56, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_12, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_57_57, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_14);
        }
#line 1023 "equiv_type.m"
        parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed0_43 == (MR_Integer) 1);
#line 1024 "equiv_type.m"
        if (!(parse_tree__equiv_type__succeeded))
#line 1024 "equiv_type.m"
          parse_tree__equiv_type__succeeded = (parse_tree__equiv_type__Changed1_46 == (MR_Integer) 1);
#line 1029 "equiv_type.m"
        if (parse_tree__equiv_type__succeeded)
#line 1027 "equiv_type.m"
          {
#line 1027 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 1;
#line 1028 "equiv_type.m"
            {
#line 1028 "equiv_type.m"
              MR_Word base;
#line 1028 "equiv_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "equiv_type.m"
              *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 1028 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Type_42));
#line 1028 "equiv_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Types_45));
#line 1028 "equiv_type.m"
            }
#line 1027 "equiv_type.m"
          }
#line 1029 "equiv_type.m"
        else
#line 1030 "equiv_type.m"
          {
#line 1030 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__6_6 = (MR_Integer) 0;
#line 1031 "equiv_type.m"
            *parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__4_4;
#line 1030 "equiv_type.m"
          }
#line 1015 "equiv_type.m"
      }
#line 1011 "equiv_type.m"
  }
#line 1004 "equiv_type.m"
}

#line 993 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_circ_12_p_0(
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ts_22,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_16,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_17,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 993 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 993 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 993 "equiv_type.m"
{
#line 1000 "equiv_type.m"
  {
#line 1000 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 1001 "equiv_type.m"
    {
#line 1001 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Ts_0_21, parse_tree__equiv_type__STATE_VARIABLE_Ts_22, parse_tree__equiv_type__Changed_16, (MR_Integer) 0, parse_tree__equiv_type__ContainsCirc_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
#line 1001 "equiv_type.m"
      return;
    }
#line 1000 "equiv_type.m"
  }
#line 993 "equiv_type.m"
}

#line 983 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_list_location_11_p_0(
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Types_0_20,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Types_21,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Changed_15,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 983 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 983 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 983 "equiv_type.m"
{
#line 989 "equiv_type.m"
  {
#line 989 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 990 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_19_19;

#line 990 "equiv_type.m"
    {
#line 990 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__TypeEqvMap_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Types_0_20, parse_tree__equiv_type__STATE_VARIABLE_Types_21, parse_tree__equiv_type__Changed_15, (MR_Integer) 0, &parse_tree__equiv_type__V_19_19, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 989 "equiv_type.m"
  }
#line 983 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 963 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctor_10_p_0(
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Ctor0_13,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Ctor_14,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_28,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30,
#line 963 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31,
#line 963 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32)
#line 963 "equiv_type.m"
{
#line 969 "equiv_type.m"
  {
#line 969 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_87;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 0)));
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 1)));
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 2)));
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 3)));
#line 969 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 4)));
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Ctor0_13, (MR_Integer) 5)));
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__CtorArgs_24;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_26;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 969 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_74_74;
#line 1044 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32;

#line 1044 "equiv_type.m"
    {
#line 1044 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_arg_list_2_13_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__CtorArgs0_21, &parse_tree__equiv_type__CtorArgs_24, (MR_Integer) 0, &parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_27, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_29, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_31, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctor_10_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_74_74, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 851 "equiv_type.m"
    }
#line 9624 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_87, parse_tree__equiv_type__TypeCtorInfo_38_87, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_74_74, parse_tree__equiv_type__Constraints0_19, &parse_tree__equiv_type__Constraints_26, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_33_33)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_34_34)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
    }
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28);
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_30 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_30);
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_32 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_32);
#line 975 "equiv_type.m"
    {
#line 975 "equiv_type.m"
      MR_Word base;
#line 975 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 975 "equiv_type.m"
      *parse_tree__equiv_type__Ctor_14 = base;
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_18));
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Constraints_26));
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__CtorName_20));
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__CtorArgs_24));
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Arity_22));
#line 975 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Ctxt_23));
#line 975 "equiv_type.m"
    }
#line 969 "equiv_type.m"
  }
#line 963 "equiv_type.m"
}

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 960 "equiv_type.m"
{
#line 960 "equiv_type.m"
  {
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 960 "equiv_type.m"
  }
#line 960 "equiv_type.m"
}

#line 953 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_location_10_p_0(
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Ctors_18,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 953 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 953 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 953 "equiv_type.m"
{
#line 959 "equiv_type.m"
  {
#line 959 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 959 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 959 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_location_10_p_0_1));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 960 "equiv_type.m"
    }
#line 9774 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_17, parse_tree__equiv_type__STATE_VARIABLE_Ctors_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 959 "equiv_type.m"
  }
#line 953 "equiv_type.m"
}

#line 933 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_subst_10_p_0(
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__2_2,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__3_3,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__4_4,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_6,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8,
#line 933 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9,
#line 933 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10)
#line 933 "equiv_type.m"
{
#line 938 "equiv_type.m"
  {
#line 938 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 938 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 938 "equiv_type.m"
      {
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9;
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7;
#line 938 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_VarSet_6 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5;
#line 938 "equiv_type.m"
      }
#line 938 "equiv_type.m"
    else
#line 941 "equiv_type.m"
      {
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Var_24;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type0_25;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst0_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 1)));
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Type_27;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Subst_28;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__3_3, (MR_Integer) 0)));
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_40_40;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42;
#line 941 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_32_32;
#line 1092 "equiv_type.m"
        MR_Word parse_tree__equiv_type__V_61_61;

#line 940 "equiv_type.m"
        parse_tree__equiv_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 0)));
#line 940 "equiv_type.m"
        parse_tree__equiv_type__Type0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_39_39, (MR_Integer) 1)));
#line 1092 "equiv_type.m"
        {
#line 1092 "equiv_type.m"
          parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_25, &parse_tree__equiv_type__Type_27, &parse_tree__equiv_type__V_32_32, &parse_tree__equiv_type__V_61_61, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_5, &parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_7, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_9, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43);
        }
#line 941 "equiv_type.m"
        {
#line 941 "equiv_type.m"
          parse_tree__equiv_type__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 0) = ((MR_Box) (parse_tree__equiv_type__Var_24));
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_40_40, 1) = ((MR_Box) (parse_tree__equiv_type__Type_27));
#line 941 "equiv_type.m"
        }
#line 944 "equiv_type.m"
        {
#line 944 "equiv_type.m"
          parse_tree__equiv_type__replace_in_subst_10_p_0(parse_tree__equiv_type__HeadVar__1_1, parse_tree__equiv_type__HeadVar__2_2, parse_tree__equiv_type__Subst0_26, &parse_tree__equiv_type__Subst_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_6, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_42_42, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_8, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_10);
        }
#line 941 "equiv_type.m"
        {
#line 941 "equiv_type.m"
          MR_Word base;
#line 941 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__4_4 = base;
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__V_40_40));
#line 941 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__Subst_28));
#line 941 "equiv_type.m"
        }
#line 941 "equiv_type.m"
      }
#line 938 "equiv_type.m"
  }
#line 933 "equiv_type.m"
}

#line 891 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_method_11_p_0(
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Method0_15,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Method_16,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49,
#line 891 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50,
#line 891 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_51)
#line 891 "equiv_type.m"
{
#line 902 "equiv_type.m"
  {
#line 902 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 902 "equiv_type.m"
    if (((MR_tag((MR_Word) parse_tree__equiv_type__Method0_15)) == (MR_mktag((MR_Integer) 0))))
#line 902 "equiv_type.m"
      {
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredOrFunc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 7)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 8)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Purity_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 9)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 10)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Method0_15, (MR_Integer) 11)));
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ClassContext_32;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypesAndModes_33;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeVarSet_34;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithType_35;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_36;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_37;
#line 902 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_38;

#line 903 "equiv_type.m"
        {
#line 903 "equiv_type.m"
          parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_12, parse_tree__equiv_type__PredName_20, parse_tree__equiv_type__PredOrFunc_21, parse_tree__equiv_type__Context_31, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ClassContext0_30, &parse_tree__equiv_type__ClassContext_32, parse_tree__equiv_type__TypesAndModes0_22, &parse_tree__equiv_type__TypesAndModes_33, parse_tree__equiv_type__TypeVarSet0_26, &parse_tree__equiv_type__TypeVarSet_34, parse_tree__equiv_type__WithType0_23, &parse_tree__equiv_type__WithType_35, parse_tree__equiv_type__WithInst0_24, &parse_tree__equiv_type__WithInst_36, parse_tree__equiv_type__MaybeDetism0_25, &parse_tree__equiv_type__MaybeDetism_37, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_38);
        }
#line 908 "equiv_type.m"
        {
#line 908 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_38, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 909 "equiv_type.m"
        {
#line 909 "equiv_type.m"
          MR_Word base;
#line 909 "equiv_type.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 909 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_20));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_21));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_33));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithType_35));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__WithInst_36));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_37));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_34));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_27));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_28));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__Purity_29));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__ClassContext_32));
#line 909 "equiv_type.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__Context_31));
#line 909 "equiv_type.m"
        }
#line 902 "equiv_type.m"
      }
#line 902 "equiv_type.m"
    else
#line 914 "equiv_type.m"
      {
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 1)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 2)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__ExtraModes_41;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybePredOrFunc_42;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Modes_43;
#line 914 "equiv_type.m"
        MR_Integer parse_tree__equiv_type__V_52_52;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__PredName_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 0)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 3)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism0_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 4)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__InstVarSet_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 5)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Context_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Method0_15, (MR_Integer) 6)));
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__WithInst_65;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MaybeDetism_66;
#line 914 "equiv_type.m"
        MR_Word parse_tree__equiv_type__NewSpecs_67;

#line 916 "equiv_type.m"
        {
#line 916 "equiv_type.m"
          parse_tree__equiv_type__V_52_52 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40);
        }
#line 915 "equiv_type.m"
        {
#line 915 "equiv_type.m"
          parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_101_100_95_109_111_100_101_95_95_91_49_93_95_48_18_p_0(parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__PredName_60, parse_tree__equiv_type__V_52_52, parse_tree__equiv_type__Context_64, (MR_Integer) 1, &parse_tree__equiv_type__ExtraModes_41, parse_tree__equiv_type__MaybePredOrFunc0_39, &parse_tree__equiv_type__MaybePredOrFunc_42, parse_tree__equiv_type__WithInst0_61, &parse_tree__equiv_type__WithInst_65, parse_tree__equiv_type__MaybeDetism0_62, &parse_tree__equiv_type__MaybeDetism_66, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49, &parse_tree__equiv_type__NewSpecs_67);
        }
#line 922 "equiv_type.m"
        if ((parse_tree__equiv_type__ExtraModes_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "equiv_type.m"
          parse_tree__equiv_type__Modes_43 = parse_tree__equiv_type__Modes0_40;
#line 922 "equiv_type.m"
        else
#line 924 "equiv_type.m"
          {
#line 924 "equiv_type.m"
            parse_tree__equiv_type__Modes_43 = mercury__list__f_43_43_2_f_0(parse_tree__equiv_type__TypeCtorInfo_69_69, parse_tree__equiv_type__Modes0_40, parse_tree__equiv_type__ExtraModes_41);
          }
#line 926 "equiv_type.m"
        {
#line 926 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_Specs_51 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__NewSpecs_67, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_50);
        }
#line 927 "equiv_type.m"
        {
#line 927 "equiv_type.m"
          MR_Word base;
#line 927 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 927 "equiv_type.m"
          *parse_tree__equiv_type__Method_16 = base;
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_60));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MaybePredOrFunc_42));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (parse_tree__equiv_type__Modes_43));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (parse_tree__equiv_type__WithInst_65));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_66));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_63));
#line 927 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_64));
#line 927 "equiv_type.m"
        }
#line 914 "equiv_type.m"
      }
#line 902 "equiv_type.m"
  }
#line 891 "equiv_type.m"
}

#line 888 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0_1(
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 888 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 888 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 888 "equiv_type.m"
{
#line 888 "equiv_type.m"
  {
#line 888 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Method_16;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49;
#line 888 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51;

#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      parse_tree__equiv_type__replace_in_class_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Method_16, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51);
    }
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Method_16));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_EquivTypeInfo_47));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_UsedModules_49));
#line 888 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_Specs_51));
#line 888 "equiv_type.m"
  }
#line 888 "equiv_type.m"
}

#line 878 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_class_interface_11_p_0(
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_12,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ClassInterface0_15,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ClassInterface_16,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23,
#line 878 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24,
#line 878 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_25)
#line 878 "equiv_type.m"
{
#line 886 "equiv_type.m"
  {
#line 886 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 886 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_26_26;
#line 887 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21;
#line 887 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23;
#line 887 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25;

#line 888 "equiv_type.m"
    {
#line 888 "equiv_type.m"
      parse_tree__equiv_type__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_4[0]));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_class_interface_11_p_0_1));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_12));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_13));
#line 888 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_26_26, 5) = ((MR_Box) (parse_tree__equiv_type__InstEqvMap_14));
#line 888 "equiv_type.m"
    }
#line 10237 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 887 "equiv_type.m"
    {
#line 887 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, (MR_Word) &parse_tree__equiv_type_scalar_common_1[8], parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ClassInterface0_15, parse_tree__equiv_type__ClassInterface_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_20)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_22)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_Specs_0_24)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
    }
#line 887 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_21 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_EquivTypeInfo_21);
#line 887 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_23 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_UsedModules_23);
#line 887 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_Specs_25 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_Specs_25);
#line 886 "equiv_type.m"
  }
#line 878 "equiv_type.m"
}

#line 864 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Constraint0_13,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Constraint_14,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_24,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26,
#line 864 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27,
#line 864 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28)
#line 864 "equiv_type.m"
{
#line 870 "equiv_type.m"
  {
#line 870 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 870 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 0)));
#line 870 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Constraint0_13, (MR_Integer) 1)));
#line 870 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypes_20;
#line 1001 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 1001 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_22_22;

#line 1001 "equiv_type.m"
    {
#line 1001 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__ArgTypes0_19, &parse_tree__equiv_type__ArgTypes_20, &parse_tree__equiv_type__V_21_21, (MR_Integer) 0, &parse_tree__equiv_type__V_22_22, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_23, parse_tree__equiv_type__STATE_VARIABLE_VarSet_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_26, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_27, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_28);
    }
#line 874 "equiv_type.m"
    {
#line 874 "equiv_type.m"
      MR_Word base;
#line 874 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "equiv_type.m"
      *parse_tree__equiv_type__Constraint_14 = base;
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_18));
#line 874 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypes_20));
#line 874 "equiv_type.m"
    }
#line 870 "equiv_type.m"
  }
#line 864 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 843 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Constraints_18,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_20,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22,
#line 843 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23,
#line 843 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24)
#line 843 "equiv_type.m"
{
#line 849 "equiv_type.m"
  {
#line 849 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_38;
#line 849 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_25_25, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 851 "equiv_type.m"
    }
#line 10429 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_38 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_38, parse_tree__equiv_type__TypeCtorInfo_38_38, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_25_25, parse_tree__equiv_type__STATE_VARIABLE_Constraints_0_17, parse_tree__equiv_type__STATE_VARIABLE_Constraints_18, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_19)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_21)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_23)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
    }
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_20 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_20);
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_22 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_22);
#line 850 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_24 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_24);
#line 849 "equiv_type.m"
  }
#line 843 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 829 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0(
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_11,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_12,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Cs0_13,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Cs_14,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_23,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25,
#line 829 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26,
#line 829 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27)
#line 829 "equiv_type.m"
{
#line 835 "equiv_type.m"
  {
#line 835 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_61;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 0)));
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_13, (MR_Integer) 1)));
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_20;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_21;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30;
#line 835 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_48_48;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_location_10_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_11));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_12));
#line 851 "equiv_type.m"
    }
#line 10571 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_61, parse_tree__equiv_type__TypeCtorInfo_38_61, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_48_48, parse_tree__equiv_type__UnivCs0_18, &parse_tree__equiv_type__UnivCs_20, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_22)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_24)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_26)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
    }
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_28);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_29);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_30);
#line 839 "equiv_type.m"
    {
#line 839 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__MaybeRecord_11, parse_tree__equiv_type__TypeEqvMap_12, parse_tree__equiv_type__ExistCs0_19, &parse_tree__equiv_type__ExistCs_21, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_28, parse_tree__equiv_type__STATE_VARIABLE_VarSet_23, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_29, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_25, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_30, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_27);
    }
#line 841 "equiv_type.m"
    {
#line 841 "equiv_type.m"
      MR_Word base;
#line 841 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "equiv_type.m"
      *parse_tree__equiv_type__Cs_14 = base;
#line 841 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_20));
#line 841 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_21));
#line 841 "equiv_type.m"
    }
#line 835 "equiv_type.m"
  }
#line 829 "equiv_type.m"
}

#line 808 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_constraint_store_9_p_0(
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_1,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__4_4,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__HeadVar__5_5,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7,
#line 808 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8,
#line 808 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9)
#line 808 "equiv_type.m"
{
#line 814 "equiv_type.m"
  {
#line 814 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 814 "equiv_type.m"
    if ((parse_tree__equiv_type__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 814 "equiv_type.m"
      {
#line 814 "equiv_type.m"
        *parse_tree__equiv_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 814 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8;
#line 814 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6;
#line 814 "equiv_type.m"
      }
#line 814 "equiv_type.m"
    else
#line 817 "equiv_type.m"
      {
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 0)));
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__4_4, (MR_Integer) 1)));
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfo_24;
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__MutableInfos_25;
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32;
#line 817 "equiv_type.m"
        MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33;

#line 818 "equiv_type.m"
        {
#line 818 "equiv_type.m"
          parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfo0_22, &parse_tree__equiv_type__MutableInfo_24, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_6, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_8, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33);
        }
#line 820 "equiv_type.m"
        {
#line 820 "equiv_type.m"
          parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MutableInfos0_23, &parse_tree__equiv_type__MutableInfos_25, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_32_32, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_7, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33_33, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_9);
        }
#line 816 "equiv_type.m"
        {
#line 816 "equiv_type.m"
          MR_Word base;
#line 816 "equiv_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "equiv_type.m"
          *parse_tree__equiv_type__HeadVar__5_5 = base;
#line 816 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutableInfo_24));
#line 816 "equiv_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_25));
#line 816 "equiv_type.m"
        }
#line 817 "equiv_type.m"
      }
#line 814 "equiv_type.m"
  }
#line 808 "equiv_type.m"
}

#line 767 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_13_p_0(
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_14,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_15,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_16,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeCtor_17,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeDefn0_18,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__TypeDefn_19,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__ContainsCirc_20,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_VarSet_45,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47,
#line 767 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48,
#line 767 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49)
#line 767 "equiv_type.m"
{
#line 777 "equiv_type.m"
  {
#line 777 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 777 "equiv_type.m"
#line 777 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_18)) {
#line 777 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "equiv_type.m"
      case (MR_Integer) 0:
#line 783 "equiv_type.m"
        {
#line 783 "equiv_type.m"
          MR_Word parse_tree__equiv_type__EqPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 783 "equiv_type.m"
          MR_Word parse_tree__equiv_type__DirectArgFunctors_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 783 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 783 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_66;

#line 784 "equiv_type.m"
          {
#line 784 "equiv_type.m"
            parse_tree__equiv_type__replace_in_ctors_location_10_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__TypeBody0_65, &parse_tree__equiv_type__TypeBody_66, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 786 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 787 "equiv_type.m"
          {
#line 787 "equiv_type.m"
            MR_Word base;
#line 787 "equiv_type.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 787 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 787 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_66));
#line 787 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__EqPred_27));
#line 787 "equiv_type.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__DirectArgFunctors_28));
#line 787 "equiv_type.m"
          }
#line 783 "equiv_type.m"
        }
#line 777 "equiv_type.m"
        break;
#line 777 "equiv_type.m"
      case (MR_Integer) 1:
#line 777 "equiv_type.m"
        {
#line 777 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)));
#line 777 "equiv_type.m"
          MR_Word parse_tree__equiv_type__TypeBody_25;
#line 777 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_60_60;
#line 778 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_26_26;

#line 778 "equiv_type.m"
          {
#line 778 "equiv_type.m"
            parse_tree__equiv_type__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 778 "equiv_type.m"
            MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "equiv_type.m"
          }
#line 778 "equiv_type.m"
          {
#line 778 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_60_60, parse_tree__equiv_type__TypeBody0_24, &parse_tree__equiv_type__TypeBody_25, &parse_tree__equiv_type__V_26_26, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
          }
#line 781 "equiv_type.m"
          {
#line 781 "equiv_type.m"
            MR_Word base;
#line 781 "equiv_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 781 "equiv_type.m"
            *parse_tree__equiv_type__TypeDefn_19 = base;
#line 781 "equiv_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__TypeBody_25));
#line 781 "equiv_type.m"
          }
#line 777 "equiv_type.m"
        }
#line 777 "equiv_type.m"
        break;
#line 777 "equiv_type.m"
      case (MR_Integer) 2:
#line 803 "equiv_type.m"
        {
#line 804 "equiv_type.m"
          *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 805 "equiv_type.m"
          *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 803 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 803 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 803 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 803 "equiv_type.m"
        }
#line 777 "equiv_type.m"
        break;
#line 777 "equiv_type.m"
      case (MR_Integer) 3:
#line 777 "equiv_type.m"
#line 777 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 0)))) {
#line 777 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 777 "equiv_type.m"
          case (MR_Integer) 0:
#line 789 "equiv_type.m"
            {
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 1)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MaybeUserEqComp_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__TypeDefn0_18, (MR_Integer) 2)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 0)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__InitPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 1)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__GroundInst_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 2)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__AnyInst_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 3)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails0_29, (MR_Integer) 4)));
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__RepresentationType_36;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__MutableInfos_38;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__SolverDetails_39;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_50_50;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52;
#line 789 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 792 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_37_37;

#line 792 "equiv_type.m"
              {
#line 792 "equiv_type.m"
                parse_tree__equiv_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 0) = ((MR_Box) (parse_tree__equiv_type__TypeCtor_17));
#line 792 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 792 "equiv_type.m"
              }
#line 792 "equiv_type.m"
              {
#line 792 "equiv_type.m"
                parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__V_50_50, parse_tree__equiv_type__RepresentationType0_31, &parse_tree__equiv_type__RepresentationType_36, &parse_tree__equiv_type__V_37_37, parse_tree__equiv_type__ContainsCirc_20, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44, parse_tree__equiv_type__STATE_VARIABLE_VarSet_45, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46, &parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53);
              }
#line 795 "equiv_type.m"
              {
#line 795 "equiv_type.m"
                parse_tree__equiv_type__replace_in_constraint_store_9_p_0(parse_tree__equiv_type__MaybeRecord_14, parse_tree__equiv_type__TypeEqvMap_15, parse_tree__equiv_type__InstEqvMap_16, parse_tree__equiv_type__MutableInfos0_35, &parse_tree__equiv_type__MutableInfos_38, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49);
              }
#line 797 "equiv_type.m"
              {
#line 797 "equiv_type.m"
                parse_tree__equiv_type__SolverDetails_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 0) = ((MR_Box) (parse_tree__equiv_type__RepresentationType_36));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 1) = ((MR_Box) (parse_tree__equiv_type__InitPred_32));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 2) = ((MR_Box) (parse_tree__equiv_type__GroundInst_33));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 3) = ((MR_Box) (parse_tree__equiv_type__AnyInst_34));
#line 797 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__SolverDetails_39, 4) = ((MR_Box) (parse_tree__equiv_type__MutableInfos_38));
#line 797 "equiv_type.m"
              }
#line 799 "equiv_type.m"
              {
#line 799 "equiv_type.m"
                MR_Word base;
#line 799 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 799 "equiv_type.m"
                *parse_tree__equiv_type__TypeDefn_19 = base;
#line 799 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 799 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__SolverDetails_39));
#line 799 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (parse_tree__equiv_type__MaybeUserEqComp_30));
#line 799 "equiv_type.m"
              }
#line 789 "equiv_type.m"
            }
#line 777 "equiv_type.m"
            break;
#line 777 "equiv_type.m"
          case (MR_Integer) 1:
#line 803 "equiv_type.m"
            {
#line 804 "equiv_type.m"
              *parse_tree__equiv_type__TypeDefn_19 = parse_tree__equiv_type__TypeDefn0_18;
#line 805 "equiv_type.m"
              *parse_tree__equiv_type__ContainsCirc_20 = (MR_Integer) 0;
#line 803 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_VarSet_45 = parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_44;
#line 803 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_47 = parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_46;
#line 803 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_49 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_48;
#line 803 "equiv_type.m"
            }
#line 777 "equiv_type.m"
            break;
#line 777 "equiv_type.m"
        }
#line 777 "equiv_type.m"
        break;
#line 777 "equiv_type.m"
    }
#line 777 "equiv_type.m"
  }
#line 767 "equiv_type.m"
}

#line 683 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_10,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_11,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_12,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_13,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_14,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31,
#line 683 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32,
#line 683 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33)
#line 683 "equiv_type.m"
{
#line 690 "equiv_type.m"
  {
#line 690 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 690 "equiv_type.m"
    MR_String parse_tree__equiv_type__MutName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 0)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 1)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InitValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 2)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 3)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Attrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 4)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 5)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 6)));
#line 690 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_13, (MR_Integer) 7)));
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TVarSet0_25;
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Type_26;
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Inst_29;
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34;
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35;
#line 690 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TypeChanged_27;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type___TVarSet_28;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_53_53;

#line 693 "equiv_type.m"
    {
#line 693 "equiv_type.m"
      parse_tree__equiv_type__TVarSet0_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0(parse_tree__equiv_type__MaybeRecord_10, parse_tree__equiv_type__TypeEqvMap_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_18, &parse_tree__equiv_type__Type_26, &parse_tree__equiv_type___TypeChanged_27, &parse_tree__equiv_type__V_53_53, parse_tree__equiv_type__TVarSet0_25, &parse_tree__equiv_type___TVarSet_28, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_0_30, &parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_32, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35);
    }
#line 1255 "equiv_type.m"
    {
#line 1255 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0);
    }
#line 1255 "equiv_type.m"
    {
#line 1255 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_95_108_111_99_97_116_105_111_110_95_95_91_49_93_95_48_9_p_0(parse_tree__equiv_type__Inst0_20, parse_tree__equiv_type__InstEqvMap_12, parse_tree__equiv_type__V_68_68, &parse_tree__equiv_type__Inst_29, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_34_34, parse_tree__equiv_type__STATE_VARIABLE_ExpandedItems_31, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_35_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_33);
    }
#line 698 "equiv_type.m"
    {
#line 698 "equiv_type.m"
      MR_Word base;
#line 698 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 698 "equiv_type.m"
      *parse_tree__equiv_type__Info_14 = base;
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__MutName_17));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Type_26));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__InitValue_19));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__Inst_29));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Attrs_21));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__Varset_22));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_23));
#line 698 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_24));
#line 698 "equiv_type.m"
    }
#line 690 "equiv_type.m"
  }
#line 683 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
}

#line 498 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40,
#line 498 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42,
#line 498 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 498 "equiv_type.m"
{
#line 505 "equiv_type.m"
  {
#line 505 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_77;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Vars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__FunDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 505 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 505 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_29;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_30;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Constraints_31;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_32;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems1_33;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassInterface_34;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_35;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_38;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_47_47;
#line 505 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_64_64;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_VarSet_32;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_ExpandedItems1_33;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43;

#line 508 "equiv_type.m"
    {
#line 508 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Vars_22, &parse_tree__equiv_type__Arity_29);
    }
#line 509 "equiv_type.m"
    {
#line 509 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__ClassName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, &parse_tree__equiv_type__ExpandedItems0_30);
    }
#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_typeclass_info_11_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeRecord_13));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_64_64, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_14));
#line 851 "equiv_type.m"
    }
#line 11235 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_77, parse_tree__equiv_type__TypeCtorInfo_38_77, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_64_64, parse_tree__equiv_type__Constraints0_23, &parse_tree__equiv_type__Constraints_31, ((MR_Box) (parse_tree__equiv_type__VarSet0_26)), &parse_tree__equiv_type__conv6_VarSet_32, ((MR_Box) (parse_tree__equiv_type__ExpandedItems0_30)), &parse_tree__equiv_type__conv5_ExpandedItems1_33, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_41)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
    }
#line 850 "equiv_type.m"
    parse_tree__equiv_type__VarSet_32 = ((MR_Word) parse_tree__equiv_type__conv6_VarSet_32);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__ExpandedItems1_33 = ((MR_Word) parse_tree__equiv_type__conv5_ExpandedItems1_33);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_43_43);
#line 519 "equiv_type.m"
    if ((parse_tree__equiv_type__ClassInterface0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "equiv_type.m"
      {
#line 516 "equiv_type.m"
        parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 517 "equiv_type.m"
        parse_tree__equiv_type__ExpandedItems_35 = parse_tree__equiv_type__ExpandedItems1_33;
#line 518 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "equiv_type.m"
        *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43;
#line 515 "equiv_type.m"
      }
#line 519 "equiv_type.m"
    else
#line 520 "equiv_type.m"
      {
#line 520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods0_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface0_25, (MR_Integer) 0)));
#line 520 "equiv_type.m"
        MR_Word parse_tree__equiv_type__Methods_37;

#line 521 "equiv_type.m"
        {
#line 521 "equiv_type.m"
          parse_tree__equiv_type__replace_in_class_interface_11_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__Methods0_36, &parse_tree__equiv_type__Methods_37, parse_tree__equiv_type__ExpandedItems1_33, &parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_43_43, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_42, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Specs_20);
        }
#line 524 "equiv_type.m"
        {
#line 524 "equiv_type.m"
          parse_tree__equiv_type__ClassInterface_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "equiv_type.m"
          MR_hl_field(MR_mktag(1), parse_tree__equiv_type__ClassInterface_34, 0) = ((MR_Box) (parse_tree__equiv_type__Methods_37));
#line 524 "equiv_type.m"
        }
#line 520 "equiv_type.m"
      }
#line 526 "equiv_type.m"
    {
#line 526 "equiv_type.m"
      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_29));
#line 526 "equiv_type.m"
    }
#line 526 "equiv_type.m"
    {
#line 526 "equiv_type.m"
      parse_tree__equiv_type__ItemId_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 0) = ((MR_Box) ((MR_Integer) 4));
#line 526 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_38, 1) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 526 "equiv_type.m"
    }
#line 527 "equiv_type.m"
    {
#line 527 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_38, parse_tree__equiv_type__ExpandedItems_35, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_39, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_40);
    }
#line 528 "equiv_type.m"
    {
#line 528 "equiv_type.m"
      MR_Word base;
#line 528 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 528 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ClassName_21));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__Vars_22));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__Constraints_31));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__FunDeps_24));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__ClassInterface_34));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__VarSet_32));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Context_27));
#line 528 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__SeqNum_28));
#line 528 "equiv_type.m"
    }
#line 505 "equiv_type.m"
  }
#line 498 "equiv_type.m"
}

#line 431 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48,
#line 431 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50,
#line 431 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 431 "equiv_type.m"
{
#line 438 "equiv_type.m"
  {
#line 438 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Origin_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 6)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 7)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 8)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistQVars_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 9)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Purity_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 10)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 11)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 12)));
#line 438 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 13)));
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems0_35;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ClassContext_36;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypesAndModes_37;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeVarSet_38;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithType_39;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeWithInst_40;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__MaybeDetism_41;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExpandedItems_42;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemType_43;
#line 438 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_44;
#line 438 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__OrigArity_45;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_46;
#line 438 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_52_52;

#line 443 "equiv_type.m"
    {
#line 443 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, &parse_tree__equiv_type__ExpandedItems0_35);
    }
#line 445 "equiv_type.m"
    {
#line 445 "equiv_type.m"
      parse_tree__equiv_type__replace_in_pred_type_23_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__PredName_21, parse_tree__equiv_type__PredOrFunc_22, parse_tree__equiv_type__Context_33, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__ClassContext0_32, &parse_tree__equiv_type__ClassContext_36, parse_tree__equiv_type__TypesAndModes0_23, &parse_tree__equiv_type__TypesAndModes_37, parse_tree__equiv_type__TypeVarSet0_28, &parse_tree__equiv_type__TypeVarSet_38, parse_tree__equiv_type__MaybeWithType0_24, &parse_tree__equiv_type__MaybeWithType_39, parse_tree__equiv_type__MaybeWithInst0_25, &parse_tree__equiv_type__MaybeWithInst_40, parse_tree__equiv_type__MaybeDetism0_26, &parse_tree__equiv_type__MaybeDetism_41, parse_tree__equiv_type__ExpandedItems0_35, &parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_49, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_50, parse_tree__equiv_type__Specs_20);
    }
#line 451 "equiv_type.m"
    {
#line 451 "equiv_type.m"
      parse_tree__equiv_type__ItemType_43 = recompilation__pred_or_func_to_item_type_1_f_0(parse_tree__equiv_type__PredOrFunc_22);
    }
#line 452 "equiv_type.m"
    {
#line 452 "equiv_type.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, parse_tree__equiv_type__TypesAndModes_37, &parse_tree__equiv_type__Arity_44);
    }
#line 453 "equiv_type.m"
    {
#line 453 "equiv_type.m"
      parse_tree__prog_util__adjust_func_arity_3_p_1(parse_tree__equiv_type__PredOrFunc_22, &parse_tree__equiv_type__OrigArity_45, parse_tree__equiv_type__Arity_44);
    }
#line 454 "equiv_type.m"
    {
#line 454 "equiv_type.m"
      parse_tree__equiv_type__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_52_52, 1) = ((MR_Box) (parse_tree__equiv_type__OrigArity_45));
#line 454 "equiv_type.m"
    }
#line 454 "equiv_type.m"
    {
#line 454 "equiv_type.m"
      parse_tree__equiv_type__ItemId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 0) = ((MR_Box) (parse_tree__equiv_type__ItemType_43));
#line 454 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_46, 1) = ((MR_Box) (parse_tree__equiv_type__V_52_52));
#line 454 "equiv_type.m"
    }
#line 455 "equiv_type.m"
    {
#line 455 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_46, parse_tree__equiv_type__ExpandedItems_42, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_47, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_48);
    }
#line 456 "equiv_type.m"
    {
#line 456 "equiv_type.m"
      MR_Word base;
#line 456 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 456 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__PredName_21));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__PredOrFunc_22));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypesAndModes_37));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__MaybeWithType_39));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__MaybeWithInst_40));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__MaybeDetism_41));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__Origin_27));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__TypeVarSet_38));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (parse_tree__equiv_type__InstVarSet_29));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (parse_tree__equiv_type__ExistQVars_30));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (parse_tree__equiv_type__Purity_31));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (parse_tree__equiv_type__ClassContext_36));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (parse_tree__equiv_type__Context_33));
#line 456 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (parse_tree__equiv_type__SeqNum_34));
#line 456 "equiv_type.m"
    }
#line 438 "equiv_type.m"
  }
#line 431 "equiv_type.m"
}

#line 394 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_13,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_14,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_15,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Info0_16,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Info_17,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39,
#line 394 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41,
#line 394 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 394 "equiv_type.m"
{
#line 401 "equiv_type.m"
  {
#line 401 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_70_70 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[4];
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 0)));
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ArgTypeVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 1)));
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 2)));
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 3)));
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 4)));
#line 401 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Info0_16, (MR_Integer) 5)));
#line 401 "equiv_type.m"
    MR_Integer parse_tree__equiv_type__Arity_27;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors0_28;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeDefn_29;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ContainsCirc_30;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__VarSet_31;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UsedTypeCtors_32;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ItemId_37;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_42_42;
#line 401 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_68_68;

#line 404 "equiv_type.m"
    {
#line 404 "equiv_type.m"
      mercury__list__length_2_p_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22, &parse_tree__equiv_type__Arity_27);
    }
#line 405 "equiv_type.m"
    {
#line 405 "equiv_type.m"
      recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__SymName_21, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, &parse_tree__equiv_type__UsedTypeCtors0_28);
    }
#line 408 "equiv_type.m"
    {
#line 408 "equiv_type.m"
      parse_tree__equiv_type__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 408 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_42_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 408 "equiv_type.m"
    }
#line 407 "equiv_type.m"
    {
#line 407 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_defn_13_p_0(parse_tree__equiv_type__MaybeRecord_13, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_15, parse_tree__equiv_type__V_42_42, parse_tree__equiv_type__TypeDefn0_23, &parse_tree__equiv_type__TypeDefn_29, &parse_tree__equiv_type__ContainsCirc_30, parse_tree__equiv_type__VarSet0_24, &parse_tree__equiv_type__VarSet_31, parse_tree__equiv_type__UsedTypeCtors0_28, &parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_40, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_41);
    }
#line 422 "equiv_type.m"
#line 422 "equiv_type.m"
    switch (parse_tree__equiv_type__ContainsCirc_30) {
#line 422 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "equiv_type.m"
      case (MR_Integer) 0:
#line 424 "equiv_type.m"
        *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "equiv_type.m"
        break;
#line 422 "equiv_type.m"
      case (MR_Integer) 1:
#line 419 "equiv_type.m"
        {
#line 412 "equiv_type.m"
          MR_Word parse_tree__equiv_type__V_33_33;

#line 412 "equiv_type.m"
          parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__TypeDefn0_23)) == (MR_mktag((MR_Integer) 1)));
#line 412 "equiv_type.m"
          if (parse_tree__equiv_type__succeeded)
#line 412 "equiv_type.m"
            {
#line 412 "equiv_type.m"
              parse_tree__equiv_type__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__TypeDefn0_23, (MR_Integer) 0)));
#line 415 "equiv_type.m"
              {
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Pieces_34;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Msg_35;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Spec_36;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_47_47;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_48_48;
#line 415 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__V_49_49;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_56_56;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_57_57;
#line 415 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_61_61;

#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_49_49 = mercury__list__length_1_f_0(parse_tree__equiv_type__TypeInfo_70_70, parse_tree__equiv_type__ArgTypeVars_22);
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_48_48, 1) = ((MR_Box) (parse_tree__equiv_type__V_49_49));
#line 414 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(3), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__V_48_48));
#line 414 "equiv_type.m"
                }
#line 414 "equiv_type.m"
                {
#line 414 "equiv_type.m"
                  parse_tree__equiv_type__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 0) = ((MR_Box) (parse_tree__equiv_type__V_47_47));
#line 414 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__equiv_type_scalar_common_1[14])));
#line 414 "equiv_type.m"
                }
#line 413 "equiv_type.m"
                {
#line 413 "equiv_type.m"
                  parse_tree__equiv_type__Pieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__equiv_type_scalar_common_1[30])));
#line 413 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__Pieces_34, 1) = ((MR_Box) (parse_tree__equiv_type__V_46_46));
#line 413 "equiv_type.m"
                }
#line 416 "equiv_type.m"
                {
#line 416 "equiv_type.m"
                  parse_tree__equiv_type__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_57_57, 0) = ((MR_Box) (parse_tree__equiv_type__Pieces_34));
#line 416 "equiv_type.m"
                }
#line 416 "equiv_type.m"
                {
#line 416 "equiv_type.m"
                  parse_tree__equiv_type__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 0) = ((MR_Box) (parse_tree__equiv_type__V_57_57));
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "equiv_type.m"
                }
#line 416 "equiv_type.m"
                {
#line 416 "equiv_type.m"
                  parse_tree__equiv_type__Msg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 0) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 416 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Msg_35, 1) = ((MR_Box) (parse_tree__equiv_type__V_56_56));
#line 416 "equiv_type.m"
                }
#line 417 "equiv_type.m"
                {
#line 417 "equiv_type.m"
                  parse_tree__equiv_type__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 0) = ((MR_Box) (parse_tree__equiv_type__Msg_35));
#line 417 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "equiv_type.m"
                }
#line 417 "equiv_type.m"
                {
#line 417 "equiv_type.m"
                  parse_tree__equiv_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 417 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 417 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Spec_36, 2) = ((MR_Box) (parse_tree__equiv_type__V_61_61));
#line 417 "equiv_type.m"
                }
#line 418 "equiv_type.m"
                {
#line 418 "equiv_type.m"
                  MR_Word base;
#line 418 "equiv_type.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "equiv_type.m"
                  *parse_tree__equiv_type__Specs_20 = base;
#line 418 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__equiv_type__Spec_36));
#line 418 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "equiv_type.m"
                }
#line 415 "equiv_type.m"
              }
#line 412 "equiv_type.m"
            }
#line 412 "equiv_type.m"
          else
#line 420 "equiv_type.m"
            {
#line 420 "equiv_type.m"
              {
#line 420 "equiv_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "parse_tree.equiv_type", (MR_String) "predicate \140parse_tree.equiv_type.replace_in_type_defn_info\'/11", (MR_String) "invalid item");
#line 420 "equiv_type.m"
                return;
              }
#line 420 "equiv_type.m"
            }
#line 419 "equiv_type.m"
        }
#line 422 "equiv_type.m"
        break;
#line 422 "equiv_type.m"
    }
#line 426 "equiv_type.m"
    {
#line 426 "equiv_type.m"
      parse_tree__equiv_type__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_68_68, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_27));
#line 426 "equiv_type.m"
    }
#line 426 "equiv_type.m"
    {
#line 426 "equiv_type.m"
      parse_tree__equiv_type__ItemId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 0) = ((MR_Box) ((MR_Integer) 1));
#line 426 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_37, 1) = ((MR_Box) (parse_tree__equiv_type__V_68_68));
#line 426 "equiv_type.m"
    }
#line 427 "equiv_type.m"
    {
#line 427 "equiv_type.m"
      recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_37, parse_tree__equiv_type__UsedTypeCtors_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_38, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_39);
    }
#line 428 "equiv_type.m"
    {
#line 428 "equiv_type.m"
      MR_Word base;
#line 428 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 428 "equiv_type.m"
      *parse_tree__equiv_type__Info_17 = base;
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__SymName_21));
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ArgTypeVars_22));
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__TypeDefn_29));
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__VarSet_31));
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__Context_25));
#line 428 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__SeqNum_26));
#line 428 "equiv_type.m"
    }
#line 401 "equiv_type.m"
  }
#line 394 "equiv_type.m"
}

#line 326 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_item_11_p_0(
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_12,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_13,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_14,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_15,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__Item0_16,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Item_17,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44,
#line 326 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46,
#line 326 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__Specs_20)
#line 326 "equiv_type.m"
{
#line 334 "equiv_type.m"
  {
#line 334 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;

#line 334 "equiv_type.m"
#line 334 "equiv_type.m"
    switch (MR_tag((MR_Word) parse_tree__equiv_type__Item0_16)) {
#line 334 "equiv_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "equiv_type.m"
      case (MR_Integer) 0:
#line 334 "equiv_type.m"
      case (MR_Integer) 1:
#line 389 "equiv_type.m"
        {
#line 390 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 391 "equiv_type.m"
          *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 389 "equiv_type.m"
          *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 389 "equiv_type.m"
        }
#line 334 "equiv_type.m"
        break;
#line 334 "equiv_type.m"
      case (MR_Integer) 2:
#line 334 "equiv_type.m"
        {
#line 334 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn0_21 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item0_16), (MR_Integer) 2);
#line 334 "equiv_type.m"
          MR_Word parse_tree__equiv_type__ItemTypeDefn_22;

#line 335 "equiv_type.m"
          {
#line 335 "equiv_type.m"
            parse_tree__equiv_type__replace_in_type_defn_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeDefn0_21, &parse_tree__equiv_type__ItemTypeDefn_22, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
          }
#line 338 "equiv_type.m"
          *parse_tree__equiv_type__Item_17 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) parse_tree__equiv_type__ItemTypeDefn_22);
#line 334 "equiv_type.m"
        }
#line 334 "equiv_type.m"
        break;
#line 334 "equiv_type.m"
      case (MR_Integer) 3:
#line 334 "equiv_type.m"
#line 334 "equiv_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 0)))) {
#line 334 "equiv_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 334 "equiv_type.m"
          case (MR_Integer) 0:
#line 334 "equiv_type.m"
          case (MR_Integer) 5:
#line 334 "equiv_type.m"
          case (MR_Integer) 8:
#line 334 "equiv_type.m"
          case (MR_Integer) 9:
#line 334 "equiv_type.m"
          case (MR_Integer) 11:
#line 389 "equiv_type.m"
            {
#line 390 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 391 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 389 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 389 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 1:
#line 376 "equiv_type.m"
            {
#line 379 "equiv_type.m"
              *parse_tree__equiv_type__Item_17 = parse_tree__equiv_type__Item0_16;
#line 380 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43;
#line 376 "equiv_type.m"
              *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45;
#line 376 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 2:
#line 340 "equiv_type.m"
            {
#line 340 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 340 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPredDecl_24;

#line 341 "equiv_type.m"
              {
#line 341 "equiv_type.m"
                parse_tree__equiv_type__replace_in_pred_decl_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemPredDecl0_23, &parse_tree__equiv_type__ItemPredDecl_24, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 344 "equiv_type.m"
              {
#line 344 "equiv_type.m"
                MR_Word base;
#line 344 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 344 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 344 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPredDecl_24));
#line 344 "equiv_type.m"
              }
#line 340 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 3:
#line 346 "equiv_type.m"
            {
#line 346 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 346 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemModeDecl_26;

#line 347 "equiv_type.m"
              {
#line 347 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_109_111_100_101_95_100_101_99_108_95_105_110_102_111_95_95_91_50_44_32_51_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemModeDecl0_25, &parse_tree__equiv_type__ItemModeDecl_26, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 350 "equiv_type.m"
              {
#line 350 "equiv_type.m"
                MR_Word base;
#line 350 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 350 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 350 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemModeDecl_26));
#line 350 "equiv_type.m"
              }
#line 346 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 4:
#line 352 "equiv_type.m"
            {
#line 352 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 352 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemPragma_28;

#line 353 "equiv_type.m"
              {
#line 353 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_112_114_97_103_109_97_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemPragma0_27, &parse_tree__equiv_type__ItemPragma_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 356 "equiv_type.m"
              {
#line 356 "equiv_type.m"
                MR_Word base;
#line 356 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 356 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 356 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemPragma_28));
#line 356 "equiv_type.m"
              }
#line 352 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 6:
#line 358 "equiv_type.m"
            {
#line 358 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 358 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemTypeClass_30;

#line 359 "equiv_type.m"
              {
#line 359 "equiv_type.m"
                parse_tree__equiv_type__replace_in_typeclass_info_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemTypeClass0_29, &parse_tree__equiv_type__ItemTypeClass_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 362 "equiv_type.m"
              {
#line 362 "equiv_type.m"
                MR_Word base;
#line 362 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 362 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemTypeClass_30));
#line 362 "equiv_type.m"
              }
#line 358 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 7:
#line 364 "equiv_type.m"
            {
#line 364 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 364 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemInstance_32;

#line 365 "equiv_type.m"
              {
#line 365 "equiv_type.m"
                parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_105_110_115_116_97_110_99_101_95_105_110_102_111_95_95_91_52_93_95_48_11_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__ItemInstance0_31, &parse_tree__equiv_type__ItemInstance_32, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46, parse_tree__equiv_type__Specs_20);
              }
#line 368 "equiv_type.m"
              {
#line 368 "equiv_type.m"
                MR_Word base;
#line 368 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 368 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 368 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemInstance_32));
#line 368 "equiv_type.m"
              }
#line 364 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
          case (MR_Integer) 10:
#line 370 "equiv_type.m"
            {
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item0_16, (MR_Integer) 1)));
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemMutable_34;
#line 370 "equiv_type.m"
              MR_String parse_tree__equiv_type__MutName_73;
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__QualName_74;
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems0_75;
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ExpandedItems_76;
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__ItemId_77;
#line 370 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_80_80;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_83_83;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_84_84;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_85_85;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_86_86;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_87_87;
#line 674 "equiv_type.m"
              MR_Word parse_tree__equiv_type__V_88_88;
#line 674 "equiv_type.m"
              MR_Integer parse_tree__equiv_type__V_89_89;

#line 673 "equiv_type.m"
              *parse_tree__equiv_type__Specs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__MutName_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 0)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 1)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 2)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 3)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 4)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 5)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 6)));
#line 674 "equiv_type.m"
              parse_tree__equiv_type__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemMutable0_33, (MR_Integer) 7)));
#line 675 "equiv_type.m"
              {
#line 675 "equiv_type.m"
                parse_tree__equiv_type__QualName_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_74, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_12));
#line 675 "equiv_type.m"
                MR_hl_field(MR_mktag(1), parse_tree__equiv_type__QualName_74, 1) = ((MR_Box) (parse_tree__equiv_type__MutName_73));
#line 675 "equiv_type.m"
              }
#line 676 "equiv_type.m"
              {
#line 676 "equiv_type.m"
                recompilation__maybe_start_recording_expanded_items_4_p_0(parse_tree__equiv_type__ModuleName_12, parse_tree__equiv_type__QualName_74, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, &parse_tree__equiv_type__ExpandedItems0_75);
              }
#line 678 "equiv_type.m"
              {
#line 678 "equiv_type.m"
                parse_tree__equiv_type__replace_in_mutable_defn_9_p_0(parse_tree__equiv_type__MaybeRecord_15, parse_tree__equiv_type__TypeEqvMap_13, parse_tree__equiv_type__InstEqvMap_14, parse_tree__equiv_type__ItemMutable0_33, &parse_tree__equiv_type__ItemMutable_34, parse_tree__equiv_type__ExpandedItems0_75, &parse_tree__equiv_type__ExpandedItems_76, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_45, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_46);
              }
#line 680 "equiv_type.m"
              {
#line 680 "equiv_type.m"
                parse_tree__equiv_type__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_80_80, 0) = ((MR_Box) (parse_tree__equiv_type__QualName_74));
#line 680 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_80_80, 1) = ((MR_Box) ((MR_Integer) 0));
#line 680 "equiv_type.m"
              }
#line 680 "equiv_type.m"
              {
#line 680 "equiv_type.m"
                parse_tree__equiv_type__ItemId_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 680 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_77, 0) = ((MR_Box) ((MR_Integer) 8));
#line 680 "equiv_type.m"
                MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemId_77, 1) = ((MR_Box) (parse_tree__equiv_type__V_80_80));
#line 680 "equiv_type.m"
              }
#line 681 "equiv_type.m"
              {
#line 681 "equiv_type.m"
                recompilation__finish_recording_expanded_items_4_p_0(parse_tree__equiv_type__ItemId_77, parse_tree__equiv_type__ExpandedItems_76, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_43, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_44);
              }
#line 374 "equiv_type.m"
              {
#line 374 "equiv_type.m"
                MR_Word base;
#line 374 "equiv_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "equiv_type.m"
                *parse_tree__equiv_type__Item_17 = base;
#line 374 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 374 "equiv_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__equiv_type__ItemMutable_34));
#line 374 "equiv_type.m"
              }
#line 370 "equiv_type.m"
            }
#line 334 "equiv_type.m"
            break;
#line 334 "equiv_type.m"
        }
#line 334 "equiv_type.m"
        break;
#line 334 "equiv_type.m"
    }
#line 334 "equiv_type.m"
  }
#line 326 "equiv_type.m"
}

#line 302 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_items_13_p_0(
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__ModuleName_1,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__TypeEqvMap_2,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__InstEqvMap_3,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__MaybeRecord_4,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__5_5,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11,
#line 302 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12,
#line 302 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_Specs_13)
#line 302 "equiv_type.m"
{
#line 309 "equiv_type.m"
  while (MR_TRUE)
#line 309 "equiv_type.m"
    {
#line 309 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 309 "equiv_type.m"
      {
#line 309 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 309 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "equiv_type.m"
          {
#line 310 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_Specs_13 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 310 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_UsedModules_11 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10;
#line 310 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_9 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8;
#line 310 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_7 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 309 "equiv_type.m"
          }
#line 309 "equiv_type.m"
        else
#line 312 "equiv_type.m"
          {
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item0_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 0)));
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__5_5, (MR_Integer) 1)));
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_40;
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemSpecs_41;
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;
#line 312 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;

#line 313 "equiv_type.m"
            {
#line 313 "equiv_type.m"
              parse_tree__equiv_type__replace_in_item_11_p_0(parse_tree__equiv_type__ModuleName_1, parse_tree__equiv_type__TypeEqvMap_2, parse_tree__equiv_type__InstEqvMap_3, parse_tree__equiv_type__MaybeRecord_4, parse_tree__equiv_type__Item0_34, &parse_tree__equiv_type__Item_40, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53, &parse_tree__equiv_type__ItemSpecs_41);
            }
#line 319 "equiv_type.m"
            if ((parse_tree__equiv_type__ItemSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "equiv_type.m"
              {
#line 318 "equiv_type.m"
                {
#line 318 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 0) = ((MR_Box) (parse_tree__equiv_type__Item_40));
#line 318 "equiv_type.m"
                  MR_hl_field(MR_mktag(1), parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55, 1) = ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6));
#line 318 "equiv_type.m"
                }
#line 317 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12;
#line 317 "equiv_type.m"
              }
#line 319 "equiv_type.m"
            else
#line 320 "equiv_type.m"
              {
#line 321 "equiv_type.m"
                {
#line 321 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, parse_tree__equiv_type__ItemSpecs_41, parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12);
                }
#line 320 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6;
#line 320 "equiv_type.m"
              }
#line 323 "equiv_type.m"
            /* direct tailcall eliminated */
#line 323 "equiv_type.m"
            {
#line 323 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__5__tmp_copy_5 = parse_tree__equiv_type__Items0_35;
#line 323 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_55_55;
#line 323 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_52_52;
#line 323 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_53_53;
#line 323 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_54_54;

#line 323 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_Specs_0_12 = parse_tree__equiv_type__STATE_VARIABLE_Specs_0__tmp_copy_12;
#line 323 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0_10 = parse_tree__equiv_type__STATE_VARIABLE_UsedModules_0__tmp_copy_10;
#line 323 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_8 = parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0__tmp_copy_8;
#line 323 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0_6 = parse_tree__equiv_type__STATE_VARIABLE_RevReplItems_0__tmp_copy_6;
#line 323 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__5_5 = parse_tree__equiv_type__HeadVar__5__tmp_copy_5;
#line 323 "equiv_type.m"
            }
#line 323 "equiv_type.m"
            continue;
#line 312 "equiv_type.m"
          }
#line 309 "equiv_type.m"
      }
#line 309 "equiv_type.m"
      break;
#line 309 "equiv_type.m"
    }
#line 302 "equiv_type.m"
}

#line 208 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__build_eqv_maps_in_items_5_p_0(
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__HeadVar__1_1,
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2,
#line 208 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3,
#line 208 "equiv_type.m"
  MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4,
#line 208 "equiv_type.m"
  MR_Word * parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5)
#line 208 "equiv_type.m"
{
#line 212 "equiv_type.m"
  while (MR_TRUE)
#line 212 "equiv_type.m"
    {
#line 212 "equiv_type.m"
      /* tailcall optimized into a loop */
#line 212 "equiv_type.m"
      {
#line 212 "equiv_type.m"
        MR_bool parse_tree__equiv_type__succeeded;

#line 212 "equiv_type.m"
        if ((parse_tree__equiv_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "equiv_type.m"
          {
#line 212 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_5 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 212 "equiv_type.m"
            *parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_3 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 212 "equiv_type.m"
          }
#line 212 "equiv_type.m"
        else
#line 213 "equiv_type.m"
          {
#line 213 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Item_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Items_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 213 "equiv_type.m"
            MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;
#line 230 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Name_32;
#line 230 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Args_33;
#line 230 "equiv_type.m"
            MR_Word parse_tree__equiv_type__Body_34;
#line 230 "equiv_type.m"
            MR_Word parse_tree__equiv_type__VarSet_35;
#line 223 "equiv_type.m"
            MR_Word parse_tree__equiv_type__ItemTypeDefn_31;
#line 223 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_43_43;
#line 224 "equiv_type.m"
            MR_Word parse_tree__equiv_type__V_36_36;
#line 224 "equiv_type.m"
            MR_Integer parse_tree__equiv_type___SeqNum_37;

#line 223 "equiv_type.m"
            parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 2)));
#line 223 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 223 "equiv_type.m"
              {
#line 223 "equiv_type.m"
                parse_tree__equiv_type__ItemTypeDefn_31 = (MR_Word) MR_body(((MR_Word) parse_tree__equiv_type__Item_12), (MR_Integer) 2);
#line 224 "equiv_type.m"
                parse_tree__equiv_type__Name_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 0)));
#line 224 "equiv_type.m"
                parse_tree__equiv_type__Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 1)));
#line 224 "equiv_type.m"
                parse_tree__equiv_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 2)));
#line 224 "equiv_type.m"
                parse_tree__equiv_type__VarSet_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 3)));
#line 224 "equiv_type.m"
                parse_tree__equiv_type__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 4)));
#line 224 "equiv_type.m"
                parse_tree__equiv_type___SeqNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemTypeDefn_31, (MR_Integer) 5)));
#line 225 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 225 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 225 "equiv_type.m"
                  parse_tree__equiv_type__Body_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_43_43, (MR_Integer) 0)));
#line 223 "equiv_type.m"
              }
#line 230 "equiv_type.m"
            if (parse_tree__equiv_type__succeeded)
#line 227 "equiv_type.m"
              {
#line 227 "equiv_type.m"
                MR_Integer parse_tree__equiv_type__Arity_38;
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__TypeCtor_39;
#line 227 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_44_44;

#line 227 "equiv_type.m"
                {
#line 227 "equiv_type.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[4], parse_tree__equiv_type__Args_33, &parse_tree__equiv_type__Arity_38);
                }
#line 228 "equiv_type.m"
                {
#line 228 "equiv_type.m"
                  parse_tree__equiv_type__TypeCtor_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 228 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 0) = ((MR_Box) (parse_tree__equiv_type__Name_32));
#line 228 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__TypeCtor_39, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_38));
#line 228 "equiv_type.m"
                }
#line 229 "equiv_type.m"
                {
#line 229 "equiv_type.m"
                  parse_tree__equiv_type__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 229 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_35));
#line 229 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 1) = ((MR_Box) (parse_tree__equiv_type__Args_33));
#line 229 "equiv_type.m"
                  MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_44_44, 2) = ((MR_Box) (parse_tree__equiv_type__Body_34));
#line 229 "equiv_type.m"
                }
#line 229 "equiv_type.m"
                {
#line 229 "equiv_type.m"
                  mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, ((MR_Box) (parse_tree__equiv_type__TypeCtor_39)), ((MR_Box) (parse_tree__equiv_type__V_44_44)), parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20);
                }
#line 227 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 227 "equiv_type.m"
              }
#line 230 "equiv_type.m"
            else
#line 238 "equiv_type.m"
              {
#line 238 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Name_52;
#line 238 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Args_53;
#line 238 "equiv_type.m"
                MR_Word parse_tree__equiv_type__Body_54;
#line 238 "equiv_type.m"
                MR_Word parse_tree__equiv_type__VarSet_55;
#line 231 "equiv_type.m"
                MR_Word parse_tree__equiv_type__ItemInstDefn_40;
#line 231 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_46_46;
#line 232 "equiv_type.m"
                MR_Word parse_tree__equiv_type__V_41_41;
#line 232 "equiv_type.m"
                MR_Integer parse_tree__equiv_type___SeqNum_49;

#line 231 "equiv_type.m"
                parse_tree__equiv_type__succeeded = ((((MR_tag((MR_Word) parse_tree__equiv_type__Item_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 231 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 231 "equiv_type.m"
                  {
#line 231 "equiv_type.m"
                    parse_tree__equiv_type__ItemInstDefn_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), parse_tree__equiv_type__Item_12, (MR_Integer) 1)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__Name_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 0)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__Args_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 1)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 2)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__VarSet_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 3)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 4)));
#line 232 "equiv_type.m"
                    parse_tree__equiv_type___SeqNum_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__ItemInstDefn_40, (MR_Integer) 5)));
#line 233 "equiv_type.m"
                    parse_tree__equiv_type__succeeded = ((MR_tag((MR_Word) parse_tree__equiv_type__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 233 "equiv_type.m"
                    if (parse_tree__equiv_type__succeeded)
#line 233 "equiv_type.m"
                      parse_tree__equiv_type__Body_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__equiv_type__V_46_46, (MR_Integer) 0)));
#line 231 "equiv_type.m"
                  }
#line 238 "equiv_type.m"
                if (parse_tree__equiv_type__succeeded)
#line 235 "equiv_type.m"
                  {
#line 235 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__InstId_42;
#line 235 "equiv_type.m"
                    MR_Word parse_tree__equiv_type__V_47_47;
#line 235 "equiv_type.m"
                    MR_Integer parse_tree__equiv_type__Arity_51;

#line 235 "equiv_type.m"
                    {
#line 235 "equiv_type.m"
                      mercury__list__length_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[5], parse_tree__equiv_type__Args_53, &parse_tree__equiv_type__Arity_51);
                    }
#line 236 "equiv_type.m"
                    {
#line 236 "equiv_type.m"
                      parse_tree__equiv_type__InstId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 0) = ((MR_Box) (parse_tree__equiv_type__Name_52));
#line 236 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__InstId_42, 1) = ((MR_Box) (parse_tree__equiv_type__Arity_51));
#line 236 "equiv_type.m"
                    }
#line 237 "equiv_type.m"
                    {
#line 237 "equiv_type.m"
                      parse_tree__equiv_type__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 237 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 0) = ((MR_Box) (parse_tree__equiv_type__VarSet_55));
#line 237 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 1) = ((MR_Box) (parse_tree__equiv_type__Args_53));
#line 237 "equiv_type.m"
                      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_47_47, 2) = ((MR_Box) (parse_tree__equiv_type__Body_54));
#line 237 "equiv_type.m"
                    }
#line 237 "equiv_type.m"
                    {
#line 237 "equiv_type.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, ((MR_Box) (parse_tree__equiv_type__InstId_42)), ((MR_Box) (parse_tree__equiv_type__V_47_47)), parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21);
                    }
#line 235 "equiv_type.m"
                  }
#line 238 "equiv_type.m"
                else
#line 238 "equiv_type.m"
                  parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4;
#line 238 "equiv_type.m"
                parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2;
#line 238 "equiv_type.m"
              }
#line 215 "equiv_type.m"
            /* direct tailcall eliminated */
#line 215 "equiv_type.m"
            {
#line 215 "equiv_type.m"
              MR_Word parse_tree__equiv_type__HeadVar__1__tmp_copy_1 = parse_tree__equiv_type__Items_13;
#line 215 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_20_20;
#line 215 "equiv_type.m"
              MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_21_21;

#line 215 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0_4 = parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_0__tmp_copy_4;
#line 215 "equiv_type.m"
              parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0_2 = parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_0__tmp_copy_2;
#line 215 "equiv_type.m"
              parse_tree__equiv_type__HeadVar__1_1 = parse_tree__equiv_type__HeadVar__1__tmp_copy_1;
#line 215 "equiv_type.m"
            }
#line 215 "equiv_type.m"
            continue;
#line 213 "equiv_type.m"
          }
#line 212 "equiv_type.m"
      }
#line 212 "equiv_type.m"
      break;
#line 212 "equiv_type.m"
    }
#line 208 "equiv_type.m"
}

#line 960 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_ctors_7_p_0_1(
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 960 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 960 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 960 "equiv_type.m"
{
#line 960 "equiv_type.m"
  {
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Ctor_14;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32;

#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__replace_in_ctor_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Ctor_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Ctor_14));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_28));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_30));
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_32));
#line 960 "equiv_type.m"
  }
#line 960 "equiv_type.m"
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
#line 949 "equiv_type.m"
  {
#line 949 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_51;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 949 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;
#line 960 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_12_12;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18;
#line 960 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_V_12_12;

#line 951 "equiv_type.m"
    {
#line 951 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      parse_tree__equiv_type__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[1]));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_ctors_7_p_0_1));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_38_38, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 960 "equiv_type.m"
    }
#line 12792 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 960 "equiv_type.m"
    {
#line 960 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_51, parse_tree__equiv_type__TypeCtorInfo_38_51, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_Ctors_0_13, parse_tree__equiv_type__STATE_VARIABLE_Ctors_14, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_15)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_17)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18, ((MR_Box) (parse_tree__equiv_type__V_23_23)), &parse_tree__equiv_type__conv4_V_12_12);
    }
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_VarSet_16 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_16);
#line 960 "equiv_type.m"
    *parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_18 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_18);
#line 960 "equiv_type.m"
    parse_tree__equiv_type__V_12_12 = ((MR_Word) parse_tree__equiv_type__conv4_V_12_12);
#line 949 "equiv_type.m"
  }
#line 78 "equiv_type.m"
}

#line 851 "equiv_type.m"
static void MR_CALL 
parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1(
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__closure_arg,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_1,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_2,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_3,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_4,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_5,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_6,
#line 851 "equiv_type.m"
  MR_Box parse_tree__equiv_type__wrapper_arg_7,
#line 851 "equiv_type.m"
  MR_Box * parse_tree__equiv_type__wrapper_arg_8)
#line 851 "equiv_type.m"
{
#line 851 "equiv_type.m"
  {
#line 851 "equiv_type.m"
    MR_Box parse_tree__equiv_type__closure = parse_tree__equiv_type__closure_arg;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv3_Constraint_14;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26;
#line 851 "equiv_type.m"
    MR_Word parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28;

#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_location_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__equiv_type__wrapper_arg_1), &parse_tree__equiv_type__conv3_Constraint_14, ((MR_Word) parse_tree__equiv_type__wrapper_arg_3), &parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24, ((MR_Word) parse_tree__equiv_type__wrapper_arg_5), &parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26, ((MR_Word) parse_tree__equiv_type__wrapper_arg_7), &parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28);
    }
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_2 = ((MR_Box) (parse_tree__equiv_type__conv3_Constraint_14));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_4 = ((MR_Box) (parse_tree__equiv_type__conv2_STATE_VARIABLE_VarSet_24));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_6 = ((MR_Box) (parse_tree__equiv_type__conv1_STATE_VARIABLE_EquivTypeInfo_26));
#line 851 "equiv_type.m"
    *parse_tree__equiv_type__wrapper_arg_8 = ((MR_Box) (parse_tree__equiv_type__conv0_STATE_VARIABLE_UsedModules_28));
#line 851 "equiv_type.m"
  }
#line 851 "equiv_type.m"
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
#line 825 "equiv_type.m"
  {
#line 825 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_38_72;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_21_21;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs0_35;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs0_36;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__UnivCs_37;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ExistCs_38;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41;
#line 825 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_59_59;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40;
#line 850 "equiv_type.m"
    MR_Box parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41;
#line 839 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_13_13;

#line 827 "equiv_type.m"
    {
#line 827 "equiv_type.m"
      parse_tree__equiv_type__V_21_21 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 836 "equiv_type.m"
    parse_tree__equiv_type__UnivCs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 0)));
#line 836 "equiv_type.m"
    parse_tree__equiv_type__ExistCs0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__Cs0_9, (MR_Integer) 1)));
#line 851 "equiv_type.m"
    {
#line 851 "equiv_type.m"
      parse_tree__equiv_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 0) = ((MR_Box) (&parse_tree__equiv_type_scalar_common_3[0]));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 1) = ((MR_Box) (parse_tree__equiv_type__replace_in_prog_constraints_7_p_0_1));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 3) = ((MR_Box) (parse_tree__equiv_type__V_18_18));
#line 851 "equiv_type.m"
      MR_hl_field(MR_mktag(0), parse_tree__equiv_type__V_59_59, 4) = ((MR_Box) (parse_tree__equiv_type__TypeEqvMap_8));
#line 851 "equiv_type.m"
    }
#line 12943 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_38_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 850 "equiv_type.m"
    {
#line 850 "equiv_type.m"
      mercury__list__map_foldl3_9_p_1(parse_tree__equiv_type__TypeCtorInfo_38_72, parse_tree__equiv_type__TypeCtorInfo_38_72, (MR_Word) &parse_tree__equiv_type_scalar_common_1[6], (MR_Word) &parse_tree__equiv_type_scalar_common_1[7], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_used_modules_0, parse_tree__equiv_type__V_59_59, parse_tree__equiv_type__UnivCs0_35, &parse_tree__equiv_type__UnivCs_37, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_14)), &parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39, ((MR_Box) (parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_16)), &parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40, ((MR_Box) (parse_tree__equiv_type__V_21_21)), &parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
    }
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39 = ((MR_Word) parse_tree__equiv_type__conv6_STATE_VARIABLE_VarSet_28_39);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40 = ((MR_Word) parse_tree__equiv_type__conv5_STATE_VARIABLE_EquivTypeInfo_29_40);
#line 850 "equiv_type.m"
    parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41 = ((MR_Word) parse_tree__equiv_type__conv4_STATE_VARIABLE_UsedModules_30_41);
#line 839 "equiv_type.m"
    {
#line 839 "equiv_type.m"
      parse_tree__equiv_type__replace_in_prog_constraint_list_10_p_0(parse_tree__equiv_type__V_18_18, parse_tree__equiv_type__TypeEqvMap_8, parse_tree__equiv_type__ExistCs0_36, &parse_tree__equiv_type__ExistCs_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_28_39, parse_tree__equiv_type__STATE_VARIABLE_VarSet_15, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_29_40, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_17, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_30_41, &parse_tree__equiv_type__V_13_13);
    }
#line 841 "equiv_type.m"
    {
#line 841 "equiv_type.m"
      MR_Word base;
#line 841 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "equiv_type.m"
      *parse_tree__equiv_type__Cs_10 = base;
#line 841 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__UnivCs_37));
#line 841 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ExistCs_38));
#line 841 "equiv_type.m"
    }
#line 825 "equiv_type.m"
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
#line 979 "equiv_type.m"
  {
#line 979 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 979 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_25_25;
#line 990 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_14_14;
#line 990 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_41_41;

#line 981 "equiv_type.m"
    {
#line 981 "equiv_type.m"
      parse_tree__equiv_type__V_25_25 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 990 "equiv_type.m"
    {
#line 990 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_list_location_circ_2_14_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__STATE_VARIABLE_Typess_0_15, parse_tree__equiv_type__STATE_VARIABLE_Typess_16, parse_tree__equiv_type__Changed_11, (MR_Integer) 0, &parse_tree__equiv_type__V_41_41, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_17, parse_tree__equiv_type__STATE_VARIABLE_VarSet_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_19, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_20, parse_tree__equiv_type__V_25_25, &parse_tree__equiv_type__V_14_14);
    }
#line 979 "equiv_type.m"
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
#line 1080 "equiv_type.m"
  {
#line 1080 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 1080 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_23_23;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_15_15;
#line 1092 "equiv_type.m"
    MR_Word parse_tree__equiv_type__V_38_38;

#line 1083 "equiv_type.m"
    {
#line 1083 "equiv_type.m"
      parse_tree__equiv_type__V_23_23 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 1092 "equiv_type.m"
    {
#line 1092 "equiv_type.m"
      parse_tree__equiv_type__replace_in_type_maybe_record_use_2_13_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__TypeEqvMap_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), parse_tree__equiv_type__Type0_10, parse_tree__equiv_type__Type_11, parse_tree__equiv_type__Changed_12, &parse_tree__equiv_type__V_38_38, parse_tree__equiv_type__STATE_VARIABLE_VarSet_0_16, parse_tree__equiv_type__STATE_VARIABLE_VarSet_17, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_0_18, parse_tree__equiv_type__STATE_VARIABLE_EquivTypeInfo_19, parse_tree__equiv_type__V_23_23, &parse_tree__equiv_type__V_15_15);
    }
#line 1080 "equiv_type.m"
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
#line 117 "equiv_type.m"
  {
#line 117 "equiv_type.m"
    MR_bool parse_tree__equiv_type__succeeded;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeInfo_108_108;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_111_111;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__TypeCtorInfo_112_112;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 0)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleNameContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 1)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__ModuleVersionNumbers_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 2)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 3)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 4)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 5)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 6)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__equiv_type__AugCompUnit0_10, (MR_Integer) 7)));
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__InstEqvMap_26;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevSrcItemBlocks_27;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevDirectIntItemBlocks_28;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIndirectIntItemBlocks_29;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevIntForOptItemBlocks_30;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__RevOptItemBlocks_31;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__SrcItemBlocks_32;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__DirectIntItemBlocks_33;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IndirectIntItemBlocks_34;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__OptItemBlocks_35;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__IntForOptItemBlocks_36;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList0_37;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__EventSpecList_38;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80;
#line 117 "equiv_type.m"
    MR_Word parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81;

#line 125 "equiv_type.m"
    {
#line 125 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_type_body_0, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43);
    }
#line 126 "equiv_type.m"
    {
#line 126 "equiv_type.m"
      mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &parse_tree__equiv_type__parse_tree__equiv_type__type_ctor_info_eqv_inst_body_0, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44);
    }
#line 127 "equiv_type.m"
    {
#line 127 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__SrcItemBlocks0_21, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_43_43, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_44_44, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46);
    }
#line 129 "equiv_type.m"
    {
#line 129 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__DirectIntItemBlocks0_22, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_45_45, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_46_46, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48);
    }
#line 131 "equiv_type.m"
    {
#line 131 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IndirectIntItemBlocks0_23, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_47_47, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_48_48, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50);
    }
#line 133 "equiv_type.m"
    {
#line 133 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__IntForOptItemBlocks0_25, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_49_49, &parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_50_50, &parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52);
    }
#line 135 "equiv_type.m"
    {
#line 135 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_101_113_118_95_109_97_112_115_95_105_110_95_105_116_101_109_95_98_108_111_99_107_115_95_95_91_49_93_95_48_5_p_0(parse_tree__equiv_type__OptItemBlocks0_24, parse_tree__equiv_type__STATE_VARIABLE_TypeEqvMap_51_51, parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_InstEqvMap_52_52, &parse_tree__equiv_type__InstEqvMap_26);
    }
#line 144 "equiv_type.m"
    {
#line 144 "equiv_type.m"
      parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55 = parse_tree__prog_data__used_modules_init_0_f_0();
    }
#line 146 "equiv_type.m"
    {
#line 146 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho4_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__SrcItemBlocks0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevSrcItemBlocks_27, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_0_40, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_55_55, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61);
    }
#line 149 "equiv_type.m"
    {
#line 149 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__DirectIntItemBlocks0_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevDirectIntItemBlocks_28, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_59_59, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_60_60, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, parse_tree__equiv_type__STATE_VARIABLE_Specs_61_61, &parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66);
    }
#line 153 "equiv_type.m"
    {
#line 153 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho3_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IndirectIntItemBlocks0_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIndirectIntItemBlocks_29, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_64_64, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_65_65, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, parse_tree__equiv_type__STATE_VARIABLE_Specs_66_66, &parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71);
    }
#line 157 "equiv_type.m"
    {
#line 157 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho2_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__IntForOptItemBlocks0_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevIntForOptItemBlocks_30, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_69_69, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_70_70, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, parse_tree__equiv_type__STATE_VARIABLE_Specs_71_71, &parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76);
    }
#line 161 "equiv_type.m"
    {
#line 161 "equiv_type.m"
      parse_tree__equiv_type__replace_in_item_blocks__ho1_13_p_0(parse_tree__equiv_type__ModuleName_18, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__InstEqvMap_26, parse_tree__equiv_type__OptItemBlocks0_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__equiv_type__RevOptItemBlocks_31, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_74_74, &parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_75_75, &parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_Specs_76_76, &parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81);
    }
#line 165 "equiv_type.m"
    {
#line 165 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[0], parse_tree__equiv_type__RevSrcItemBlocks_27, &parse_tree__equiv_type__SrcItemBlocks_32);
    }
#line 13272 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeInfo_108_108 = (MR_Word) &parse_tree__equiv_type_scalar_common_1[1];
#line 166 "equiv_type.m"
    {
#line 166 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevDirectIntItemBlocks_28, &parse_tree__equiv_type__DirectIntItemBlocks_33);
    }
#line 167 "equiv_type.m"
    {
#line 167 "equiv_type.m"
      mercury__list__reverse_2_p_0(parse_tree__equiv_type__TypeInfo_108_108, parse_tree__equiv_type__RevIndirectIntItemBlocks_29, &parse_tree__equiv_type__IndirectIntItemBlocks_34);
    }
#line 168 "equiv_type.m"
    {
#line 168 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[2], parse_tree__equiv_type__RevOptItemBlocks_31, &parse_tree__equiv_type__OptItemBlocks_35);
    }
#line 169 "equiv_type.m"
    {
#line 169 "equiv_type.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__equiv_type_scalar_common_1[3], parse_tree__equiv_type__RevIntForOptItemBlocks_30, &parse_tree__equiv_type__IntForOptItemBlocks_36);
    }
#line 170 "equiv_type.m"
    {
#line 170 "equiv_type.m"
      MR_Word base;
#line 170 "equiv_type.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 170 "equiv_type.m"
      *parse_tree__equiv_type__AugCompUnit_11 = base;
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__equiv_type__ModuleName_18));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__equiv_type__ModuleNameContext_19));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (parse_tree__equiv_type__ModuleVersionNumbers_20));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (parse_tree__equiv_type__SrcItemBlocks_32));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (parse_tree__equiv_type__DirectIntItemBlocks_33));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (parse_tree__equiv_type__IndirectIntItemBlocks_34));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (parse_tree__equiv_type__OptItemBlocks_35));
#line 170 "equiv_type.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (parse_tree__equiv_type__IntForOptItemBlocks_36));
#line 170 "equiv_type.m"
    }
#line 13320 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_111_111 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 13322 "parse_tree.equiv_type.c"
    parse_tree__equiv_type__TypeCtorInfo_112_112 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_spec_0;
#line 175 "equiv_type.m"
    {
#line 175 "equiv_type.m"
      mercury__map__to_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecMap0_12, &parse_tree__equiv_type__EventSpecList0_37);
    }
#line 176 "equiv_type.m"
    {
#line 176 "equiv_type.m"
      parse_tree__equiv_type__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_108_97_99_101_95_105_110_95_101_118_101_110_116_95_115_112_101_99_115_95_95_91_52_93_95_48_10_p_0(parse_tree__equiv_type__EventSpecList0_37, &parse_tree__equiv_type__EventSpecList_38, *parse_tree__equiv_type__TypeEqvMap_14, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_79_79, parse_tree__equiv_type__STATE_VARIABLE_RecompInfo_41, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_80_80, parse_tree__equiv_type__STATE_VARIABLE_UsedModules_39, parse_tree__equiv_type__STATE_VARIABLE_Specs_81_81, parse_tree__equiv_type__STATE_VARIABLE_Specs_42);
    }
#line 178 "equiv_type.m"
    {
#line 178 "equiv_type.m"
      mercury__map__from_sorted_assoc_list_2_p_0(parse_tree__equiv_type__TypeCtorInfo_111_111, parse_tree__equiv_type__TypeCtorInfo_112_112, parse_tree__equiv_type__EventSpecList_38, parse_tree__equiv_type__EventSpecMap_13);
#line 178 "equiv_type.m"
      return;
    }
#line 117 "equiv_type.m"
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
